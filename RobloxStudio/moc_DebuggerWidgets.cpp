/****************************************************************************
** Meta object code from reading C++ file 'DebuggerWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "DebuggerWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebuggerTreeWidget_t {
    QByteArrayData data[6];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebuggerTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebuggerTreeWidget_t qt_meta_stringdata_DebuggerTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DebuggerTreeWidget"
QT_MOC_LITERAL(1, 19, 18), // "deleteSelectedItem"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "onItemActivated"
QT_MOC_LITERAL(4, 55, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 72, 13) // "onItemChanged"

    },
    "DebuggerTreeWidget\0deleteSelectedItem\0"
    "\0onItemActivated\0QTreeWidgetItem*\0"
    "onItemChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebuggerTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x09 /* Protected */,
       5,    2,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    2,    2,

       0        // eod
};

void DebuggerTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebuggerTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteSelectedItem(); break;
        case 1: _t->onItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->onItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebuggerTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebuggerTreeWidget::deleteSelectedItem)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DebuggerTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_DebuggerTreeWidget.data,
    qt_meta_data_DebuggerTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebuggerTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebuggerTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int DebuggerTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DebuggerTreeWidget::deleteSelectedItem()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_CallStackTreeWidget_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallStackTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallStackTreeWidget_t qt_meta_stringdata_CallStackTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 19) // "CallStackTreeWidget"

    },
    "CallStackTreeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallStackTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CallStackTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CallStackTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<DebuggerTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_CallStackTreeWidget.data,
    qt_meta_data_CallStackTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CallStackTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallStackTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallStackTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return DebuggerTreeWidget::qt_metacast(_clname);
}

int CallStackTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebuggerTreeWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CallStackDebuggersList_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallStackDebuggersList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallStackDebuggersList_t qt_meta_stringdata_CallStackDebuggersList = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CallStackDebuggersList"
QT_MOC_LITERAL(1, 23, 16), // "popupAboutToShow"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "CallStackDebuggersList\0popupAboutToShow\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallStackDebuggersList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void CallStackDebuggersList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallStackDebuggersList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->popupAboutToShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CallStackDebuggersList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallStackDebuggersList::popupAboutToShow)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CallStackDebuggersList::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_CallStackDebuggersList.data,
    qt_meta_data_CallStackDebuggersList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CallStackDebuggersList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallStackDebuggersList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallStackDebuggersList.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int CallStackDebuggersList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CallStackDebuggersList::popupAboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_CallStackWidget_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallStackWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallStackWidget_t qt_meta_stringdata_CallStackWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CallStackWidget"
QT_MOC_LITERAL(1, 16, 21), // "onCurrentIndexChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 23) // "onDebuggerListPopupShow"

    },
    "CallStackWidget\0onCurrentIndexChanged\0"
    "\0index\0onDebuggerListPopupShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallStackWidget[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void CallStackWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallStackWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onDebuggerListPopupShow(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CallStackWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CallStackWidget.data,
    qt_meta_data_CallStackWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CallStackWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallStackWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallStackWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CallStackWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_BreakpointsWidget_t {
    QByteArrayData data[6];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BreakpointsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BreakpointsWidget_t qt_meta_stringdata_BreakpointsWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BreakpointsWidget"
QT_MOC_LITERAL(1, 18, 19), // "onPushButtonClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "onDeleteSelectedItem"
QT_MOC_LITERAL(4, 60, 26), // "requestButtonsStatusUpdate"
QT_MOC_LITERAL(5, 87, 19) // "updateButtonsStatus"

    },
    "BreakpointsWidget\0onPushButtonClicked\0"
    "\0onDeleteSelectedItem\0requestButtonsStatusUpdate\0"
    "updateButtonsStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BreakpointsWidget[] = {

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
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BreakpointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BreakpointsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPushButtonClicked(); break;
        case 1: _t->onDeleteSelectedItem(); break;
        case 2: _t->requestButtonsStatusUpdate(); break;
        case 3: _t->updateButtonsStatus(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject BreakpointsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BreakpointsWidget.data,
    qt_meta_data_BreakpointsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BreakpointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BreakpointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BreakpointsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BreakpointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WatchTreeWidget_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchTreeWidget_t qt_meta_stringdata_WatchTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WatchTreeWidget"
QT_MOC_LITERAL(1, 16, 17), // "updateWatchValues"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "enable"
QT_MOC_LITERAL(4, 42, 16), // "copySelectedItem"
QT_MOC_LITERAL(5, 59, 8), // "addWatch"
QT_MOC_LITERAL(6, 68, 11), // "removeWatch"
QT_MOC_LITERAL(7, 80, 16) // "deleteAllWatches"

    },
    "WatchTreeWidget\0updateWatchValues\0\0"
    "enable\0copySelectedItem\0addWatch\0"
    "removeWatch\0deleteAllWatches"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WatchTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WatchTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateWatchValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->copySelectedItem(); break;
        case 2: _t->addWatch(); break;
        case 3: _t->removeWatch(); break;
        case 4: _t->deleteAllWatches(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WatchTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<DebuggerTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_WatchTreeWidget.data,
    qt_meta_data_WatchTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WatchTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return DebuggerTreeWidget::qt_metacast(_clname);
}

int WatchTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebuggerTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_WatchWidget_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchWidget_t qt_meta_stringdata_WatchWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WatchWidget"
QT_MOC_LITERAL(1, 12, 20), // "onDeleteSelectedItem"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "WatchWidget\0onDeleteSelectedItem\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchWidget[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WatchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WatchWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDeleteSelectedItem(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WatchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WatchWidget.data,
    qt_meta_data_WatchWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WatchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WatchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_DebuggerToolTipWidget_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebuggerToolTipWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebuggerToolTipWidget_t qt_meta_stringdata_DebuggerToolTipWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DebuggerToolTipWidget"
QT_MOC_LITERAL(1, 22, 18), // "computeToolTipSize"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9) // "onTimeout"

    },
    "DebuggerToolTipWidget\0computeToolTipSize\0"
    "\0onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebuggerToolTipWidget[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DebuggerToolTipWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebuggerToolTipWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->computeToolTipSize(); break;
        case 1: _t->onTimeout(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DebuggerToolTipWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_DebuggerToolTipWidget.data,
    qt_meta_data_DebuggerToolTipWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebuggerToolTipWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebuggerToolTipWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerToolTipWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int DebuggerToolTipWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
