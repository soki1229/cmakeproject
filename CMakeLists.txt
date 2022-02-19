cmake_minimum_required(VERSION 3.0.0)
project(liftAlgorithm VERSION 0.1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(CTest)
enable_testing()

include_directories(header)
include_directories(source)

add_executable(liftAlgorithm
    source/main.cpp
    source/LiftInformation.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# Local header files here ONLY
#SET(
#    TARGET_H
#   )

# Local source files here
#SET(TARGET_SRC
#    source/LiftInformation.cpp
#)
