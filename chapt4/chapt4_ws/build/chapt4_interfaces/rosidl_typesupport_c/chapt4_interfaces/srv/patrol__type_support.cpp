// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "chapt4_interfaces/srv/detail/patrol__struct.h"
#include "chapt4_interfaces/srv/detail/patrol__type_support.h"
#include "chapt4_interfaces/srv/detail/patrol__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace chapt4_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Patrol_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Patrol_Request_type_support_ids_t;

static const _Patrol_Request_type_support_ids_t _Patrol_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Patrol_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Patrol_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Patrol_Request_type_support_symbol_names_t _Patrol_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Request)),
  }
};

typedef struct _Patrol_Request_type_support_data_t
{
  void * data[2];
} _Patrol_Request_type_support_data_t;

static _Patrol_Request_type_support_data_t _Patrol_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Patrol_Request_message_typesupport_map = {
  2,
  "chapt4_interfaces",
  &_Patrol_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Patrol_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Patrol_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Patrol_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Patrol_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &chapt4_interfaces__srv__Patrol_Request__get_type_hash,
  &chapt4_interfaces__srv__Patrol_Request__get_type_description,
  &chapt4_interfaces__srv__Patrol_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace chapt4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chapt4_interfaces, srv, Patrol_Request)() {
  return &::chapt4_interfaces::srv::rosidl_typesupport_c::Patrol_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__struct.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__type_support.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace chapt4_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Patrol_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Patrol_Response_type_support_ids_t;

static const _Patrol_Response_type_support_ids_t _Patrol_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Patrol_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Patrol_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Patrol_Response_type_support_symbol_names_t _Patrol_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Response)),
  }
};

typedef struct _Patrol_Response_type_support_data_t
{
  void * data[2];
} _Patrol_Response_type_support_data_t;

static _Patrol_Response_type_support_data_t _Patrol_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Patrol_Response_message_typesupport_map = {
  2,
  "chapt4_interfaces",
  &_Patrol_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Patrol_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Patrol_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Patrol_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Patrol_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &chapt4_interfaces__srv__Patrol_Response__get_type_hash,
  &chapt4_interfaces__srv__Patrol_Response__get_type_description,
  &chapt4_interfaces__srv__Patrol_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace chapt4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chapt4_interfaces, srv, Patrol_Response)() {
  return &::chapt4_interfaces::srv::rosidl_typesupport_c::Patrol_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__struct.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__type_support.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace chapt4_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Patrol_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Patrol_Event_type_support_ids_t;

static const _Patrol_Event_type_support_ids_t _Patrol_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Patrol_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Patrol_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Patrol_Event_type_support_symbol_names_t _Patrol_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Event)),
  }
};

typedef struct _Patrol_Event_type_support_data_t
{
  void * data[2];
} _Patrol_Event_type_support_data_t;

static _Patrol_Event_type_support_data_t _Patrol_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Patrol_Event_message_typesupport_map = {
  2,
  "chapt4_interfaces",
  &_Patrol_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Patrol_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Patrol_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Patrol_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Patrol_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &chapt4_interfaces__srv__Patrol_Event__get_type_hash,
  &chapt4_interfaces__srv__Patrol_Event__get_type_description,
  &chapt4_interfaces__srv__Patrol_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace chapt4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chapt4_interfaces, srv, Patrol_Event)() {
  return &::chapt4_interfaces::srv::rosidl_typesupport_c::Patrol_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace chapt4_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Patrol_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Patrol_type_support_ids_t;

static const _Patrol_type_support_ids_t _Patrol_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Patrol_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Patrol_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Patrol_type_support_symbol_names_t _Patrol_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol)),
  }
};

typedef struct _Patrol_type_support_data_t
{
  void * data[2];
} _Patrol_type_support_data_t;

static _Patrol_type_support_data_t _Patrol_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Patrol_service_typesupport_map = {
  2,
  "chapt4_interfaces",
  &_Patrol_service_typesupport_ids.typesupport_identifier[0],
  &_Patrol_service_typesupport_symbol_names.symbol_name[0],
  &_Patrol_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Patrol_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Patrol_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Patrol_Request_message_type_support_handle,
  &Patrol_Response_message_type_support_handle,
  &Patrol_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    chapt4_interfaces,
    srv,
    Patrol
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    chapt4_interfaces,
    srv,
    Patrol
  ),
  &chapt4_interfaces__srv__Patrol__get_type_hash,
  &chapt4_interfaces__srv__Patrol__get_type_description,
  &chapt4_interfaces__srv__Patrol__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace chapt4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, chapt4_interfaces, srv, Patrol)() {
  return &::chapt4_interfaces::srv::rosidl_typesupport_c::Patrol_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
