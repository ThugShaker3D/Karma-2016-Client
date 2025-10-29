/****************************************************************************
** Meta object code from reading C++ file 'RobloxWebDoc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxWebDoc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxWebDoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobloxWebDoc_t {
    QByteArrayData data[16];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxWebDoc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxWebDoc_t qt_meta_stringdata_RobloxWebDoc = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RobloxWebDoc"
QT_MOC_LITERAL(1, 13, 11), // "refreshPage"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "updateAddressBar"
QT_MOC_LITERAL(4, 43, 15), // "sslErrorHandler"
QT_MOC_LITERAL(5, 59, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 74, 3), // "qnr"
QT_MOC_LITERAL(7, 78, 16), // "QList<QSslError>"
QT_MOC_LITERAL(8, 95, 7), // "errlist"
QT_MOC_LITERAL(9, 103, 14), // "initJavascript"
QT_MOC_LITERAL(10, 118, 17), // "handleHomeClicked"
QT_MOC_LITERAL(11, 136, 11), // "navigateUrl"
QT_MOC_LITERAL(12, 148, 3), // "url"
QT_MOC_LITERAL(13, 152, 23), // "onAuthenticationChanged"
QT_MOC_LITERAL(14, 176, 11), // "updateTitle"
QT_MOC_LITERAL(15, 188, 5) // "title"

    },
    "RobloxWebDoc\0refreshPage\0\0updateAddressBar\0"
    "sslErrorHandler\0QNetworkReply*\0qnr\0"
    "QList<QSslError>\0errlist\0initJavascript\0"
    "handleHomeClicked\0navigateUrl\0url\0"
    "onAuthenticationChanged\0updateTitle\0"
    "title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxWebDoc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x08 /* Private */,
       4,    2,   58,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,
      13,    1,   68,    2, 0x08 /* Private */,
      14,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void RobloxWebDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxWebDoc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshPage(); break;
        case 1: _t->updateAddressBar((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->sslErrorHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 3: _t->initJavascript(); break;
        case 4: _t->handleHomeClicked(); break;
        case 5: _t->navigateUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onAuthenticationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxWebDoc::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobloxWebDoc.data,
    qt_meta_data_RobloxWebDoc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxWebDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxWebDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxWebDoc.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RobloxBasicDoc"))
        return static_cast< RobloxBasicDoc*>(this);
    return QObject::qt_metacast(_clname);
}

int RobloxWebDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
