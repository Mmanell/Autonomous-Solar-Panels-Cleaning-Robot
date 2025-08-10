
if(NOT "/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-subbuild/matplotlib_cpp-populate-prefix/src/matplotlib_cpp-populate-stamp/matplotlib_cpp-populate-gitinfo.txt" IS_NEWER_THAN "/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-subbuild/matplotlib_cpp-populate-prefix/src/matplotlib_cpp-populate-stamp/matplotlib_cpp-populate-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-subbuild/matplotlib_cpp-populate-prefix/src/matplotlib_cpp-populate-stamp/matplotlib_cpp-populate-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/Fields2Cover/matplotlib-cpp.git" "matplotlib_cpp-src"
    WORKING_DIRECTORY "/home/manel/psolar_ws/build/fields2cover/_deps"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/Fields2Cover/matplotlib-cpp.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout 75c15d0c907a4b68bca5ef97032302bd14ccab8e --
  WORKING_DIRECTORY "/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '75c15d0c907a4b68bca5ef97032302bd14ccab8e'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-src"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-subbuild/matplotlib_cpp-populate-prefix/src/matplotlib_cpp-populate-stamp/matplotlib_cpp-populate-gitinfo.txt"
    "/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-subbuild/matplotlib_cpp-populate-prefix/src/matplotlib_cpp-populate-stamp/matplotlib_cpp-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/manel/psolar_ws/build/fields2cover/_deps/matplotlib_cpp-subbuild/matplotlib_cpp-populate-prefix/src/matplotlib_cpp-populate-stamp/matplotlib_cpp-populate-gitclone-lastrun.txt'")
endif()

