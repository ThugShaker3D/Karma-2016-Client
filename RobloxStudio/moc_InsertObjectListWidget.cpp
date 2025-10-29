/****************************************************************************
** Meta object code from reading C++ file 'InsertObjectListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "InsertObjectListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InsertObjectListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InsertObjectListWidget_t {
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InsertObjectListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InsertObjectListWidget_t qt_meta_stringdata_InsertObjectListWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "InsertObjectListWidget"
QT_MOC_LITERAL(1, 23, 15), // "enterKeyPressed"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 57, 5), // "pItem"
QT_MOC_LITERAL(5, 63, 12), // "itemInserted"
QT_MOC_LITERAL(6, 76, 16), // "helpTopicChanged"
QT_MOC_LITERAL(7, 93, 5), // "topic"
QT_MOC_LITERAL(8, 99, 21), // "onItemInsertRequested"
QT_MOC_LITERAL(9, 121, 4), // "item"
QT_MOC_LITERAL(10, 126, 18) // "onSelectionChanged"

    },
    "InsertObjectListWidget\0enterKeyPressed\0"
    "\0QListWidgetItem*\0pItem\0itemInserted\0"
    "helpTopicChanged\0topic\0onItemInsertRequested\0"
    "item\0onSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InsertObjectListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   51,    2, 0x0a /* Public */,
       8,    0,   54,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InsertObjectListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InsertObjectListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enterKeyPressed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->itemInserted(); break;
        case 2: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onItemInsertRequested((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onItemInsertRequested(); break;
        case 5: _t->onSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InsertObjectListWidget::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertObjectListWidget::enterKeyPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InsertObjectListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertObjectListWidget::itemInserted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InsertObjectListWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertObjectListWidget::helpTopicChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InsertObjectListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_InsertObjectListWidget.data,
    qt_meta_data_InsertObjectListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InsertObjectListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InsertObjectListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InsertObjectListWidget.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int InsertObjectListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void InsertObjectListWidget::enterKeyPressed(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InsertObjectListWidget::itemInserted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InsertObjectListWidget::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
