WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
file (GLOB SOURCES
   *.cpp
)
add_executable(assign-2 ${SOURCES})

target_link_libraries(assign-2 ${SVF_LIB} ${llvm_libs})
target_link_libraries(assign-2 ${Z3_LIBRARIES})

set_target_properties(assign-2 PROPERTIES
                       RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )
