cmake_minimum_required(VERSION 3.5)

# set the project name and version
project(AnimationCrystalBall VERSION 1.0)

# specify the c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB Source "source/*.cpp" "source/*.h")

if(WIN32)
    message("this is windows")
    file(GLOB PlatformFiles "source/Platform/Win32/*.h" "source/Platform/Win32/*.cpp")
    list(APPEND Source ${PlatformFiles})
    add_definitions(-DWIN32)
elseif(APPLE)
    if(IOS)
        message("this is ios")
        file(GLOB PlatformFiles "source/Platform/IOS/*.h" "source/Platform/IOS/*.mm")
        list(APPEND Source ${PlatformFiles})
        add_definitions(-DIOS)
    else()
        message("this is macos")
        file(GLOB PlatformFiles "source/Platform/macOS/*.h" "source/Platform/macOS/*.mm")
        list(APPEND Source ${PlatformFiles})
        add_definitions(-DMACOS)
    endif()

endif()

add_executable(AnimationCrystalBall ${Source})

target_include_directories(AnimationCrystalBall PUBLIC
"source")
