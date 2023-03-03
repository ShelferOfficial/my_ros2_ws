// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_interfaces:srv/Ultra.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__TRAITS_HPP_
#define CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_interfaces/srv/detail/ultra__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ultra_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_obstacle
  {
    out << "is_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.is_obstacle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ultra_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.is_obstacle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ultra_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace controller_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use controller_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_interfaces::srv::Ultra_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_interfaces::srv::Ultra_Request & msg)
{
  return controller_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_interfaces::srv::Ultra_Request>()
{
  return "controller_interfaces::srv::Ultra_Request";
}

template<>
inline const char * name<controller_interfaces::srv::Ultra_Request>()
{
  return "controller_interfaces/srv/Ultra_Request";
}

template<>
struct has_fixed_size<controller_interfaces::srv::Ultra_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interfaces::srv::Ultra_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interfaces::srv::Ultra_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace controller_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ultra_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_received
  {
    out << "is_received: ";
    rosidl_generator_traits::value_to_yaml(msg.is_received, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ultra_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_received: ";
    rosidl_generator_traits::value_to_yaml(msg.is_received, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ultra_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace controller_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use controller_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_interfaces::srv::Ultra_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_interfaces::srv::Ultra_Response & msg)
{
  return controller_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_interfaces::srv::Ultra_Response>()
{
  return "controller_interfaces::srv::Ultra_Response";
}

template<>
inline const char * name<controller_interfaces::srv::Ultra_Response>()
{
  return "controller_interfaces/srv/Ultra_Response";
}

template<>
struct has_fixed_size<controller_interfaces::srv::Ultra_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interfaces::srv::Ultra_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interfaces::srv::Ultra_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_interfaces::srv::Ultra>()
{
  return "controller_interfaces::srv::Ultra";
}

template<>
inline const char * name<controller_interfaces::srv::Ultra>()
{
  return "controller_interfaces/srv/Ultra";
}

template<>
struct has_fixed_size<controller_interfaces::srv::Ultra>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_interfaces::srv::Ultra_Request>::value &&
    has_fixed_size<controller_interfaces::srv::Ultra_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_interfaces::srv::Ultra>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_interfaces::srv::Ultra_Request>::value &&
    has_bounded_size<controller_interfaces::srv::Ultra_Response>::value
  >
{
};

template<>
struct is_service<controller_interfaces::srv::Ultra>
  : std::true_type
{
};

template<>
struct is_service_request<controller_interfaces::srv::Ultra_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_interfaces::srv::Ultra_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__TRAITS_HPP_
