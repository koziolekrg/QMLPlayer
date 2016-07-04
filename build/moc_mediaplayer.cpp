/****************************************************************************
** Meta object code from reading C++ file 'mediaplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/mediaplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediaplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MediaPlayer_t {
    QByteArrayData data[23];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaPlayer_t qt_meta_stringdata_MediaPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MediaPlayer"
QT_MOC_LITERAL(1, 12, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "progressChanged"
QT_MOC_LITERAL(4, 43, 15), // "durationChanged"
QT_MOC_LITERAL(5, 59, 14), // "fileUrlChanged"
QT_MOC_LITERAL(6, 74, 9), // "mediaPlay"
QT_MOC_LITERAL(7, 84, 10), // "mediaPause"
QT_MOC_LITERAL(8, 95, 9), // "mediaStop"
QT_MOC_LITERAL(9, 105, 9), // "mediaNext"
QT_MOC_LITERAL(10, 115, 13), // "mediaPrevious"
QT_MOC_LITERAL(11, 129, 9), // "mediaJump"
QT_MOC_LITERAL(12, 139, 11), // "mediaRemove"
QT_MOC_LITERAL(13, 151, 14), // "changeProgress"
QT_MOC_LITERAL(14, 166, 14), // "changeDuration"
QT_MOC_LITERAL(15, 181, 13), // "changeFileUrl"
QT_MOC_LITERAL(16, 195, 6), // "volume"
QT_MOC_LITERAL(17, 202, 8), // "progress"
QT_MOC_LITERAL(18, 211, 8), // "duration"
QT_MOC_LITERAL(19, 220, 5), // "title"
QT_MOC_LITERAL(20, 226, 7), // "fileUrl"
QT_MOC_LITERAL(21, 234, 6), // "second"
QT_MOC_LITERAL(22, 241, 6) // "minute"

    },
    "MediaPlayer\0volumeChanged\0\0progressChanged\0"
    "durationChanged\0fileUrlChanged\0mediaPlay\0"
    "mediaPause\0mediaStop\0mediaNext\0"
    "mediaPrevious\0mediaJump\0mediaRemove\0"
    "changeProgress\0changeDuration\0"
    "changeFileUrl\0volume\0progress\0duration\0"
    "title\0fileUrl\0second\0minute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       7,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    1,   93,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      13,    1,   99,    2, 0x0a /* Public */,
      14,    1,  102,    2, 0x0a /* Public */,
      15,    1,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::QString, 0x00495001,
      20, QMetaType::QString, 0x00095102,
      21, QMetaType::Int, 0x00495001,
      22, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       2,
       0,
       1,
       1,

       0        // eod
};

void MediaPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MediaPlayer *_t = static_cast<MediaPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->volumeChanged();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->progressChanged();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->durationChanged();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->fileUrlChanged();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->mediaPlay(); break;
        case 5: _t->mediaPause(); break;
        case 6: _t->mediaStop(); break;
        case 7: _t->mediaNext(); break;
        case 8: _t->mediaPrevious(); break;
        case 9: _t->mediaJump((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->mediaRemove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->changeProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->changeDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->changeFileUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (MediaPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MediaPlayer::volumeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (MediaPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MediaPlayer::progressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef int (MediaPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MediaPlayer::durationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef int (MediaPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MediaPlayer::fileUrlChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MediaPlayer *_t = static_cast<MediaPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getVolume(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getProgress(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getDuration(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getTitle(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getSec(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getMin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MediaPlayer *_t = static_cast<MediaPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setProgress(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFileUrl(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MediaPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MediaPlayer.data,
      qt_meta_data_MediaPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MediaPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MediaPlayer.stringdata0))
        return static_cast<void*>(const_cast< MediaPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int MediaPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
int MediaPlayer::volumeChanged()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int MediaPlayer::progressChanged()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int MediaPlayer::durationChanged()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
int MediaPlayer::fileUrlChanged()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
