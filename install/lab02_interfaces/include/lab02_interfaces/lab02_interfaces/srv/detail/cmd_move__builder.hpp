// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lab02_interfaces:srv/CmdMove.idl
// generated code does not contain a copyright notice

#ifndef LAB02_INTERFACES__SRV__DETAIL__CMD_MOVE__BUILDER_HPP_
#define LAB02_INTERFACES__SRV__DETAIL__CMD_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lab02_interfaces/srv/detail/cmd_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lab02_interfaces
{

namespace srv
{

namespace builder
{

class Init_CmdMove_Request_y1
{
public:
  explicit Init_CmdMove_Request_y1(::lab02_interfaces::srv::CmdMove_Request & msg)
  : msg_(msg)
  {}
  ::lab02_interfaces::srv::CmdMove_Request y1(::lab02_interfaces::srv::CmdMove_Request::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab02_interfaces::srv::CmdMove_Request msg_;
};

class Init_CmdMove_Request_x1
{
public:
  explicit Init_CmdMove_Request_x1(::lab02_interfaces::srv::CmdMove_Request & msg)
  : msg_(msg)
  {}
  Init_CmdMove_Request_y1 x1(::lab02_interfaces::srv::CmdMove_Request::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_CmdMove_Request_y1(msg_);
  }

private:
  ::lab02_interfaces::srv::CmdMove_Request msg_;
};

class Init_CmdMove_Request_y0
{
public:
  explicit Init_CmdMove_Request_y0(::lab02_interfaces::srv::CmdMove_Request & msg)
  : msg_(msg)
  {}
  Init_CmdMove_Request_x1 y0(::lab02_interfaces::srv::CmdMove_Request::_y0_type arg)
  {
    msg_.y0 = std::move(arg);
    return Init_CmdMove_Request_x1(msg_);
  }

private:
  ::lab02_interfaces::srv::CmdMove_Request msg_;
};

class Init_CmdMove_Request_x0
{
public:
  Init_CmdMove_Request_x0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdMove_Request_y0 x0(::lab02_interfaces::srv::CmdMove_Request::_x0_type arg)
  {
    msg_.x0 = std::move(arg);
    return Init_CmdMove_Request_y0(msg_);
  }

private:
  ::lab02_interfaces::srv::CmdMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab02_interfaces::srv::CmdMove_Request>()
{
  return lab02_interfaces::srv::builder::Init_CmdMove_Request_x0();
}

}  // namespace lab02_interfaces


namespace lab02_interfaces
{

namespace srv
{

namespace builder
{

class Init_CmdMove_Response_distance
{
public:
  explicit Init_CmdMove_Response_distance(::lab02_interfaces::srv::CmdMove_Response & msg)
  : msg_(msg)
  {}
  ::lab02_interfaces::srv::CmdMove_Response distance(::lab02_interfaces::srv::CmdMove_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab02_interfaces::srv::CmdMove_Response msg_;
};

class Init_CmdMove_Response_direction
{
public:
  Init_CmdMove_Response_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdMove_Response_distance direction(::lab02_interfaces::srv::CmdMove_Response::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_CmdMove_Response_distance(msg_);
  }

private:
  ::lab02_interfaces::srv::CmdMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab02_interfaces::srv::CmdMove_Response>()
{
  return lab02_interfaces::srv::builder::Init_CmdMove_Response_direction();
}

}  // namespace lab02_interfaces

#endif  // LAB02_INTERFACES__SRV__DETAIL__CMD_MOVE__BUILDER_HPP_
