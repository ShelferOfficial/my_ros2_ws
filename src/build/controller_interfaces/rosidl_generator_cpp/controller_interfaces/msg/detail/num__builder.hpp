// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define CONTROLLER_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_dir
{
public:
  explicit Init_Num_dir(::controller_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  ::controller_interfaces::msg::Num dir(::controller_interfaces::msg::Num::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interfaces::msg::Num msg_;
};

class Init_Num_y
{
public:
  explicit Init_Num_y(::controller_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_dir y(::controller_interfaces::msg::Num::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Num_dir(msg_);
  }

private:
  ::controller_interfaces::msg::Num msg_;
};

class Init_Num_x
{
public:
  Init_Num_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_y x(::controller_interfaces::msg::Num::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Num_y(msg_);
  }

private:
  ::controller_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interfaces::msg::Num>()
{
  return controller_interfaces::msg::builder::Init_Num_x();
}

}  // namespace controller_interfaces

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
