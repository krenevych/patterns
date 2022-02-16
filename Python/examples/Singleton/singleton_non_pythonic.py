#!/usr/bin/env python3
# -*-encoding: utf-8-*-

# created: 16.02.2022
# Excusa. Quod scripsi, scripsi.

# by David Zashkolny
# email: davendiy@gmail.com

""" Another way to create Singleton class using only __new__ method of the required class.

NOTE: This way is not considered as pure pythonic since it requires programmer to avoid usage of __init__ method.
"""


from threading import RLock


class Singleton:
    """ Class which implements Singleton pattern.

    In this implementation the entire initialization of the object should be done in the
    __new__ method, because __init__ methods will be called anyway and all attributes will be
    overwritten.

    >>> t1 = Singleton(1, 2)
    >>> t1.x, t1.y
    (1, 2)
    >>> t2 = Singleton(2, 3)
    >>> t2.x, t2.y
    (1, 2)
    >>> t3 = Singleton(2, 3, show_overwrite=True)
    Incorrect usage
    >>> t3.x, t3.y
    (2, 3)
    """
    __instance = None
    _lock = RLock()

    def __new__(cls, x, y, show_overwrite=False):
        """Here object should be created and initialized.

        NOTE: Parameter show_overwrite ONLY FOR DEMONSTRATION
        """
        if cls.__instance is None:
            with cls._lock:
                obj = super().__new__(cls)
                obj.x = x   # object attribute
                cls.y = y   # class attribute

                cls.__instance = obj
        return cls.__instance

    def __init__(self, x, y, show_overwrite=False):
        """__init__ shouldn't exist."""

        # this code will overwrite attributes x and y every time Singleton(x, y) is called.
        if show_overwrite:
            self.x = x
            self.y = y
            print("Incorrect usage")
