#!/usr/bin/env python3
# -*-encoding: utf-8-*-

# created: 16.02.2022
# Excusa. Quod scripsi, scripsi.

# by David Zashkolny
# email: davendiy@gmail.com

""" Modified Singleton, where there can exist several objects of one class, but 'objects' with same
parameters should link to the one real singleton-like object.

This example based on a recipe 9.13 from D.Beazley "Python Cookbook, 3rd Edition"

Basic usage of metaclasses is more described in protocol_example.py
"""
import weakref
from threading import RLock


class Cached(type):

    _lock = RLock()

    def __init__(cls, *args, **kwargs):
        super().__init__(*args, **kwargs)

        # use WeakValueDictionary instead of vanilla dictionary in order to avoid
        # creation of extra links to used objects and allow the garbage collector to
        # delete them when they aren't used currently.
        cls.__cache = weakref.WeakValueDictionary()

    def __call__(cls, *args):
        if args not in cls.__cache:
            with cls._lock:
                obj = super().__call__(*args)
                cls.__cache[args] = obj
        else:
            print("Took from cache.")
        return cls.__cache[args]


class Test(metaclass=Cached):
    """
    >>> t1 = Test(1, 2)
    __init__ of Test is called with 1 2
    >>> t1.x, t1.y
    (1, 2)
    >>> t2 = Test(2, 3)
    __init__ of Test is called with 2 3
    >>> t2.x, t2.y
    (2, 3)
    >>> t3 = Test(1, 2)
    Took from cache.
    >>> t3.x, t3.y
    (1, 2)
    """

    def __init__(self, x, y):
        print("__init__ of Test is called with", x, y)
        self.x = x
        self.y = y
