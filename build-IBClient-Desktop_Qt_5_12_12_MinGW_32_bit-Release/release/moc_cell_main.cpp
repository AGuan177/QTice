/****************************************************************************
** Meta object code from reading C++ file 'cell_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IBClient/cell_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cell_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cell_Main_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cell_Main_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cell_Main_t qt_meta_stringdata_Cell_Main = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Cell_Main"
QT_MOC_LITERAL(1, 10, 12), // "sig_clickAdd"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "sig_clickChange"
QT_MOC_LITERAL(4, 40, 10), // "sig_poetry"
QT_MOC_LITERAL(5, 51, 18) // "on_options_clicked"

    },
    "Cell_Main\0sig_clickAdd\0\0sig_clickChange\0"
    "sig_poetry\0on_options_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cell_Main[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Cell_Main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cell_Main *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_clickAdd(); break;
        case 1: _t->sig_clickChange(); break;
        case 2: _t->sig_poetry(); break;
        case 3: _t->on_options_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Cell_Main::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cell_Main::sig_clickAdd)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Cell_Main::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cell_Main::sig_clickChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Cell_Main::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cell_Main::sig_poetry)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Cell_Main::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Cell_Main.data,
    qt_meta_data_Cell_Main,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cell_Main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cell_Main::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cell_Main.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Cell_Main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Cell_Main::sig_clickAdd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cell_Main::sig_clickChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cell_Main::sig_poetry()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
