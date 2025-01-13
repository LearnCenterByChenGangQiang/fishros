// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from chapt4_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

#include "chapt4_interfaces/srv/detail/face_detector__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
const rosidl_type_hash_t *
chapt4_interfaces__srv__FaceDetector__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x81, 0xfa, 0xa9, 0x8a, 0xab, 0xbb, 0x72,
      0x08, 0xb4, 0x8a, 0xbd, 0xc2, 0x36, 0xf8, 0xc7,
      0xe6, 0x26, 0x88, 0x97, 0xff, 0x05, 0xa1, 0xa4,
      0x7e, 0x4e, 0xc0, 0x55, 0x6f, 0x17, 0x73, 0x9b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
const rosidl_type_hash_t *
chapt4_interfaces__srv__FaceDetector_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x62, 0xe5, 0x10, 0x4b, 0xa9, 0x5b, 0x79,
      0x1f, 0xdb, 0x2a, 0xd6, 0x50, 0x30, 0xed, 0xc1,
      0xf0, 0x2f, 0x15, 0xd6, 0x2f, 0x45, 0xbf, 0x5f,
      0x21, 0xcb, 0xf0, 0x78, 0x5a, 0xc7, 0x07, 0x97,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
const rosidl_type_hash_t *
chapt4_interfaces__srv__FaceDetector_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0xcb, 0x38, 0x38, 0x22, 0x62, 0x92, 0x4d,
      0x4f, 0x34, 0x7d, 0x01, 0xac, 0xc4, 0x24, 0x59,
      0xf7, 0x15, 0x60, 0x12, 0x6d, 0x08, 0x4d, 0xd1,
      0x48, 0x6f, 0xeb, 0xef, 0x4d, 0xf3, 0x24, 0xe1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
const rosidl_type_hash_t *
chapt4_interfaces__srv__FaceDetector_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x61, 0x75, 0x5c, 0xc7, 0x0f, 0x9d, 0x47,
      0xd1, 0x5a, 0x1c, 0x03, 0x46, 0xd8, 0x3b, 0x25,
      0xdb, 0xb2, 0x64, 0xdc, 0x90, 0x9b, 0xd7, 0x64,
      0x12, 0x59, 0xa4, 0xa2, 0xee, 0xc2, 0x9b, 0x65,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "sensor_msgs/msg/detail/image__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Image__EXPECTED_HASH = {1, {
    0xd3, 0x1d, 0x41, 0xa9, 0xa4, 0xc4, 0xbc, 0x8e,
    0xae, 0x9b, 0xe7, 0x57, 0xb0, 0xbe, 0xed, 0x30,
    0x65, 0x64, 0xf7, 0x52, 0x6c, 0x88, 0xea, 0x6a,
    0x45, 0x88, 0xfb, 0x95, 0x82, 0x52, 0x7d, 0x47,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char chapt4_interfaces__srv__FaceDetector__TYPE_NAME[] = "chapt4_interfaces/srv/FaceDetector";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char chapt4_interfaces__srv__FaceDetector_Event__TYPE_NAME[] = "chapt4_interfaces/srv/FaceDetector_Event";
static char chapt4_interfaces__srv__FaceDetector_Request__TYPE_NAME[] = "chapt4_interfaces/srv/FaceDetector_Request";
static char chapt4_interfaces__srv__FaceDetector_Response__TYPE_NAME[] = "chapt4_interfaces/srv/FaceDetector_Response";
static char sensor_msgs__msg__Image__TYPE_NAME[] = "sensor_msgs/msg/Image";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char chapt4_interfaces__srv__FaceDetector__FIELD_NAME__request_message[] = "request_message";
static char chapt4_interfaces__srv__FaceDetector__FIELD_NAME__response_message[] = "response_message";
static char chapt4_interfaces__srv__FaceDetector__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field chapt4_interfaces__srv__FaceDetector__FIELDS[] = {
  {
    {chapt4_interfaces__srv__FaceDetector__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {chapt4_interfaces__srv__FaceDetector_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {chapt4_interfaces__srv__FaceDetector_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {chapt4_interfaces__srv__FaceDetector_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription chapt4_interfaces__srv__FaceDetector__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chapt4_interfaces__srv__FaceDetector__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chapt4_interfaces__srv__FaceDetector__TYPE_NAME, 34, 34},
      {chapt4_interfaces__srv__FaceDetector__FIELDS, 3, 3},
    },
    {chapt4_interfaces__srv__FaceDetector__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = chapt4_interfaces__srv__FaceDetector_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = chapt4_interfaces__srv__FaceDetector_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = chapt4_interfaces__srv__FaceDetector_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char chapt4_interfaces__srv__FaceDetector_Request__FIELD_NAME__image[] = "image";

static rosidl_runtime_c__type_description__Field chapt4_interfaces__srv__FaceDetector_Request__FIELDS[] = {
  {
    {chapt4_interfaces__srv__FaceDetector_Request__FIELD_NAME__image, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription chapt4_interfaces__srv__FaceDetector_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chapt4_interfaces__srv__FaceDetector_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chapt4_interfaces__srv__FaceDetector_Request__TYPE_NAME, 42, 42},
      {chapt4_interfaces__srv__FaceDetector_Request__FIELDS, 1, 1},
    },
    {chapt4_interfaces__srv__FaceDetector_Request__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__number[] = "number";
static char chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__use_time[] = "use_time";
static char chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__top[] = "top";
static char chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__right[] = "right";
static char chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__bottom[] = "bottom";
static char chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__left[] = "left";

static rosidl_runtime_c__type_description__Field chapt4_interfaces__srv__FaceDetector_Response__FIELDS[] = {
  {
    {chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__number, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__use_time, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__top, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__right, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__bottom, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Response__FIELD_NAME__left, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chapt4_interfaces__srv__FaceDetector_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chapt4_interfaces__srv__FaceDetector_Response__TYPE_NAME, 43, 43},
      {chapt4_interfaces__srv__FaceDetector_Response__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char chapt4_interfaces__srv__FaceDetector_Event__FIELD_NAME__info[] = "info";
static char chapt4_interfaces__srv__FaceDetector_Event__FIELD_NAME__request[] = "request";
static char chapt4_interfaces__srv__FaceDetector_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field chapt4_interfaces__srv__FaceDetector_Event__FIELDS[] = {
  {
    {chapt4_interfaces__srv__FaceDetector_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {chapt4_interfaces__srv__FaceDetector_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {chapt4_interfaces__srv__FaceDetector_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription chapt4_interfaces__srv__FaceDetector_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {chapt4_interfaces__srv__FaceDetector_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chapt4_interfaces__srv__FaceDetector_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chapt4_interfaces__srv__FaceDetector_Event__TYPE_NAME, 40, 40},
      {chapt4_interfaces__srv__FaceDetector_Event__FIELDS, 3, 3},
    },
    {chapt4_interfaces__srv__FaceDetector_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = chapt4_interfaces__srv__FaceDetector_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = chapt4_interfaces__srv__FaceDetector_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "sensor_msgs/Image image\n"
  "---\n"
  "int16 number\n"
  "float32 use_time\n"
  "int32[] top\n"
  "int32[] right\n"
  "int32[] bottom\n"
  "int32[] left";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
chapt4_interfaces__srv__FaceDetector__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chapt4_interfaces__srv__FaceDetector__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 111, 111},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
chapt4_interfaces__srv__FaceDetector_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chapt4_interfaces__srv__FaceDetector_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
chapt4_interfaces__srv__FaceDetector_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chapt4_interfaces__srv__FaceDetector_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
chapt4_interfaces__srv__FaceDetector_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chapt4_interfaces__srv__FaceDetector_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chapt4_interfaces__srv__FaceDetector__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chapt4_interfaces__srv__FaceDetector__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *chapt4_interfaces__srv__FaceDetector_Event__get_individual_type_description_source(NULL);
    sources[3] = *chapt4_interfaces__srv__FaceDetector_Request__get_individual_type_description_source(NULL);
    sources[4] = *chapt4_interfaces__srv__FaceDetector_Response__get_individual_type_description_source(NULL);
    sources[5] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chapt4_interfaces__srv__FaceDetector_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chapt4_interfaces__srv__FaceDetector_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chapt4_interfaces__srv__FaceDetector_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chapt4_interfaces__srv__FaceDetector_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chapt4_interfaces__srv__FaceDetector_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chapt4_interfaces__srv__FaceDetector_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *chapt4_interfaces__srv__FaceDetector_Request__get_individual_type_description_source(NULL);
    sources[3] = *chapt4_interfaces__srv__FaceDetector_Response__get_individual_type_description_source(NULL);
    sources[4] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
