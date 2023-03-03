// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_
#define CONTROLLER_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: dir
  {
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << ", ";
  }

  // member: is_no_one
  {
    out << "is_no_one: ";
    rosidl_generator_traits::value_to_yaml(msg.is_no_one, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << "\n";
  }

  // member: is_no_one
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_no_one: ";
    rosidl_generator_traits::value_to_yaml(msg.is_no_one, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace controller_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use controller_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_interfaces::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const controller_interfaces::msg::Num & msg)
{
  return controller_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controller_interfaces::msg::Num>()
{
  return "controller_interfaces::msg::Num";
}

template<>
inline const char * name<controller_interfaces::msg::Num>()
{
  return "controller_interfaces/msg/Num";
}

template<>
struct has_fixed_size<controller_interfaces::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interfaces::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interfaces::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_
