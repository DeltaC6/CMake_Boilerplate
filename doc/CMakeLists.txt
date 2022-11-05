cmake_minimum_required(VERSION 3.19)

find_package(Doxygen
    REQUIRED dot
    OPTIONAL_COMPONENTS mscgen dia
)

if(DOXYGEN_FOUND)

set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_BUILTIN_STL_SUPPORT YES)
set(DOXYGEN_EXCLUDE
    ${PROJECT_SOURCE_DIR}/build
    ${PROJECT_SOURCE_DIR}/lib/submodules
)

doxygen_add_docs(docs ALL
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    COMMENT "Generate man pages"
)

else(DOXYGEN_FOUND)
    message("Doxygen need to be installed to generate documentations")
endif()
