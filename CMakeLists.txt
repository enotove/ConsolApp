cmake_minimum_required(VERSION 3.14)

project(ConsolApp LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



find_package(QT NAMES Qt5 Qt6 REQUERED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network Sql)
add_executable(ConsolApp
  main.cpp
)
target_link_libraries(ConsolApp PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(ConsolApp PRIVATE Qt${QT_VERSION_MAJOR}::Network)
target_link_libraries(ConsolApp PRIVATE Qt${QT_VERSION_MAJOR}::Sql)
include(GNUInstallDirs)

install(TARGETS ConsolApp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
