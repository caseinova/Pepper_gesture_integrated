// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from social_robot_interfaces:srv/Description.idl
// generated code does not contain a copyright notice

#ifndef SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__STRUCT_HPP_
#define SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__social_robot_interfaces__srv__Description_Request __attribute__((deprecated))
#else
# define DEPRECATED__social_robot_interfaces__srv__Description_Request __declspec(deprecated)
#endif

namespace social_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Description_Request_
{
  using Type = Description_Request_<ContainerAllocator>;

  explicit Description_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0ll;
    }
  }

  explicit Description_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0ll;
    }
  }

  // field types and members
  using _idx_type =
    int64_t;
  _idx_type idx;

  // setters for named parameter idiom
  Type & set__idx(
    const int64_t & _arg)
  {
    this->idx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    social_robot_interfaces::srv::Description_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const social_robot_interfaces::srv::Description_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<social_robot_interfaces::srv::Description_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<social_robot_interfaces::srv::Description_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      social_robot_interfaces::srv::Description_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<social_robot_interfaces::srv::Description_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      social_robot_interfaces::srv::Description_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<social_robot_interfaces::srv::Description_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<social_robot_interfaces::srv::Description_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<social_robot_interfaces::srv::Description_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__social_robot_interfaces__srv__Description_Request
    std::shared_ptr<social_robot_interfaces::srv::Description_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__social_robot_interfaces__srv__Description_Request
    std::shared_ptr<social_robot_interfaces::srv::Description_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Description_Request_ & other) const
  {
    if (this->idx != other.idx) {
      return false;
    }
    return true;
  }
  bool operator!=(const Description_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Description_Request_

// alias to use template instance with default allocator
using Description_Request =
  social_robot_interfaces::srv::Description_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace social_robot_interfaces


// Include directives for member types
// Member 'description'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__social_robot_interfaces__srv__Description_Response __attribute__((deprecated))
#else
# define DEPRECATED__social_robot_interfaces__srv__Description_Response __declspec(deprecated)
#endif

namespace social_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Description_Response_
{
  using Type = Description_Response_<ContainerAllocator>;

  explicit Description_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_init)
  {
    (void)_init;
  }

  explicit Description_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _description_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__description(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    social_robot_interfaces::srv::Description_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const social_robot_interfaces::srv::Description_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<social_robot_interfaces::srv::Description_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<social_robot_interfaces::srv::Description_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      social_robot_interfaces::srv::Description_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<social_robot_interfaces::srv::Description_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      social_robot_interfaces::srv::Description_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<social_robot_interfaces::srv::Description_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<social_robot_interfaces::srv::Description_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<social_robot_interfaces::srv::Description_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__social_robot_interfaces__srv__Description_Response
    std::shared_ptr<social_robot_interfaces::srv::Description_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__social_robot_interfaces__srv__Description_Response
    std::shared_ptr<social_robot_interfaces::srv::Description_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Description_Response_ & other) const
  {
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const Description_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Description_Response_

// alias to use template instance with default allocator
using Description_Response =
  social_robot_interfaces::srv::Description_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace social_robot_interfaces

namespace social_robot_interfaces
{

namespace srv
{

struct Description
{
  using Request = social_robot_interfaces::srv::Description_Request;
  using Response = social_robot_interfaces::srv::Description_Response;
};

}  // namespace srv

}  // namespace social_robot_interfaces

#endif  // SOCIAL_ROBOT_INTERFACES__SRV__DETAIL__DESCRIPTION__STRUCT_HPP_
