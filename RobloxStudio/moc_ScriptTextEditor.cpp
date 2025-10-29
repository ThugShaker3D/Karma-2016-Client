/****************************************************************************
** Meta object code from reading C++ file 'ScriptTextEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "ScriptTextEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptTextEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptTraversalThread_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptTraversalThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptTraversalThread_t qt_meta_stringdata_ScriptTraversalThread = {
    {
QT_MOC_LITERAL(0, 0, 21) // "ScriptTraversalThread"

    },
    "ScriptTraversalThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptTraversalThread[] = {

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

void ScriptTraversalThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ScriptTraversalThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ScriptTraversalThread.data,
    qt_meta_data_ScriptTraversalThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptTraversalThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptTraversalThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptTraversalThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ScriptTraversalThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CheckSyntaxThread_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckSyntaxThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckSyntaxThread_t qt_meta_stringdata_CheckSyntaxThread = {
    {
QT_MOC_LITERAL(0, 0, 17) // "CheckSyntaxThread"

    },
    "CheckSyntaxThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckSyntaxThread[] = {

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

void CheckSyntaxThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CheckSyntaxThread::staticMetaObject = { {
    QMetaObject::SuperData::link<ScriptTraversalThread::staticMetaObject>(),
    qt_meta_stringdata_CheckSyntaxThread.data,
    qt_meta_data_CheckSyntaxThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CheckSyntaxThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckSyntaxThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CheckSyntaxThread.stringdata0))
        return static_cast<void*>(this);
    return ScriptTraversalThread::qt_metacast(_clname);
}

int CheckSyntaxThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptTraversalThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FindThread_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindThread_t qt_meta_stringdata_FindThread = {
    {
QT_MOC_LITERAL(0, 0, 10) // "FindThread"

    },
    "FindThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindThread[] = {

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

void FindThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FindThread::staticMetaObject = { {
    QMetaObject::SuperData::link<ScriptTraversalThread::staticMetaObject>(),
    qt_meta_stringdata_FindThread.data,
    qt_meta_data_FindThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindThread.stringdata0))
        return static_cast<void*>(this);
    return ScriptTraversalThread::qt_metacast(_clname);
}

int FindThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptTraversalThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ScriptTextEditor_t {
    QByteArrayData data[32];
    char stringdata0[461];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptTextEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptTextEditor_t qt_meta_stringdata_ScriptTextEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ScriptTextEditor"
QT_MOC_LITERAL(1, 17, 16), // "toggleBreakpoint"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "lineNumber"
QT_MOC_LITERAL(4, 46, 11), // "showToolTip"
QT_MOC_LITERAL(5, 58, 3), // "pos"
QT_MOC_LITERAL(6, 62, 15), // "wordUnderCursor"
QT_MOC_LITERAL(7, 78, 20), // "updateContextualMenu"
QT_MOC_LITERAL(8, 99, 6), // "QMenu*"
QT_MOC_LITERAL(9, 106, 5), // "pMenu"
QT_MOC_LITERAL(10, 112, 16), // "helpTopicChanged"
QT_MOC_LITERAL(11, 129, 5), // "topic"
QT_MOC_LITERAL(12, 135, 13), // "onCheckSyntax"
QT_MOC_LITERAL(13, 149, 11), // "checkSyntax"
QT_MOC_LITERAL(14, 161, 23), // "intellesenseDoubleClick"
QT_MOC_LITERAL(15, 185, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(16, 202, 8), // "listItem"
QT_MOC_LITERAL(17, 211, 22), // "updateCursorVisibility"
QT_MOC_LITERAL(18, 234, 22), // "selectionChangedSearch"
QT_MOC_LITERAL(19, 257, 15), // "onSearchTimeout"
QT_MOC_LITERAL(20, 273, 25), // "onCheckSyntaxTimerTimeOut"
QT_MOC_LITERAL(21, 299, 4), // "find"
QT_MOC_LITERAL(22, 304, 6), // "onFind"
QT_MOC_LITERAL(23, 311, 8), // "findNext"
QT_MOC_LITERAL(24, 320, 32), // "moveCursorToBeginningOfSelection"
QT_MOC_LITERAL(25, 353, 12), // "setErrorLine"
QT_MOC_LITERAL(26, 366, 9), // "errorLine"
QT_MOC_LITERAL(27, 376, 12), // "errorMessage"
QT_MOC_LITERAL(28, 389, 17), // "setAnalysisResult"
QT_MOC_LITERAL(29, 407, 27), // "RBX::ScriptAnalyzer::Result"
QT_MOC_LITERAL(30, 435, 15), // "analysisResults"
QT_MOC_LITERAL(31, 451, 9) // "startFind"

    },
    "ScriptTextEditor\0toggleBreakpoint\0\0"
    "lineNumber\0showToolTip\0pos\0wordUnderCursor\0"
    "updateContextualMenu\0QMenu*\0pMenu\0"
    "helpTopicChanged\0topic\0onCheckSyntax\0"
    "checkSyntax\0intellesenseDoubleClick\0"
    "QListWidgetItem*\0listItem\0"
    "updateCursorVisibility\0selectionChangedSearch\0"
    "onSearchTimeout\0onCheckSyntaxTimerTimeOut\0"
    "find\0onFind\0findNext\0"
    "moveCursorToBeginningOfSelection\0"
    "setErrorLine\0errorLine\0errorMessage\0"
    "setAnalysisResult\0RBX::ScriptAnalyzer::Result\0"
    "analysisResults\0startFind"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptTextEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    2,  107,    2, 0x06 /* Public */,
       7,    2,  112,    2, 0x06 /* Public */,
      10,    1,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  120,    2, 0x0a /* Public */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    1,  122,    2, 0x08 /* Private */,
      17,    0,  125,    2, 0x08 /* Private */,
      18,    0,  126,    2, 0x08 /* Private */,
      19,    0,  127,    2, 0x08 /* Private */,
      20,    0,  128,    2, 0x08 /* Private */,
      21,    0,  129,    2, 0x08 /* Private */,
      22,    0,  130,    2, 0x08 /* Private */,
      23,    1,  131,    2, 0x08 /* Private */,
      23,    0,  134,    2, 0x28 /* Private | MethodCloned */,

 // methods: name, argc, parameters, tag, flags
      25,    2,  135,    2, 0x02 /* Public */,
      28,    1,  140,    2, 0x02 /* Public */,
      31,    0,  143,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::QPoint, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QPoint,    9,    5,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,

       0        // eod
};

void ScriptTextEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScriptTextEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggleBreakpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { bool _r = _t->showToolTip((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->updateContextualMenu((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 3: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onCheckSyntax(); break;
        case 5: _t->checkSyntax(); break;
        case 6: _t->intellesenseDoubleClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->updateCursorVisibility(); break;
        case 8: _t->selectionChangedSearch(); break;
        case 9: _t->onSearchTimeout(); break;
        case 10: _t->onCheckSyntaxTimerTimeOut(); break;
        case 11: _t->find(); break;
        case 12: _t->onFind(); break;
        case 13: _t->findNext((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->findNext(); break;
        case 15: _t->setErrorLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->setAnalysisResult((*reinterpret_cast< const RBX::ScriptAnalyzer::Result(*)>(_a[1]))); break;
        case 17: _t->startFind(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScriptTextEditor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptTextEditor::toggleBreakpoint)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = bool (ScriptTextEditor::*)(const QPoint & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptTextEditor::showToolTip)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScriptTextEditor::*)(QMenu * , QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptTextEditor::updateContextualMenu)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScriptTextEditor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptTextEditor::helpTopicChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptTextEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_ScriptTextEditor.data,
    qt_meta_data_ScriptTextEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptTextEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptTextEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptTextEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFindListener"))
        return static_cast< IFindListener*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int ScriptTextEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ScriptTextEditor::toggleBreakpoint(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
bool ScriptTextEditor::showToolTip(const QPoint & _t1, const QString & _t2)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
void ScriptTextEditor::updateContextualMenu(QMenu * _t1, QPoint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScriptTextEditor::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
