/****************************************************************************
** Meta object code from reading C++ file 'RobloxGameExplorer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxGameExplorer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxGameExplorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddImageDialog_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddImageDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddImageDialog_t qt_meta_stringdata_AddImageDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AddImageDialog"
QT_MOC_LITERAL(1, 15, 12), // "validateName"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "validateImageFile"
QT_MOC_LITERAL(4, 47, 16), // "openFileSelector"
QT_MOC_LITERAL(5, 64, 19) // "createButtonClicked"

    },
    "AddImageDialog\0validateName\0\0"
    "validateImageFile\0openFileSelector\0"
    "createButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddImageDialog[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddImageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddImageDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->validateName();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->validateImageFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->openFileSelector(); break;
        case 3: _t->createButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddImageDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AddImageDialog.data,
    qt_meta_data_AddImageDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddImageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddImageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddImageDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AddImageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AbortableLineEdit_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbortableLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbortableLineEdit_t qt_meta_stringdata_AbortableLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 17) // "AbortableLineEdit"

    },
    "AbortableLineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbortableLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AbortableLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject AbortableLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_AbortableLineEdit.data,
    qt_meta_data_AbortableLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbortableLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbortableLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbortableLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int AbortableLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RobloxGameExplorer_t {
    QByteArrayData data[38];
    char stringdata0[634];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxGameExplorer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxGameExplorer_t qt_meta_stringdata_RobloxGameExplorer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RobloxGameExplorer"
QT_MOC_LITERAL(1, 19, 17), // "namedAssetsLoaded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "gameId"
QT_MOC_LITERAL(4, 45, 18), // "namedAssetModified"
QT_MOC_LITERAL(5, 64, 9), // "assetName"
QT_MOC_LITERAL(6, 74, 13), // "nonGameLoaded"
QT_MOC_LITERAL(7, 88, 18), // "openGameFromGameId"
QT_MOC_LITERAL(8, 107, 19), // "openGameFromPlaceId"
QT_MOC_LITERAL(9, 127, 7), // "placeId"
QT_MOC_LITERAL(10, 135, 13), // "onCloseIdeDoc"
QT_MOC_LITERAL(11, 149, 20), // "publishGameToNewSlot"
QT_MOC_LITERAL(12, 170, 25), // "publishGameToNewGroupSlot"
QT_MOC_LITERAL(13, 196, 7), // "groupId"
QT_MOC_LITERAL(14, 204, 25), // "publishGameToExistingSlot"
QT_MOC_LITERAL(15, 230, 17), // "reloadDataFromWeb"
QT_MOC_LITERAL(16, 248, 20), // "doOpenGameFromGameId"
QT_MOC_LITERAL(17, 269, 20), // "failedToLoadSettings"
QT_MOC_LITERAL(18, 290, 20), // "originatingSessionId"
QT_MOC_LITERAL(19, 311, 22), // "populateWithLoadedData"
QT_MOC_LITERAL(20, 334, 8), // "category"
QT_MOC_LITERAL(21, 343, 25), // "afterPlacesLoadedFinished"
QT_MOC_LITERAL(22, 369, 24), // "afterNamedAssetsFinished"
QT_MOC_LITERAL(23, 394, 23), // "refreshNamedScriptIcons"
QT_MOC_LITERAL(24, 418, 19), // "afterBadgesFinished"
QT_MOC_LITERAL(25, 438, 23), // "thumbnailLoadedForImage"
QT_MOC_LITERAL(26, 462, 11), // "QModelIndex"
QT_MOC_LITERAL(27, 474, 4), // "item"
QT_MOC_LITERAL(28, 479, 6), // "future"
QT_MOC_LITERAL(29, 486, 18), // "doubleClickHandler"
QT_MOC_LITERAL(30, 505, 10), // "modelIndex"
QT_MOC_LITERAL(31, 516, 18), // "contextMenuHandler"
QT_MOC_LITERAL(32, 535, 10), // "clickPoint"
QT_MOC_LITERAL(33, 546, 18), // "itemChangedHandler"
QT_MOC_LITERAL(34, 565, 14), // "QStandardItem*"
QT_MOC_LITERAL(35, 580, 11), // "updatedItem"
QT_MOC_LITERAL(36, 592, 17), // "handleNameUpdates"
QT_MOC_LITERAL(37, 610, 23) // "doneEditingUniverseName"

    },
    "RobloxGameExplorer\0namedAssetsLoaded\0"
    "\0gameId\0namedAssetModified\0assetName\0"
    "nonGameLoaded\0openGameFromGameId\0"
    "openGameFromPlaceId\0placeId\0onCloseIdeDoc\0"
    "publishGameToNewSlot\0publishGameToNewGroupSlot\0"
    "groupId\0publishGameToExistingSlot\0"
    "reloadDataFromWeb\0doOpenGameFromGameId\0"
    "failedToLoadSettings\0originatingSessionId\0"
    "populateWithLoadedData\0category\0"
    "afterPlacesLoadedFinished\0"
    "afterNamedAssetsFinished\0"
    "refreshNamedScriptIcons\0afterBadgesFinished\0"
    "thumbnailLoadedForImage\0QModelIndex\0"
    "item\0future\0doubleClickHandler\0"
    "modelIndex\0contextMenuHandler\0clickPoint\0"
    "itemChangedHandler\0QStandardItem*\0"
    "updatedItem\0handleNameUpdates\0"
    "doneEditingUniverseName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxGameExplorer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       4,    2,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  137,    2, 0x0a /* Public */,
       7,    1,  138,    2, 0x0a /* Public */,
       8,    1,  141,    2, 0x0a /* Public */,
      10,    0,  144,    2, 0x0a /* Public */,
      11,    0,  145,    2, 0x0a /* Public */,
      12,    1,  146,    2, 0x0a /* Public */,
      14,    1,  149,    2, 0x0a /* Public */,
      15,    0,  152,    2, 0x0a /* Public */,
      16,    1,  153,    2, 0x08 /* Private */,
      17,    1,  156,    2, 0x08 /* Private */,
      19,    2,  159,    2, 0x08 /* Private */,
      21,    1,  164,    2, 0x08 /* Private */,
      22,    1,  167,    2, 0x08 /* Private */,
      23,    1,  170,    2, 0x08 /* Private */,
      24,    1,  173,    2, 0x08 /* Private */,
      25,    3,  176,    2, 0x08 /* Private */,
      29,    1,  183,    2, 0x08 /* Private */,
      31,    1,  186,    2, 0x08 /* Private */,
      33,    1,  189,    2, 0x08 /* Private */,
      36,    0,  192,    2, 0x08 /* Private */,
      37,    0,  193,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   20,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 26, QMetaType::QVariant,   18,   27,   28,
    QMetaType::Void, 0x80000000 | 26,   30,
    QMetaType::Void, QMetaType::QPoint,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RobloxGameExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxGameExplorer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->namedAssetsLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->namedAssetModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->nonGameLoaded(); break;
        case 3: _t->openGameFromGameId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->openGameFromPlaceId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onCloseIdeDoc(); break;
        case 6: _t->publishGameToNewSlot(); break;
        case 7: _t->publishGameToNewGroupSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->publishGameToExistingSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->reloadDataFromWeb(); break;
        case 10: _t->doOpenGameFromGameId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->failedToLoadSettings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->populateWithLoadedData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->afterPlacesLoadedFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->afterNamedAssetsFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->refreshNamedScriptIcons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->afterBadgesFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->thumbnailLoadedForImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 18: _t->doubleClickHandler((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 19: _t->contextMenuHandler((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->itemChangedHandler((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 21: _t->handleNameUpdates(); break;
        case 22: _t->doneEditingUniverseName(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobloxGameExplorer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxGameExplorer::namedAssetsLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RobloxGameExplorer::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobloxGameExplorer::namedAssetModified)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxGameExplorer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_RobloxGameExplorer.data,
    qt_meta_data_RobloxGameExplorer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxGameExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxGameExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxGameExplorer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::AssetFetchMediator"))
        return static_cast< RBX::AssetFetchMediator*>(this);
    return QTreeView::qt_metacast(_clname);
}

int RobloxGameExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void RobloxGameExplorer::namedAssetsLoaded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobloxGameExplorer::namedAssetModified(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
