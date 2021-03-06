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

TEMPLATE = subdirs
SUBDIRS = TTKThirdParty TTKCore TTKApp TTKUpdate TTKTest

TRANSLATIONS += TTKLanguage/cn.ts \
                TTKLanguage/cn_c.ts \
                TTKLanguage/en.ts

##update translation
unix:exists($$[QT_INSTALL_BINS]/lrelease){
LRELEASE_EXECUTABLE = $$[QT_INSTALL_BINS]/lrelease
}

unix:exists($$[QT_INSTALL_BINS]/lrelease-qt5){
LRELEASE_EXECUTABLE = $$[QT_INSTALL_BINS]/lrelease-qt5
}

win32:exists($$[QT_INSTALL_BINS]/lrelease.exe){
LRELEASE_EXECUTABLE = $$[QT_INSTALL_BINS]/lrelease.exe
}

isEmpty(LRELEASE_EXECUTABLE){
  error(Could not find lrelease executable)
}
else{
  message(Found lrelease executable: $$LRELEASE_EXECUTABLE)
}

unix:{
    output = $$OUT_PWD/lib/MLanguage
    !exists($$output):system(mkdir $$output)

    system(find . -name *.ts | xargs $$LRELEASE_EXECUTABLE)
    system(find . -name *.qm | xargs rename -vf 's/.qm/.ln/' *  )
    system(for F in TTKLanguage/*.ln ; do mv $F $$output ;done)
}
win32:{
    output = $$OUT_PWD/bin/MLanguage
    output = $$replace(output, /, \\)
    !exists($$output):system(md $$output)

    system(for /r %i in (*.ts) do $$LRELEASE_EXECUTABLE %i)
    system(for /r %i in (*.qm) do ren %i *.ln)
    system(for /r %i in (*.ln) do move /y %i $$output)
}
