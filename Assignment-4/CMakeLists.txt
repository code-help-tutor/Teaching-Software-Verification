WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
include_directories(../Assignment-2)
include_directories(../Z3Manager)
file (GLOB SOURCES
   ../Assignment-2/Assignment-2.cpp
   ../Z3Manager/Z3Mgr.cpp
   *.cpp
)
add_executable(assign-4 ${SOURCES})

target_link_libraries(assign-4 ${SVF_LIB} ${llvm_libs})
target_link_libraries(assign-4 ${Z3_LIBRARIES})

set_target_properties(assign-4 PROPERTIES
                       RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )
