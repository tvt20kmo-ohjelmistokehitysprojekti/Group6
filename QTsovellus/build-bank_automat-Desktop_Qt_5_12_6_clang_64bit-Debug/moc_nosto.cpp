/****************************************************************************
** Meta object code from reading C++ file 'nosto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bank_automat/nosto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nosto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NOSTO_t {
    QByteArrayData data[9];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NOSTO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NOSTO_t qt_meta_stringdata_NOSTO = {
    {
QT_MOC_LITERAL(0, 0, 5), // "NOSTO"
QT_MOC_LITERAL(1, 6, 27), // "on_btnNostoTakaisin_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "on_btnNostoMuu_clicked"
QT_MOC_LITERAL(4, 58, 21), // "on_btnNosto20_clicked"
QT_MOC_LITERAL(5, 80, 21), // "on_btnNosto40_clicked"
QT_MOC_LITERAL(6, 102, 21), // "on_btnNosto60_clicked"
QT_MOC_LITERAL(7, 124, 21), // "on_btnNosto80_clicked"
QT_MOC_LITERAL(8, 146, 22) // "on_btnNosto100_clicked"

    },
    "NOSTO\0on_btnNostoTakaisin_clicked\0\0"
    "on_btnNostoMuu_clicked\0on_btnNosto20_clicked\0"
    "on_btnNosto40_clicked\0on_btnNosto60_clicked\0"
    "on_btnNosto80_clicked\0on_btnNosto100_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NOSTO[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NOSTO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NOSTO *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnNostoTakaisin_clicked(); break;
        case 1: _t->on_btnNostoMuu_clicked(); break;
        case 2: _t->on_btnNosto20_clicked(); break;
        case 3: _t->on_btnNosto40_clicked(); break;
        case 4: _t->on_btnNosto60_clicked(); break;
        case 5: _t->on_btnNosto80_clicked(); break;
        case 6: _t->on_btnNosto100_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NOSTO::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_NOSTO.data,
    qt_meta_data_NOSTO,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NOSTO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NOSTO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NOSTO.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NOSTO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE