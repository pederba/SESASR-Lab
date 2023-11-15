// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lab02_interfaces:srv/GetTrajectory.idl
// generated code does not contain a copyright notice

#ifndef LAB02_INTERFACES__SRV__DETAIL__GET_TRAJECTORY__STRUCT_HPP_
#define LAB02_INTERFACES__SRV__DETAIL__GET_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lab02_interfaces__srv__GetTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__lab02_interfaces__srv__GetTrajectory_Request __declspec(deprecated)
#endif

namespace lab02_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTrajectory_Request_
{
  using Type = GetTrajectory_Request_<ContainerAllocator>;

  explicit GetTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit GetTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab02_interfaces__srv__GetTrajectory_Request
    std::shared_ptr<lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab02_interfaces__srv__GetTrajectory_Request
    std::shared_ptr<lab02_interfaces::srv::GetTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTrajectory_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTrajectory_Request_

// alias to use template instance with default allocator
using GetTrajectory_Request =
  lab02_interfaces::srv::GetTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lab02_interfaces


#ifndef _WIN32
# define DEPRECATED__lab02_interfaces__srv__GetTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__lab02_interfaces__srv__GetTrajectory_Response __declspec(deprecated)
#endif

namespace lab02_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTrajectory_Response_
{
  using Type = GetTrajectory_Response_<ContainerAllocator>;

  explicit GetTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0.0;
      this->distance = 0.0;
    }
  }

  explicit GetTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab02_interfaces__srv__GetTrajectory_Response
    std::shared_ptr<lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab02_interfaces__srv__GetTrajectory_Response
    std::shared_ptr<lab02_interfaces::srv::GetTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTrajectory_Response_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTrajectory_Response_

// alias to use template instance with default allocator
using GetTrajectory_Response =
  lab02_interfaces::srv::GetTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lab02_interfaces

namespace lab02_interfaces
{

namespace srv
{

struct GetTrajectory
{
  using Request = lab02_interfaces::srv::GetTrajectory_Request;
  using Response = lab02_interfaces::srv::GetTrajectory_Response;
};

}  // namespace srv

}  // namespace lab02_interfaces

#endif  // LAB02_INTERFACES__SRV__DETAIL__GET_TRAJECTORY__STRUCT_HPP_
