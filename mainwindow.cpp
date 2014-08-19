#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_statusBar();
    isSaved=false; //初始化文件为未保存过状态

    curFile=tr("File1.txt"); //初始化文件名为“未命名.txt”
    setWindowTitle(curFile); //初始化主窗口的标题
   // do_file_New();
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::do_file_New()//实现新建文件的功能
{
    do_file_SaveOrNot();
    isSaved=false;
    curFile=tr("File1.txt");
    setWindowTitle(curFile);
    ui->textEdit->clear();//清空文本编辑器
    ui->textEdit->setVisible(true);//文本编辑器可见
}

void MainWindow::do_file_SaveOrNot()//弹出是否保存文件对话框
{
    if(ui->textEdit->document()->isModified())//如果文件被更改过，弹出保存对话框
    {
        QMessageBox box;
        box.setWindowTitle(tr("Warning!"));
        box.setIcon(QMessageBox::Warning);
        box.setText(curFile+tr(" still not save, save or not?"));
        box.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        if(box.exec()==QMessageBox::Yes)//如果选择保存文件，则执行保存操作
            do_file_Save();
    }
}

void MainWindow::do_file_Save() //保存文件
{
    if(isSaved)//如果文件已经被保存过，直接保存文件
        saveFile(curFile);
    else
        do_file_SaveAs();//如果文件是第一次保存，那么调用另存为
}

void MainWindow::do_file_SaveAs()//文件另存为
{
    QString fileName=QFileDialog::getSaveFileName(this,tr("Save as"),curFile);
    //获得文件名
    if(!fileName.isEmpty())//如果文件名不为空，则保存文件内容
        saveFile(fileName);
}

bool MainWindow::saveFile(const QString &fileName)
//保存文件内容，因为可能保存失败，所以具有返回值，来表明是否保存成功
{
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly|QFile::Text))
//以只写方式打开文件，如果打开失败则弹出提示框并返回
    {
            QMessageBox::warning(this,tr("Save File"),
                                 tr("Fail to save %1:\n%2").arg(fileName)
                                 .arg(file.errorString()));
            return false;
    }
//%1,%2表示后面的两个 arg 参数的值
    QTextStream out(&file);//新建流对象，指向选定的文件
    out<<ui->textEdit->toPlainText();//将文本编辑器里的内容以纯文本的形式输出到流对象中
    isSaved=true;
    curFile=QFileInfo(fileName).canonicalFilePath();//获得文件的标准路径
    setWindowTitle(curFile);//将窗口名称改为现在窗口的路径
    return true;
}

void MainWindow::do_file_Open()//打开文件
{
    do_file_SaveOrNot();//是否需要保存现有文件
    QString fileName=QFileDialog::getOpenFileName(this);
    //获得要打开的文件的名字
    if(!fileName.isEmpty())//如果文件名不为空
    {
        do_file_Load(fileName);//文本编辑器可见
    }
    ui->textEdit->setVisible(true);
}

bool MainWindow::do_file_Load(const QString &fileName)//读取文件
{
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::warning(this,tr("Read File"),tr("Unable to read file %1:\n%2.")
                             .arg(fileName).arg(file.errorString()));
        return false;//如果打开文件失败，弹出对话框，并返回
    }
    QTextStream in(&file);
    ui->textEdit->setText(in.readAll());//将文件中的所有内容都写到文本编辑器中
    curFile=QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}

void MainWindow::on_actionNew_File_N_triggered() //信号和槽的关联
{
    do_file_New();
}

void MainWindow::on_actionSave_S_triggered()
{
    do_file_Save();
}

void MainWindow::on_actionSave_as_A_triggered()
{
    do_file_SaveAs();
}

void MainWindow::on_actionOpen_O_triggered()
{
    do_file_Open();
}

void MainWindow::on_actionClose_C_triggered()
{
    do_file_SaveOrNot();
    ui->textEdit->setVisible(false);
}

void MainWindow::on_actionExit_X_triggered()
{
    on_actionClose_C_triggered();
    qApp->quit();//再退出系统，qApp 是指向应用程序的全局指针
}

void MainWindow::on_actionUndo_Z_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionCut_X_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_V_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_V_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionFind_F_triggered()
{
    QDialog *findDlg=new QDialog(this);
    //新建一个对话框，用于查找操作，this 表明它的父窗口是 MainWindow。
    findDlg->setWindowTitle(tr("Find"));
    //设置对话框的标题
    find_textLineEdit=new QLineEdit(findDlg);
    //将行编辑器加入到新建的查找对话框中
    QPushButton *find_Btn=new QPushButton(tr("Find next one"),findDlg);
    //加入个“查找下个”的按钮
    QVBoxLayout* layout=new QVBoxLayout(findDlg);
    layout->addWidget(find_textLineEdit);
    layout->addWidget(find_Btn);
    //新建一个垂直布局管理器，并将行编辑器和按钮加入其中
    findDlg->show();
    //显示对话框
    connect(find_Btn,SIGNAL(clicked()),this,SLOT(show_findText()));
    //设置“查找下一个”按钮的单击事件和其槽函数的关联
}

void MainWindow::show_findText()//“查找下一个”按钮的槽函数
{
    QString findText=find_textLineEdit->text();
    //获取行编辑器中的内容
    if(!ui->textEdit->find(findText,QTextDocument::FindBackward))
    //将行编辑器中的内容在文本编辑器中进行查找
    {
        QMessageBox::warning(this,tr("Find"),tr("Not Found %1")
                .arg(findText));
    }

}

void MainWindow::init_statusBar()

{
    QStatusBar* bar=ui->statusBar;//获取状态栏
    first_statusLabel=new QLabel;//新建标签
    first_statusLabel->setMinimumSize(150,20);//设置标签最小尺寸
    first_statusLabel->setFrameShape(QFrame::WinPanel);//设置标签形状
    first_statusLabel->setFrameShadow(QFrame::Sunken);//设置标签阴影
    second_statusLabel=new QLabel;
    second_statusLabel->setMinimumSize(150,20);
    second_statusLabel->setFrameShape(QFrame::WinPanel);
    second_statusLabel->setFrameShadow(QFrame::Sunken);
    bar->addWidget(first_statusLabel);
    bar->addWidget(second_statusLabel);
    first_statusLabel->setText(tr("Welcome to use file editor"));//初始化内容
    second_statusLabel->setText(tr("made by Qrj"));
}

void MainWindow::do_cursorChanged()
{
    int rowNum=ui->textEdit->document()->blockCount();
    //获取光标所在行的行号
    const QTextCursor cursor=ui->textEdit->textCursor();
    int colNum=cursor.columnNumber();
    //获取光标所在列的列号
    first_statusLabel->setText(tr("%1 lines %2 rows").arg(rowNum).arg(colNum));
    //在状态栏显示光标位置
}
