/****************************************************************************
** Meta object code from reading C++ file 'RobloxObjectBrowserDoc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxObjectBrowserDoc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxObjectBrowserDoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobloxObjectBrowserDoc_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxObjectBrowserDoc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxObjectBrowserDoc_t qt_meta_stringdata_RobloxObjectBrowserDoc = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RobloxObjectBrowserDoc"
QT_MOC_LITERAL(1, 23, 15), // "onClassSelected"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 57, 7), // "current"
QT_MOC_LITERAL(5, 65, 8), // "previous"
QT_MOC_LITERAL(6, 74, 16) // "onMemberSelected"

    },
    "RobloxObjectBrowserDoc\0onClassSelected\0"
    "\0QListWidgetItem*\0current\0previous\0"
    "onMemberSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxObjectBrowserDoc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       6,    2,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void RobloxObjectBrowserDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxObjectBrowserDoc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onClassSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->onMemberSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxObjectBrowserDoc::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobloxObjectBrowserDoc.data,
    qt_meta_data_RobloxObjectBrowserDoc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxObjectBrowserDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxObjectBrowserDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxObjectBrowserDoc.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RobloxBasicDoc"))
        return static_cast< RobloxBasicDoc*>(this);
    return QObject::qt_metacast(_clname);
}

int RobloxObjectBrowserDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
