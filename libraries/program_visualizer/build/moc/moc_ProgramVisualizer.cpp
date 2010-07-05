/****************************************************************************
** Meta object code from reading C++ file 'ProgramVisualizer.h'
**
** Created: Mon Jun 28 14:39:52 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ProgramVisualizer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgramVisualizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProgramVisualizer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      29,   18,   18,   18, 0x08,
      61,   55,   18,   18, 0x08,
      85,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProgramVisualizer[] = {
    "ProgramVisualizer\0\0refresh()\0"
    "setCurrentFlowchartItem()\0index\0"
    "setCurrentFunction(int)\0changeFunction()\0"
};

const QMetaObject ProgramVisualizer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProgramVisualizer,
      qt_meta_data_ProgramVisualizer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgramVisualizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgramVisualizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgramVisualizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramVisualizer))
        return static_cast<void*>(const_cast< ProgramVisualizer*>(this));
    return QWidget::qt_metacast(_clname);
}

int ProgramVisualizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: setCurrentFlowchartItem(); break;
        case 2: setCurrentFunction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: changeFunction(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
