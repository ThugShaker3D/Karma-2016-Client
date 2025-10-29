/****************************************************************************
** Meta object code from reading C++ file 'UpdateUIManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "UpdateUIManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdateUIManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpdateUIManager_t {
    QByteArrayData data[13];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateUIManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateUIManager_t qt_meta_stringdata_UpdateUIManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UpdateUIManager"
QT_MOC_LITERAL(1, 16, 10), // "onMenuShow"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "onMenuHide"
QT_MOC_LITERAL(4, 39, 16), // "showErrorMessage"
QT_MOC_LITERAL(5, 56, 5), // "title"
QT_MOC_LITERAL(6, 62, 7), // "message"
QT_MOC_LITERAL(7, 70, 18), // "onQuickInsertFocus"
QT_MOC_LITERAL(8, 89, 14), // "updateToolBars"
QT_MOC_LITERAL(9, 104, 15), // "updateStatusBar"
QT_MOC_LITERAL(10, 120, 16), // "onToolBarsUpdate"
QT_MOC_LITERAL(11, 137, 14), // "filterExplorer"
QT_MOC_LITERAL(12, 152, 28) // "updateActionWidgetVisibility"

    },
    "UpdateUIManager\0onMenuShow\0\0onMenuHide\0"
    "showErrorMessage\0title\0message\0"
    "onQuickInsertFocus\0updateToolBars\0"
    "updateStatusBar\0onToolBarsUpdate\0"
    "filterExplorer\0updateActionWidgetVisibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateUIManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    2,   61,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UpdateUIManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateUIManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMenuShow(); break;
        case 1: _t->onMenuHide(); break;
        case 2: _t->showErrorMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->onQuickInsertFocus(); break;
        case 4: _t->updateToolBars(); break;
        case 5: _t->updateStatusBar(); break;
        case 6: _t->onToolBarsUpdate(); break;
        case 7: _t->filterExplorer(); break;
        case 8: _t->updateActionWidgetVisibility(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UpdateUIManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UpdateUIManager.data,
    qt_meta_data_UpdateUIManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpdateUIManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateUIManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateUIManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UpdateUIManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
