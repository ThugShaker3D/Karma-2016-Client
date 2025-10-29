/****************************************************************************
** Meta object code from reading C++ file 'InsertServiceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "InsertServiceDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InsertServiceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InsertServiceDialog_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InsertServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InsertServiceDialog_t qt_meta_stringdata_InsertServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "InsertServiceDialog"
QT_MOC_LITERAL(1, 20, 12), // "updateWidget"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "state"
QT_MOC_LITERAL(4, 40, 10), // "setVisible"
QT_MOC_LITERAL(5, 51, 7), // "visible"
QT_MOC_LITERAL(6, 59, 10), // "onAccepted"
QT_MOC_LITERAL(7, 70, 21), // "onItemInsertRequested"
QT_MOC_LITERAL(8, 92, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 109, 4), // "item"
QT_MOC_LITERAL(10, 114, 22), // "onItemSelectionChanged"
QT_MOC_LITERAL(11, 137, 12) // "redrawDialog"

    },
    "InsertServiceDialog\0updateWidget\0\0"
    "state\0setVisible\0visible\0onAccepted\0"
    "onItemInsertRequested\0QListWidgetItem*\0"
    "item\0onItemSelectionChanged\0redrawDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InsertServiceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
      10,    0,   54,    2, 0x08 /* Private */,
      11,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InsertServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InsertServiceDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onAccepted(); break;
        case 3: _t->onItemInsertRequested((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onItemSelectionChanged(); break;
        case 5: _t->redrawDialog(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InsertServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_InsertServiceDialog.data,
    qt_meta_data_InsertServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InsertServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InsertServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InsertServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int InsertServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
