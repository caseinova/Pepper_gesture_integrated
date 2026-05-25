// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from social_robot_interfaces:srv/Description.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "social_robot_interfaces/srv/detail/description__rosidl_typesupport_introspection_c.h"
#include "social_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "social_robot_interfaces/srv/detail/description__functions.h"
#include "social_robot_interfaces/srv/detail/description__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  social_robot_interfaces__srv__Description_Request__init(message_memory);
}

void social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_fini_function(void * message_memory)
{
  social_robot_interfaces__srv__Description_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_message_member_array[1] = {
  {
    "idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(social_robot_interfaces__srv__Description_Request, idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_message_members = {
  "social_robot_interfaces__srv",  // message namespace
  "Description_Request",  // message name
  1,  // number of fields
  sizeof(social_robot_interfaces__srv__Description_Request),
  social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_message_member_array,  // message members
  social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_message_type_support_handle = {
  0,
  &social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_social_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, social_robot_interfaces, srv, Description_Request)() {
  if (!social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_message_type_support_handle.typesupport_identifier) {
    social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &social_robot_interfaces__srv__Description_Request__rosidl_typesupport_introspection_c__Description_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "social_robot_interfaces/srv/detail/description__rosidl_typesupport_introspection_c.h"
// already included above
// #include "social_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "social_robot_interfaces/srv/detail/description__functions.h"
// already included above
// #include "social_robot_interfaces/srv/detail/description__struct.h"


// Include directives for member types
// Member `description`
#include "std_msgs/msg/string.h"
// Member `description`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  social_robot_interfaces__srv__Description_Response__init(message_memory);
}

void social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_fini_function(void * message_memory)
{
  social_robot_interfaces__srv__Description_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_member_array[1] = {
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(social_robot_interfaces__srv__Description_Response, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_members = {
  "social_robot_interfaces__srv",  // message namespace
  "Description_Response",  // message name
  1,  // number of fields
  sizeof(social_robot_interfaces__srv__Description_Response),
  social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_member_array,  // message members
  social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_type_support_handle = {
  0,
  &social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_social_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, social_robot_interfaces, srv, Description_Response)() {
  social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_type_support_handle.typesupport_identifier) {
    social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &social_robot_interfaces__srv__Description_Response__rosidl_typesupport_introspection_c__Description_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "social_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "social_robot_interfaces/srv/detail/description__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_service_members = {
  "social_robot_interfaces__srv",  // service namespace
  "Description",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_Request_message_type_support_handle,
  NULL  // response message
  // social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_Response_message_type_support_handle
};

static rosidl_service_type_support_t social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_service_type_support_handle = {
  0,
  &social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, social_robot_interfaces, srv, Description_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, social_robot_interfaces, srv, Description_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_social_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, social_robot_interfaces, srv, Description)() {
  if (!social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_service_type_support_handle.typesupport_identifier) {
    social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, social_robot_interfaces, srv, Description_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, social_robot_interfaces, srv, Description_Response)()->data;
  }

  return &social_robot_interfaces__srv__detail__description__rosidl_typesupport_introspection_c__Description_service_type_support_handle;
}
