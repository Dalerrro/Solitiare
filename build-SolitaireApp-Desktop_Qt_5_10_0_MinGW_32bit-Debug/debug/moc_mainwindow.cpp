/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SolitaireApp/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "gameResultAdded"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "playerName"
QT_MOC_LITERAL(4, 39, 14), // "durationString"
QT_MOC_LITERAL(5, 54, 9), // "deckRange"
QT_MOC_LITERAL(6, 64, 7), // "newGame"
QT_MOC_LITERAL(7, 72, 8), // "nextCard"
QT_MOC_LITERAL(8, 81, 14), // "haveWeNextStep"
QT_MOC_LITERAL(9, 96, 8), // "gameOver"
QT_MOC_LITERAL(10, 105, 10), // "createSets"
QT_MOC_LITERAL(11, 116, 13), // "saveParameter"
QT_MOC_LITERAL(12, 130, 13), // "whatCardsHere"
QT_MOC_LITERAL(13, 144, 14), // "isThisCardOpen"
QT_MOC_LITERAL(14, 159, 19), // "moveCardToBestPlace"
QT_MOC_LITERAL(15, 179, 9), // "bestPlace"
QT_MOC_LITERAL(16, 189, 13), // "fromWhatPlace"
QT_MOC_LITERAL(17, 203, 17), // "openNextFloorCard"
QT_MOC_LITERAL(18, 221, 12), // "realizeGroup"
QT_MOC_LITERAL(19, 234, 9), // "moveGroup"
QT_MOC_LITERAL(20, 244, 9), // "stopGroup"
QT_MOC_LITERAL(21, 254, 14), // "bestGroupPlace"
QT_MOC_LITERAL(22, 269, 15), // "cardIsOutWindow"
QT_MOC_LITERAL(23, 285, 11) // "updateTimer"

    },
    "MainWindow\0gameResultAdded\0\0playerName\0"
    "durationString\0deckRange\0newGame\0"
    "nextCard\0haveWeNextStep\0gameOver\0"
    "createSets\0saveParameter\0whatCardsHere\0"
    "isThisCardOpen\0moveCardToBestPlace\0"
    "bestPlace\0fromWhatPlace\0openNextFloorCard\0"
    "realizeGroup\0moveGroup\0stopGroup\0"
    "bestGroupPlace\0cardIsOutWindow\0"
    "updateTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  119,    2, 0x0a /* Public */,
       6,    0,  120,    2, 0x08 /* Private */,
       7,    0,  121,    2, 0x08 /* Private */,
       8,    0,  122,    2, 0x08 /* Private */,
       9,    0,  123,    2, 0x08 /* Private */,
      10,    0,  124,    2, 0x08 /* Private */,
      11,    0,  125,    2, 0x08 /* Private */,
      12,    0,  126,    2, 0x08 /* Private */,
      13,    0,  127,    2, 0x08 /* Private */,
      14,    0,  128,    2, 0x08 /* Private */,
      15,    0,  129,    2, 0x08 /* Private */,
      16,    0,  130,    2, 0x08 /* Private */,
      17,    0,  131,    2, 0x08 /* Private */,
      18,    0,  132,    2, 0x08 /* Private */,
      19,    0,  133,    2, 0x08 /* Private */,
      20,    0,  134,    2, 0x08 /* Private */,
      21,    0,  135,    2, 0x08 /* Private */,
      22,    0,  136,    2, 0x08 /* Private */,
      23,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gameResultAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->deckRange(); break;
        case 2: _t->newGame(); break;
        case 3: _t->nextCard(); break;
        case 4: _t->haveWeNextStep(); break;
        case 5: _t->gameOver(); break;
        case 6: _t->createSets(); break;
        case 7: _t->saveParameter(); break;
        case 8: _t->whatCardsHere(); break;
        case 9: _t->isThisCardOpen(); break;
        case 10: _t->moveCardToBestPlace(); break;
        case 11: _t->bestPlace(); break;
        case 12: _t->fromWhatPlace(); break;
        case 13: _t->openNextFloorCard(); break;
        case 14: _t->realizeGroup(); break;
        case 15: _t->moveGroup(); break;
        case 16: _t->stopGroup(); break;
        case 17: _t->bestGroupPlace(); break;
        case 18: _t->cardIsOutWindow(); break;
        case 19: _t->updateTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::gameResultAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::gameResultAdded(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
