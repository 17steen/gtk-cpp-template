link_directories( ${GTKMM_LIBRARY_DIRS} )

include_directories( ${GTKMM_INCLUDE_DIRS} )

set(HEADERS
    window.hh
)

set(SOURCES
    main.cc
    window.cc
)

add_executable( ${PROJECT_NAME} ${SOURCES} )

#no idea if this works
target_precompile_headers( ${PROJECT_NAME} PUBLIC <gtkmm.h> )
target_precompile_headers( ${PROJECT_NAME} PUBLIC ${HEADERS} )


target_link_libraries( ${PROJECT_NAME} ${GTKMM_LIBRARIES} )
