/****************************************************************************
** Meta object code from reading C++ file 'segment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../segment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'segment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_segment_t {
    QByteArrayData data[20];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_segment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_segment_t qt_meta_stringdata_segment = {
    {
QT_MOC_LITERAL(0, 0, 7), // "segment"
QT_MOC_LITERAL(1, 8, 9), // "ShowAbout"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "ShowHelp"
QT_MOC_LITERAL(4, 28, 10), // "BrowseFile"
QT_MOC_LITERAL(5, 39, 10), // "BrowseDict"
QT_MOC_LITERAL(6, 50, 8), // "SaveFile"
QT_MOC_LITERAL(7, 59, 15), // "CheckDictEncode"
QT_MOC_LITERAL(8, 75, 15), // "CheckFileEncode"
QT_MOC_LITERAL(9, 91, 13), // "SetDictEncode"
QT_MOC_LITERAL(10, 105, 13), // "SetFileEncode"
QT_MOC_LITERAL(11, 119, 15), // "SetOutputEncode"
QT_MOC_LITERAL(12, 135, 3), // "Run"
QT_MOC_LITERAL(13, 139, 6), // "Search"
QT_MOC_LITERAL(14, 146, 3), // "Add"
QT_MOC_LITERAL(15, 150, 3), // "Del"
QT_MOC_LITERAL(16, 154, 11), // "DisplayDict"
QT_MOC_LITERAL(17, 166, 8), // "LoadDict"
QT_MOC_LITERAL(18, 175, 7), // "RunTest"
QT_MOC_LITERAL(19, 183, 9) // "ClearText"

    },
    "segment\0ShowAbout\0\0ShowHelp\0BrowseFile\0"
    "BrowseDict\0SaveFile\0CheckDictEncode\0"
    "CheckFileEncode\0SetDictEncode\0"
    "SetFileEncode\0SetOutputEncode\0Run\0"
    "Search\0Add\0Del\0DisplayDict\0LoadDict\0"
    "RunTest\0ClearText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_segment[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    0,  108,    2, 0x0a /* Public */,
       7,    0,  109,    2, 0x0a /* Public */,
       8,    0,  110,    2, 0x0a /* Public */,
       9,    0,  111,    2, 0x0a /* Public */,
      10,    0,  112,    2, 0x0a /* Public */,
      11,    0,  113,    2, 0x0a /* Public */,
      12,    0,  114,    2, 0x0a /* Public */,
      13,    0,  115,    2, 0x0a /* Public */,
      14,    0,  116,    2, 0x0a /* Public */,
      15,    0,  117,    2, 0x0a /* Public */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x0a /* Public */,
      19,    0,  121,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void segment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        segment *_t = static_cast<segment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowAbout(); break;
        case 1: _t->ShowHelp(); break;
        case 2: _t->BrowseFile(); break;
        case 3: _t->BrowseDict(); break;
        case 4: _t->SaveFile(); break;
        case 5: _t->CheckDictEncode(); break;
        case 6: _t->CheckFileEncode(); break;
        case 7: _t->SetDictEncode(); break;
        case 8: _t->SetFileEncode(); break;
        case 9: _t->SetOutputEncode(); break;
        case 10: _t->Run(); break;
        case 11: _t->Search(); break;
        case 12: _t->Add(); break;
        case 13: _t->Del(); break;
        case 14: _t->DisplayDict(); break;
        case 15: _t->LoadDict(); break;
        case 16: _t->RunTest(); break;
        case 17: _t->ClearText(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject segment::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_segment.data,
      qt_meta_data_segment,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *segment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *segment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_segment.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int segment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE