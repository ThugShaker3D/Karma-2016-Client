/****************************************************************************
** Meta object code from reading C++ file 'RobloxQuickAccessConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxQuickAccessConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxQuickAccessConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QuickAccessConfigDialog_t {
    QByteArrayData data[14];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickAccessConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickAccessConfigDialog_t qt_meta_stringdata_QuickAccessConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QuickAccessConfigDialog"
QT_MOC_LITERAL(1, 24, 6), // "accept"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "cancel"
QT_MOC_LITERAL(4, 39, 15), // "restoreDefaults"
QT_MOC_LITERAL(5, 55, 16), // "QAbstractButton*"
QT_MOC_LITERAL(6, 72, 6), // "button"
QT_MOC_LITERAL(7, 79, 18), // "onDefaultsRestored"
QT_MOC_LITERAL(8, 98, 28), // "onQuickAccessListDataChanged"
QT_MOC_LITERAL(9, 127, 18), // "onAddButtonClicked"
QT_MOC_LITERAL(10, 146, 21), // "onRemoveButtonClicked"
QT_MOC_LITERAL(11, 168, 19), // "onMoveButtonClicked"
QT_MOC_LITERAL(12, 188, 9), // "setFilter"
QT_MOC_LITERAL(13, 198, 6) // "filter"

    },
    "QuickAccessConfigDialog\0accept\0\0cancel\0"
    "restoreDefaults\0QAbstractButton*\0"
    "button\0onDefaultsRestored\0"
    "onQuickAccessListDataChanged\0"
    "onAddButtonClicked\0onRemoveButtonClicked\0"
    "onMoveButtonClicked\0setFilter\0filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickAccessConfigDialog[] = {

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
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void QuickAccessConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuickAccessConfigDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->cancel(); break;
        case 2: _t->restoreDefaults((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->onDefaultsRestored(); break;
        case 4: _t->onQuickAccessListDataChanged(); break;
        case 5: _t->onAddButtonClicked(); break;
        case 6: _t->onRemoveButtonClicked(); break;
        case 7: _t->onMoveButtonClicked(); break;
        case 8: _t->setFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QuickAccessConfigDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<RobloxSavingStateDialog<QDialog>::staticMetaObject>(),
    qt_meta_stringdata_QuickAccessConfigDialog.data,
    qt_meta_data_QuickAccessConfigDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QuickAccessConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickAccessConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuickAccessConfigDialog.stringdata0))
        return static_cast<void*>(this);
    return RobloxSavingStateDialog<QDialog>::qt_metacast(_clname);
}

int QuickAccessConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobloxSavingStateDialog<QDialog>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_RobloxQuickAccessConfig_t {
    QByteArrayData data[13];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxQuickAccessConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxQuickAccessConfig_t qt_meta_stringdata_RobloxQuickAccessConfig = {
    {
QT_MOC_LITERAL(0, 0, 23), // "RobloxQuickAccessConfig"
QT_MOC_LITERAL(1, 24, 11), // "actionAdded"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "QAction*"
QT_MOC_LITERAL(4, 46, 6), // "action"
QT_MOC_LITERAL(5, 53, 13), // "actionRemoved"
QT_MOC_LITERAL(6, 67, 16), // "defaultsRestored"
QT_MOC_LITERAL(7, 84, 21), // "updateQuickAccessMenu"
QT_MOC_LITERAL(8, 106, 6), // "QMenu*"
QT_MOC_LITERAL(9, 113, 5), // "pMenu"
QT_MOC_LITERAL(10, 119, 21), // "updateActionVisiblity"
QT_MOC_LITERAL(11, 141, 19), // "onExtensionMenuShow"
QT_MOC_LITERAL(12, 161, 19) // "onExtensionMenuHide"

    },
    "RobloxQuickAccessConfig\0actionAdded\0"
    "\0QAction*\0action\0actionRemoved\0"
    "defaultsRestored\0updateQuickAccessMenu\0"
    "QMenu*\0pMenu\0updateActionVisiblity\0"
    "onExtensionMenuShow\0onExtensionMenuHide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxQuickAccessConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       6,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   56,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,
      11,    0,   62,    2, 0x08 /* Private */,
      12,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RobloxQuickAccessConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxQuickAccessConfig *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionAdded((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->actionRemoved((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->defaultsRestored(); break;
        case 3: _t->updateQuickAccessMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 4: _t->updateActionVisiblity((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->onExtensionMenuShow(); break;
        case 6: _t->onExtensionMenuHide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobloxQuickAccessConfig::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxQuickAccessConfig::actionAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RobloxQuickAccessConfig::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxQuickAccessConfig::actionRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RobloxQuickAccessConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxQuickAccessConfig::defaultsRestored)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxQuickAccessConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobloxQuickAccessConfig.data,
    qt_meta_data_RobloxQuickAccessConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxQuickAccessConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxQuickAccessConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxQuickAccessConfig.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RobloxQuickAccessConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void RobloxQuickAccessConfig::actionAdded(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobloxQuickAccessConfig::actionRemoved(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RobloxQuickAccessConfig::defaultsRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QuickAccessBarProxyAction_t {
    QByteArrayData data[5];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickAccessBarProxyAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickAccessBarProxyAction_t qt_meta_stringdata_QuickAccessBarProxyAction = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QuickAccessBarProxyAction"
QT_MOC_LITERAL(1, 26, 9), // "onChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "onSourceActionDestroyed"
QT_MOC_LITERAL(4, 61, 17) // "onActionTriggered"

    },
    "QuickAccessBarProxyAction\0onChanged\0"
    "\0onSourceActionDestroyed\0onActionTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickAccessBarProxyAction[] = {

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
       4,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,

       0        // eod
};

void QuickAccessBarProxyAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuickAccessBarProxyAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onChanged(); break;
        case 1: _t->onSourceActionDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->onActionTriggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QuickAccessBarProxyAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_QuickAccessBarProxyAction.data,
    qt_meta_data_QuickAccessBarProxyAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QuickAccessBarProxyAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickAccessBarProxyAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuickAccessBarProxyAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QuickAccessBarProxyAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
