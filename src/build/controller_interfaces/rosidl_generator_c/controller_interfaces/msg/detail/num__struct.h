// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
#define CONTROLLER_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package controller_interfaces.
typedef struct controller_interfaces__msg__Num
{
  double x;
  double y;
  int8_t dir;
} controller_interfaces__msg__Num;

// Struct for a sequence of controller_interfaces__msg__Num.
typedef struct controller_interfaces__msg__Num__Sequence
{
  controller_interfaces__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interfaces__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
