/****************************************************************************
** Meta object code from reading C++ file 'RobloxPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyTreeWidget_t {
    QByteArrayData data[14];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyTreeWidget_t qt_meta_stringdata_PropertyTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PropertyTreeWidget"
QT_MOC_LITERAL(1, 19, 16), // "helpTopicChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "topic"
QT_MOC_LITERAL(4, 43, 9), // "setFilter"
QT_MOC_LITERAL(5, 53, 6), // "filter"
QT_MOC_LITERAL(6, 60, 6), // "update"
QT_MOC_LITERAL(7, 67, 14), // "onItemExpanded"
QT_MOC_LITERAL(8, 82, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 99, 5), // "pItem"
QT_MOC_LITERAL(10, 105, 15), // "onItemCollapsed"
QT_MOC_LITERAL(11, 121, 18), // "updatePropertySlot"
QT_MOC_LITERAL(12, 140, 11), // "objectValue"
QT_MOC_LITERAL(13, 152, 25) // "sendPropertySearchCounter"

    },
    "PropertyTreeWidget\0helpTopicChanged\0"
    "\0topic\0setFilter\0filter\0update\0"
    "onItemExpanded\0QTreeWidgetItem*\0pItem\0"
    "onItemCollapsed\0updatePropertySlot\0"
    "objectValue\0sendPropertySearchCounter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,
      11,    1,   62,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QColor,   12,
    QMetaType::Void,

       0        // eod
};

void PropertyTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->update(); break;
        case 3: _t->onItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onItemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->updatePropertySlot((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->sendPropertySearchCounter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyTreeWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyTreeWidget::helpTopicChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropertyTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_PropertyTreeWidget.data,
    qt_meta_data_PropertyTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int PropertyTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
void PropertyTreeWidget::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_RobloxPropertyWidget_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxPropertyWidget_t qt_meta_stringdata_RobloxPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RobloxPropertyWidget"
QT_MOC_LITERAL(1, 21, 24), // "updateSelectionInfoLabel"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "RobloxPropertyWidget\0updateSelectionInfoLabel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxPropertyWidget[] = {

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

void RobloxPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxPropertyWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateSelectionInfoLabel(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RobloxPropertyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RobloxPropertyWidget.data,
    qt_meta_data_RobloxPropertyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RobloxPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
