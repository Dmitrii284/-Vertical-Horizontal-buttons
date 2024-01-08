# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Horizontal_buttons_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Horizontal_buttons_autogen.dir/ParseCache.txt"
  "Horizontal_buttons_autogen"
  )
endif()
