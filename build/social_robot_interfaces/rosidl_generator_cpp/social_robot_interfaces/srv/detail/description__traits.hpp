// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from social_robot_interfaces:srv/Description.idl
// generated code does not contain a copyright notice

#ifndef SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__TRAITS_HPP_
#define SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "social_robot_interfaces/srv/detail/description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace social_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Description_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: idx
  {
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Description_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Description_Request & msg, bool use_flow_style = false)
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

}  // namespace social_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use social_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const social_robot_interfaces::srv::Description_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  social_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use social_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const social_robot_interfaces::srv::Description_Request & msg)
{
  return social_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<social_robot_interfaces::srv::Description_Request>()
{
  return "social_robot_interfaces::srv::Description_Request";
}

template<>
inline const char * name<social_robot_interfaces::srv::Description_Request>()
{
  return "social_robot_interfaces/srv/Description_Request";
}

template<>
struct has_fixed_size<social_robot_interfaces::srv::Description_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<social_robot_interfaces::srv::Description_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<social_robot_interfaces::srv::Description_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'description'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace social_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Description_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: description
  {
    out << "description: ";
    to_flow_style_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Description_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description:\n";
    to_block_style_yaml(msg.description, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Description_Response & msg, bool use_flow_style = false)
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

}  // namespace social_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use social_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const social_robot_interfaces::srv::Description_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  social_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use social_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const social_robot_interfaces::srv::Description_Response & msg)
{
  return social_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<social_robot_interfaces::srv::Description_Response>()
{
  return "social_robot_interfaces::srv::Description_Response";
}

template<>
inline const char * name<social_robot_interfaces::srv::Description_Response>()
{
  return "social_robot_interfaces/srv/Description_Response";
}

template<>
struct has_fixed_size<social_robot_interfaces::srv::Description_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<social_robot_interfaces::srv::Description_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<social_robot_interfaces::srv::Description_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<social_robot_interfaces::srv::Description>()
{
  return "social_robot_interfaces::srv::Description";
}

template<>
inline const char * name<social_robot_interfaces::srv::Description>()
{
  return "social_robot_interfaces/srv/Description";
}

template<>
struct has_fixed_size<social_robot_interfaces::srv::Description>
  : std::integral_constant<
    bool,
    has_fixed_size<social_robot_interfaces::srv::Description_Request>::value &&
    has_fixed_size<social_robot_interfaces::srv::Description_Response>::value
  >
{
};

template<>
struct has_bounded_size<social_robot_interfaces::srv::Description>
  : std::integral_constant<
    bool,
    has_bounded_size<social_robot_interfaces::srv::Description_Request>::value &&
    has_bounded_size<social_robot_interfaces::srv::Description_Response>::value
  >
{
};

template<>
struct is_service<social_robot_interfaces::srv::Description>
  : std::true_type
{
};

template<>
struct is_service_request<social_robot_interfaces::srv::Description_Request>
  : std::true_type
{
};

template<>
struct is_service_response<social_robot_interfaces::srv::Description_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__TRAITS_HPP_
