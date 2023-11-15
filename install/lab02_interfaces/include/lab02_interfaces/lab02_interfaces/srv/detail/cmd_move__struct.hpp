// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lab02_interfaces:srv/CmdMove.idl
// generated code does not contain a copyright notice

#ifndef LAB02_INTERFACES__SRV__DETAIL__CMD_MOVE__STRUCT_HPP_
#define LAB02_INTERFACES__SRV__DETAIL__CMD_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lab02_interfaces__srv__CmdMove_Request __attribute__((deprecated))
#else
# define DEPRECATED__lab02_interfaces__srv__CmdMove_Request __declspec(deprecated)
#endif

namespace lab02_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CmdMove_Request_
{
  using Type = CmdMove_Request_<ContainerAllocator>;

  explicit CmdMove_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x0 = 0.0;
      this->y0 = 0.0;
      this->x1 = 0.0;
      this->y1 = 0.0;
    }
  }

  explicit CmdMove_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x0 = 0.0;
      this->y0 = 0.0;
      this->x1 = 0.0;
      this->y1 = 0.0;
    }
  }

  // field types and members
  using _x0_type =
    double;
  _x0_type x0;
  using _y0_type =
    double;
  _y0_type y0;
  using _x1_type =
    double;
  _x1_type x1;
  using _y1_type =
    double;
  _y1_type y1;

  // setters for named parameter idiom
  Type & set__x0(
    const double & _arg)
  {
    this->x0 = _arg;
    return *this;
  }
  Type & set__y0(
    const double & _arg)
  {
    this->y0 = _arg;
    return *this;
  }
  Type & set__x1(
    const double & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const double & _arg)
  {
    this->y1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab02_interfaces__srv__CmdMove_Request
    std::shared_ptr<lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab02_interfaces__srv__CmdMove_Request
    std::shared_ptr<lab02_interfaces::srv::CmdMove_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdMove_Request_ & other) const
  {
    if (this->x0 != other.x0) {
      return false;
    }
    if (this->y0 != other.y0) {
      return false;
    }
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdMove_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdMove_Request_

// alias to use template instance with default allocator
using CmdMove_Request =
  lab02_interfaces::srv::CmdMove_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lab02_interfaces


#ifndef _WIN32
# define DEPRECATED__lab02_interfaces__srv__CmdMove_Response __attribute__((deprecated))
#else
# define DEPRECATED__lab02_interfaces__srv__CmdMove_Response __declspec(deprecated)
#endif

namespace lab02_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CmdMove_Response_
{
  using Type = CmdMove_Response_<ContainerAllocator>;

  explicit CmdMove_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0.0;
      this->distance = 0.0;
    }
  }

  explicit CmdMove_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0.0;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _direction_type =
    double;
  _direction_type direction;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__direction(
    const double & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab02_interfaces__srv__CmdMove_Response
    std::shared_ptr<lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab02_interfaces__srv__CmdMove_Response
    std::shared_ptr<lab02_interfaces::srv::CmdMove_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdMove_Response_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdMove_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdMove_Response_

// alias to use template instance with default allocator
using CmdMove_Response =
  lab02_interfaces::srv::CmdMove_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lab02_interfaces

namespace lab02_interfaces
{

namespace srv
{

struct CmdMove
{
  using Request = lab02_interfaces::srv::CmdMove_Request;
  using Response = lab02_interfaces::srv::CmdMove_Response;
};

}  // namespace srv

}  // namespace lab02_interfaces

#endif  // LAB02_INTERFACES__SRV__DETAIL__CMD_MOVE__STRUCT_HPP_
