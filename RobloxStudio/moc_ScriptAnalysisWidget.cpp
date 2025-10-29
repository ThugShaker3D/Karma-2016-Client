/****************************************************************************
** Meta object code from reading C++ file 'ScriptAnalysisWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "ScriptAnalysisWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptAnalysisWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptAnalysisTreeWidget_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptAnalysisTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptAnalysisTreeWidget_t qt_meta_stringdata_ScriptAnalysisTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ScriptAnalysisTreeWidget"
QT_MOC_LITERAL(1, 25, 14), // "resultsUpdated"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "onItemActivated"
QT_MOC_LITERAL(4, 57, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 74, 5), // "pItem"
QT_MOC_LITERAL(6, 80, 14), // "updateItemName"
QT_MOC_LITERAL(7, 95, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 107, 5) // "index"

    },
    "ScriptAnalysisTreeWidget\0resultsUpdated\0"
    "\0onItemActivated\0QTreeWidgetItem*\0"
    "pItem\0updateItemName\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptAnalysisTreeWidget[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   33,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void ScriptAnalysisTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScriptAnalysisTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resultsUpdated(); break;
        case 1: _t->onItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->updateItemName((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScriptAnalysisTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptAnalysisTreeWidget::resultsUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptAnalysisTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_ScriptAnalysisTreeWidget.data,
    qt_meta_data_ScriptAnalysisTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptAnalysisTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptAnalysisTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptAnalysisTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int ScriptAnalysisTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
void ScriptAnalysisTreeWidget::resultsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ScriptAnalysisWidget_t {
    QByteArrayData data[20];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptAnalysisWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptAnalysisWidget_t qt_meta_stringdata_ScriptAnalysisWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ScriptAnalysisWidget"
QT_MOC_LITERAL(1, 21, 16), // "onResultsUpdated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "onToolButtonClicked"
QT_MOC_LITERAL(4, 59, 17), // "onCheckBoxClicked"
QT_MOC_LITERAL(5, 77, 19), // "onCurrentDocChanged"
QT_MOC_LITERAL(6, 97, 19), // "onNamedAssetsLoaded"
QT_MOC_LITERAL(7, 117, 6), // "gameId"
QT_MOC_LITERAL(8, 124, 20), // "onNamedAssetModified"
QT_MOC_LITERAL(9, 145, 9), // "assetName"
QT_MOC_LITERAL(10, 155, 24), // "analyzeScriptAssetSource"
QT_MOC_LITERAL(11, 180, 15), // "scriptAssetName"
QT_MOC_LITERAL(12, 196, 15), // "RBX::HttpFuture"
QT_MOC_LITERAL(13, 212, 6), // "future"
QT_MOC_LITERAL(14, 219, 21), // "updateResultsInternal"
QT_MOC_LITERAL(15, 241, 25), // "shared_ptr<RBX::Instance>"
QT_MOC_LITERAL(16, 267, 6), // "script"
QT_MOC_LITERAL(17, 274, 27), // "RBX::ScriptAnalyzer::Result"
QT_MOC_LITERAL(18, 302, 6), // "result"
QT_MOC_LITERAL(19, 309, 23) // "analyzeAndUpdateResults"

    },
    "ScriptAnalysisWidget\0onResultsUpdated\0"
    "\0onToolButtonClicked\0onCheckBoxClicked\0"
    "onCurrentDocChanged\0onNamedAssetsLoaded\0"
    "gameId\0onNamedAssetModified\0assetName\0"
    "analyzeScriptAssetSource\0scriptAssetName\0"
    "RBX::HttpFuture\0future\0updateResultsInternal\0"
    "shared_ptr<RBX::Instance>\0script\0"
    "RBX::ScriptAnalyzer::Result\0result\0"
    "analyzeAndUpdateResults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptAnalysisWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       8,    2,   66,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    2,   71,    2, 0x00 /* Private */,
      14,    2,   76,    2, 0x00 /* Private */,
      19,    1,   81,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    9,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void ScriptAnalysisWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScriptAnalysisWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onResultsUpdated(); break;
        case 1: _t->onToolButtonClicked(); break;
        case 2: _t->onCheckBoxClicked(); break;
        case 3: _t->onCurrentDocChanged(); break;
        case 4: _t->onNamedAssetsLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onNamedAssetModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->analyzeScriptAssetSource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        case 7: _t->updateResultsInternal((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])),(*reinterpret_cast< const RBX::ScriptAnalyzer::Result(*)>(_a[2]))); break;
        case 8: _t->analyzeAndUpdateResults((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptAnalysisWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ScriptAnalysisWidget.data,
    qt_meta_data_ScriptAnalysisWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptAnalysisWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptAnalysisWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptAnalysisWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScriptAnalysisWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
