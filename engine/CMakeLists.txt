add_library(EngineCore
    core/Game.cpp
    core/Entity.cpp
    graphics/Renderer.cpp
    input/Input.cpp
)

target_include_directories(EngineCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
