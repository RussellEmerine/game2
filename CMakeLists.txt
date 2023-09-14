# This cmake file does not actually build anything. It is only for CLion to understand imports.

cmake_minimum_required(VERSION 3.26)
project(game2)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        .
        ../nest-libs/macos/SDL2/include/SDL2
        ../nest-libs/macos/freetype/include
        ../nest-libs/macos/glm/include
        ../nest-libs/macos/harfbuzz/include
        ../nest-libs/macos/libogg/include
        ../nest-libs/macos/libopus/include
        ../nest-libs/macos/libopusenc/include
        ../nest-libs/macos/libpng/include
        ../nest-libs/macos/opusfile/include
        ../nest-libs/macos/zlib/include
)

add_executable(
        ColorProgram.hpp
        ColorProgram.cpp
        ColorTextureProgram.cpp
        ColorTextureProgram.hpp
        DrawLines.cpp
        DrawLines.hpp
        GL.cpp
        GL.hpp
        LitColorTextureProgram.cpp
        LitColorTextureProgram.hpp
        Load.cpp
        Load.hpp
        Mesh.cpp
        Mesh.hpp
        Mode.cpp
        Mode.hpp
        PathFont-font.cpp
        PathFont.cpp
        PathFont.hpp
        PlayMode.cpp
        PlayMode.hpp
        Scene.cpp
        Scene.hpp
        ShowMeshesMode.cpp
        ShowMeshesMode.hpp
        ShowMeshesProgram.cpp
        ShowMeshesProgram.hpp
        ShowSceneMode.cpp
        ShowSceneMode.hpp
        ShowSceneProgram.cpp
        ShowSceneProgram.hpp
        data_path.cpp
        data_path.hpp
        gl_compile_program.cpp
        gl_compile_program.hpp
        gl_errors.hpp
        glcorearb.h
        load_save_png.cpp
        load_save_png.hpp
        main.cpp
        read_write_chunk.hpp
        show-meshes.cpp
        show-scene.cpp
        Garden.cpp
        Garden.hpp
        Flower.hpp
        Flower.cpp
)
