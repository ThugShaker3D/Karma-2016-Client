/****************************************************************************
** Meta object code from reading C++ file 'RobloxFindWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxFindWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxFindWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindListModel_t {
    QByteArrayData data[5];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindListModel_t qt_meta_stringdata_FindListModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FindListModel"
QT_MOC_LITERAL(1, 14, 10), // "updateView"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "openScript"
QT_MOC_LITERAL(4, 37, 3) // "row"

    },
    "FindListModel\0updateView\0\0openScript\0"
    "row"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindListModel[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,    4,

       0        // eod
};

void FindListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateView(); break;
        case 1: { int _r = _t->openScript((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_FindListModel.data,
    qt_meta_data_FindListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int FindListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_RobloxFindWidget_t {
    QByteArrayData data[15];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxFindWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxFindWidget_t qt_meta_stringdata_RobloxFindWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "RobloxFindWidget"
QT_MOC_LITERAL(1, 17, 24), // "populatingWidgetFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "openItem"
QT_MOC_LITERAL(4, 52, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 64, 5), // "index"
QT_MOC_LITERAL(6, 70, 15), // "openCurrentItem"
QT_MOC_LITERAL(7, 86, 12), // "previousItem"
QT_MOC_LITERAL(8, 99, 8), // "nextItem"
QT_MOC_LITERAL(9, 108, 10), // "clearItems"
QT_MOC_LITERAL(10, 119, 10), // "resetItems"
QT_MOC_LITERAL(11, 130, 19), // "stopPopulatingItems"
QT_MOC_LITERAL(12, 150, 7), // "addItem"
QT_MOC_LITERAL(13, 158, 8), // "FindData"
QT_MOC_LITERAL(14, 167, 4) // "item"

    },
    "RobloxFindWidget\0populatingWidgetFinished\0"
    "\0openItem\0QModelIndex\0index\0openCurrentItem\0"
    "previousItem\0nextItem\0clearItems\0"
    "resetItems\0stopPopulatingItems\0addItem\0"
    "FindData\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxFindWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    0,   65,    2, 0x09 /* Protected */,
       9,    0,   66,    2, 0x09 /* Protected */,
      10,    0,   67,    2, 0x09 /* Protected */,
      11,    0,   68,    2, 0x09 /* Protected */,
      12,    1,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void RobloxFindWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxFindWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->populatingWidgetFinished(); break;
        case 1: _t->openItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->openCurrentItem(); break;
        case 3: _t->previousItem(); break;
        case 4: _t->nextItem(); break;
        case 5: _t->clearItems(); break;
        case 6: _t->resetItems(); break;
        case 7: _t->stopPopulatingItems(); break;
        case 8: _t->addItem((*reinterpret_cast< FindData(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FindData >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobloxFindWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxFindWidget::populatingWidgetFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxFindWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RobloxFindWidget.data,
    qt_meta_data_RobloxFindWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxFindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxFindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxFindWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RobloxFindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RobloxFindWidget::populatingWidgetFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
