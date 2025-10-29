/****************************************************************************
** Meta object code from reading C++ file 'AuthenticationHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "AuthenticationHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthenticationHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuthenticationHelper_t {
    QByteArrayData data[16];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuthenticationHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuthenticationHelper_t qt_meta_stringdata_AuthenticationHelper = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AuthenticationHelper"
QT_MOC_LITERAL(1, 21, 18), // "authenticationDone"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "authSuccess"
QT_MOC_LITERAL(4, 53, 21), // "authenticationChanged"
QT_MOC_LITERAL(5, 75, 15), // "isAuthenticated"
QT_MOC_LITERAL(6, 91, 21), // "authenticateHttpLayer"
QT_MOC_LITERAL(7, 113, 23), // "deAuthenticateHttpLayer"
QT_MOC_LITERAL(8, 137, 25), // "verifyUserAndAuthenticate"
QT_MOC_LITERAL(9, 163, 11), // "timeOutTime"
QT_MOC_LITERAL(10, 175, 11), // "onSSLErrors"
QT_MOC_LITERAL(11, 187, 14), // "QNetworkReply*"
QT_MOC_LITERAL(12, 202, 12), // "networkReply"
QT_MOC_LITERAL(13, 215, 16), // "QList<QSslError>"
QT_MOC_LITERAL(14, 232, 7), // "errlist"
QT_MOC_LITERAL(15, 240, 29) // "httpSessionAuthenticationDone"

    },
    "AuthenticationHelper\0authenticationDone\0"
    "\0authSuccess\0authenticationChanged\0"
    "isAuthenticated\0authenticateHttpLayer\0"
    "deAuthenticateHttpLayer\0"
    "verifyUserAndAuthenticate\0timeOutTime\0"
    "onSSLErrors\0QNetworkReply*\0networkReply\0"
    "QList<QSslError>\0errlist\0"
    "httpSessionAuthenticationDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuthenticationHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x2a /* Public | MethodCloned */,
      10,    2,   66,    2, 0x08 /* Private */,
      15,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,    9,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void,

       0        // eod
};

void AuthenticationHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuthenticationHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authenticationDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->authenticationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->authenticateHttpLayer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->deAuthenticateHttpLayer(); break;
        case 4: { bool _r = _t->verifyUserAndAuthenticate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->verifyUserAndAuthenticate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->onSSLErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 7: _t->httpSessionAuthenticationDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AuthenticationHelper::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthenticationHelper::authenticationDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AuthenticationHelper::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthenticationHelper::authenticationChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AuthenticationHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AuthenticationHelper.data,
    qt_meta_data_AuthenticationHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AuthenticationHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthenticationHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuthenticationHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AuthenticationHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AuthenticationHelper::authenticationDone(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AuthenticationHelper::authenticationChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< AuthenticationHelper *>(this), &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
