from Military import GeneralStaff, MilitaryBase
from Spy import SecretAgent, Saboter

if __name__ == '__main__':
    generalStaff = GeneralStaff("Пентагон", 20, 100)
    print(generalStaff)

    militaryBase = MilitaryBase("Перл Харбор", 10, 1000, 300, 20)
    print(militaryBase)

    JamesBond = SecretAgent("James Bond")
    generalStaff.accept(JamesBond)
    print(JamesBond)

    militaryBase.accept(JamesBond)
    print(JamesBond)

    Rambo = Saboter("Rambo")
    print(Rambo)
    generalStaff.accept(Rambo)
    militaryBase.accept(Rambo)

    print(generalStaff)
    print(militaryBase)

    generalStaff.accept(JamesBond)
    print(JamesBond)