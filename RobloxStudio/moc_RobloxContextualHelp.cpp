/****************************************************************************
** Meta object code from reading C++ file 'RobloxContextualHelp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxContextualHelp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxContextualHelp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobloxContextualHelpService_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxContextualHelpService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxContextualHelpService_t qt_meta_stringdata_RobloxContextualHelpService = {
    {
QT_MOC_LITERAL(0, 0, 27), // "RobloxContextualHelpService"
QT_MOC_LITERAL(1, 28, 16), // "helpTopicChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 18), // "onHelpTopicChanged"
QT_MOC_LITERAL(4, 65, 9) // "helpTopic"

    },
    "RobloxContextualHelpService\0"
    "helpTopicChanged\0\0onHelpTopicChanged\0"
    "helpTopic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxContextualHelpService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void RobloxContextualHelpService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxContextualHelpService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onHelpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobloxContextualHelpService::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxContextualHelpService::helpTopicChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxContextualHelpService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobloxContextualHelpService.data,
    qt_meta_data_RobloxContextualHelpService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxContextualHelpService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxContextualHelpService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxContextualHelpService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RobloxContextualHelpService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RobloxContextualHelpService::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_RobloxHelpWebView_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxHelpWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxHelpWebView_t qt_meta_stringdata_RobloxHelpWebView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RobloxHelpWebView"
QT_MOC_LITERAL(1, 18, 12), // "loadProgress"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "RobloxHelpWebView\0loadProgress\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxHelpWebView[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void RobloxHelpWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxHelpWebView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxHelpWebView::staticMetaObject = { {
    QMetaObject::SuperData::link<RobloxBrowser::staticMetaObject>(),
    qt_meta_stringdata_RobloxHelpWebView.data,
    qt_meta_data_RobloxHelpWebView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxHelpWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxHelpWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxHelpWebView.stringdata0))
        return static_cast<void*>(this);
    return RobloxBrowser::qt_metacast(_clname);
}

int RobloxHelpWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobloxBrowser::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_RobloxContextualHelp_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxContextualHelp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxContextualHelp_t qt_meta_stringdata_RobloxContextualHelp = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RobloxContextualHelp"
QT_MOC_LITERAL(1, 21, 23), // "onAuthenticationChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "isAuthenticated"
QT_MOC_LITERAL(4, 62, 18), // "onHelpTopicChanged"
QT_MOC_LITERAL(5, 81, 9), // "helpTopic"
QT_MOC_LITERAL(6, 91, 11), // "linkClicked"
QT_MOC_LITERAL(7, 103, 3) // "url"

    },
    "RobloxContextualHelp\0onAuthenticationChanged\0"
    "\0isAuthenticated\0onHelpTopicChanged\0"
    "helpTopic\0linkClicked\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxContextualHelp[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QUrl,    7,

       0        // eod
};

void RobloxContextualHelp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxContextualHelp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAuthenticationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onHelpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxContextualHelp::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RobloxContextualHelp.data,
    qt_meta_data_RobloxContextualHelp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxContextualHelp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxContextualHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxContextualHelp.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RobloxContextualHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
