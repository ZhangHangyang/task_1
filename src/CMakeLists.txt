SET(SOURCES stack.cpp stack.h) 
set(This my_STACK)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
ADD_LIBRARY(${This} ${SOURCES})