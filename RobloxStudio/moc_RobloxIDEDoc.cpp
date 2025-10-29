/****************************************************************************
** Meta object code from reading C++ file 'RobloxIDEDoc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxIDEDoc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxIDEDoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WorkspaceAnnouncementTooltip_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorkspaceAnnouncementTooltip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorkspaceAnnouncementTooltip_t qt_meta_stringdata_WorkspaceAnnouncementTooltip = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WorkspaceAnnouncementTooltip"
QT_MOC_LITERAL(1, 29, 9), // "closeText"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "WorkspaceAnnouncementTooltip\0closeText\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorkspaceAnnouncementTooltip[] = {

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

void WorkspaceAnnouncementTooltip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorkspaceAnnouncementTooltip *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeText(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WorkspaceAnnouncementTooltip::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_WorkspaceAnnouncementTooltip.data,
    qt_meta_data_WorkspaceAnnouncementTooltip,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorkspaceAnnouncementTooltip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkspaceAnnouncementTooltip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorkspaceAnnouncementTooltip.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WorkspaceAnnouncementTooltip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_RobloxIDEDoc_t {
    QByteArrayData data[19];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobloxIDEDoc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobloxIDEDoc_t qt_meta_stringdata_RobloxIDEDoc = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RobloxIDEDoc"
QT_MOC_LITERAL(1, 13, 15), // "exportSelection"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "std::string"
QT_MOC_LITERAL(4, 42, 8), // "filePath"
QT_MOC_LITERAL(5, 51, 21), // "RBX::ExporterSaveType"
QT_MOC_LITERAL(6, 73, 10), // "exportType"
QT_MOC_LITERAL(7, 84, 11), // "exportPlace"
QT_MOC_LITERAL(8, 96, 17), // "updateFromPlaceID"
QT_MOC_LITERAL(9, 114, 7), // "placeId"
QT_MOC_LITERAL(10, 122, 18), // "refreshDisplayName"
QT_MOC_LITERAL(11, 141, 31), // "onDelayedInitializeDebuggerData"
QT_MOC_LITERAL(12, 173, 21), // "showImportAssetDialog"
QT_MOC_LITERAL(13, 195, 17), // "resumeFunctionVar"
QT_MOC_LITERAL(14, 213, 16), // "errorFunctionVar"
QT_MOC_LITERAL(15, 230, 14), // "updateUndoRedo"
QT_MOC_LITERAL(16, 245, 15), // "placeNameLoaded"
QT_MOC_LITERAL(17, 261, 4), // "json"
QT_MOC_LITERAL(18, 266, 14) // "syncPlayerName"

    },
    "RobloxIDEDoc\0exportSelection\0\0std::string\0"
    "filePath\0RBX::ExporterSaveType\0"
    "exportType\0exportPlace\0updateFromPlaceID\0"
    "placeId\0refreshDisplayName\0"
    "onDelayedInitializeDebuggerData\0"
    "showImportAssetDialog\0resumeFunctionVar\0"
    "errorFunctionVar\0updateUndoRedo\0"
    "placeNameLoaded\0json\0syncPlayerName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobloxIDEDoc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a /* Public */,
       1,    1,   74,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   77,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   78,    2, 0x0a /* Public */,
       8,    1,   79,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    2,   84,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   89,    2, 0x00 /* Private */,
      16,    1,   90,    2, 0x00 /* Private */,
      18,    0,   93,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,   13,   14,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,

       0        // eod
};

void RobloxIDEDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobloxIDEDoc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->exportSelection((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< RBX::ExporterSaveType(*)>(_a[2]))); break;
        case 1: _t->exportSelection((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->exportSelection(); break;
        case 3: _t->exportPlace(); break;
        case 4: _t->updateFromPlaceID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->refreshDisplayName(); break;
        case 6: _t->onDelayedInitializeDebuggerData(); break;
        case 7: _t->showImportAssetDialog((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 8: _t->updateUndoRedo(); break;
        case 9: _t->placeNameLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->syncPlayerName(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobloxIDEDoc::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobloxIDEDoc.data,
    qt_meta_data_RobloxIDEDoc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobloxIDEDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobloxIDEDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxIDEDoc.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RobloxBasicDoc"))
        return static_cast< RobloxBasicDoc*>(this);
    if (!strcmp(_clname, "FW::FileWatchListener"))
        return static_cast< FW::FileWatchListener*>(this);
    return QObject::qt_metacast(_clname);
}

int RobloxIDEDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
