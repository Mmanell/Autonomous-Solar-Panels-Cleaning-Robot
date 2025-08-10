# generated from rosidl_generator_py/resource/_idl.py.em
# with input from opennav_coverage_msgs:msg/PathMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathMode(type):
    """Metaclass of message 'PathMode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('opennav_coverage_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'opennav_coverage_msgs.msg.PathMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE__DEFAULT': 'UNKNOWN',
            'CONTINUITY_MODE__DEFAULT': 'UNKNOWN',
            'TURN_POINT_DISTANCE__DEFAULT': 0.1,
        }

    @property
    def MODE__DEFAULT(cls):
        """Return default value for message field 'mode'."""
        return 'UNKNOWN'

    @property
    def CONTINUITY_MODE__DEFAULT(cls):
        """Return default value for message field 'continuity_mode'."""
        return 'UNKNOWN'

    @property
    def TURN_POINT_DISTANCE__DEFAULT(cls):
        """Return default value for message field 'turn_point_distance'."""
        return 0.1


class PathMode(metaclass=Metaclass_PathMode):
    """Message class 'PathMode'."""

    __slots__ = [
        '_mode',
        '_continuity_mode',
        '_turn_point_distance',
    ]

    _fields_and_field_types = {
        'mode': 'string',
        'continuity_mode': 'string',
        'turn_point_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get(
            'mode', PathMode.MODE__DEFAULT)
        self.continuity_mode = kwargs.get(
            'continuity_mode', PathMode.CONTINUITY_MODE__DEFAULT)
        self.turn_point_distance = kwargs.get(
            'turn_point_distance', PathMode.TURN_POINT_DISTANCE__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mode != other.mode:
            return False
        if self.continuity_mode != other.continuity_mode:
            return False
        if self.turn_point_distance != other.turn_point_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @builtins.property
    def continuity_mode(self):
        """Message field 'continuity_mode'."""
        return self._continuity_mode

    @continuity_mode.setter
    def continuity_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'continuity_mode' field must be of type 'str'"
        self._continuity_mode = value

    @builtins.property
    def turn_point_distance(self):
        """Message field 'turn_point_distance'."""
        return self._turn_point_distance

    @turn_point_distance.setter
    def turn_point_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_point_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turn_point_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turn_point_distance = value
