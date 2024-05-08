QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Abstract/AbstractClassUnit.cpp \
        Abstract/AbstractCodeFactory.cpp \
        Abstract/AbstractMethodUnit.cpp \
        Unit.cpp \
        cpp/Classunit.cpp \
        cpp/CppCodeFactory.cpp \
        cpp/MethodUnit.cpp \
        cpp/PrintOperatorUnit.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Abstract/AbstractClassUnit.h \
    Abstract/AbstractCodeFactory.h \
    Abstract/AbstractMethodUnit.h \
    Unit.h \
    cpp/Classunit.h \
    cpp/CppCodeFactory.h \
    cpp/MethodUnit.h \
    cpp/PrintOperatorUnit.h
