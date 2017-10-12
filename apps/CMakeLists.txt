#~----------------------------------------------------------------------------~#
# Copyright (c) 2016 Los Alamos National Security, LLC
# All rights reserved.
#~----------------------------------------------------------------------------~#

include(regression) 

include_directories("/users/srinath/allinea-forge-7.1-Suse-12-x86_64/map/wrapper")

add_subdirectory( common )
add_subdirectory( hydro )
add_subdirectory( maire_hydro )

add_executable( dummy_app dummy_app.cc )
