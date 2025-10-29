/****************************************************************************
** Meta object code from reading C++ file 'SplineEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "SplineEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SplineEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SplineEditor_t {
    QByteArrayData data[11];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplineEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplineEditor_t qt_meta_stringdata_SplineEditor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SplineEditor"
QT_MOC_LITERAL(1, 13, 12), // "splineEdited"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "undoPoint"
QT_MOC_LITERAL(4, 37, 8), // "finished"
QT_MOC_LITERAL(5, 46, 11), // "refreshData"
QT_MOC_LITERAL(6, 58, 2), // "sd"
QT_MOC_LITERAL(7, 61, 18), // "onPointDataChanged"
QT_MOC_LITERAL(8, 80, 15), // "onKillPtClicked"
QT_MOC_LITERAL(9, 96, 7), // "onClose"
QT_MOC_LITERAL(10, 104, 7) // "onReset"

    },
    "SplineEditor\0splineEdited\0\0undoPoint\0"
    "finished\0refreshData\0sd\0onPointDataChanged\0"
    "onKillPtClicked\0onClose\0onReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplineEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::VoidStar,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SplineEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SplineEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->splineEdited((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->refreshData((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->onPointDataChanged(); break;
        case 4: _t->onKillPtClicked(); break;
        case 5: _t->onClose(); break;
        case 6: _t->onReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SplineEditor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineEditor::splineEdited)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SplineEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineEditor::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SplineEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_SplineEditor.data,
    qt_meta_data_SplineEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SplineEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplineEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplineEditor.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int SplineEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SplineEditor::splineEdited(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SplineEditor::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_SplineEditorCanvas_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplineEditorCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplineEditorCanvas_t qt_meta_stringdata_SplineEditorCanvas = {
    {
QT_MOC_LITERAL(0, 0, 18) // "SplineEditorCanvas"

    },
    "SplineEditorCanvas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplineEditorCanvas[] = {

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

void SplineEditorCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SplineEditorCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SplineEditorCanvas.data,
    qt_meta_data_SplineEditorCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SplineEditorCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplineEditorCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplineEditorCanvas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SplineEditorCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SplineEditorAdapter_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplineEditorAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplineEditorAdapter_t qt_meta_stringdata_SplineEditorAdapter = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SplineEditorAdapter"
QT_MOC_LITERAL(1, 20, 8), // "onEdited"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "undo"
QT_MOC_LITERAL(4, 35, 8), // "onClosed"
QT_MOC_LITERAL(5, 44, 13), // "onPropChanged"
QT_MOC_LITERAL(6, 58, 42), // "const RBX::Reflection::Proper..."
QT_MOC_LITERAL(7, 101, 2), // "pd"
QT_MOC_LITERAL(8, 104, 17), // "onAncestryChanged"
QT_MOC_LITERAL(9, 122, 25) // "shared_ptr<RBX::Instance>"

    },
    "SplineEditorAdapter\0onEdited\0\0undo\0"
    "onClosed\0onPropChanged\0"
    "const RBX::Reflection::PropertyDescriptor*\0"
    "pd\0onAncestryChanged\0shared_ptr<RBX::Instance>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplineEditorAdapter[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       8,    2,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,    2,    2,

       0        // eod
};

void SplineEditorAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SplineEditorAdapter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onEdited((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onClosed(); break;
        case 2: _t->onPropChanged((*reinterpret_cast< const RBX::Reflection::PropertyDescriptor*(*)>(_a[1]))); break;
        case 3: _t->onAncestryChanged((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])),(*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SplineEditorAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SplineEditorAdapter.data,
    qt_meta_data_SplineEditorAdapter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SplineEditorAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplineEditorAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplineEditorAdapter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SplineEditorAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
