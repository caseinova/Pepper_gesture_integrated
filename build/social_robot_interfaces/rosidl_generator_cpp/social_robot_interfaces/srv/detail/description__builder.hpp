// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from social_robot_interfaces:srv/Description.idl
// generated code does not contain a copyright notice

#ifndef SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__BUILDER_HPP_
#define SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "social_robot_interfaces/srv/detail/description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace social_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Description_Request_idx
{
public:
  Init_Description_Request_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::social_robot_interfaces::srv::Description_Request idx(::social_robot_interfaces::srv::Description_Request::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::social_robot_interfaces::srv::Description_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::social_robot_interfaces::srv::Description_Request>()
{
  return social_robot_interfaces::srv::builder::Init_Description_Request_idx();
}

}  // namespace social_robot_interfaces


namespace social_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Description_Response_description
{
public:
  Init_Description_Response_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::social_robot_interfaces::srv::Description_Response description(::social_robot_interfaces::srv::Description_Response::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::social_robot_interfaces::srv::Description_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::social_robot_interfaces::srv::Description_Response>()
{
  return social_robot_interfaces::srv::builder::Init_Description_Response_description();
}

}  // namespace social_robot_interfaces

#endif  // SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__BUILDER_HPP_
