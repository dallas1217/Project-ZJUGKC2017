TEMPLATE = app
QT += core gui widgets
QT += qml quick
QT += charts qml quick
CONFIG += c++11

SOURCES += main.cpp \
    data_controller.cpp \
    teamdata.cpp \
    team_info.cpp \
    mem_info.cpp \
    data_controller.cpp \
    datasource.cpp \
    main.cpp \
    mem_info.cpp \
    team_info.cpp \
    teamdata.cpp

RESOURCES += qml.qrc

RC_FILE +=icon.rc
# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Image/background_mainwnd.jpg \
    SysBtn.qml \
    SysBtnGroup.qml \
    Image/feedback_hover.png \
    Image/feedback_normal.png \
    Image/feedback_pressed.png \
    Image/menu_hover.png \
    Image/menu_normal.png \
    Image/menu_pressed.png \
    Image/min_hover.png \
    Image/min_normal.png \
    Image/min_pressed.png \
    Image/skin.png \
    Image/skin_hover.png \
    Image/skin_normal.png \
    Image/skin_pressed.png \
    Image/soccer.ico \
    Image/close_pressed.png \
    Image/close_hover.png \
    Image/close_normal.png \
    Image/logo.png \
    TabWidget.qml \
    ToolBtn.qml \
    MainWidget.qml \
    Image/s1.png \
    Image/scd.png \
    Image/laliga.png \
    Image/barcelona.png \
    Analyse_data_list.qml \
    QChart.js \
    TeamTable.qml \
    MemListView.qml \
    PlayerDelegate.qml
DISTFILES += \
    qml/qmlchart/*

HEADERS += \
    data_controller.h \
    teamdata.h \
    team_info.h \
    mem_info.h \
    rapidjson/error/en.h \
    rapidjson/error/error.h \
    rapidjson/internal/biginteger.h \
    rapidjson/internal/diyfp.h \
    rapidjson/internal/dtoa.h \
    rapidjson/internal/ieee754.h \
    rapidjson/internal/itoa.h \
    rapidjson/internal/meta.h \
    rapidjson/internal/pow10.h \
    rapidjson/internal/regex.h \
    rapidjson/internal/stack.h \
    rapidjson/internal/strfunc.h \
    rapidjson/internal/strtod.h \
    rapidjson/internal/swap.h \
    rapidjson/msinttypes/inttypes.h \
    rapidjson/msinttypes/stdint.h \
    rapidjson/allocators.h \
    rapidjson/document.h \
    rapidjson/encodedstream.h \
    rapidjson/encodings.h \
    rapidjson/filereadstream.h \
    rapidjson/filewritestream.h \
    rapidjson/fwd.h \
    rapidjson/istreamwrapper.h \
    rapidjson/memorybuffer.h \
    rapidjson/memorystream.h \
    rapidjson/ostreamwrapper.h \
    rapidjson/pointer.h \
    rapidjson/prettywriter.h \
    rapidjson/rapidjson.h \
    rapidjson/reader.h \
    rapidjson/schema.h \
    rapidjson/stream.h \
    rapidjson/stringbuffer.h \
    rapidjson/writer.h \
    data_controller.h \
    datasource.h \
    mem_info.h \
    team_info.h \
    teamdata.h


