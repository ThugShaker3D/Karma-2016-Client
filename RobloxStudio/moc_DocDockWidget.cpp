/****************************************************************************
** Meta object code from reading C++ file 'DocDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "DocDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DocDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocDockWidget_t {
    QByteArrayData data[12];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocDockWidget_t qt_meta_stringdata_DocDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DocDockWidget"
QT_MOC_LITERAL(1, 14, 11), // "onAttachDoc"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "onTopLevelChanged"
QT_MOC_LITERAL(4, 45, 8), // "TopLevel"
QT_MOC_LITERAL(5, 54, 21), // "onDockLocationChanged"
QT_MOC_LITERAL(6, 76, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(7, 95, 4), // "area"
QT_MOC_LITERAL(8, 100, 14), // "onFocusChanged"
QT_MOC_LITERAL(9, 115, 8), // "QWidget*"
QT_MOC_LITERAL(10, 124, 9), // "oldWidget"
QT_MOC_LITERAL(11, 134, 9) // "newWidget"

    },
    "DocDockWidget\0onAttachDoc\0\0onTopLevelChanged\0"
    "TopLevel\0onDockLocationChanged\0"
    "Qt::DockWidgetArea\0area\0onFocusChanged\0"
    "QWidget*\0oldWidget\0newWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocDockWidget[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       8,    2,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,

       0        // eod
};

void DocDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocDockWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAttachDoc(); break;
        case 1: _t->onTopLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onDockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 3: _t->onFocusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DocDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_DocDockWidget.data,
    qt_meta_data_DocDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DocDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int DocDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
