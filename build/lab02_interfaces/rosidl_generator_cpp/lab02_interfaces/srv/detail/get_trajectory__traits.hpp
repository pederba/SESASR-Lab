// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lab02_interfaces:srv/GetTrajectory.idl
// generated code does not contain a copyright notice

#ifndef LAB02_INTERFACES__SRV__DETAIL__GET_TRAJECTORY__TRAITS_HPP_
#define LAB02_INTERFACES__SRV__DETAIL__GET_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lab02_interfaces/srv/detail/get_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lab02_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTrajectory_Request & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTrajectory_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTrajectory_Request & msg, bool use_flow_style = false)
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

}  // namespace lab02_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lab02_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lab02_interfaces::srv::GetTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab02_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab02_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lab02_interfaces::srv::GetTrajectory_Request & msg)
{
  return lab02_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lab02_interfaces::srv::GetTrajectory_Request>()
{
  return "lab02_interfaces::srv::GetTrajectory_Request";
}

template<>
inline const char * name<lab02_interfaces::srv::GetTrajectory_Request>()
{
  return "lab02_interfaces/srv/GetTrajectory_Request";
}

template<>
struct has_fixed_size<lab02_interfaces::srv::GetTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lab02_interfaces::srv::GetTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lab02_interfaces::srv::GetTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lab02_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTrajectory_Response & msg, bool use_flow_style = false)
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

}  // namespace lab02_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lab02_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lab02_interfaces::srv::GetTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab02_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab02_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lab02_interfaces::srv::GetTrajectory_Response & msg)
{
  return lab02_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lab02_interfaces::srv::GetTrajectory_Response>()
{
  return "lab02_interfaces::srv::GetTrajectory_Response";
}

template<>
inline const char * name<lab02_interfaces::srv::GetTrajectory_Response>()
{
  return "lab02_interfaces/srv/GetTrajectory_Response";
}

template<>
struct has_fixed_size<lab02_interfaces::srv::GetTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lab02_interfaces::srv::GetTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lab02_interfaces::srv::GetTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lab02_interfaces::srv::GetTrajectory>()
{
  return "lab02_interfaces::srv::GetTrajectory";
}

template<>
inline const char * name<lab02_interfaces::srv::GetTrajectory>()
{
  return "lab02_interfaces/srv/GetTrajectory";
}

template<>
struct has_fixed_size<lab02_interfaces::srv::GetTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<lab02_interfaces::srv::GetTrajectory_Request>::value &&
    has_fixed_size<lab02_interfaces::srv::GetTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<lab02_interfaces::srv::GetTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<lab02_interfaces::srv::GetTrajectory_Request>::value &&
    has_bounded_size<lab02_interfaces::srv::GetTrajectory_Response>::value
  >
{
};

template<>
struct is_service<lab02_interfaces::srv::GetTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<lab02_interfaces::srv::GetTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lab02_interfaces::srv::GetTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LAB02_INTERFACES__SRV__DETAIL__GET_TRAJECTORY__TRAITS_HPP_
