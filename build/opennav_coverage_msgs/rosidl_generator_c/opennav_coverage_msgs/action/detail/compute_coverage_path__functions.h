// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from opennav_coverage_msgs:action/ComputeCoveragePath.idl
// generated code does not contain a copyright notice

#ifndef OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__COMPUTE_COVERAGE_PATH__FUNCTIONS_H_
#define OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__COMPUTE_COVERAGE_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "opennav_coverage_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"

/// Initialize action/ComputeCoveragePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__action__ComputeCoveragePath_Goal
 * )) before or use
 * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__init(opennav_coverage_msgs__action__ComputeCoveragePath_Goal * msg);

/// Finalize action/ComputeCoveragePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__fini(opennav_coverage_msgs__action__ComputeCoveragePath_Goal * msg);

/// Create action/ComputeCoveragePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_Goal *
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__create();

/// Destroy action/ComputeCoveragePath message.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_Goal * msg);

/// Check for action/ComputeCoveragePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_Goal * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_Goal * rhs);

/// Copy a action/ComputeCoveragePath message.
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
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_Goal * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal * output);

/// Initialize array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence__init(opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence * array, size_t size);

/// Finalize array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence__fini(opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence * array);

/// Create array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence *
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence__create(size_t size);

/// Destroy array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence * array);

/// Check for action/ComputeCoveragePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence * rhs);

/// Copy an array of action/ComputeCoveragePath messages.
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
opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__Sequence * output);

/// Initialize action/ComputeCoveragePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__action__ComputeCoveragePath_Result
 * )) before or use
 * opennav_coverage_msgs__action__ComputeCoveragePath_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Result__init(opennav_coverage_msgs__action__ComputeCoveragePath_Result * msg);

/// Finalize action/ComputeCoveragePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Result__fini(opennav_coverage_msgs__action__ComputeCoveragePath_Result * msg);

/// Create action/ComputeCoveragePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_Result *
opennav_coverage_msgs__action__ComputeCoveragePath_Result__create();

/// Destroy action/ComputeCoveragePath message.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Result__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_Result * msg);

/// Check for action/ComputeCoveragePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Result__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_Result * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_Result * rhs);

/// Copy a action/ComputeCoveragePath message.
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
opennav_coverage_msgs__action__ComputeCoveragePath_Result__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_Result * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_Result * output);

/// Initialize array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence__init(opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence * array, size_t size);

/// Finalize array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence__fini(opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence * array);

/// Create array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence *
opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence__create(size_t size);

/// Destroy array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence * array);

/// Check for action/ComputeCoveragePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence * rhs);

/// Copy an array of action/ComputeCoveragePath messages.
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
opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__Sequence * output);

/// Initialize action/ComputeCoveragePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__action__ComputeCoveragePath_Feedback
 * )) before or use
 * opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__init(opennav_coverage_msgs__action__ComputeCoveragePath_Feedback * msg);

/// Finalize action/ComputeCoveragePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__fini(opennav_coverage_msgs__action__ComputeCoveragePath_Feedback * msg);

/// Create action/ComputeCoveragePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback *
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__create();

/// Destroy action/ComputeCoveragePath message.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_Feedback * msg);

/// Check for action/ComputeCoveragePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_Feedback * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_Feedback * rhs);

/// Copy a action/ComputeCoveragePath message.
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
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_Feedback * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_Feedback * output);

/// Initialize array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence__init(opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence__fini(opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence * array);

/// Create array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence *
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence * array);

/// Check for action/ComputeCoveragePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence * rhs);

/// Copy an array of action/ComputeCoveragePath messages.
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
opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__Sequence * output);

/// Initialize action/ComputeCoveragePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request
 * )) before or use
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__init(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request * msg);

/// Finalize action/ComputeCoveragePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__fini(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request * msg);

/// Create action/ComputeCoveragePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request *
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__create();

/// Destroy action/ComputeCoveragePath message.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request * msg);

/// Check for action/ComputeCoveragePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request * rhs);

/// Copy a action/ComputeCoveragePath message.
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
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request * output);

/// Initialize array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence__init(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence__fini(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence * array);

/// Create array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence *
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence * array);

/// Check for action/ComputeCoveragePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ComputeCoveragePath messages.
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
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__Sequence * output);

/// Initialize action/ComputeCoveragePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response
 * )) before or use
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__init(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response * msg);

/// Finalize action/ComputeCoveragePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__fini(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response * msg);

/// Create action/ComputeCoveragePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response *
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__create();

/// Destroy action/ComputeCoveragePath message.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response * msg);

/// Check for action/ComputeCoveragePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response * rhs);

/// Copy a action/ComputeCoveragePath message.
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
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response * output);

/// Initialize array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence__init(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence__fini(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence * array);

/// Create array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence *
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence * array);

/// Check for action/ComputeCoveragePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ComputeCoveragePath messages.
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
opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__Sequence * output);

/// Initialize action/ComputeCoveragePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request
 * )) before or use
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__init(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request * msg);

/// Finalize action/ComputeCoveragePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__fini(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request * msg);

/// Create action/ComputeCoveragePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request *
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__create();

/// Destroy action/ComputeCoveragePath message.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request * msg);

/// Check for action/ComputeCoveragePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request * rhs);

/// Copy a action/ComputeCoveragePath message.
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
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request * output);

/// Initialize array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence__init(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence__fini(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence * array);

/// Create array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence *
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence * array);

/// Check for action/ComputeCoveragePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ComputeCoveragePath messages.
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
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__Sequence * output);

/// Initialize action/ComputeCoveragePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response
 * )) before or use
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__init(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response * msg);

/// Finalize action/ComputeCoveragePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__fini(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response * msg);

/// Create action/ComputeCoveragePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response *
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__create();

/// Destroy action/ComputeCoveragePath message.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response * msg);

/// Check for action/ComputeCoveragePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response * rhs);

/// Copy a action/ComputeCoveragePath message.
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
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response * output);

/// Initialize array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence__init(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence__fini(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence * array);

/// Create array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence *
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence * array);

/// Check for action/ComputeCoveragePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ComputeCoveragePath messages.
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
opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__Sequence * output);

/// Initialize action/ComputeCoveragePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage
 * )) before or use
 * opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__init(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage * msg);

/// Finalize action/ComputeCoveragePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__fini(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage * msg);

/// Create action/ComputeCoveragePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage *
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__create();

/// Destroy action/ComputeCoveragePath message.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage * msg);

/// Check for action/ComputeCoveragePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage * rhs);

/// Copy a action/ComputeCoveragePath message.
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
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage * output);

/// Initialize array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence__init(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence__fini(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence * array);

/// Create array of action/ComputeCoveragePath messages.
/**
 * It allocates the memory for the array and calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence *
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ComputeCoveragePath messages.
/**
 * It calls
 * opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
void
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence__destroy(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence * array);

/// Check for action/ComputeCoveragePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opennav_coverage_msgs
bool
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence__are_equal(const opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence * lhs, const opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ComputeCoveragePath messages.
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
opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence__copy(
  const opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence * input,
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__COMPUTE_COVERAGE_PATH__FUNCTIONS_H_
