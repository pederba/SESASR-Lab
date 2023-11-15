// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lab02_interfaces:srv/ComputeTrajectory.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "lab02_interfaces/srv/detail/compute_trajectory__struct.h"
#include "lab02_interfaces/srv/detail/compute_trajectory__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lab02_interfaces__srv__compute_trajectory__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("lab02_interfaces.srv._compute_trajectory.ComputeTrajectory_Request", full_classname_dest, 66) == 0);
  }
  lab02_interfaces__srv__ComputeTrajectory_Request * ros_message = _ros_message;
  {  // x0
    PyObject * field = PyObject_GetAttrString(_pymsg, "x0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y0
    PyObject * field = PyObject_GetAttrString(_pymsg, "y0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "x1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "y1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lab02_interfaces__srv__compute_trajectory__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComputeTrajectory_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lab02_interfaces.srv._compute_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComputeTrajectory_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lab02_interfaces__srv__ComputeTrajectory_Request * ros_message = (lab02_interfaces__srv__ComputeTrajectory_Request *)raw_ros_message;
  {  // x0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "lab02_interfaces/srv/detail/compute_trajectory__struct.h"
// already included above
// #include "lab02_interfaces/srv/detail/compute_trajectory__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lab02_interfaces__srv__compute_trajectory__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("lab02_interfaces.srv._compute_trajectory.ComputeTrajectory_Response", full_classname_dest, 67) == 0);
  }
  lab02_interfaces__srv__ComputeTrajectory_Response * ros_message = _ros_message;
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->direction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lab02_interfaces__srv__compute_trajectory__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComputeTrajectory_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lab02_interfaces.srv._compute_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComputeTrajectory_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lab02_interfaces__srv__ComputeTrajectory_Response * ros_message = (lab02_interfaces__srv__ComputeTrajectory_Response *)raw_ros_message;
  {  // direction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
