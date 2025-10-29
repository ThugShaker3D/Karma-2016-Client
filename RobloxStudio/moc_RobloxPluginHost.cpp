/****************************************************************************
** Meta object code from reading C++ file 'RobloxPluginHost.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxPluginHost.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxPluginHost.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobloxPluginHost_t {
    QByteArrayData data[25];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxPluginHost_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxPluginHost_t qt_meta_stringdata_RobloxPluginHost = {
    {
QT_MOC_LITERAL(0, 0, 16), // "RobloxPluginHost"
QT_MOC_LITERAL(1, 17, 18), // "handlePluginAction"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "onCreateToolbar"
QT_MOC_LITERAL(4, 53, 9), // "toolbarID"
QT_MOC_LITERAL(5, 63, 4), // "name"
QT_MOC_LITERAL(6, 68, 14), // "onCreateButton"
QT_MOC_LITERAL(7, 83, 8), // "actionID"
QT_MOC_LITERAL(8, 92, 4), // "text"
QT_MOC_LITERAL(9, 97, 7), // "tooltip"
QT_MOC_LITERAL(10, 105, 8), // "iconName"
QT_MOC_LITERAL(11, 114, 17), // "onSetButtonActive"
QT_MOC_LITERAL(12, 132, 8), // "buttonID"
QT_MOC_LITERAL(13, 141, 6), // "active"
QT_MOC_LITERAL(14, 148, 13), // "onShowToolbar"
QT_MOC_LITERAL(15, 162, 4), // "show"
QT_MOC_LITERAL(16, 167, 14), // "onShowToolbars"
QT_MOC_LITERAL(17, 182, 15), // "onEnableToolbar"
QT_MOC_LITERAL(18, 198, 6), // "enable"
QT_MOC_LITERAL(19, 205, 32), // "setButtonIconInternal_deprecated"
QT_MOC_LITERAL(20, 238, 8), // "buttonId"
QT_MOC_LITERAL(21, 247, 21), // "setButtonIconInternal"
QT_MOC_LITERAL(22, 269, 4), // "icon"
QT_MOC_LITERAL(23, 274, 10), // "onUIAction"
QT_MOC_LITERAL(24, 285, 12) // "uiActionName"

    },
    "RobloxPluginHost\0handlePluginAction\0"
    "\0onCreateToolbar\0toolbarID\0name\0"
    "onCreateButton\0actionID\0text\0tooltip\0"
    "iconName\0onSetButtonActive\0buttonID\0"
    "active\0onShowToolbar\0show\0onShowToolbars\0"
    "onEnableToolbar\0enable\0"
    "setButtonIconInternal_deprecated\0"
    "buttonId\0setButtonIconInternal\0icon\0"
    "onUIAction\0uiActionName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxPluginHost[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    2,   65,    2, 0x08 /* Private */,
       6,    5,   70,    2, 0x08 /* Private */,
      11,    2,   81,    2, 0x08 /* Private */,
      14,    2,   86,    2, 0x08 /* Private */,
      16,    2,   91,    2, 0x08 /* Private */,
      17,    2,   96,    2, 0x08 /* Private */,
      19,    2,  101,    2, 0x08 /* Private */,
      21,    2,  106,    2, 0x08 /* Private */,
      23,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,   15,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,    4,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   20,   22,
    QMetaType::Void, QMetaType::QString,   24,

       0        // eod
};

void RobloxPluginHost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxPluginHost *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handlePluginAction(); break;
        case 1: _t->onCreateToolbar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->onCreateButton((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 3: _t->onSetButtonActive((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->onShowToolbar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->onShowToolbars((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->onEnableToolbar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->setButtonIconInternal_deprecated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->setButtonIconInternal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 9: _t->onUIAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxPluginHost::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobloxPluginHost.data,
    qt_meta_data_RobloxPluginHost,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxPluginHost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxPluginHost::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxPluginHost.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::IStudioPluginHost"))
        return static_cast< RBX::IStudioPluginHost*>(this);
    return QObject::qt_metacast(_clname);
}

int RobloxPluginHost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
