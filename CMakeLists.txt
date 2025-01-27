cmake_minimum_required(VERSION 3.14)

project(ConsolApp LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Qt6Network)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Sql)
add_executable(ConsolApp
  main.cpp
)

target_link_libraries(ConsolApp PRIVATE Qt6::Network)
target_link_libraries(ConsolApp PRIVATE Qt${QT_VERSION_MAJOR}::Sql)
include(GNUInstallDirs)

install(TARGETS ConsolApp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
