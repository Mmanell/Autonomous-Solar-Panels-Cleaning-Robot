# generated from rosidl_generator_py/resource/_idl.py.em
# with input from opennav_coverage_msgs:msg/RouteMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'custom_order'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RouteMode(type):
    """Metaclass of message 'RouteMode'."""

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
                'opennav_coverage_msgs.msg.RouteMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__route_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__route_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__route_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__route_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__route_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE__DEFAULT': 'UNKNOWN',
            'SPIRAL_N__DEFAULT': 4,
        }

    @property
    def MODE__DEFAULT(cls):
        """Return default value for message field 'mode'."""
        return 'UNKNOWN'

    @property
    def SPIRAL_N__DEFAULT(cls):
        """Return default value for message field 'spiral_n'."""
        return 4


class RouteMode(metaclass=Metaclass_RouteMode):
    """Message class 'RouteMode'."""

    __slots__ = [
        '_mode',
        '_spiral_n',
        '_custom_order',
    ]

    _fields_and_field_types = {
        'mode': 'string',
        'spiral_n': 'uint16',
        'custom_order': 'sequence<uint16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get(
            'mode', RouteMode.MODE__DEFAULT)
        self.spiral_n = kwargs.get(
            'spiral_n', RouteMode.SPIRAL_N__DEFAULT)
        self.custom_order = array.array('H', kwargs.get('custom_order', []))

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
        if self.spiral_n != other.spiral_n:
            return False
        if self.custom_order != other.custom_order:
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
    def spiral_n(self):
        """Message field 'spiral_n'."""
        return self._spiral_n

    @spiral_n.setter
    def spiral_n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spiral_n' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'spiral_n' field must be an unsigned integer in [0, 65535]"
        self._spiral_n = value

    @builtins.property
    def custom_order(self):
        """Message field 'custom_order'."""
        return self._custom_order

    @custom_order.setter
    def custom_order(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'custom_order' array.array() must have the type code of 'H'"
            self._custom_order = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'custom_order' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._custom_order = array.array('H', value)
