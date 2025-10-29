/****************************************************************************
** Meta object code from reading C++ file 'DocTabManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "DocTabManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DocTabManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocTabManager_t {
    QByteArrayData data[13];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocTabManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocTabManager_t qt_meta_stringdata_DocTabManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DocTabManager"
QT_MOC_LITERAL(1, 14, 15), // "showNextTabPage"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "showPreviousTabPage"
QT_MOC_LITERAL(4, 51, 16), // "onCurrentChanged"
QT_MOC_LITERAL(5, 68, 5), // "index"
QT_MOC_LITERAL(6, 74, 19), // "onTabCloseRequested"
QT_MOC_LITERAL(7, 94, 26), // "onCurrentTabCloseRequested"
QT_MOC_LITERAL(8, 121, 11), // "onDetachDoc"
QT_MOC_LITERAL(9, 133, 14), // "onFocusChanged"
QT_MOC_LITERAL(10, 148, 8), // "QWidget*"
QT_MOC_LITERAL(11, 157, 9), // "oldWidget"
QT_MOC_LITERAL(12, 167, 9) // "newWidget"

    },
    "DocTabManager\0showNextTabPage\0\0"
    "showPreviousTabPage\0onCurrentChanged\0"
    "index\0onTabCloseRequested\0"
    "onCurrentTabCloseRequested\0onDetachDoc\0"
    "onFocusChanged\0QWidget*\0oldWidget\0"
    "newWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocTabManager[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    2,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,

       0        // eod
};

void DocTabManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocTabManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showNextTabPage(); break;
        case 1: _t->showPreviousTabPage(); break;
        case 2: _t->onCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { bool _r = _t->onTabCloseRequested((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->onCurrentTabCloseRequested(); break;
        case 5: _t->onDetachDoc(); break;
        case 6: _t->onFocusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DocTabManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DocTabManager.data,
    qt_meta_data_DocTabManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DocTabManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocTabManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocTabManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocTabManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
