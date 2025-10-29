/****************************************************************************
** Meta object code from reading C++ file 'RobloxCustomWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "RobloxCustomWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxCustomWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PickerFrame_t {
    QByteArrayData data[4];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PickerFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PickerFrame_t qt_meta_stringdata_PickerFrame = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PickerFrame"
QT_MOC_LITERAL(1, 12, 7), // "changed"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12) // "selectedItem"

    },
    "PickerFrame\0changed\0\0selectedItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PickerFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void PickerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PickerFrame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PickerFrame::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PickerFrame::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PickerFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_PickerFrame.data,
    qt_meta_data_PickerFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PickerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PickerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PickerFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PickerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PickerFrame::changed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ColorPickerFrame_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPickerFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPickerFrame_t qt_meta_stringdata_ColorPickerFrame = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ColorPickerFrame"
QT_MOC_LITERAL(1, 17, 24), // "currentBrickColorChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "color"
QT_MOC_LITERAL(4, 49, 19) // "currentColorChanged"

    },
    "ColorPickerFrame\0currentBrickColorChanged\0"
    "\0color\0currentColorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPickerFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void ColorPickerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorPickerFrame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentBrickColorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorPickerFrame::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPickerFrame::currentBrickColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorPickerFrame::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPickerFrame::currentColorChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorPickerFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<PickerFrame::staticMetaObject>(),
    qt_meta_stringdata_ColorPickerFrame.data,
    qt_meta_data_ColorPickerFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorPickerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPickerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPickerFrame.stringdata0))
        return static_cast<void*>(this);
    return PickerFrame::qt_metacast(_clname);
}

int ColorPickerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PickerFrame::qt_metacall(_c, _id, _a);
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
void ColorPickerFrame::currentBrickColorChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColorPickerFrame::currentColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MaterialPickerFrame_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaterialPickerFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaterialPickerFrame_t qt_meta_stringdata_MaterialPickerFrame = {
    {
QT_MOC_LITERAL(0, 0, 19), // "MaterialPickerFrame"
QT_MOC_LITERAL(1, 20, 22), // "currentMaterialChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8) // "material"

    },
    "MaterialPickerFrame\0currentMaterialChanged\0"
    "\0material"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaterialPickerFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void MaterialPickerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MaterialPickerFrame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentMaterialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MaterialPickerFrame::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaterialPickerFrame::currentMaterialChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MaterialPickerFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<PickerFrame::staticMetaObject>(),
    qt_meta_stringdata_MaterialPickerFrame.data,
    qt_meta_data_MaterialPickerFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MaterialPickerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaterialPickerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaterialPickerFrame.stringdata0))
        return static_cast<void*>(this);
    return PickerFrame::qt_metacast(_clname);
}

int MaterialPickerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PickerFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MaterialPickerFrame::currentMaterialChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CustomToolButton_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomToolButton_t qt_meta_stringdata_CustomToolButton = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CustomToolButton"
QT_MOC_LITERAL(1, 17, 7), // "changed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "selectedItem"
QT_MOC_LITERAL(4, 39, 10), // "frameShown"
QT_MOC_LITERAL(5, 50, 11) // "frameHidden"

    },
    "CustomToolButton\0changed\0\0selectedItem\0"
    "frameShown\0frameHidden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomToolButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomToolButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->frameShown(); break;
        case 2: _t->frameHidden(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomToolButton::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomToolButton::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CustomToolButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomToolButton::frameShown)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CustomToolButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomToolButton::frameHidden)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomToolButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolButton::staticMetaObject>(),
    qt_meta_stringdata_CustomToolButton.data,
    qt_meta_data_CustomToolButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomToolButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int CustomToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
void CustomToolButton::changed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CustomToolButton::frameShown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CustomToolButton::frameHidden()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_FillColorPickerToolButton_t {
    QByteArrayData data[5];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FillColorPickerToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FillColorPickerToolButton_t qt_meta_stringdata_FillColorPickerToolButton = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FillColorPickerToolButton"
QT_MOC_LITERAL(1, 26, 20), // "onPickerFrameChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 13), // "selectedColor"
QT_MOC_LITERAL(4, 62, 22) // "onPickerFrameDestroyed"

    },
    "FillColorPickerToolButton\0"
    "onPickerFrameChanged\0\0selectedColor\0"
    "onPickerFrameDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FillColorPickerToolButton[] = {

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
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void FillColorPickerToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FillColorPickerToolButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPickerFrameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onPickerFrameDestroyed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FillColorPickerToolButton::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomToolButton::staticMetaObject>(),
    qt_meta_stringdata_FillColorPickerToolButton.data,
    qt_meta_data_FillColorPickerToolButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FillColorPickerToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FillColorPickerToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FillColorPickerToolButton.stringdata0))
        return static_cast<void*>(this);
    return CustomToolButton::qt_metacast(_clname);
}

int FillColorPickerToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomToolButton::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PopupLaunchEditor_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PopupLaunchEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PopupLaunchEditor_t qt_meta_stringdata_PopupLaunchEditor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PopupLaunchEditor"
QT_MOC_LITERAL(1, 18, 15), // "onButtonClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14) // "onEditFinished"

    },
    "PopupLaunchEditor\0onButtonClicked\0\0"
    "onEditFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PopupLaunchEditor[] = {

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

void PopupLaunchEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PopupLaunchEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButtonClicked(); break;
        case 1: _t->onEditFinished(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PopupLaunchEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PopupLaunchEditor.data,
    qt_meta_data_PopupLaunchEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PopupLaunchEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PopupLaunchEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PopupLaunchEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PopupLaunchEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SignalConnector_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignalConnector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignalConnector_t qt_meta_stringdata_SignalConnector = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SignalConnector"
QT_MOC_LITERAL(1, 16, 15), // "genericSlotArg1"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "SignalConnector\0genericSlotArg1\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignalConnector[] = {

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
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void SignalConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignalConnector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->genericSlotArg1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SignalConnector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SignalConnector.data,
    qt_meta_data_SignalConnector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SignalConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignalConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SignalConnector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SignalConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ImagePickerWidget_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImagePickerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImagePickerWidget_t qt_meta_stringdata_ImagePickerWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ImagePickerWidget"
QT_MOC_LITERAL(1, 18, 19), // "acceptLineEditValue"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "handleListItemClicked"
QT_MOC_LITERAL(4, 61, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 78, 4) // "item"

    },
    "ImagePickerWidget\0acceptLineEditValue\0"
    "\0handleListItemClicked\0QListWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImagePickerWidget[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x00 /* Private */,
       3,    1,   25,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void ImagePickerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImagePickerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->acceptLineEditValue(); break;
        case 1: _t->handleListItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImagePickerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<PickerFrame::staticMetaObject>(),
    qt_meta_stringdata_ImagePickerWidget.data,
    qt_meta_data_ImagePickerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImagePickerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImagePickerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImagePickerWidget.stringdata0))
        return static_cast<void*>(this);
    return PickerFrame::qt_metacast(_clname);
}

int ImagePickerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PickerFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_NumberSequencePropertyWidget_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NumberSequencePropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NumberSequencePropertyWidget_t qt_meta_stringdata_NumberSequencePropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "NumberSequencePropertyWidget"
QT_MOC_LITERAL(1, 29, 6), // "onText"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8) // "onButton"

    },
    "NumberSequencePropertyWidget\0onText\0"
    "\0onButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NumberSequencePropertyWidget[] = {

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
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void NumberSequencePropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NumberSequencePropertyWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onText(); break;
        case 1: _t->onButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NumberSequencePropertyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NumberSequencePropertyWidget.data,
    qt_meta_data_NumberSequencePropertyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NumberSequencePropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NumberSequencePropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NumberSequencePropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NumberSequencePropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PrimaryPartSelectionEditor_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrimaryPartSelectionEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrimaryPartSelectionEditor_t qt_meta_stringdata_PrimaryPartSelectionEditor = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PrimaryPartSelectionEditor"
QT_MOC_LITERAL(1, 27, 15), // "onButtonClicked"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "PrimaryPartSelectionEditor\0onButtonClicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrimaryPartSelectionEditor[] = {

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

void PrimaryPartSelectionEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrimaryPartSelectionEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButtonClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PrimaryPartSelectionEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PrimaryPartSelectionEditor.data,
    qt_meta_data_PrimaryPartSelectionEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrimaryPartSelectionEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrimaryPartSelectionEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrimaryPartSelectionEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "InstanceSelectionHandler"))
        return static_cast< InstanceSelectionHandler*>(this);
    return QWidget::qt_metacast(_clname);
}

int PrimaryPartSelectionEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
