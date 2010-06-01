# ####################################################################
# Automatically generated by qmake (2.01a) Thu Aug 2 18:29:15 2007
# #####################################################################
include(../config.pri)
include(../trademarks/branding.pri)
TEMPLATE = app
TARGET = KISS
DEPENDPATH += src
INCLUDEPATH += src
DESTDIR = ..
win32 { 
    INCLUDEPATH += Qsci
    CONFIG -= embed_manifest_exe
}
LIBS += -lqscintilla2
win32:LIBS += -lshell32

# Input
HEADERS += src/MainWindow.h \
    src/ChooseTargetDialog.h \
    src/ChoosePortDialog.h \
    src/EditorSettingsDialog.h \
    src/TargetSettingsDialog.h \
    src/FindDialog.h \
    src/Target.h \
    src/SourceFile.h \
    src/Lexer.h \
    src/LexerSpec.h \
    src/LexerStyles.h \
    src/Version.h \
    src/TargetInterface.h
SOURCES += src/main.cpp \
    src/MainWindow.cpp \
    src/ChooseTargetDialog.cpp \
    src/ChoosePortDialog.cpp \
    src/EditorSettingsDialog.cpp \
    src/TargetSettingsDialog.cpp \
    src/FindDialog.cpp \
    src/Target.cpp \
    src/SourceFile.cpp \
    src/Lexer.cpp
FORMS += ui/MainWindow.ui \
    ui/ChooseTargetDialog.ui \
    ui/ChoosePortDialog.ui \
    ui/FindDialog.ui \
    ui/EditorSettingsDialog.ui \
    ui/TargetSettingsDialog.ui
RESOURCES += rc/icons.qrc
unix:QMAKE_CLEAN += src/*~

# install directives
changelog.files = ../dog/ChangeLog.txt
changelog.path = ../$${INSTALL_BASE}
target.path += ../$${INSTALL_BASE}
INSTALLS += target \
    changelog
macx: { 
    install_libs.extra = macdeployqt \
        ../$${INSTALL_BASE}/KISS.app
    install_libs.path = ../$${INSTALL_BASE}
    INSTALLS += install_libs
}
