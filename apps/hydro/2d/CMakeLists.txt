#~----------------------------------------------------------------------------~#
# Copyright (c) 2016 Los Alamos National Security, LLC
# All rights reserved.
#~----------------------------------------------------------------------------~#

add_executable( hydro_2d
  $<TARGET_OBJECTS:common> 
  inputs.cc
  driver.cc
  ${FleCSI_RUNTIME_DRIVER}
  ${FleCSI_RUNTIME_MAIN}
)
target_link_libraries( hydro_2d flecsale )

if (LUA_FOUND)

  create_regression_test( 
    NAME shock_box_2d
    COMMAND $<TARGET_FILE:hydro_2d> -f ${CMAKE_CURRENT_SOURCE_DIR}/shock_box_2d.lua
    COMPARE shock_box_2d0000007.dat 
    STANDARD ${CMAKE_CURRENT_SOURCE_DIR}/shock_box_2d0000007.dat.std 
  )
  
  create_regression_test( 
    NAME shock_box_2d_omp4
    COMMAND $<TARGET_FILE:hydro_2d> -f ${CMAKE_CURRENT_SOURCE_DIR}/shock_box_2d.lua
    THREADS 4
    COMPARE shock_box_2d0000007.dat 
    STANDARD ${CMAKE_CURRENT_SOURCE_DIR}/shock_box_2d0000007.dat.std 
  )

else()

  create_regression_test( 
    NAME shock_box_2d
    COMMAND $<TARGET_FILE:hydro_2d> 
    COMPARE shock_box_2d0000007.dat 
    STANDARD ${CMAKE_CURRENT_SOURCE_DIR}/shock_box_2d0000007.dat.std 
  )
  
  create_regression_test( 
    NAME shock_box_2d_omp4
    COMMAND $<TARGET_FILE:hydro_2d> 
    THREADS 4
    COMPARE shock_box_2d0000007.dat 
    STANDARD ${CMAKE_CURRENT_SOURCE_DIR}/shock_box_2d0000007.dat.std 
  )

endif()
