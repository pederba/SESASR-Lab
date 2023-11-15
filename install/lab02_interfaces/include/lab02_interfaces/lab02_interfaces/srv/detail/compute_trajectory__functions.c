// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lab02_interfaces:srv/ComputeTrajectory.idl
// generated code does not contain a copyright notice
#include "lab02_interfaces/srv/detail/compute_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
lab02_interfaces__srv__ComputeTrajectory_Request__init(lab02_interfaces__srv__ComputeTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x0
  // y0
  // x1
  // y1
  return true;
}

void
lab02_interfaces__srv__ComputeTrajectory_Request__fini(lab02_interfaces__srv__ComputeTrajectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // x0
  // y0
  // x1
  // y1
}

bool
lab02_interfaces__srv__ComputeTrajectory_Request__are_equal(const lab02_interfaces__srv__ComputeTrajectory_Request * lhs, const lab02_interfaces__srv__ComputeTrajectory_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x0
  if (lhs->x0 != rhs->x0) {
    return false;
  }
  // y0
  if (lhs->y0 != rhs->y0) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  return true;
}

bool
lab02_interfaces__srv__ComputeTrajectory_Request__copy(
  const lab02_interfaces__srv__ComputeTrajectory_Request * input,
  lab02_interfaces__srv__ComputeTrajectory_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x0
  output->x0 = input->x0;
  // y0
  output->y0 = input->y0;
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  return true;
}

lab02_interfaces__srv__ComputeTrajectory_Request *
lab02_interfaces__srv__ComputeTrajectory_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab02_interfaces__srv__ComputeTrajectory_Request * msg = (lab02_interfaces__srv__ComputeTrajectory_Request *)allocator.allocate(sizeof(lab02_interfaces__srv__ComputeTrajectory_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab02_interfaces__srv__ComputeTrajectory_Request));
  bool success = lab02_interfaces__srv__ComputeTrajectory_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lab02_interfaces__srv__ComputeTrajectory_Request__destroy(lab02_interfaces__srv__ComputeTrajectory_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lab02_interfaces__srv__ComputeTrajectory_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lab02_interfaces__srv__ComputeTrajectory_Request__Sequence__init(lab02_interfaces__srv__ComputeTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab02_interfaces__srv__ComputeTrajectory_Request * data = NULL;

  if (size) {
    data = (lab02_interfaces__srv__ComputeTrajectory_Request *)allocator.zero_allocate(size, sizeof(lab02_interfaces__srv__ComputeTrajectory_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab02_interfaces__srv__ComputeTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab02_interfaces__srv__ComputeTrajectory_Request__fini(&data[i - 1]);
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
lab02_interfaces__srv__ComputeTrajectory_Request__Sequence__fini(lab02_interfaces__srv__ComputeTrajectory_Request__Sequence * array)
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
      lab02_interfaces__srv__ComputeTrajectory_Request__fini(&array->data[i]);
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

lab02_interfaces__srv__ComputeTrajectory_Request__Sequence *
lab02_interfaces__srv__ComputeTrajectory_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab02_interfaces__srv__ComputeTrajectory_Request__Sequence * array = (lab02_interfaces__srv__ComputeTrajectory_Request__Sequence *)allocator.allocate(sizeof(lab02_interfaces__srv__ComputeTrajectory_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lab02_interfaces__srv__ComputeTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lab02_interfaces__srv__ComputeTrajectory_Request__Sequence__destroy(lab02_interfaces__srv__ComputeTrajectory_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lab02_interfaces__srv__ComputeTrajectory_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lab02_interfaces__srv__ComputeTrajectory_Request__Sequence__are_equal(const lab02_interfaces__srv__ComputeTrajectory_Request__Sequence * lhs, const lab02_interfaces__srv__ComputeTrajectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lab02_interfaces__srv__ComputeTrajectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lab02_interfaces__srv__ComputeTrajectory_Request__Sequence__copy(
  const lab02_interfaces__srv__ComputeTrajectory_Request__Sequence * input,
  lab02_interfaces__srv__ComputeTrajectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lab02_interfaces__srv__ComputeTrajectory_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lab02_interfaces__srv__ComputeTrajectory_Request * data =
      (lab02_interfaces__srv__ComputeTrajectory_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lab02_interfaces__srv__ComputeTrajectory_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lab02_interfaces__srv__ComputeTrajectory_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lab02_interfaces__srv__ComputeTrajectory_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lab02_interfaces__srv__ComputeTrajectory_Response__init(lab02_interfaces__srv__ComputeTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  // distance
  return true;
}

void
lab02_interfaces__srv__ComputeTrajectory_Response__fini(lab02_interfaces__srv__ComputeTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // direction
  // distance
}

bool
lab02_interfaces__srv__ComputeTrajectory_Response__are_equal(const lab02_interfaces__srv__ComputeTrajectory_Response * lhs, const lab02_interfaces__srv__ComputeTrajectory_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
lab02_interfaces__srv__ComputeTrajectory_Response__copy(
  const lab02_interfaces__srv__ComputeTrajectory_Response * input,
  lab02_interfaces__srv__ComputeTrajectory_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  output->direction = input->direction;
  // distance
  output->distance = input->distance;
  return true;
}

lab02_interfaces__srv__ComputeTrajectory_Response *
lab02_interfaces__srv__ComputeTrajectory_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab02_interfaces__srv__ComputeTrajectory_Response * msg = (lab02_interfaces__srv__ComputeTrajectory_Response *)allocator.allocate(sizeof(lab02_interfaces__srv__ComputeTrajectory_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab02_interfaces__srv__ComputeTrajectory_Response));
  bool success = lab02_interfaces__srv__ComputeTrajectory_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lab02_interfaces__srv__ComputeTrajectory_Response__destroy(lab02_interfaces__srv__ComputeTrajectory_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lab02_interfaces__srv__ComputeTrajectory_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lab02_interfaces__srv__ComputeTrajectory_Response__Sequence__init(lab02_interfaces__srv__ComputeTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab02_interfaces__srv__ComputeTrajectory_Response * data = NULL;

  if (size) {
    data = (lab02_interfaces__srv__ComputeTrajectory_Response *)allocator.zero_allocate(size, sizeof(lab02_interfaces__srv__ComputeTrajectory_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab02_interfaces__srv__ComputeTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab02_interfaces__srv__ComputeTrajectory_Response__fini(&data[i - 1]);
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
lab02_interfaces__srv__ComputeTrajectory_Response__Sequence__fini(lab02_interfaces__srv__ComputeTrajectory_Response__Sequence * array)
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
      lab02_interfaces__srv__ComputeTrajectory_Response__fini(&array->data[i]);
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

lab02_interfaces__srv__ComputeTrajectory_Response__Sequence *
lab02_interfaces__srv__ComputeTrajectory_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab02_interfaces__srv__ComputeTrajectory_Response__Sequence * array = (lab02_interfaces__srv__ComputeTrajectory_Response__Sequence *)allocator.allocate(sizeof(lab02_interfaces__srv__ComputeTrajectory_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lab02_interfaces__srv__ComputeTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lab02_interfaces__srv__ComputeTrajectory_Response__Sequence__destroy(lab02_interfaces__srv__ComputeTrajectory_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lab02_interfaces__srv__ComputeTrajectory_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lab02_interfaces__srv__ComputeTrajectory_Response__Sequence__are_equal(const lab02_interfaces__srv__ComputeTrajectory_Response__Sequence * lhs, const lab02_interfaces__srv__ComputeTrajectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lab02_interfaces__srv__ComputeTrajectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lab02_interfaces__srv__ComputeTrajectory_Response__Sequence__copy(
  const lab02_interfaces__srv__ComputeTrajectory_Response__Sequence * input,
  lab02_interfaces__srv__ComputeTrajectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lab02_interfaces__srv__ComputeTrajectory_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lab02_interfaces__srv__ComputeTrajectory_Response * data =
      (lab02_interfaces__srv__ComputeTrajectory_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lab02_interfaces__srv__ComputeTrajectory_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lab02_interfaces__srv__ComputeTrajectory_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lab02_interfaces__srv__ComputeTrajectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
