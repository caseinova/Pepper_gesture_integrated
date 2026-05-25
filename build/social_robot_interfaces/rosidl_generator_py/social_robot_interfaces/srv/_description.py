# generated from rosidl_generator_py/resource/_idl.py.em
# with input from social_robot_interfaces:srv/Description.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Description_Request(type):
    """Metaclass of message 'Description_Request'."""

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
            module = import_type_support('social_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'social_robot_interfaces.srv.Description_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__description__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__description__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__description__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__description__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__description__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Description_Request(metaclass=Metaclass_Description_Request):
    """Message class 'Description_Request'."""

    __slots__ = [
        '_idx',
    ]

    _fields_and_field_types = {
        'idx': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.idx = kwargs.get('idx', int())

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
        if self.idx != other.idx:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def idx(self):
        """Message field 'idx'."""
        return self._idx

    @idx.setter
    def idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'idx' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'idx' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._idx = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Description_Response(type):
    """Metaclass of message 'Description_Response'."""

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
            module = import_type_support('social_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'social_robot_interfaces.srv.Description_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__description__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__description__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__description__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__description__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__description__response

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Description_Response(metaclass=Metaclass_Description_Response):
    """Message class 'Description_Response'."""

    __slots__ = [
        '_description',
    ]

    _fields_and_field_types = {
        'description': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.description = kwargs.get('description', String())

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
        if self.description != other.description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'description' field must be a sub message of type 'String'"
        self._description = value


class Metaclass_Description(type):
    """Metaclass of service 'Description'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('social_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'social_robot_interfaces.srv.Description')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__description

            from social_robot_interfaces.srv import _description
            if _description.Metaclass_Description_Request._TYPE_SUPPORT is None:
                _description.Metaclass_Description_Request.__import_type_support__()
            if _description.Metaclass_Description_Response._TYPE_SUPPORT is None:
                _description.Metaclass_Description_Response.__import_type_support__()


class Description(metaclass=Metaclass_Description):
    from social_robot_interfaces.srv._description import Description_Request as Request
    from social_robot_interfaces.srv._description import Description_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
