/****************************************************************************
** Meta object code from reading C++ file 'RobloxScriptDoc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxScriptDoc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxScriptDoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobloxScriptDoc_t {
    QByteArrayData data[12];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxScriptDoc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxScriptDoc_t qt_meta_stringdata_RobloxScriptDoc = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RobloxScriptDoc"
QT_MOC_LITERAL(1, 16, 21), // "requestScriptDeletion"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "onSelectionChanged"
QT_MOC_LITERAL(4, 58, 10), // "deActivate"
QT_MOC_LITERAL(5, 69, 16), // "reloadLiveScript"
QT_MOC_LITERAL(6, 86, 26), // "explainBreakpointsDisabled"
QT_MOC_LITERAL(7, 113, 15), // "editingContents"
QT_MOC_LITERAL(8, 129, 27), // "onScriptNamePropertyChanged"
QT_MOC_LITERAL(9, 157, 7), // "newName"
QT_MOC_LITERAL(10, 165, 29), // "onScriptSourcePropertyChanged"
QT_MOC_LITERAL(11, 195, 9) // "newSource"

    },
    "RobloxScriptDoc\0requestScriptDeletion\0"
    "\0onSelectionChanged\0deActivate\0"
    "reloadLiveScript\0explainBreakpointsDisabled\0"
    "editingContents\0onScriptNamePropertyChanged\0"
    "newName\0onScriptSourcePropertyChanged\0"
    "newSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxScriptDoc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void RobloxScriptDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxScriptDoc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestScriptDeletion(); break;
        case 1: _t->onSelectionChanged(); break;
        case 2: _t->deActivate(); break;
        case 3: _t->reloadLiveScript(); break;
        case 4: _t->explainBreakpointsDisabled(); break;
        case 5: _t->editingContents(); break;
        case 6: _t->onScriptNamePropertyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onScriptSourcePropertyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxScriptDoc::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobloxScriptDoc.data,
    qt_meta_data_RobloxScriptDoc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxScriptDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxScriptDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxScriptDoc.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RobloxBasicDoc"))
        return static_cast< RobloxBasicDoc*>(this);
    return QObject::qt_metacast(_clname);
}

int RobloxScriptDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
