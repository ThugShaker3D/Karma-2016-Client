/****************************************************************************
** Meta object code from reading C++ file 'FindDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "FindDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FindDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BasicFindDialog_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BasicFindDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BasicFindDialog_t qt_meta_stringdata_BasicFindDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BasicFindDialog"
QT_MOC_LITERAL(1, 16, 8), // "setFocus"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "findNext"
QT_MOC_LITERAL(4, 35, 12), // "findPrevious"
QT_MOC_LITERAL(5, 48, 17), // "textToFindChanged"
QT_MOC_LITERAL(6, 66, 10) // "setVisible"

    },
    "BasicFindDialog\0setFocus\0\0findNext\0"
    "findPrevious\0textToFindChanged\0"
    "setVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BasicFindDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void BasicFindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BasicFindDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setFocus(); break;
        case 1: _t->findNext(); break;
        case 2: _t->findPrevious(); break;
        case 3: _t->textToFindChanged(); break;
        case 4: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BasicFindDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BasicFindDialog.data,
    qt_meta_data_BasicFindDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BasicFindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicFindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BasicFindDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BasicFindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_FindAllDialog_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindAllDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindAllDialog_t qt_meta_stringdata_FindAllDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FindAllDialog"
QT_MOC_LITERAL(1, 14, 7), // "findAll"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 20), // "onFindOptionsToggled"
QT_MOC_LITERAL(4, 44, 2), // "on"
QT_MOC_LITERAL(5, 47, 17), // "textToFindChanged"
QT_MOC_LITERAL(6, 65, 10) // "adjustSize"

    },
    "FindAllDialog\0findAll\0\0onFindOptionsToggled\0"
    "on\0textToFindChanged\0adjustSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindAllDialog[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FindAllDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindAllDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->findAll(); break;
        case 1: _t->onFindOptionsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->textToFindChanged(); break;
        case 3: _t->adjustSize(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindAllDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicFindDialog::staticMetaObject>(),
    qt_meta_stringdata_FindAllDialog.data,
    qt_meta_data_FindAllDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindAllDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindAllDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindAllDialog.stringdata0))
        return static_cast<void*>(this);
    return BasicFindDialog::qt_metacast(_clname);
}

int FindAllDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicFindDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FindDialog_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindDialog_t qt_meta_stringdata_FindDialog = {
    {
QT_MOC_LITERAL(0, 0, 10) // "FindDialog"

    },
    "FindDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindDialog[] = {

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

void FindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FindDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicFindDialog::staticMetaObject>(),
    qt_meta_stringdata_FindDialog.data,
    qt_meta_data_FindDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindDialog.stringdata0))
        return static_cast<void*>(this);
    return BasicFindDialog::qt_metacast(_clname);
}

int FindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicFindDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ReplaceDialog_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReplaceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReplaceDialog_t qt_meta_stringdata_ReplaceDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ReplaceDialog"
QT_MOC_LITERAL(1, 14, 7), // "replace"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "replaceAll"
QT_MOC_LITERAL(4, 34, 17) // "textToFindChanged"

    },
    "ReplaceDialog\0replace\0\0replaceAll\0"
    "textToFindChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReplaceDialog[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReplaceDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->replace(); break;
        case 1: _t->replaceAll(); break;
        case 2: _t->textToFindChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ReplaceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicFindDialog::staticMetaObject>(),
    qt_meta_stringdata_ReplaceDialog.data,
    qt_meta_data_ReplaceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReplaceDialog.stringdata0))
        return static_cast<void*>(this);
    return BasicFindDialog::qt_metacast(_clname);
}

int ReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicFindDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_EmbeddedFindReplaceWidget_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmbeddedFindReplaceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmbeddedFindReplaceWidget_t qt_meta_stringdata_EmbeddedFindReplaceWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "EmbeddedFindReplaceWidget"
QT_MOC_LITERAL(1, 26, 4), // "find"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "findNext"
QT_MOC_LITERAL(4, 41, 12), // "findPrevious"
QT_MOC_LITERAL(5, 54, 11), // "replaceNext"
QT_MOC_LITERAL(6, 66, 10), // "replaceAll"
QT_MOC_LITERAL(7, 77, 13), // "onCloseDialog"
QT_MOC_LITERAL(8, 91, 20), // "toggleReplaceVisible"
QT_MOC_LITERAL(9, 112, 23), // "setNumberOfFoundResults"
QT_MOC_LITERAL(10, 136, 6) // "number"

    },
    "EmbeddedFindReplaceWidget\0find\0\0"
    "findNext\0findPrevious\0replaceNext\0"
    "replaceAll\0onCloseDialog\0toggleReplaceVisible\0"
    "setNumberOfFoundResults\0number"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmbeddedFindReplaceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   61,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void EmbeddedFindReplaceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmbeddedFindReplaceWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->find(); break;
        case 1: _t->findNext(); break;
        case 2: _t->findPrevious(); break;
        case 3: _t->replaceNext(); break;
        case 4: _t->replaceAll(); break;
        case 5: _t->onCloseDialog(); break;
        case 6: _t->toggleReplaceVisible(); break;
        case 7: _t->setNumberOfFoundResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EmbeddedFindReplaceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EmbeddedFindReplaceWidget.data,
    qt_meta_data_EmbeddedFindReplaceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EmbeddedFindReplaceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmbeddedFindReplaceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EmbeddedFindReplaceWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EmbeddedFindReplaceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_GoToLineDialog_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoToLineDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoToLineDialog_t qt_meta_stringdata_GoToLineDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GoToLineDialog"
QT_MOC_LITERAL(1, 15, 8), // "goToLine"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "GoToLineDialog\0goToLine\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoToLineDialog[] = {

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

void GoToLineDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GoToLineDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goToLine(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject GoToLineDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GoToLineDialog.data,
    qt_meta_data_GoToLineDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoToLineDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoToLineDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoToLineDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GoToLineDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
