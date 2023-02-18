# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ps_ros2_common_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ps_ros2_common_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ps_ros2_common_FOUND FALSE)
  elseif(NOT ps_ros2_common_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ps_ros2_common_FOUND FALSE)
  endif()
  return()
endif()
set(_ps_ros2_common_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ps_ros2_common_FIND_QUIETLY)
  message(STATUS "Found ps_ros2_common: 0.0.0 (${ps_ros2_common_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ps_ros2_common' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ps_ros2_common_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ps_ros2_common_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ps_ros2_common_DIR}/${_extra}")
endforeach()
