/****************************************************************************
** Meta object code from reading C++ file 'pages.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SkyTouchPOSSetup/pages.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pages.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoftwareDownloadPage_t {
    QByteArrayData data[10];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoftwareDownloadPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoftwareDownloadPage_t qt_meta_stringdata_SoftwareDownloadPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SoftwareDownloadPage"
QT_MOC_LITERAL(1, 21, 20), // "downloadButtonCliked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 14), // "localFilesPage"
QT_MOC_LITERAL(4, 58, 16), // "viewDownloadProg"
QT_MOC_LITERAL(5, 75, 18), // "readyToInstallPage"
QT_MOC_LITERAL(6, 94, 14), // "backToInitPage"
QT_MOC_LITERAL(7, 109, 19), // "finishedDownloading"
QT_MOC_LITERAL(8, 129, 20), // "addFileToInstallList"
QT_MOC_LITERAL(9, 150, 13) // "startInstalls"

    },
    "SoftwareDownloadPage\0downloadButtonCliked\0"
    "\0localFilesPage\0viewDownloadProg\0"
    "readyToInstallPage\0backToInitPage\0"
    "finishedDownloading\0addFileToInstallList\0"
    "startInstalls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoftwareDownloadPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
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

void SoftwareDownloadPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoftwareDownloadPage *_t = static_cast<SoftwareDownloadPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadButtonCliked(); break;
        case 1: _t->localFilesPage(); break;
        case 2: _t->viewDownloadProg(); break;
        case 3: _t->readyToInstallPage(); break;
        case 4: _t->backToInitPage(); break;
        case 5: _t->finishedDownloading(); break;
        case 6: _t->addFileToInstallList(); break;
        case 7: _t->startInstalls(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SoftwareDownloadPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SoftwareDownloadPage.data,
      qt_meta_data_SoftwareDownloadPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SoftwareDownloadPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoftwareDownloadPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SoftwareDownloadPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SoftwareDownloadPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
