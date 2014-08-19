/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Aug 19 14:08:37 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,
      72,   11,   11,   11, 0x08,
     100,   11,   11,   11, 0x08,
     131,   11,   11,   11, 0x08,
     160,   11,   11,   11, 0x08,
     188,   11,   11,   11, 0x08,
     216,   11,   11,   11, 0x08,
     243,   11,   11,   11, 0x08,
     271,   11,   11,   11, 0x08,
     300,   11,   11,   11, 0x08,
     316,   11,   11,   11, 0x08,
     344,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionNew_File_N_triggered()\0"
    "on_actionOpen_O_triggered()\0"
    "on_actionSave_S_triggered()\0"
    "on_actionSave_as_A_triggered()\0"
    "on_actionClose_C_triggered()\0"
    "on_actionExit_X_triggered()\0"
    "on_actionUndo_Z_triggered()\0"
    "on_actionCut_X_triggered()\0"
    "on_actionCopy_V_triggered()\0"
    "on_actionPaste_V_triggered()\0"
    "show_findText()\0on_actionFind_F_triggered()\0"
    "do_cursorChanged()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionNew_File_N_triggered(); break;
        case 1: on_actionOpen_O_triggered(); break;
        case 2: on_actionSave_S_triggered(); break;
        case 3: on_actionSave_as_A_triggered(); break;
        case 4: on_actionClose_C_triggered(); break;
        case 5: on_actionExit_X_triggered(); break;
        case 6: on_actionUndo_Z_triggered(); break;
        case 7: on_actionCut_X_triggered(); break;
        case 8: on_actionCopy_V_triggered(); break;
        case 9: on_actionPaste_V_triggered(); break;
        case 10: show_findText(); break;
        case 11: on_actionFind_F_triggered(); break;
        case 12: do_cursorChanged(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
