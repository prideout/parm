cmake_minimum_required(VERSION 2.8.8)
project(foo)

add_executable(
    foo
    MACOSX_BUNDLE
    src/AppDelegate.h
    src/AppDelegate.mm
    src/main.mm
    src/MainMenu.xib
)

set_source_files_properties(
    src/MainMenu.xib
    PROPERTIES
    MACOSX_PACKAGE_LOCATION
    Resources
)

set_target_properties(
    foo
    PROPERTIES
    MACOSX_BUNDLE_INFO_PLIST
    ${CMAKE_CURRENT_LIST_DIR}/src/plist.in
)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework AppKit")
