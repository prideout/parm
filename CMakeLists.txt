cmake_minimum_required(VERSION 2.8.8)
project(parm)
file(GLOB CSRC src/*.mm src/*.h)

add_executable(
    parm
    MACOSX_BUNDLE
    ${CSRC}
    src/MainMenu.xib
)

set_source_files_properties(
    src/MainMenu.xib
    PROPERTIES
    MACOSX_PACKAGE_LOCATION
    Resources
)

set_target_properties(
    parm
    PROPERTIES
    MACOSX_BUNDLE_INFO_PLIST
    ${CMAKE_CURRENT_LIST_DIR}/src/plist.in
)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} \
  -framework AppKit \
  -framework Metal \
  -framework MetalKit \
  -framework ModelIO"
)
