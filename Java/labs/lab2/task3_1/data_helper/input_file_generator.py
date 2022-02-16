from random import randint

N_MAXKEY = 25
MULT = 4


def generate(fname, equations_number):
    with open(fname, "w", encoding='utf-8') as f_out:
        for i in range(equations_number):
            coefCount = randint(0, 2)
            if coefCount == 0:
                for i in range(2):
                    coef1 = randint(0, MULT) * randint(-N_MAXKEY, N_MAXKEY)
                    coef0 = randint(0, MULT) * randint(-N_MAXKEY, N_MAXKEY)
                    print("%4d %4d" % (coef1, coef0), file=f_out)
            if coefCount == 1:
                for i in range(3):
                    coef2 = randint(0, MULT) * randint(-N_MAXKEY, N_MAXKEY)
                    coef1 = randint(0, MULT) * randint(-N_MAXKEY, N_MAXKEY)
                    coef0 = randint(0, MULT) * randint(-N_MAXKEY, N_MAXKEY)
                    print("%4d %4d %4d" % (coef2, coef1, coef0), file=f_out)
            if coefCount == 2:
                for i in range(3):
                    coef4 = randint(0, MULT) * randint(-N_MAXKEY, N_MAXKEY)
                    coef2 = randint(0, MULT) * randint(-N_MAXKEY, N_MAXKEY)
                    coef0 = randint(0, MULT) * randint(-N_MAXKEY, N_MAXKEY)
                    print("%4d %4d %4d %4d %4d" % (coef4, 0, coef2, 0, coef0), file=f_out)

        print(file=f_out)


if __name__ == "__main__":
    generate("input01.txt", 20)
    generate("input02.txt", 500)
    generate("input03.txt", 1000)
