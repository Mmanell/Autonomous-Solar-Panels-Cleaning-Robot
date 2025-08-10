// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from opennav_coverage_msgs:msg/Swath.idl
// generated code does not contain a copyright notice

#ifndef OPENNAV_COVERAGE_MSGS__MSG__DETAIL__SWATH__FUNCTIONS_H_
#define OPENNAV_COVERAGE_MSGS__MSG__DETAIL__SWATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "opennav_coverage_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "opennav_coverage_msgs/msg/detail/swath__struct.h"

/// Initialize msg/Swath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__msg__Swath
 * )) before or use
 * opennav_coverage_msgs__msg__Swath__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__Swath__init(opennav_coverage_msgs__msg__Swath * msg);

/// Finalize msg/Swath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__msg__Swath__fini(opennav_coverage_msgs__msg__Swath * msg);

/// Create msg/Swath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__msg__Swath__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__msg__Swath *
opennav_coverage_msgs__msg__Swath__create();

/// Destroy msg/Swath message.
/**
 * It calls
 * opennav_coverage_msgs__msg__Swath__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__msg__Swath__destroy(opennav_coverage_msgs__msg__Swath * msg);

/// Check for msg/Swath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__Swath__are_equal(const opennav_coverage_msgs__msg__Swath * lhs, const opennav_coverage_msgs__msg__Swath * rhs);

/// Copy a msg/Swath message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__Swath__copy(
  const opennav_coverage_msgs__msg__Swath * input,
  opennav_coverage_msgs__msg__Swath * output);

/// Initialize array of msg/Swath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__msg__Swath__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__Swath__Sequence__init(opennav_coverage_msgs__msg__Swath__Sequence * array, size_t size);

/// Finalize array of msg/Swath messages.
/**
 * It calls
 * opennav_coverage_msgs__msg__Swath__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__msg__Swath__Sequence__fini(opennav_coverage_msgs__msg__Swath__Sequence * array);

/// Create array of msg/Swath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__msg__Swath__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__msg__Swath__Sequence *
opennav_coverage_msgs__msg__Swath__Sequence__create(size_t size);

/// Destroy array of msg/Swath messages.
/**
 * It calls
 * opennav_coverage_msgs__msg__Swath__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__msg__Swath__Sequence__destroy(opennav_coverage_msgs__msg__Swath__Sequence * array);

/// Check for msg/Swath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__Swath__Sequence__are_equal(const opennav_coverage_msgs__msg__Swath__Sequence * lhs, const opennav_coverage_msgs__msg__Swath__Sequence * rhs);

/// Copy an array of msg/Swath messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__Swath__Sequence__copy(
  const opennav_coverage_msgs__msg__Swath__Sequence * input,
  opennav_coverage_msgs__msg__Swath__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPENNAV_COVERAGE_MSGS__MSG__DETAIL__SWATH__FUNCTIONS_H_
