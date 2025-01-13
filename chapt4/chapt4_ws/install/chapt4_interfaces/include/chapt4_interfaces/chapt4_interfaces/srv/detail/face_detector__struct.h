// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chapt4_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chapt4_interfaces/srv/face_detector.h"


#ifndef CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECTOR__STRUCT_H_
#define CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/FaceDetector in the package chapt4_interfaces.
typedef struct chapt4_interfaces__srv__FaceDetector_Request
{
  sensor_msgs__msg__Image image;
} chapt4_interfaces__srv__FaceDetector_Request;

// Struct for a sequence of chapt4_interfaces__srv__FaceDetector_Request.
typedef struct chapt4_interfaces__srv__FaceDetector_Request__Sequence
{
  chapt4_interfaces__srv__FaceDetector_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chapt4_interfaces__srv__FaceDetector_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'top'
// Member 'right'
// Member 'bottom'
// Member 'left'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/FaceDetector in the package chapt4_interfaces.
typedef struct chapt4_interfaces__srv__FaceDetector_Response
{
  int16_t number;
  float use_time;
  rosidl_runtime_c__int32__Sequence top;
  rosidl_runtime_c__int32__Sequence right;
  rosidl_runtime_c__int32__Sequence bottom;
  rosidl_runtime_c__int32__Sequence left;
} chapt4_interfaces__srv__FaceDetector_Response;

// Struct for a sequence of chapt4_interfaces__srv__FaceDetector_Response.
typedef struct chapt4_interfaces__srv__FaceDetector_Response__Sequence
{
  chapt4_interfaces__srv__FaceDetector_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chapt4_interfaces__srv__FaceDetector_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  chapt4_interfaces__srv__FaceDetector_Event__request__MAX_SIZE = 1
};
// response
enum
{
  chapt4_interfaces__srv__FaceDetector_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/FaceDetector in the package chapt4_interfaces.
typedef struct chapt4_interfaces__srv__FaceDetector_Event
{
  service_msgs__msg__ServiceEventInfo info;
  chapt4_interfaces__srv__FaceDetector_Request__Sequence request;
  chapt4_interfaces__srv__FaceDetector_Response__Sequence response;
} chapt4_interfaces__srv__FaceDetector_Event;

// Struct for a sequence of chapt4_interfaces__srv__FaceDetector_Event.
typedef struct chapt4_interfaces__srv__FaceDetector_Event__Sequence
{
  chapt4_interfaces__srv__FaceDetector_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chapt4_interfaces__srv__FaceDetector_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECTOR__STRUCT_H_
