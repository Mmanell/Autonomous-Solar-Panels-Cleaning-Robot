// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from opennav_coverage_msgs:msg/RowSwathMode.idl
// generated code does not contain a copyright notice

#ifndef OPENNAV_COVERAGE_MSGS__MSG__DETAIL__ROW_SWATH_MODE__FUNCTIONS_H_
#define OPENNAV_COVERAGE_MSGS__MSG__DETAIL__ROW_SWATH_MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "opennav_coverage_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "opennav_coverage_msgs/msg/detail/row_swath_mode__struct.h"

/// Initialize msg/RowSwathMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__msg__RowSwathMode
 * )) before or use
 * opennav_coverage_msgs__msg__RowSwathMode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__RowSwathMode__init(opennav_coverage_msgs__msg__RowSwathMode * msg);

/// Finalize msg/RowSwathMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__msg__RowSwathMode__fini(opennav_coverage_msgs__msg__RowSwathMode * msg);

/// Create msg/RowSwathMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__msg__RowSwathMode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__msg__RowSwathMode *
opennav_coverage_msgs__msg__RowSwathMode__create();

/// Destroy msg/RowSwathMode message.
/**
 * It calls
 * opennav_coverage_msgs__msg__RowSwathMode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__msg__RowSwathMode__destroy(opennav_coverage_msgs__msg__RowSwathMode * msg);

/// Check for msg/RowSwathMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__RowSwathMode__are_equal(const opennav_coverage_msgs__msg__RowSwathMode * lhs, const opennav_coverage_msgs__msg__RowSwathMode * rhs);

/// Copy a msg/RowSwathMode message.
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
opennav_coverage_msgs__msg__RowSwathMode__copy(
  const opennav_coverage_msgs__msg__RowSwathMode * input,
  opennav_coverage_msgs__msg__RowSwathMode * output);

/// Initialize array of msg/RowSwathMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__msg__RowSwathMode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__RowSwathMode__Sequence__init(opennav_coverage_msgs__msg__RowSwathMode__Sequence * array, size_t size);

/// Finalize array of msg/RowSwathMode messages.
/**
 * It calls
 * opennav_coverage_msgs__msg__RowSwathMode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__msg__RowSwathMode__Sequence__fini(opennav_coverage_msgs__msg__RowSwathMode__Sequence * array);

/// Create array of msg/RowSwathMode messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__msg__RowSwathMode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__msg__RowSwathMode__Sequence *
opennav_coverage_msgs__msg__RowSwathMode__Sequence__create(size_t size);

/// Destroy array of msg/RowSwathMode messages.
/**
 * It calls
 * opennav_coverage_msgs__msg__RowSwathMode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__msg__RowSwathMode__Sequence__destroy(opennav_coverage_msgs__msg__RowSwathMode__Sequence * array);

/// Check for msg/RowSwathMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__msg__RowSwathMode__Sequence__are_equal(const opennav_coverage_msgs__msg__RowSwathMode__Sequence * lhs, const opennav_coverage_msgs__msg__RowSwathMode__Sequence * rhs);

/// Copy an array of msg/RowSwathMode messages.
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
opennav_coverage_msgs__msg__RowSwathMode__Sequence__copy(
  const opennav_coverage_msgs__msg__RowSwathMode__Sequence * input,
  opennav_coverage_msgs__msg__RowSwathMode__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPENNAV_COVERAGE_MSGS__MSG__DETAIL__ROW_SWATH_MODE__FUNCTIONS_H_
