from abc import ABCMeta, abstractmethod


class Spy(metaclass=ABCMeta):
    def __init__(self, name):
        self.name = name

    def __str__(self):
        return f"Шпигун: {self.name}\n"

    @abstractmethod
    def visitGeneralStaff(self, generalStaff):
        pass

    @abstractmethod
    def visitMilitaryBase(self, militaryBase):
        pass


class SecretAgent(Spy):

    def __init__(self, name):
        super().__init__(name)
        self.information = ""

    def __str__(self):
        return super().__str__() + f"information = {self.information}\n"

    def visitGeneralStaff(self, generalStaff):
        self.information += f"{generalStaff.name}:\n" \
                            f"генералів: {generalStaff.generals}\n" \
                            f"секретних паперів: {generalStaff.secretPaper}\n"

    def visitMilitaryBase(self, militaryBase):
        self.information += f"{militaryBase.name}:\n" \
                            f"офіцерів: {militaryBase.officers}\n" \
                            f"солдатів: {militaryBase.soldiers}\n" \
                            f"джипів  : {militaryBase.jeeps}\n" \
                            f"танків  : {militaryBase.tanks}\n"


class Saboter(Spy):
    def __str__(self):
        return super().__str__() + "Усіх вбью, один лишуся!"

    def visitGeneralStaff(self, generalStaff):
        generalStaff.generals = 0
        generalStaff.secretPaper = 0

    def visitMilitaryBase(self, militaryBase):
        militaryBase.officers = 0
        militaryBase.soldiers = 0
        militaryBase.jeeps = 0
        militaryBase.tanks = 0
