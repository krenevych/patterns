from abc import ABCMeta


class MilitaryObject(metaclass=ABCMeta):
    def __init__(self, name):
        self.name = name


class GeneralStaff(MilitaryObject):
    def __init__(self, name, generals, secretPaper):
        super().__init__(name)
        self.generals = generals
        self.secretPaper = secretPaper

    def __str__(self):
        return f"GeneralStaff: У генеральному штабі {self.name} є {self.generals} геренералів та {self.secretPaper} секретних паперів."


class MilitaryBase(MilitaryObject):
    def __init__(self, name, officers, soldiers, jeeps, tanks):
        super().__init__(name)
        self.officers = officers
        self.soldiers = soldiers
        self.jeeps = jeeps
        self.tanks = tanks

    def __str__(self):
        return f"MilitaryBase: На військовій базі {self.name} є {self.officers} офіцерів, {self.soldiers} солдатів, {self.jeeps} джипів та {self.tanks} танків."


if __name__ == '__main__':
    generalStaff = GeneralStaff("Пентагон", 20, 100)
    print(generalStaff)

    militaryBase = MilitaryBase("Перл Харбор", 10, 1000, 300, 20)
    print(militaryBase)
