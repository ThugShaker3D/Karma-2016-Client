/****************************************************************************
** Meta object code from reading C++ file 'RobloxTutorials.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxTutorials.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxTutorials.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobloxTutorials_t {
    QByteArrayData data[9];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxTutorials_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxTutorials_t qt_meta_stringdata_RobloxTutorials = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RobloxTutorials"
QT_MOC_LITERAL(1, 16, 11), // "linkClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "url"
QT_MOC_LITERAL(4, 33, 10), // "urlChanged"
QT_MOC_LITERAL(5, 44, 12), // "disableLinks"
QT_MOC_LITERAL(6, 57, 13), // "updateButtons"
QT_MOC_LITERAL(7, 71, 17), // "handleHomeClicked"
QT_MOC_LITERAL(8, 89, 12) // "resizeWidget"

    },
    "RobloxTutorials\0linkClicked\0\0url\0"
    "urlChanged\0disableLinks\0updateButtons\0"
    "handleHomeClicked\0resizeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxTutorials[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RobloxTutorials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxTutorials *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->disableLinks((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->updateButtons(); break;
        case 4: _t->handleHomeClicked(); break;
        case 5: _t->resizeWidget(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxTutorials::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RobloxTutorials.data,
    qt_meta_data_RobloxTutorials,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxTutorials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxTutorials::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTutorials.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RobloxTutorials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
