cmake_minimum_required(VERSION 3.10)
project(chap7)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES app/Pr7-1.cpp app/Pr7-2.cpp app/Pr7-3.cpp
        app/Pr7-4.cpp app/Pr7-5.cpp app/Pr7-6.cpp
        app/Pr7-7.cpp app/Pr7-8.cpp app/Pr7-9.cpp
        app/Pr7-10.cpp app/Pr7-11.cpp app/Pr7-12.cpp
        app/Pr7-13.cpp app/Pr7-14.cpp app/Pr7-15.cpp
        app/Pr7-17.cpp app/Pr7-18.cpp app/Pr7-19.cpp
        app/Pr7-20.cpp app/Pr7-21.cpp app/Pr7-22.cpp
        app/Pr7-23.cpp app/Pr7-24.cpp app/Pr7-25.cpp
        app/Pr7-26.cpp app/Pr7-27.cpp app/Pr7-28.cpp
        app/Pr7-29.cpp app/Pr7-30.cpp app/Pr7-31.cpp)

add_executable(Pr7-1.exe app/Pr7-1.cpp app/Pr7-9-revised.cpp)
add_executable(Pr7-2.exe app/Pr7-2.cpp)
add_executable(Pr7-3.exe app/Pr7-3.cpp)
add_executable(Pr7-4.exe app/Pr7-4.cpp)
add_executable(Pr7-5.exe app/Pr7-5.cpp)
add_executable(Pr7-6.exe app/Pr7-6.cpp)
add_executable(Pr7-7.exe app/Pr7-7.cpp)
add_executable(Pr7-8.exe app/Pr7-8.cpp)
add_executable(Pr7-9.exe app/Pr7-9.cpp)
add_executable(Pr7-9-revised.exe app/Pr7-9-revised.cpp)
add_executable(Pr7-10.exe app/Pr7-10.cpp)
add_executable(Pr7-11.exe app/Pr7-11.cpp)
add_executable(Pr7-12.exe app/Pr7-12.cpp)
add_executable(Pr7-13.exe app/Pr7-13.cpp)
add_executable(Pr7-14.exe app/Pr7-14.cpp)
add_executable(Pr7-15.exe app/Pr7-15.cpp)
add_executable(Pr7-16.exe app/Pr7-16.cpp)
add_executable(Pr7-17.exe app/Pr7-17.cpp)
add_executable(Pr7-18.exe app/Pr7-18.cpp)
add_executable(Pr7-19.exe app/Pr7-19.cpp)
add_executable(Pr7-20.exe app/Pr7-20.cpp)
add_executable(Pr7-21.exe app/Pr7-21.cpp)
add_executable(Pr7-22.exe app/Pr7-22.cpp)
add_executable(Pr7-23.exe app/Pr7-23.cpp)
add_executable(Pr7-24.exe app/Pr7-24.cpp)
add_executable(Pr7-25.exe app/Pr7-25.cpp)
add_executable(Pr7-26.exe app/Pr7-26.cpp)
add_executable(Pr7-27.exe app/Pr7-27.cpp)
add_executable(Pr7-28.exe app/Pr7-28.cpp)
add_executable(Pr7-29.exe app/Pr7-29.cpp)
add_executable(Pr7-30.exe app/Pr7-30.cpp)
add_executable(Pr7-31.exe app/Pr7-31.cpp)

if (WIN32)
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED COMPONENTS audio graphics window system)

#if (SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    if (WIN32)
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#    else()
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES})
#    endif()
#endif()
