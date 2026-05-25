// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from social_robot_interfaces:srv/Description.idl
// generated code does not contain a copyright notice
#include "social_robot_interfaces/srv/detail/description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
social_robot_interfaces__srv__Description_Request__init(social_robot_interfaces__srv__Description_Request * msg)
{
  if (!msg) {
    return false;
  }
  // idx
  return true;
}

void
social_robot_interfaces__srv__Description_Request__fini(social_robot_interfaces__srv__Description_Request * msg)
{
  if (!msg) {
    return;
  }
  // idx
}

bool
social_robot_interfaces__srv__Description_Request__are_equal(const social_robot_interfaces__srv__Description_Request * lhs, const social_robot_interfaces__srv__Description_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // idx
  if (lhs->idx != rhs->idx) {
    return false;
  }
  return true;
}

bool
social_robot_interfaces__srv__Description_Request__copy(
  const social_robot_interfaces__srv__Description_Request * input,
  social_robot_interfaces__srv__Description_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // idx
  output->idx = input->idx;
  return true;
}

social_robot_interfaces__srv__Description_Request *
social_robot_interfaces__srv__Description_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  social_robot_interfaces__srv__Description_Request * msg = (social_robot_interfaces__srv__Description_Request *)allocator.allocate(sizeof(social_robot_interfaces__srv__Description_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(social_robot_interfaces__srv__Description_Request));
  bool success = social_robot_interfaces__srv__Description_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
social_robot_interfaces__srv__Description_Request__destroy(social_robot_interfaces__srv__Description_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    social_robot_interfaces__srv__Description_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
social_robot_interfaces__srv__Description_Request__Sequence__init(social_robot_interfaces__srv__Description_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  social_robot_interfaces__srv__Description_Request * data = NULL;

  if (size) {
    data = (social_robot_interfaces__srv__Description_Request *)allocator.zero_allocate(size, sizeof(social_robot_interfaces__srv__Description_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = social_robot_interfaces__srv__Description_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        social_robot_interfaces__srv__Description_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
social_robot_interfaces__srv__Description_Request__Sequence__fini(social_robot_interfaces__srv__Description_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      social_robot_interfaces__srv__Description_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

social_robot_interfaces__srv__Description_Request__Sequence *
social_robot_interfaces__srv__Description_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  social_robot_interfaces__srv__Description_Request__Sequence * array = (social_robot_interfaces__srv__Description_Request__Sequence *)allocator.allocate(sizeof(social_robot_interfaces__srv__Description_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = social_robot_interfaces__srv__Description_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
social_robot_interfaces__srv__Description_Request__Sequence__destroy(social_robot_interfaces__srv__Description_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    social_robot_interfaces__srv__Description_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
social_robot_interfaces__srv__Description_Request__Sequence__are_equal(const social_robot_interfaces__srv__Description_Request__Sequence * lhs, const social_robot_interfaces__srv__Description_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!social_robot_interfaces__srv__Description_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
social_robot_interfaces__srv__Description_Request__Sequence__copy(
  const social_robot_interfaces__srv__Description_Request__Sequence * input,
  social_robot_interfaces__srv__Description_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(social_robot_interfaces__srv__Description_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    social_robot_interfaces__srv__Description_Request * data =
      (social_robot_interfaces__srv__Description_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!social_robot_interfaces__srv__Description_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          social_robot_interfaces__srv__Description_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!social_robot_interfaces__srv__Description_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `description`
#include "std_msgs/msg/detail/string__functions.h"

bool
social_robot_interfaces__srv__Description_Response__init(social_robot_interfaces__srv__Description_Response * msg)
{
  if (!msg) {
    return false;
  }
  // description
  if (!std_msgs__msg__String__init(&msg->description)) {
    social_robot_interfaces__srv__Description_Response__fini(msg);
    return false;
  }
  return true;
}

void
social_robot_interfaces__srv__Description_Response__fini(social_robot_interfaces__srv__Description_Response * msg)
{
  if (!msg) {
    return;
  }
  // description
  std_msgs__msg__String__fini(&msg->description);
}

bool
social_robot_interfaces__srv__Description_Response__are_equal(const social_robot_interfaces__srv__Description_Response * lhs, const social_robot_interfaces__srv__Description_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // description
  if (!std_msgs__msg__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
social_robot_interfaces__srv__Description_Response__copy(
  const social_robot_interfaces__srv__Description_Response * input,
  social_robot_interfaces__srv__Description_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // description
  if (!std_msgs__msg__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

social_robot_interfaces__srv__Description_Response *
social_robot_interfaces__srv__Description_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  social_robot_interfaces__srv__Description_Response * msg = (social_robot_interfaces__srv__Description_Response *)allocator.allocate(sizeof(social_robot_interfaces__srv__Description_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(social_robot_interfaces__srv__Description_Response));
  bool success = social_robot_interfaces__srv__Description_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
social_robot_interfaces__srv__Description_Response__destroy(social_robot_interfaces__srv__Description_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    social_robot_interfaces__srv__Description_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
social_robot_interfaces__srv__Description_Response__Sequence__init(social_robot_interfaces__srv__Description_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  social_robot_interfaces__srv__Description_Response * data = NULL;

  if (size) {
    data = (social_robot_interfaces__srv__Description_Response *)allocator.zero_allocate(size, sizeof(social_robot_interfaces__srv__Description_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = social_robot_interfaces__srv__Description_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        social_robot_interfaces__srv__Description_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
social_robot_interfaces__srv__Description_Response__Sequence__fini(social_robot_interfaces__srv__Description_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      social_robot_interfaces__srv__Description_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

social_robot_interfaces__srv__Description_Response__Sequence *
social_robot_interfaces__srv__Description_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  social_robot_interfaces__srv__Description_Response__Sequence * array = (social_robot_interfaces__srv__Description_Response__Sequence *)allocator.allocate(sizeof(social_robot_interfaces__srv__Description_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = social_robot_interfaces__srv__Description_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
social_robot_interfaces__srv__Description_Response__Sequence__destroy(social_robot_interfaces__srv__Description_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    social_robot_interfaces__srv__Description_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
social_robot_interfaces__srv__Description_Response__Sequence__are_equal(const social_robot_interfaces__srv__Description_Response__Sequence * lhs, const social_robot_interfaces__srv__Description_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!social_robot_interfaces__srv__Description_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
social_robot_interfaces__srv__Description_Response__Sequence__copy(
  const social_robot_interfaces__srv__Description_Response__Sequence * input,
  social_robot_interfaces__srv__Description_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(social_robot_interfaces__srv__Description_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    social_robot_interfaces__srv__Description_Response * data =
      (social_robot_interfaces__srv__Description_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!social_robot_interfaces__srv__Description_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          social_robot_interfaces__srv__Description_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!social_robot_interfaces__srv__Description_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
