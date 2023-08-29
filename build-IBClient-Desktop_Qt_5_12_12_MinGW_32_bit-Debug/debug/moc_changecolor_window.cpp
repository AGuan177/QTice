/****************************************************************************
** Meta object code from reading C++ file 'changecolor_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IBClient/changecolor_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changecolor_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChangeColor_Window_t {
    QByteArrayData data[13];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChangeColor_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChangeColor_Window_t qt_meta_stringdata_ChangeColor_Window = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ChangeColor_Window"
QT_MOC_LITERAL(1, 19, 9), // "sig_color"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "color"
QT_MOC_LITERAL(4, 36, 17), // "on_yellow_clicked"
QT_MOC_LITERAL(5, 54, 14), // "on_red_clicked"
QT_MOC_LITERAL(6, 69, 19), // "on_icebreak_clicked"
QT_MOC_LITERAL(7, 89, 19), // "on_macaroon_clicked"
QT_MOC_LITERAL(8, 109, 18), // "on_morandi_clicked"
QT_MOC_LITERAL(9, 128, 16), // "on_green_clicked"
QT_MOC_LITERAL(10, 145, 15), // "on_pink_clicked"
QT_MOC_LITERAL(11, 161, 17), // "on_orange_clicked"
QT_MOC_LITERAL(12, 179, 17) // "on_purple_clicked"

    },
    "ChangeColor_Window\0sig_color\0\0color\0"
    "on_yellow_clicked\0on_red_clicked\0"
    "on_icebreak_clicked\0on_macaroon_clicked\0"
    "on_morandi_clicked\0on_green_clicked\0"
    "on_pink_clicked\0on_orange_clicked\0"
    "on_purple_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChangeColor_Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

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

       0        // eod
};

void ChangeColor_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChangeColor_Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_color((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_yellow_clicked(); break;
        case 2: _t->on_red_clicked(); break;
        case 3: _t->on_icebreak_clicked(); break;
        case 4: _t->on_macaroon_clicked(); break;
        case 5: _t->on_morandi_clicked(); break;
        case 6: _t->on_green_clicked(); break;
        case 7: _t->on_pink_clicked(); break;
        case 8: _t->on_orange_clicked(); break;
        case 9: _t->on_purple_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChangeColor_Window::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChangeColor_Window::sig_color)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChangeColor_Window::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ChangeColor_Window.data,
    qt_meta_data_ChangeColor_Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChangeColor_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChangeColor_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeColor_Window.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChangeColor_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ChangeColor_Window::sig_color(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
