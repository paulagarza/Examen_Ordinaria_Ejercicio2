cmake_minimum_required(VERSION 3.16)

project(Ejercicio2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ejercicio2 main.cpp
    evaluacion.h evaluacion.cpp
    actividad.h actividad.cpp
    test.h test.cpp
    alumno.h alumno.cpp)

include(GNUInstallDirs)
install(TARGETS Ejercicio2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
