/****************************************************************************
** Meta object code from reading C++ file 'PlayersDataManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "PlayersDataManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayersDataManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarLoader_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarLoader_t qt_meta_stringdata_AvatarLoader = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AvatarLoader"
QT_MOC_LITERAL(1, 13, 12), // "avatarLoaded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "image"
QT_MOC_LITERAL(4, 33, 27), // "headshotThumbnailDataLoaded"
QT_MOC_LITERAL(5, 61, 8), // "playerId"
QT_MOC_LITERAL(6, 70, 15), // "RBX::HttpFuture"
QT_MOC_LITERAL(7, 86, 6), // "future"
QT_MOC_LITERAL(8, 93, 23) // "headshotThumbnailLoaded"

    },
    "AvatarLoader\0avatarLoaded\0\0image\0"
    "headshotThumbnailDataLoaded\0playerId\0"
    "RBX::HttpFuture\0future\0headshotThumbnailLoaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarLoader[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    2,   32,    2, 0x00 /* Private */,
       8,    2,   37,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,

       0        // eod
};

void AvatarLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AvatarLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->avatarLoaded((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->headshotThumbnailDataLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        case 2: _t->headshotThumbnailLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarLoader::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarLoader::avatarLoaded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AvatarLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AvatarLoader.data,
    qt_meta_data_AvatarLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AvatarLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AvatarLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AvatarLoader::avatarLoaded(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PlayersDataManager_t {
    QByteArrayData data[9];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayersDataManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayersDataManager_t qt_meta_stringdata_PlayersDataManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PlayersDataManager"
QT_MOC_LITERAL(1, 19, 25), // "cloudEditSelectionChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "playerId"
QT_MOC_LITERAL(4, 55, 16), // "playerNameLoaded"
QT_MOC_LITERAL(5, 72, 10), // "playerName"
QT_MOC_LITERAL(6, 83, 18), // "onPlayerNameLoaded"
QT_MOC_LITERAL(7, 102, 15), // "RBX::HttpFuture"
QT_MOC_LITERAL(8, 118, 6) // "future"

    },
    "PlayersDataManager\0cloudEditSelectionChanged\0"
    "\0playerId\0playerNameLoaded\0playerName\0"
    "onPlayerNameLoaded\0RBX::HttpFuture\0"
    "future"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayersDataManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   37,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    5,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void PlayersDataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayersDataManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cloudEditSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->playerNameLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->onPlayerNameLoaded((*reinterpret_cast< RBX::HttpFuture(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlayersDataManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayersDataManager::cloudEditSelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlayersDataManager::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayersDataManager::playerNameLoaded)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlayersDataManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlayersDataManager.data,
    qt_meta_data_PlayersDataManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlayersDataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayersDataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayersDataManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayersDataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PlayersDataManager::cloudEditSelectionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayersDataManager::playerNameLoaded(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
