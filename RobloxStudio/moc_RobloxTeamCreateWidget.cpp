/****************************************************************************
** Meta object code from reading C++ file 'RobloxTeamCreateWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxTeamCreateWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxTeamCreateWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GroupItem_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupItem_t qt_meta_stringdata_GroupItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GroupItem"
QT_MOC_LITERAL(1, 10, 15), // "groupDataLoaded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "RBX::HttpFuture"
QT_MOC_LITERAL(4, 43, 6), // "future"
QT_MOC_LITERAL(5, 50, 20) // "groupThumbnailLoaded"

    },
    "GroupItem\0groupDataLoaded\0\0RBX::HttpFuture\0"
    "future\0groupThumbnailLoaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupItem[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void GroupItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->groupDataLoaded((*reinterpret_cast< RBX::HttpFuture(*)>(_a[1]))); break;
        case 1: _t->groupThumbnailLoaded((*reinterpret_cast< RBX::HttpFuture(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GroupItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GroupItem.data,
    qt_meta_data_GroupItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GroupItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(this);
    return QObject::qt_metacast(_clname);
}

int GroupItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CreatorItem_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreatorItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreatorItem_t qt_meta_stringdata_CreatorItem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CreatorItem"
QT_MOC_LITERAL(1, 12, 18), // "updatePlayerAvatar"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "playerImage"
QT_MOC_LITERAL(4, 44, 16), // "updatePlayerName"
QT_MOC_LITERAL(5, 61, 8), // "playerId"
QT_MOC_LITERAL(6, 70, 8) // "userName"

    },
    "CreatorItem\0updatePlayerAvatar\0\0"
    "playerImage\0updatePlayerName\0playerId\0"
    "userName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreatorItem[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,

       0        // eod
};

void CreatorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreatorItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updatePlayerAvatar((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->updatePlayerName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreatorItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CreatorItem.data,
    qt_meta_data_CreatorItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreatorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreatorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreatorItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(this);
    return QObject::qt_metacast(_clname);
}

int CreatorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CreatorsListLoader_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreatorsListLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreatorsListLoader_t qt_meta_stringdata_CreatorsListLoader = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CreatorsListLoader"
QT_MOC_LITERAL(1, 19, 15), // "finishedLoading"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "creatorsListLoaded"
QT_MOC_LITERAL(4, 55, 10), // "pageLoaded"
QT_MOC_LITERAL(5, 66, 15), // "RBX::HttpFuture"
QT_MOC_LITERAL(6, 82, 6) // "future"

    },
    "CreatorsListLoader\0finishedLoading\0\0"
    "creatorsListLoaded\0pageLoaded\0"
    "RBX::HttpFuture\0future"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreatorsListLoader[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,

       0        // eod
};

void CreatorsListLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreatorsListLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedLoading(); break;
        case 1: _t->creatorsListLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreatorsListLoader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreatorsListLoader::finishedLoading)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreatorsListLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CreatorsListLoader.data,
    qt_meta_data_CreatorsListLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreatorsListLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreatorsListLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreatorsListLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CreatorsListLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CreatorsListLoader::finishedLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_FriendsInfoLoader_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FriendsInfoLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FriendsInfoLoader_t qt_meta_stringdata_FriendsInfoLoader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FriendsInfoLoader"
QT_MOC_LITERAL(1, 18, 15), // "finishedLoading"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "friendsDataLoaded"
QT_MOC_LITERAL(4, 53, 10), // "pageLoaded"
QT_MOC_LITERAL(5, 64, 15), // "RBX::HttpFuture"
QT_MOC_LITERAL(6, 80, 6) // "future"

    },
    "FriendsInfoLoader\0finishedLoading\0\0"
    "friendsDataLoaded\0pageLoaded\0"
    "RBX::HttpFuture\0future"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FriendsInfoLoader[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,

       0        // eod
};

void FriendsInfoLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FriendsInfoLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedLoading(); break;
        case 1: _t->friendsDataLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FriendsInfoLoader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendsInfoLoader::finishedLoading)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FriendsInfoLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FriendsInfoLoader.data,
    qt_meta_data_FriendsInfoLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FriendsInfoLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FriendsInfoLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FriendsInfoLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FriendsInfoLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FriendsInfoLoader::finishedLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_CreatorsListWidget_t {
    QByteArrayData data[7];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreatorsListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreatorsListWidget_t qt_meta_stringdata_CreatorsListWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CreatorsListWidget"
QT_MOC_LITERAL(1, 19, 26), // "removeCloudEditorRequested"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "playerId"
QT_MOC_LITERAL(4, 56, 15), // "finishedLoading"
QT_MOC_LITERAL(5, 72, 19), // "onPlayerAddRequsted"
QT_MOC_LITERAL(6, 92, 23) // "onPlayerRemoveRequested"

    },
    "CreatorsListWidget\0removeCloudEditorRequested\0"
    "\0playerId\0finishedLoading\0onPlayerAddRequsted\0"
    "onPlayerRemoveRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreatorsListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   38,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CreatorsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreatorsListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->removeCloudEditorRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->finishedLoading(); break;
        case 2: _t->onPlayerAddRequsted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onPlayerRemoveRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreatorsListWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreatorsListWidget::removeCloudEditorRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CreatorsListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreatorsListWidget::finishedLoading)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreatorsListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_CreatorsListWidget.data,
    qt_meta_data_CreatorsListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreatorsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreatorsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreatorsListWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int CreatorsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CreatorsListWidget::removeCloudEditorRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CreatorsListWidget::finishedLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_UserPlaceCreatorsListWidget_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserPlaceCreatorsListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserPlaceCreatorsListWidget_t qt_meta_stringdata_UserPlaceCreatorsListWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "UserPlaceCreatorsListWidget"
QT_MOC_LITERAL(1, 28, 19), // "onPlayerAddRequsted"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "playerId"
QT_MOC_LITERAL(4, 58, 23), // "onPlayerRemoveRequested"
QT_MOC_LITERAL(5, 82, 20) // "onCreatorsListLoaded"

    },
    "UserPlaceCreatorsListWidget\0"
    "onPlayerAddRequsted\0\0playerId\0"
    "onPlayerRemoveRequested\0onCreatorsListLoaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserPlaceCreatorsListWidget[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void UserPlaceCreatorsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserPlaceCreatorsListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPlayerAddRequsted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onPlayerRemoveRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onCreatorsListLoaded(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserPlaceCreatorsListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<CreatorsListWidget::staticMetaObject>(),
    qt_meta_stringdata_UserPlaceCreatorsListWidget.data,
    qt_meta_data_UserPlaceCreatorsListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserPlaceCreatorsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserPlaceCreatorsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserPlaceCreatorsListWidget.stringdata0))
        return static_cast<void*>(this);
    return CreatorsListWidget::qt_metacast(_clname);
}

int UserPlaceCreatorsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CreatorsListWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_GroupPlaceCreatorsListWidget_t {
    QByteArrayData data[5];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupPlaceCreatorsListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupPlaceCreatorsListWidget_t qt_meta_stringdata_GroupPlaceCreatorsListWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "GroupPlaceCreatorsListWidget"
QT_MOC_LITERAL(1, 29, 19), // "onPlayerAddRequsted"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "playerId"
QT_MOC_LITERAL(4, 59, 23) // "onPlayerRemoveRequested"

    },
    "GroupPlaceCreatorsListWidget\0"
    "onPlayerAddRequsted\0\0playerId\0"
    "onPlayerRemoveRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupPlaceCreatorsListWidget[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void GroupPlaceCreatorsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupPlaceCreatorsListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPlayerAddRequsted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onPlayerRemoveRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GroupPlaceCreatorsListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<CreatorsListWidget::staticMetaObject>(),
    qt_meta_stringdata_GroupPlaceCreatorsListWidget.data,
    qt_meta_data_GroupPlaceCreatorsListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GroupPlaceCreatorsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupPlaceCreatorsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupPlaceCreatorsListWidget.stringdata0))
        return static_cast<void*>(this);
    return CreatorsListWidget::qt_metacast(_clname);
}

int GroupPlaceCreatorsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CreatorsListWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_RobloxTeamCreateWidget_t {
    QByteArrayData data[20];
    char stringdata0[412];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxTeamCreateWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxTeamCreateWidget_t qt_meta_stringdata_RobloxTeamCreateWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RobloxTeamCreateWidget"
QT_MOC_LITERAL(1, 23, 23), // "onAuthenticationChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 20), // "onLoginButtonClicked"
QT_MOC_LITERAL(4, 69, 22), // "onPublishButtonClicked"
QT_MOC_LITERAL(5, 92, 23), // "onPublishDialogFinished"
QT_MOC_LITERAL(6, 116, 6), // "status"
QT_MOC_LITERAL(7, 123, 21), // "onTurnOnButtonClicked"
QT_MOC_LITERAL(8, 145, 25), // "onBottomMoreButtonClicked"
QT_MOC_LITERAL(9, 171, 32), // "onFriendsInviteEditReturnPressed"
QT_MOC_LITERAL(10, 204, 31), // "onCompleterPopupMenuItemClicked"
QT_MOC_LITERAL(11, 236, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 248, 12), // "clickedIndex"
QT_MOC_LITERAL(13, 261, 28), // "onRemoveCloudEditorRequested"
QT_MOC_LITERAL(14, 290, 6), // "userId"
QT_MOC_LITERAL(15, 297, 24), // "onRemoveCloudEditConfirm"
QT_MOC_LITERAL(16, 322, 23), // "onRemoveCloudEditCancel"
QT_MOC_LITERAL(17, 346, 23), // "updatePlayerFriendsInfo"
QT_MOC_LITERAL(18, 370, 26), // "updateCurrentWidgetInStack"
QT_MOC_LITERAL(19, 397, 14) // "resetDataModel"

    },
    "RobloxTeamCreateWidget\0onAuthenticationChanged\0"
    "\0onLoginButtonClicked\0onPublishButtonClicked\0"
    "onPublishDialogFinished\0status\0"
    "onTurnOnButtonClicked\0onBottomMoreButtonClicked\0"
    "onFriendsInviteEditReturnPressed\0"
    "onCompleterPopupMenuItemClicked\0"
    "QModelIndex\0clickedIndex\0"
    "onRemoveCloudEditorRequested\0userId\0"
    "onRemoveCloudEditConfirm\0"
    "onRemoveCloudEditCancel\0updatePlayerFriendsInfo\0"
    "updateCurrentWidgetInStack\0resetDataModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxTeamCreateWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       3,    0,   87,    2, 0x08 /* Private */,
       4,    0,   88,    2, 0x08 /* Private */,
       5,    1,   89,    2, 0x08 /* Private */,
       7,    0,   92,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      18,    0,  104,    2, 0x00 /* Private */,
      19,    0,  105,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RobloxTeamCreateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxTeamCreateWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAuthenticationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onLoginButtonClicked(); break;
        case 2: _t->onPublishButtonClicked(); break;
        case 3: _t->onPublishDialogFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onTurnOnButtonClicked(); break;
        case 5: _t->onBottomMoreButtonClicked(); break;
        case 6: _t->onFriendsInviteEditReturnPressed(); break;
        case 7: _t->onCompleterPopupMenuItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->onRemoveCloudEditorRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onRemoveCloudEditConfirm(); break;
        case 10: _t->onRemoveCloudEditCancel(); break;
        case 11: _t->updatePlayerFriendsInfo(); break;
        case 12: _t->updateCurrentWidgetInStack(); break;
        case 13: _t->resetDataModel(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxTeamCreateWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RobloxTeamCreateWidget.data,
    qt_meta_data_RobloxTeamCreateWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxTeamCreateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxTeamCreateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTeamCreateWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::TeamCreate"))
        return static_cast< Ui::TeamCreate*>(this);
    return QWidget::qt_metacast(_clname);
}

int RobloxTeamCreateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
