#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionNew_File_N_triggered();

    void on_actionOpen_O_triggered();

    void on_actionSave_S_triggered();

    void on_actionSave_as_A_triggered();

    void on_actionClose_C_triggered();

    void on_actionExit_X_triggered();

    void on_actionUndo_Z_triggered();

    void on_actionCut_X_triggered();

    void on_actionCopy_V_triggered();

    void on_actionPaste_V_triggered();

    void show_findText();

    void on_actionFind_F_triggered();

private:
    Ui::MainWindow *ui;
    bool isSaved;//为 true 时标志文件已经保存，为 false 时标志文件尚未保存

    QString curFile; //保存当前文件的文件名
    QLineEdit *find_textLineEdit;//声明个行编辑器，用于输入要查找的内容
    void do_file_New(); //新建文件
    void do_file_SaveOrNot(); //修改过的文件是否保存
    void do_file_Save();//保存文件
    void do_file_SaveAs();//文件另存为
    void do_file_Open(); //打开文件
    bool do_file_Load(const QString& fileName);//读取文件
    bool saveFile(const QString& fielName);//存储文件
};

#endif // MAINWINDOW_H
