/****************************************************************************
** Meta object code from reading C++ file 'DebuggerClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "DebuggerClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebuggerClientManager_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebuggerClientManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebuggerClientManager_t qt_meta_stringdata_DebuggerClientManager = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DebuggerClientManager"
QT_MOC_LITERAL(1, 22, 12), // "onStepAction"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "updateScriptDocument"
QT_MOC_LITERAL(4, 57, 19), // "updateDebuggersList"
QT_MOC_LITERAL(5, 77, 18), // "updateDebugActions"
QT_MOC_LITERAL(6, 96, 3) // "add"

    },
    "DebuggerClientManager\0onStepAction\0\0"
    "updateScriptDocument\0updateDebuggersList\0"
    "updateDebugActions\0add"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebuggerClientManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void DebuggerClientManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebuggerClientManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onStepAction(); break;
        case 1: _t->updateScriptDocument(); break;
        case 2: _t->updateDebuggersList(); break;
        case 3: _t->updateDebugActions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DebuggerClientManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DebuggerClientManager.data,
    qt_meta_data_DebuggerClientManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebuggerClientManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebuggerClientManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerClientManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebuggerClientManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_QDebuggerClient_t {
    QByteArrayData data[21];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDebuggerClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDebuggerClient_t qt_meta_stringdata_QDebuggerClient = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QDebuggerClient"
QT_MOC_LITERAL(1, 16, 18), // "onInsertBreakpoint"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "onDeleteBreakpoint"
QT_MOC_LITERAL(4, 55, 18), // "onToggleBreakpoint"
QT_MOC_LITERAL(5, 74, 12), // "textEditLine"
QT_MOC_LITERAL(6, 87, 23), // "onToggleBreakpointState"
QT_MOC_LITERAL(7, 111, 10), // "onAddWatch"
QT_MOC_LITERAL(8, 122, 16), // "highlightLine_MT"
QT_MOC_LITERAL(9, 139, 21), // "clearLineHighlight_MT"
QT_MOC_LITERAL(10, 161, 17), // "setCurrentLine_MT"
QT_MOC_LITERAL(11, 179, 12), // "setMarker_MT"
QT_MOC_LITERAL(12, 192, 6), // "marker"
QT_MOC_LITERAL(13, 199, 15), // "setBlockCurrent"
QT_MOC_LITERAL(14, 215, 13), // "onShowToolTip"
QT_MOC_LITERAL(15, 229, 3), // "pos"
QT_MOC_LITERAL(16, 233, 3), // "key"
QT_MOC_LITERAL(17, 237, 17), // "onContentsChanged"
QT_MOC_LITERAL(18, 255, 22), // "onUpdateContextualMenu"
QT_MOC_LITERAL(19, 278, 6), // "QMenu*"
QT_MOC_LITERAL(20, 285, 5) // "pMenu"

    },
    "QDebuggerClient\0onInsertBreakpoint\0\0"
    "onDeleteBreakpoint\0onToggleBreakpoint\0"
    "textEditLine\0onToggleBreakpointState\0"
    "onAddWatch\0highlightLine_MT\0"
    "clearLineHighlight_MT\0setCurrentLine_MT\0"
    "setMarker_MT\0marker\0setBlockCurrent\0"
    "onShowToolTip\0pos\0key\0onContentsChanged\0"
    "onUpdateContextualMenu\0QMenu*\0pMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDebuggerClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    1,   81,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    3,   88,    2, 0x08 /* Private */,
      14,    2,   95,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    2,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    5,   12,   13,
    QMetaType::Bool, QMetaType::QPoint, QMetaType::QString,   15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QPoint,   20,   15,

       0        // eod
};

void QDebuggerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDebuggerClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onInsertBreakpoint(); break;
        case 1: _t->onDeleteBreakpoint(); break;
        case 2: _t->onToggleBreakpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onToggleBreakpointState(); break;
        case 4: _t->onAddWatch(); break;
        case 5: _t->highlightLine_MT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->clearLineHighlight_MT(); break;
        case 7: _t->setCurrentLine_MT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setMarker_MT((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: { bool _r = _t->onShowToolTip((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->onContentsChanged(); break;
        case 11: _t->onUpdateContextualMenu((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QDebuggerClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QDebuggerClient.data,
    qt_meta_data_QDebuggerClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QDebuggerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDebuggerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDebuggerClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDebuggerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
