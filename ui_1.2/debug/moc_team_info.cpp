/****************************************************************************
** Meta object code from reading C++ file 'team_info.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../team_info.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'team_info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Team_info_t {
    QByteArrayData data[9];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Team_info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Team_info_t qt_meta_stringdata_Team_info = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Team_info"
QT_MOC_LITERAL(1, 10, 12), // "TeamInfoGoal"
QT_MOC_LITERAL(2, 23, 13), // "TeamInfoTourn"
QT_MOC_LITERAL(3, 37, 14), // "TeamInfoTackle"
QT_MOC_LITERAL(4, 52, 12), // "TeamInfoPoss"
QT_MOC_LITERAL(5, 65, 14), // "TeamInfoSeason"
QT_MOC_LITERAL(6, 80, 12), // "TeamInfoShot"
QT_MOC_LITERAL(7, 93, 12), // "TeamInfoPass"
QT_MOC_LITERAL(8, 106, 15) // "TeamInfoDribble"

    },
    "Team_info\0TeamInfoGoal\0TeamInfoTourn\0"
    "TeamInfoTackle\0TeamInfoPoss\0TeamInfoSeason\0"
    "TeamInfoShot\0TeamInfoPass\0TeamInfoDribble"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Team_info[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QString, 0x00095401,

       0        // eod
};

void Team_info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Team_info *_t = static_cast<Team_info *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getInfoGoal(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getInfoTourn(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getInfoTackles(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getInfoPoss(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getInfoSeason(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getInfoShot(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getInfoPassAccu(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getInfoDribbles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Team_info::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Team_info.data,
      qt_meta_data_Team_info,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Team_info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Team_info::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Team_info.stringdata0))
        return static_cast<void*>(const_cast< Team_info*>(this));
    return QObject::qt_metacast(_clname);
}

int Team_info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
