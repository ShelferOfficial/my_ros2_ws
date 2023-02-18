#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rt_usb_9axisimu_driver::rt_usb_9axisimu_driver_component" for configuration ""
set_property(TARGET rt_usb_9axisimu_driver::rt_usb_9axisimu_driver_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rt_usb_9axisimu_driver::rt_usb_9axisimu_driver_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librt_usb_9axisimu_driver_component.so"
  IMPORTED_SONAME_NOCONFIG "librt_usb_9axisimu_driver_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rt_usb_9axisimu_driver::rt_usb_9axisimu_driver_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_rt_usb_9axisimu_driver::rt_usb_9axisimu_driver_component "${_IMPORT_PREFIX}/lib/librt_usb_9axisimu_driver_component.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
