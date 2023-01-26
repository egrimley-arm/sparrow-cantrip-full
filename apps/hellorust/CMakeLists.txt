cmake_minimum_required(VERSION 3.7.2)

project(hellorust)

includeGlobalComponents()
include(${CMAKE_CURRENT_LIST_DIR}/rust.cmake)

RustAddLibrary(
    main
    SOURCE_DIR
    ${CMAKE_CURRENT_LIST_DIR}/components/main
    LIB_FILENAME
    libmain.a
)

DeclareCAmkESComponent(main LIBS main)

DeclareCAmkESRootserver(hellorust.camkes)
