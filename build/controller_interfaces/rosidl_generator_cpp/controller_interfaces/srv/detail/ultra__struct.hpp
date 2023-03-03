// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_interfaces:srv/Ultra.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__STRUCT_HPP_
#define CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_interfaces__srv__Ultra_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_interfaces__srv__Ultra_Request __declspec(deprecated)
#endif

namespace controller_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ultra_Request_
{
  using Type = Ultra_Request_<ContainerAllocator>;

  explicit Ultra_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_obstacle = false;
    }
  }

  explicit Ultra_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_obstacle = false;
    }
  }

  // field types and members
  using _is_obstacle_type =
    bool;
  _is_obstacle_type is_obstacle;

  // setters for named parameter idiom
  Type & set__is_obstacle(
    const bool & _arg)
  {
    this->is_obstacle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interfaces::srv::Ultra_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interfaces::srv::Ultra_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interfaces::srv::Ultra_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interfaces::srv::Ultra_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interfaces::srv::Ultra_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interfaces::srv::Ultra_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interfaces::srv::Ultra_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interfaces::srv::Ultra_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interfaces::srv::Ultra_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interfaces::srv::Ultra_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interfaces__srv__Ultra_Request
    std::shared_ptr<controller_interfaces::srv::Ultra_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interfaces__srv__Ultra_Request
    std::shared_ptr<controller_interfaces::srv::Ultra_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ultra_Request_ & other) const
  {
    if (this->is_obstacle != other.is_obstacle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ultra_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ultra_Request_

// alias to use template instance with default allocator
using Ultra_Request =
  controller_interfaces::srv::Ultra_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_interfaces


#ifndef _WIN32
# define DEPRECATED__controller_interfaces__srv__Ultra_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_interfaces__srv__Ultra_Response __declspec(deprecated)
#endif

namespace controller_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ultra_Response_
{
  using Type = Ultra_Response_<ContainerAllocator>;

  explicit Ultra_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_received = false;
    }
  }

  explicit Ultra_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_received = false;
    }
  }

  // field types and members
  using _is_received_type =
    bool;
  _is_received_type is_received;

  // setters for named parameter idiom
  Type & set__is_received(
    const bool & _arg)
  {
    this->is_received = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interfaces::srv::Ultra_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interfaces::srv::Ultra_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interfaces::srv::Ultra_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interfaces::srv::Ultra_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interfaces::srv::Ultra_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interfaces::srv::Ultra_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interfaces::srv::Ultra_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interfaces::srv::Ultra_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interfaces::srv::Ultra_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interfaces::srv::Ultra_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interfaces__srv__Ultra_Response
    std::shared_ptr<controller_interfaces::srv::Ultra_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interfaces__srv__Ultra_Response
    std::shared_ptr<controller_interfaces::srv::Ultra_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ultra_Response_ & other) const
  {
    if (this->is_received != other.is_received) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ultra_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ultra_Response_

// alias to use template instance with default allocator
using Ultra_Response =
  controller_interfaces::srv::Ultra_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_interfaces

namespace controller_interfaces
{

namespace srv
{

struct Ultra
{
  using Request = controller_interfaces::srv::Ultra_Request;
  using Response = controller_interfaces::srv::Ultra_Response;
};

}  // namespace srv

}  // namespace controller_interfaces

#endif  // CONTROLLER_INTERFACES__SRV__DETAIL__ULTRA__STRUCT_HPP_
