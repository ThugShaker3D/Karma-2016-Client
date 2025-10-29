/****************************************************************************
** Meta object code from reading C++ file 'RobloxStudioVerbs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxStudioVerbs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxStudioVerbs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PasteVerb_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PasteVerb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PasteVerb_t qt_meta_stringdata_PasteVerb = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PasteVerb"
QT_MOC_LITERAL(1, 10, 19), // "onClipboardModified"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "PasteVerb\0onClipboardModified\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PasteVerb[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PasteVerb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PasteVerb *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onClipboardModified(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PasteVerb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PasteVerb.data,
    qt_meta_data_PasteVerb,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PasteVerb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PasteVerb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PasteVerb.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::Verb"))
        return static_cast< RBX::Verb*>(this);
    return QObject::qt_metacast(_clname);
}

int PasteVerb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_DuplicateSelectionVerb_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DuplicateSelectionVerb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DuplicateSelectionVerb_t qt_meta_stringdata_DuplicateSelectionVerb = {
    {
QT_MOC_LITERAL(0, 0, 22) // "DuplicateSelectionVerb"

    },
    "DuplicateSelectionVerb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DuplicateSelectionVerb[] = {

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

void DuplicateSelectionVerb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DuplicateSelectionVerb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DuplicateSelectionVerb.data,
    qt_meta_data_DuplicateSelectionVerb,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DuplicateSelectionVerb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DuplicateSelectionVerb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DuplicateSelectionVerb.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::EditSelectionVerb"))
        return static_cast< RBX::EditSelectionVerb*>(this);
    return QObject::qt_metacast(_clname);
}

int DuplicateSelectionVerb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CreateNewLinkedSourceVerb_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateNewLinkedSourceVerb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateNewLinkedSourceVerb_t qt_meta_stringdata_CreateNewLinkedSourceVerb = {
    {
QT_MOC_LITERAL(0, 0, 25) // "CreateNewLinkedSourceVerb"

    },
    "CreateNewLinkedSourceVerb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateNewLinkedSourceVerb[] = {

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

void CreateNewLinkedSourceVerb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CreateNewLinkedSourceVerb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CreateNewLinkedSourceVerb.data,
    qt_meta_data_CreateNewLinkedSourceVerb,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateNewLinkedSourceVerb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateNewLinkedSourceVerb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateNewLinkedSourceVerb.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::Verb"))
        return static_cast< RBX::Verb*>(this);
    return QObject::qt_metacast(_clname);
}

int CreateNewLinkedSourceVerb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ScreenshotVerb_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenshotVerb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenshotVerb_t qt_meta_stringdata_ScreenshotVerb = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScreenshotVerb"
QT_MOC_LITERAL(1, 15, 22), // "showPostImageWebDialog"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20) // "copyImageToClipboard"

    },
    "ScreenshotVerb\0showPostImageWebDialog\0"
    "\0copyImageToClipboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenshotVerb[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScreenshotVerb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenshotVerb *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showPostImageWebDialog(); break;
        case 1: _t->copyImageToClipboard(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ScreenshotVerb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ScreenshotVerb.data,
    qt_meta_data_ScreenshotVerb,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScreenshotVerb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenshotVerb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenshotVerb.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::Verb"))
        return static_cast< RBX::Verb*>(this);
    return QObject::qt_metacast(_clname);
}

int ScreenshotVerb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_OpenToolBoxWithOptionsVerb_t {
    QByteArrayData data[4];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenToolBoxWithOptionsVerb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenToolBoxWithOptionsVerb_t qt_meta_stringdata_OpenToolBoxWithOptionsVerb = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OpenToolBoxWithOptionsVerb"
QT_MOC_LITERAL(1, 27, 27), // "handleDockVisibilityChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 9) // "isVisible"

    },
    "OpenToolBoxWithOptionsVerb\0"
    "handleDockVisibilityChanged\0\0isVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenToolBoxWithOptionsVerb[] = {

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
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void OpenToolBoxWithOptionsVerb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenToolBoxWithOptionsVerb *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleDockVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenToolBoxWithOptionsVerb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenToolBoxWithOptionsVerb.data,
    qt_meta_data_OpenToolBoxWithOptionsVerb,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenToolBoxWithOptionsVerb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenToolBoxWithOptionsVerb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenToolBoxWithOptionsVerb.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::Verb"))
        return static_cast< RBX::Verb*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenToolBoxWithOptionsVerb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ExportSelectionVerb_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExportSelectionVerb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExportSelectionVerb_t qt_meta_stringdata_ExportSelectionVerb = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ExportSelectionVerb"

    },
    "ExportSelectionVerb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExportSelectionVerb[] = {

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

void ExportSelectionVerb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ExportSelectionVerb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ExportSelectionVerb.data,
    qt_meta_data_ExportSelectionVerb,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExportSelectionVerb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExportSelectionVerb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExportSelectionVerb.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::Verb"))
        return static_cast< RBX::Verb*>(this);
    return QObject::qt_metacast(_clname);
}

int ExportSelectionVerb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ExportPlaceVerb_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExportPlaceVerb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExportPlaceVerb_t qt_meta_stringdata_ExportPlaceVerb = {
    {
QT_MOC_LITERAL(0, 0, 15) // "ExportPlaceVerb"

    },
    "ExportPlaceVerb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExportPlaceVerb[] = {

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

void ExportPlaceVerb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ExportPlaceVerb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ExportPlaceVerb.data,
    qt_meta_data_ExportPlaceVerb,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExportPlaceVerb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExportPlaceVerb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExportPlaceVerb.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RBX::Verb"))
        return static_cast< RBX::Verb*>(this);
    return QObject::qt_metacast(_clname);
}

int ExportPlaceVerb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
