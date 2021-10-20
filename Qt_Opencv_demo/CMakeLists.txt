cmake_minimum_required(VERSION 3.10.0)

project(Build_Qt_Opencv_Demo)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/ui)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
find_package(OpenCV REQUIRED)

FILE(GLOB ${PROJECT_NAME}_SOURCES "./src/*.cpp")
FILE(GLOB ${PROJECT_NAME}_UI "./ui/*.ui")
FILE(GLOB ${PROJECT_NAME}_QRC "./qrc/*.qrc")
FILE(GLOB ${PROJECT_NAME}_HEADER "./include/*")

include_directories(${PROJECT_SOURCE_DIR}/include ${OpenCV_INCLUDE_DIRS})

add_executable(${PROJECT_NAME}
          ${${PROJECT_NAME}_UI}
          ${${PROJECT_NAME}_SOURCES}
          ${${PROJECT_NAME}_QRC}
          ${${PROJECT_NAME}_HEADER}
          )       

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Gui Qt5::Widgets ${OpenCV_LIBS})