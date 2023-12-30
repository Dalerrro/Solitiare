/****************************************************************************
** Meta object code from reading C++ file 'mycards.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SolitaireApp/mycards.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycards.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myCards_t {
    QByteArrayData data[14];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myCards_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myCards_t qt_meta_stringdata_myCards = {
    {
QT_MOC_LITERAL(0, 0, 7), // "myCards"
QT_MOC_LITERAL(1, 8, 5), // "click"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 8), // "moveCard"
QT_MOC_LITERAL(4, 24, 8), // "stopCard"
QT_MOC_LITERAL(5, 33, 11), // "movingGroup"
QT_MOC_LITERAL(6, 45, 15), // "changeBackImage"
QT_MOC_LITERAL(7, 61, 9), // "backImage"
QT_MOC_LITERAL(8, 71, 7), // "setOpen"
QT_MOC_LITERAL(9, 79, 9), // "setClosed"
QT_MOC_LITERAL(10, 89, 15), // "mousePressEvent"
QT_MOC_LITERAL(11, 105, 12), // "QMouseEvent*"
QT_MOC_LITERAL(12, 118, 5), // "event"
QT_MOC_LITERAL(13, 124, 17) // "mouseReleaseEvent"

    },
    "myCards\0click\0\0moveCard\0stopCard\0"
    "movingGroup\0changeBackImage\0backImage\0"
    "setOpen\0setClosed\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseReleaseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myCards[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      13,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void myCards::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myCards *_t = static_cast<myCards *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->click(); break;
        case 1: _t->moveCard(); break;
        case 2: _t->stopCard(); break;
        case 3: _t->movingGroup(); break;
        case 4: _t->changeBackImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 5: _t->setOpen(); break;
        case 6: _t->setClosed(); break;
        case 7: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (myCards::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myCards::click)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (myCards::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myCards::moveCard)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (myCards::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myCards::stopCard)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (myCards::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myCards::movingGroup)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (myCards::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myCards::changeBackImage)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject myCards::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_myCards.data,
      qt_meta_data_myCards,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *myCards::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myCards::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myCards.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int myCards::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void myCards::click()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void myCards::moveCard()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void myCards::stopCard()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void myCards::movingGroup()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void myCards::changeBackImage(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
