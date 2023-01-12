cmake_minimum_required(VERSION 3.18.4)
project(CARRIND_CCAS)

set(CMAKE_CXX_STANDARD 20)

include_directories(CAS-library)

add_executable(CARRIND_CCAS
        CAS-library/CAS.cpp
        CAS-library/CAS.h
        CAS-library/Electric.cpp
        CAS-library/Electric.h
        CAS-library/Vector2D.cpp
        CAS-library/Vector2D.h
		CAS-library/Algebra.cpp
		CAS-library/Algebra.h
        CAS_main.cpp)
