#!/usr/bin/env python3
# -*-encoding: utf-8-*-

# created: 16.02.2022
# Excusa. Quod scripsi, scripsi.

# by David Zashkolny
# email: davendiy@gmail.com

"""Recommended pythonic way to create Singleton class.

This example based on a recipe 9.13 from D.Beazley "Python Cookbook, 3rd Edition"

Basic usage of metaclasses is more described in protocol_example.py
"""

import warnings
from threading import RLock


class Singleton(type):
    """Singleton metaclass.

    Every class which is needed to be singleton should have this class as metaclass.
    """

    _lock = RLock()

    def __init__(cls, clsname, bases, clsdict):
        # print("__init__ of Singleton is called")
        # cls.__instance should be created at the moment of initialization of cls
        cls.__instance = None
        super().__init__(clsname, bases, clsdict)

    # noinspection PyTypeChecker
    def __call__(cls, *args, **kwargs):
        # print("__call__ of Singleton is called")
        if cls.__instance is None:
            with cls._lock:
                # one can just use super() for default protocol of objects creation
                # cls.__instance = super().__call__(*args, **kwargs)

                # or write their own protocol as in example below

                # PyCharm doesn't get the correct types of cls.__new__, so disable PyTypeChecker
                cls.__instance = cls.__new__(cls, *args, **kwargs)
                cls.__instance.__init__(*args, **kwargs)
        else:
            warnings.warn(f"Careful, can't create new obj of {cls} due to Singleton, return the old one")
        return cls.__instance


class Test(metaclass=Singleton):
    """Test class, which will be using Singleton.

    In this implementation one can define __new__ and __init__ as they want and don't think about
    any thread-safe stuff, because these methods are guaranteed to be called only ONCE at the beginning.

    >>> t1 = Test(1, 2)
    __new__ of Test is called
    __init__ of Test is called
    >>> t1.x, t1.y
    (1, 2)
    >>> t2 = Test(2, 3)
    >>> t2.x, t2.y
    (1, 2)
    """

    def __new__(cls, *args, **kwargs):
        print("__new__ of Test is called")
        return super().__new__(cls)

    def __init__(self, x, y):
        print("__init__ of Test is called")
        self.x = x
        self.y = y
