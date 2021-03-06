#ifndef MUSICOBJECT_H
#define MUSICOBJECT_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QDir>
#include <QMap>
#include <QSet>
#include <QApplication>

#ifdef Q_CC_GNU
#  pragma GCC diagnostic ignored "-Wunused-function"
#endif

#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
#  define MUSIC_QT_5
#  if QT_VERSION >= QT_VERSION_CHECK(5,2,0)
#    define MUSIC_WINEXTRAS
#  endif
#endif


///////////////////////////////////////
#define LRC_DIR                 "MLrc/"
#define MUSIC_DIR               "Music/"
#define MOVIE_DIR               "Movie/"
#define THEME_DIR               "MTheme/"
#define CACHE_DIR               "MCached/"
#define ART_DIR                 "MArt/"
#define PLUGINS_DIR             "MPlugins/"
#define BACKGROUND_DIR          "MArt/background/"
#define LANGUAGE_DIR            "MLanguage/"
#define TEMPORARY_DIR           "temporary"

#define SKN_FILE                ".skn"
#define JPG_FILE                ".jpg"
#define BMP_FILE                ".bmp"
#define PNG_FILE                ".png"
#define LRC_FILE                ".lrc"
#define KRC_FILE                ".krc"
#define MP3_FILE                ".mp3"
#define TMP_FILE                ".ttk"

#define MAKE_TRANSFORM          "MPlugins/avconv.dll"
#define MAKE_KRC2LRC            "MPlugins/avk2l.dll"
#define MAKE_PLAYER             "MPlugins/avplayer.dll"
#define MAKE_GAIN               "MPlugins/avgain.dll"
#define MAKE_SOUNDTOUCH         "MPlugins/avm2v.dll"
#ifdef Q_OS_UNIX
#define MAKE_NETS               "MPlugins/avnets.dll"
#endif

#define COFIGPATH               "musicconfig.xml"
#define NETDADIOPATH            "musicradio.dll"
#define MUSICPATH               "music.dll"
#define DOWNLOADINFO            "music_1.dll"
#define MUSICSEARCH             "music_2.dll"
#define DARABASEPATH            "musicuser_1.dll"
#define USERPATH                "musicuser_2.dll"
#define BARRAGEPATH             "musicbarrage"

#define SQLITE_DATABASE         "QSQLITE"
#define MYSQL_DATABASE          "QMYSQL"
#define OCI_DATABASE            "QOCI"

///////////////////////////////////////
#define LRC_DIR_FULL            MusicObject::getAppDir() + LRC_DIR
#define MUSIC_DIR_FULL          MusicObject::getAppDir() + MUSIC_DIR
#define MOVIE_DIR_FULL          MusicObject::getAppDir() + MOVIE_DIR
#define THEME_DIR_FULL          MusicObject::getAppDir() + THEME_DIR
#define CACHE_DIR_FULL          MusicObject::getAppDir() + CACHE_DIR
#define ART_DIR_FULL            MusicObject::getAppDir() + ART_DIR
#define PLUGINS_DIR_FULL        MusicObject::getAppDir() + PLUGINS_DIR
#define BACKGROUND_DIR_FULL     MusicObject::getAppDir() + BACKGROUND_DIR
#define LANGUAGE_DIR_FULL       MusicObject::getAppDir() + LANGUAGE_DIR
#define TEMPORARY_DIR_FULL      MusicObject::getAppDir() + TEMPORARY_DIR

#define MAKE_TRANSFORM_FULL     MusicObject::getAppDir() + MAKE_TRANSFORM
#define MAKE_KRC2LRC_FULL       MusicObject::getAppDir() + MAKE_KRC2LRC
#define MAKE_PLAYER_FULL        MusicObject::getAppDir() + MAKE_PLAYER
#define MAKE_GAIN_FULL          MusicObject::getAppDir() + MAKE_GAIN
#define MAKE_SOUNDTOUCH_FULL    MusicObject::getAppDir() + MAKE_SOUNDTOUCH
#ifdef Q_OS_UNIX
#define MAKE_NETS_FULL          MusicObject::getAppDir() + MAKE_NETS
#endif

#define COFIGPATH_FULL          MusicObject::getAppDir() + COFIGPATH
#define NETDADIOPATH_FULL       MusicObject::getAppDir() + NETDADIOPATH
#define MUSICPATH_FULL          MusicObject::getAppDir() + MUSICPATH
#define DOWNLOADINFO_FULL       MusicObject::getAppDir() + DOWNLOADINFO
#define MUSICSEARCH_FULL        MusicObject::getAppDir() + MUSICSEARCH
#define DARABASEPATH_FULL       MusicObject::getAppDir() + DARABASEPATH
#define USERPATH_FULL           MusicObject::getAppDir() + USERPATH
#define BARRAGEPATH_FULL        MusicObject::getAppDir() + BARRAGEPATH

///////////////////////////////////////
#define USERID             20
#define PASSWD             100
#define EMAIL              20
#define USERNAME           20
#define LOGINTIME          20
///////////////////////////////////////

/*! @brief The namespace of the application object.
 * @author Greedysky <greedysky@163.com>
 */
namespace MusicObject
{
    typedef signed char        MInt8;         /* 8 bit signed */
    typedef unsigned char      MUint8;        /* 8 bit unsigned */
    typedef short              MInt16;        /* 16 bit signed */
    typedef unsigned short     MUint16;       /* 16 bit unsigned */
    typedef int                MInt32;        /* 32 bit signed */
    typedef unsigned int       MUint32;       /* 32 bit unsigned */
    typedef long long          MInt64;        /* 64 bit signed */
    typedef unsigned long long MUint64;       /* 64 bit unsigned */
    ///////////////////////////////////////

    typedef double             MDouble;       /* double */
    typedef float              MFloat;        /* float */
    typedef bool               MBool;         /* bool */
    ///////////////////////////////////////

    typedef QList<QStringList>                 MStringLists;            /* stringlists */
    typedef QList<int>                         MIntList;                /* intlist */
    typedef QList<MIntList>                    MIntLists;               /* intlists */
    typedef QSet<int>                          MIntSet;                 /* intset */
    typedef QSet<MIntSet>                      MIntSets;                /* intsets */
    typedef QMap<QString, QVariant>            MStriantMap;             /* stringVariantMap */
    typedef QMap<QString, QString>             MStringsMap;             /* stringsMap */
    typedef QMap<QString, QStringList>         MStringsListMap;         /* stringStrlistsMap */
    typedef QMap<int, MIntList>                MIntsListMap;            /* intIntlistMap */
    typedef QMap<qint64, QString>              MIntStringMap;           /* intStrMap */
    typedef QMapIterator<QString, QVariant>    MStriantMapIterator;     /* stringVariantMapIterator */
    typedef QMapIterator<QString, QString>     MStringsMapIterator;     /* stringsMapIterator */
    typedef QMapIterator<QString, QStringList> MStringsListMapIterator; /* stringStrlistsMapIterator */
    typedef QMapIterator<int, MIntList>        MIntsListMapIterator;    /* intIntlistMapIterator */
    typedef QMapIterator<qint64, QString>      MIntStringMapIterator;   /* intStrMapIterator */
    ///////////////////////////////////////

    typedef struct MusicSongAttribute
    {
        int m_bitrate;
        QString m_format;
        QString m_url;
        QString m_size;
    }MusicSongAttribute;
    typedef QList<MusicSongAttribute> MusicSongAttributes;
    ///////////////////////////////////////

    typedef struct MusicSongInfomation
    {
        MusicSongAttributes m_songAttrs;
        QString m_lrcUrl;
        QString m_smallPicUrl;
        QString m_singerName;
        QString m_songName;
        QString m_timeLength;
    }MusicSongInfomation;
    typedef QList<MusicSongInfomation> MusicSongInfomations;
    ///////////////////////////////////////

    enum DownLoadType
    {
        Null,           ///*network null*/
        DisConnection,  ///*network disable*/
        DownLoading,    ///*network download*/
        Buffing,        ///*network buffing*/
        Waiting         ///*network waiting*/
    };

    enum SongPlayType
    {
        MC_PlayOrder = 1,   ///*play order*/
        MC_PlayRandom,      ///*play random*/
        MC_PlayListLoop,    ///*play list loop*/
        MC_PlayOneLoop,     ///*play single loop*/
        MC_PlayOnce         ///*play just once*/
    };

    static QString getAppDir()
    {
        return QApplication::applicationDirPath() + "/";
    }
    /*!
     * Get application dir.
     */

}

#endif // MUSICOBJECT_H
