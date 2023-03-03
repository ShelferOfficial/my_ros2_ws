// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_interfaces:srv/Ultra.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__STRUCT_H_
#define CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Ultra in the package controller_interfaces.
typedef struct controller_interfaces__srv__Ultra_Request
{
  bool is_obstacle;
} controller_interfaces__srv__Ultra_Request;

// Struct for a sequence of controller_interfaces__srv__Ultra_Request.
typedef struct controller_interfaces__srv__Ultra_Request__Sequence
{
  controller_interfaces__srv__Ultra_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interfaces__srv__Ultra_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Ultra in the package controller_interfaces.
typedef struct controller_interfaces__srv__Ultra_Response
{
  bool is_received;
} controller_interfaces__srv__Ultra_Response;

// Struct for a sequence of controller_interfaces__srv__Ultra_Response.
typedef struct controller_interfaces__srv__Ultra_Response__Sequence
{
  controller_interfaces__srv__Ultra_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interfaces__srv__Ultra_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__STRUCT_H_
