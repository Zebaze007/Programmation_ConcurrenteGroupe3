/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "onStartButtonClicked",
    "",
    "onPauseButtonClicked",
    "onStopButtonClicked",
    "onTakeOrderButtonClicked",
    "onServeFoodButtonClicked",
    "updateTimeDisplay",
    "moveClients",
    "moveClientOnce",
    "Client*",
    "client",
    "QPoint&",
    "start",
    "end",
    "speed",
    "moveRankChiefOnce",
    "RankChief*",
    "rankChief",
    "onClearTableButtonClicked",
    "onSpeedButtonClicked",
    "openDashboard"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    4,   93,    2, 0x08,    8 /* Private */,
      16,    4,  102,    2, 0x08,   13 /* Private */,
      19,    0,  111,    2, 0x08,   18 /* Private */,
      20,    0,  112,    2, 0x08,   19 /* Private */,
      21,    0,  113,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 12, QMetaType::Int,   11,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 12, 0x80000000 | 12, QMetaType::Int,   18,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'onStartButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPauseButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStopButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTakeOrderButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServeFoodButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTimeDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveClients'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveClientOnce'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Client *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'moveRankChiefOnce'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RankChief *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onClearTableButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSpeedButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openDashboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onStartButtonClicked(); break;
        case 1: _t->onPauseButtonClicked(); break;
        case 2: _t->onStopButtonClicked(); break;
        case 3: _t->onTakeOrderButtonClicked(); break;
        case 4: _t->onServeFoodButtonClicked(); break;
        case 5: _t->updateTimeDisplay(); break;
        case 6: _t->moveClients(); break;
        case 7: _t->moveClientOnce((*reinterpret_cast< std::add_pointer_t<Client*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPoint&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 8: _t->moveRankChiefOnce((*reinterpret_cast< std::add_pointer_t<RankChief*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPoint&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 9: _t->onClearTableButtonClicked(); break;
        case 10: _t->onSpeedButtonClicked(); break;
        case 11: _t->openDashboard(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Client* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RankChief* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP