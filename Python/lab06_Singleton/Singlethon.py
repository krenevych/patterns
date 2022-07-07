class Borg:
    """The Borg design pattern"""

    _shared_data = {}  # Attribute dictionary

    def foo(self):
        pass

    def __init__(self):
        # self.a = 1
        # self.b = 223
        self.__dict__ = self._shared_data


class Singleton(Borg):
    """The Singleton design pattern"""

    def __init__(self, **kwargs):
        super().__init__()
        self._shared_data.update(kwargs)  # Update the attribute dictionary

    def __str__(self):
        return str(self._shared_data)


if __name__ == '__main__':
    s = Singleton(HTTP="Hyper Text Transfer Protocol")
    print(s)

    s1 = Singleton(ADS="Algorithms and Data Structures")
    print(s1)

b = Borg()
print(b.__dict__)
