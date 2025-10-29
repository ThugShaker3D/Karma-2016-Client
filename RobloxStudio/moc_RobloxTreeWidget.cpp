/****************************************************************************
** Meta object code from reading C++ file 'RobloxTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxTreeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobloxTreeWidgetItem_t {
    QByteArrayData data[9];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxTreeWidgetItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxTreeWidgetItem_t qt_meta_stringdata_RobloxTreeWidgetItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RobloxTreeWidgetItem"
QT_MOC_LITERAL(1, 21, 12), // "onChildAdded"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "shared_ptr<RBX::Instance>"
QT_MOC_LITERAL(4, 61, 6), // "pChild"
QT_MOC_LITERAL(5, 68, 14), // "onChildRemoved"
QT_MOC_LITERAL(6, 83, 17), // "onPropertyChanged"
QT_MOC_LITERAL(7, 101, 42), // "const RBX::Reflection::Proper..."
QT_MOC_LITERAL(8, 144, 11) // "pDescriptor"

    },
    "RobloxTreeWidgetItem\0onChildAdded\0\0"
    "shared_ptr<RBX::Instance>\0pChild\0"
    "onChildRemoved\0onPropertyChanged\0"
    "const RBX::Reflection::PropertyDescriptor*\0"
    "pDescriptor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxTreeWidgetItem[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x00 /* Private */,
       5,    1,   32,    2, 0x00 /* Private */,
       6,    1,   35,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void RobloxTreeWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxTreeWidgetItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->onChildAdded((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->onChildRemoved((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->onPropertyChanged((*reinterpret_cast< const RBX::Reflection::PropertyDescriptor*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxTreeWidgetItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobloxTreeWidgetItem.data,
    qt_meta_data_RobloxTreeWidgetItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxTreeWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxTreeWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTreeWidgetItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(this);
    if (!strcmp(_clname, "InstanceUpdateHandler"))
        return static_cast< InstanceUpdateHandler*>(this);
    return QObject::qt_metacast(_clname);
}

int RobloxTreeWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_RobloxTreeWidget_t {
    QByteArrayData data[31];
    char stringdata0[518];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxTreeWidget_t qt_meta_stringdata_RobloxTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "RobloxTreeWidget"
QT_MOC_LITERAL(1, 17, 16), // "helpTopicChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "topic"
QT_MOC_LITERAL(4, 41, 11), // "focusGained"
QT_MOC_LITERAL(5, 53, 20), // "filterSearchFinished"
QT_MOC_LITERAL(6, 74, 18), // "finishedProcessing"
QT_MOC_LITERAL(7, 93, 17), // "startedProcessing"
QT_MOC_LITERAL(8, 111, 12), // "filterWidget"
QT_MOC_LITERAL(9, 124, 13), // "requestUpdate"
QT_MOC_LITERAL(10, 138, 22), // "onItemSelectionChanged"
QT_MOC_LITERAL(11, 161, 27), // "onCloudEditSelectionChanged"
QT_MOC_LITERAL(12, 189, 8), // "playerId"
QT_MOC_LITERAL(13, 198, 15), // "onItemCollapsed"
QT_MOC_LITERAL(14, 214, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 231, 11), // "pWidgetItem"
QT_MOC_LITERAL(16, 243, 14), // "onItemExpanded"
QT_MOC_LITERAL(17, 258, 19), // "onItemDoubleClicked"
QT_MOC_LITERAL(18, 278, 6), // "column"
QT_MOC_LITERAL(19, 285, 18), // "onTreeWidgetUpdate"
QT_MOC_LITERAL(20, 304, 12), // "onInsertPart"
QT_MOC_LITERAL(21, 317, 14), // "onInsertObject"
QT_MOC_LITERAL(22, 332, 20), // "onFilterWidgetUpdate"
QT_MOC_LITERAL(23, 353, 30), // "scrollBackToLastMarkedLocation"
QT_MOC_LITERAL(24, 384, 12), // "onChildAdded"
QT_MOC_LITERAL(25, 397, 25), // "shared_ptr<RBX::Instance>"
QT_MOC_LITERAL(26, 423, 6), // "pChild"
QT_MOC_LITERAL(27, 430, 14), // "onChildRemoved"
QT_MOC_LITERAL(28, 445, 17), // "onPropertyChanged"
QT_MOC_LITERAL(29, 463, 42), // "const RBX::Reflection::Proper..."
QT_MOC_LITERAL(30, 506, 11) // "pDescriptor"

    },
    "RobloxTreeWidget\0helpTopicChanged\0\0"
    "topic\0focusGained\0filterSearchFinished\0"
    "finishedProcessing\0startedProcessing\0"
    "filterWidget\0requestUpdate\0"
    "onItemSelectionChanged\0"
    "onCloudEditSelectionChanged\0playerId\0"
    "onItemCollapsed\0QTreeWidgetItem*\0"
    "pWidgetItem\0onItemExpanded\0"
    "onItemDoubleClicked\0column\0"
    "onTreeWidgetUpdate\0onInsertPart\0"
    "onInsertObject\0onFilterWidgetUpdate\0"
    "scrollBackToLastMarkedLocation\0"
    "onChildAdded\0shared_ptr<RBX::Instance>\0"
    "pChild\0onChildRemoved\0onPropertyChanged\0"
    "const RBX::Reflection::PropertyDescriptor*\0"
    "pDescriptor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    0,  117,    2, 0x06 /* Public */,
       5,    0,  118,    2, 0x06 /* Public */,
       6,    0,  119,    2, 0x06 /* Public */,
       7,    0,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  121,    2, 0x0a /* Public */,
       9,    0,  122,    2, 0x0a /* Public */,
      10,    0,  123,    2, 0x08 /* Private */,
      11,    1,  124,    2, 0x08 /* Private */,
      13,    1,  127,    2, 0x08 /* Private */,
      16,    1,  130,    2, 0x08 /* Private */,
      17,    2,  133,    2, 0x08 /* Private */,
      19,    0,  138,    2, 0x08 /* Private */,
      20,    0,  139,    2, 0x08 /* Private */,
      21,    0,  140,    2, 0x08 /* Private */,
      22,    0,  141,    2, 0x08 /* Private */,
      23,    0,  142,    2, 0x08 /* Private */,
      24,    1,  143,    2, 0x08 /* Private */,
      27,    1,  146,    2, 0x08 /* Private */,
      28,    1,  149,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 25,   26,
    QMetaType::Bool, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 29,   30,

       0        // eod
};

void RobloxTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->focusGained(); break;
        case 2: _t->filterSearchFinished(); break;
        case 3: _t->finishedProcessing(); break;
        case 4: _t->startedProcessing(); break;
        case 5: _t->filterWidget(); break;
        case 6: _t->requestUpdate(); break;
        case 7: _t->onItemSelectionChanged(); break;
        case 8: _t->onCloudEditSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onItemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->onItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->onItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->onTreeWidgetUpdate(); break;
        case 13: _t->onInsertPart(); break;
        case 14: _t->onInsertObject(); break;
        case 15: _t->onFilterWidgetUpdate(); break;
        case 16: _t->scrollBackToLastMarkedLocation(); break;
        case 17: { bool _r = _t->onChildAdded((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->onChildRemoved((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->onPropertyChanged((*reinterpret_cast< const RBX::Reflection::PropertyDescriptor*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobloxTreeWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxTreeWidget::helpTopicChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RobloxTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxTreeWidget::focusGained)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RobloxTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxTreeWidget::filterSearchFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RobloxTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxTreeWidget::finishedProcessing)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RobloxTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxTreeWidget::startedProcessing)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_RobloxTreeWidget.data,
    qt_meta_data_RobloxTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTreeWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "InstanceUpdateHandler"))
        return static_cast< InstanceUpdateHandler*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int RobloxTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void RobloxTreeWidget::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobloxTreeWidget::focusGained()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RobloxTreeWidget::filterSearchFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RobloxTreeWidget::finishedProcessing()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void RobloxTreeWidget::startedProcessing()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_RobloxExplorerWidget_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxExplorerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxExplorerWidget_t qt_meta_stringdata_RobloxExplorerWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RobloxExplorerWidget"
QT_MOC_LITERAL(1, 21, 11), // "focusGained"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "filterTreeWidget"
QT_MOC_LITERAL(4, 51, 4), // "text"
QT_MOC_LITERAL(5, 56, 19), // "onProcessingStarted"
QT_MOC_LITERAL(6, 76, 20), // "onProcessingFinished"
QT_MOC_LITERAL(7, 97, 17) // "sendWidgetCounter"

    },
    "RobloxExplorerWidget\0focusGained\0\0"
    "filterTreeWidget\0text\0onProcessingStarted\0"
    "onProcessingFinished\0sendWidgetCounter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxExplorerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x09 /* Protected */,
       5,    0,   43,    2, 0x09 /* Protected */,
       6,    0,   44,    2, 0x09 /* Protected */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RobloxExplorerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxExplorerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->focusGained(); break;
        case 1: _t->filterTreeWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onProcessingStarted(); break;
        case 3: _t->onProcessingFinished(); break;
        case 4: _t->sendWidgetCounter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobloxExplorerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxExplorerWidget::focusGained)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxExplorerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RobloxExplorerWidget.data,
    qt_meta_data_RobloxExplorerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxExplorerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxExplorerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxExplorerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RobloxExplorerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RobloxExplorerWidget::focusGained()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
