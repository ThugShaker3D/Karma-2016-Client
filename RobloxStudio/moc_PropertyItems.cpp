/****************************************************************************
** Meta object code from reading C++ file 'PropertyItems.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "PropertyItems.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyItems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BrickColorPropertyItem_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrickColorPropertyItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrickColorPropertyItem_t qt_meta_stringdata_BrickColorPropertyItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BrickColorPropertyItem"
QT_MOC_LITERAL(1, 23, 19), // "updatePropertyValue"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13) // "selectedColor"

    },
    "BrickColorPropertyItem\0updatePropertyValue\0"
    "\0selectedColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrickColorPropertyItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void BrickColorPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrickColorPropertyItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updatePropertyValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BrickColorPropertyItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BrickColorPropertyItem.data,
    qt_meta_data_BrickColorPropertyItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BrickColorPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrickColorPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrickColorPropertyItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyItem"))
        return static_cast< PropertyItem*>(this);
    return QObject::qt_metacast(_clname);
}

int BrickColorPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ColorPropertyItem_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPropertyItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPropertyItem_t qt_meta_stringdata_ColorPropertyItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ColorPropertyItem"
QT_MOC_LITERAL(1, 18, 19), // "updatePropertyValue"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13) // "selectedColor"

    },
    "ColorPropertyItem\0updatePropertyValue\0"
    "\0selectedColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPropertyItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void ColorPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorPropertyItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updatePropertyValue((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorPropertyItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ColorPropertyItem.data,
    qt_meta_data_ColorPropertyItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPropertyItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyItem"))
        return static_cast< PropertyItem*>(this);
    return QObject::qt_metacast(_clname);
}

int ColorPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_DoublePropertyItem_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DoublePropertyItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DoublePropertyItem_t qt_meta_stringdata_DoublePropertyItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DoublePropertyItem"
QT_MOC_LITERAL(1, 19, 16), // "onSpinBoxChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "onSliderChanged"
QT_MOC_LITERAL(4, 53, 5), // "value"
QT_MOC_LITERAL(5, 59, 16) // "onSliderReleased"

    },
    "DoublePropertyItem\0onSpinBoxChanged\0"
    "\0onSliderChanged\0value\0onSliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DoublePropertyItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void DoublePropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DoublePropertyItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSpinBoxChanged(); break;
        case 1: _t->onSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onSliderReleased(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DoublePropertyItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DoublePropertyItem.data,
    qt_meta_data_DoublePropertyItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DoublePropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DoublePropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DoublePropertyItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyItem"))
        return static_cast< PropertyItem*>(this);
    return QObject::qt_metacast(_clname);
}

int DoublePropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
