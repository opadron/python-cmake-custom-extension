add_library(_example MODULE _example.cxx)
target_link_libraries(_example ${PYTHON_LIBRARIES})
set_target_properties(_example PROPERTIES PREFIX "")

INSTALL(TARGETS _example LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})
