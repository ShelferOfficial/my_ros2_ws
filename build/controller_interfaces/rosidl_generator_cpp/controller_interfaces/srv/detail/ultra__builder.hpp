// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_interfaces:srv/Ultra.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__BUILDER_HPP_
#define CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_interfaces/srv/detail/ultra__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_interfaces
{

namespace srv
{

namespace builder
{

class Init_Ultra_Request_is_obstacle
{
public:
  Init_Ultra_Request_is_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_interfaces::srv::Ultra_Request is_obstacle(::controller_interfaces::srv::Ultra_Request::_is_obstacle_type arg)
  {
    msg_.is_obstacle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interfaces::srv::Ultra_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interfaces::srv::Ultra_Request>()
{
  return controller_interfaces::srv::builder::Init_Ultra_Request_is_obstacle();
}

}  // namespace controller_interfaces


namespace controller_interfaces
{

namespace srv
{

namespace builder
{

class Init_Ultra_Response_is_received
{
public:
  Init_Ultra_Response_is_received()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_interfaces::srv::Ultra_Response is_received(::controller_interfaces::srv::Ultra_Response::_is_received_type arg)
  {
    msg_.is_received = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interfaces::srv::Ultra_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interfaces::srv::Ultra_Response>()
{
  return controller_interfaces::srv::builder::Init_Ultra_Response_is_received();
}

}  // namespace controller_interfaces

#endif  // CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__BUILDER_HPP_
