# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\medimaxzut_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\medimaxzut_autogen.dir\\ParseCache.txt"
  "medimaxzut_autogen"
  )
endif()
