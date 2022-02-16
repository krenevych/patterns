#!/usr/bin/env python3
# -*-encoding: utf-8-*-

# created: 16.02.2022
# Excusa. Quod scripsi, scripsi.

# by David Zashkolny
# email: davendiy@gmail.com

"""Basic scheme of Python protocol of class creation and initialization using metaclass.

In python classes are also objects of so-called metaclasses - children of base class type.
Metaclass defines how class will be created
"""


# noinspection PyTypeChecker
class DefaultProtocol(type):
    """Here the standard python protocol of class creation is given.

    >>> class TestDefaultProtocol(metaclass=DefaultProtocol):
    ...     def __new__(cls, *args, **kwargs):
    ...         print("__new__ of class is called")
    ...         return super().__new__(cls)
    ...     def __init__(self):
    ...         print("__init__ of class is called")
    ...         super().__init__()
    ...
    __new__ of metaclass is called
    __init__ of metaclass is called
    >>> test = TestDefaultProtocol()
    __call__ of metaclass is called
    __new__ of class is called
    __init__ of class is called
    """

    def __new__(mcs, clsname, bases, clsdict):
        """Creates new class as object with name clsname and returns it.

        This method runs when new class appears at Python script."""
        print("__new__ of metaclass is called")
        return super().__new__(mcs, clsname, bases, clsdict)

    def __init__(cls, clsname, bases, clsdict):
        """Initializes all methods and attributes of the cls, which was created in __new__.

        Here you should put any class methods or class attributes.
        This method runs when new class appears at Python script
        """
        print("__init__ of metaclass is called")
        super().__init__(clsname, bases, clsdict)

    def __call__(cls, *args, **kwargs):
        """Defines protocol of creation of new objects of the given cls.

        Default protocol (short version) is: call __new__, call __init__
        This method runs when user wants to create new object, i.e. test = TestClass(*args, **kwargs)
        """
        print("__call__ of metaclass is called")
        obj = cls.__new__(cls, *args, **kwargs)
        obj.__init__(*args, **kwargs)
        return obj


# Creation of new class as object of DefaultProtocol
# At this point Python executes the following
# TestDefaultProtocol = DefaultProtocol.__new__(DefaultProtocol,
#                             'TestDefaultProtocol',
#                             (,),
#                             {'__new__': ..., '__init__': ..., ...}
# DefaultProtocol.__init__(TestDefaultProtocol,
#                          'TestDefaultProtocol',
#                          (,),
#                          {'__new__': ..., '__init__': ..., ...
class TestDefaultProtocol(metaclass=DefaultProtocol):
    """Test class, which is object of DefaultProtocol metaclass.
    """

    def __new__(cls, *args, **kwargs):
        """This method creates new object of class cls and returns it.

        Due to default protocol it runs at the very beginning."""
        print("__new__ of class is called")
        return super().__new__(cls)

    def __init__(self, *args, **kwargs):
        """This method initializes all instances of the object, created by __new__"""
        print("__init__ of class is called")
        super().__init__()


if __name__ == '__main__':
    t = TestDefaultProtocol()
