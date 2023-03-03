# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_interfaces:srv/Ultra.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ultra_Request(type):
    """Metaclass of message 'Ultra_Request'."""

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
            module = import_type_support('controller_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_interfaces.srv.Ultra_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ultra__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ultra__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ultra__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ultra__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ultra__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ultra_Request(metaclass=Metaclass_Ultra_Request):
    """Message class 'Ultra_Request'."""

    __slots__ = [
        '_is_obstacle',
    ]

    _fields_and_field_types = {
        'is_obstacle': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_obstacle = kwargs.get('is_obstacle', bool())

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
        if self.is_obstacle != other.is_obstacle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_obstacle(self):
        """Message field 'is_obstacle'."""
        return self._is_obstacle

    @is_obstacle.setter
    def is_obstacle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_obstacle' field must be of type 'bool'"
        self._is_obstacle = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Ultra_Response(type):
    """Metaclass of message 'Ultra_Response'."""

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
            module = import_type_support('controller_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_interfaces.srv.Ultra_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ultra__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ultra__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ultra__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ultra__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ultra__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ultra_Response(metaclass=Metaclass_Ultra_Response):
    """Message class 'Ultra_Response'."""

    __slots__ = [
        '_is_received',
    ]

    _fields_and_field_types = {
        'is_received': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_received = kwargs.get('is_received', bool())

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
        if self.is_received != other.is_received:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_received(self):
        """Message field 'is_received'."""
        return self._is_received

    @is_received.setter
    def is_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_received' field must be of type 'bool'"
        self._is_received = value


class Metaclass_Ultra(type):
    """Metaclass of service 'Ultra'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('controller_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_interfaces.srv.Ultra')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ultra

            from controller_interfaces.srv import _ultra
            if _ultra.Metaclass_Ultra_Request._TYPE_SUPPORT is None:
                _ultra.Metaclass_Ultra_Request.__import_type_support__()
            if _ultra.Metaclass_Ultra_Response._TYPE_SUPPORT is None:
                _ultra.Metaclass_Ultra_Response.__import_type_support__()


class Ultra(metaclass=Metaclass_Ultra):
    from controller_interfaces.srv._ultra import Ultra_Request as Request
    from controller_interfaces.srv._ultra import Ultra_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
