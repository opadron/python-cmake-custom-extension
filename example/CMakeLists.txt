add_library(_example MODULE _example.cxx)
target_link_libraries(_example ${PYTHON_LIBRARIES})
set_target_properties(_example PROPERTIES PREFIX "")

INSTALL(TARGETS _example LIBRARY DESTINATION example)
INSTALL(FILES __init__.py DESTINATION example)
