#-------------------------------------------------
#
# Project created by QtCreator 2014-08-08T23:19:41
#
# =================================================
# * This file is part of the TTK Music Player project
# * Copyright (c) 2014 - 2016 Greedysky Studio
# * All rights reserved!
# * Redistribution and use of the source code or any derivative
# * works are strictly forbiden.
# =================================================

win32:TARGET = ../../../bin/zlib
unix:TARGET = ../../lib/zlib
TEMPLATE = lib

unix:VERSION += 1.2.8

HEADERS  += \
    $$PWD/zconf.h \
    $$PWD/zlib.h \
    $$PWD/crc32.h \
    $$PWD/deflate.h \
    $$PWD/gzguts.h \
    $$PWD/inffixed.h \
    $$PWD/inffast.h \
    $$PWD/inflate.h \
    $$PWD/inftrees.h \
    $$PWD/trees.h \
    $$PWD/zutil.h

SOURCES += \
    $$PWD/adler32.c \
    $$PWD/compress.c \
    $$PWD/crc32.c \
    $$PWD/deflate.c \
    $$PWD/gzclose.c \
    $$PWD/gzlib.c \
    $$PWD/gzread.c \
    $$PWD/gzwrite.c \
    $$PWD/inflate.c \
    $$PWD/infback.c \
    $$PWD/inftrees.c \
    $$PWD/inffast.c \
    $$PWD/trees.c \
    $$PWD/uncompr.c \
    $$PWD/zutil.c
