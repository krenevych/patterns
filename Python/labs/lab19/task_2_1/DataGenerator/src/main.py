from random import randint

TEMPERATURE_RANGE = (-50, 50)
HUMIDITY_RANGE = (0, 100)
PRESSURE_RANGE = (700, 800)

cities = [
    "Washington",
    "London",
    "Kyiv",
    "Seoul"
]


def generate(fname, data_number):
    with open(fname, "w", encoding='utf-8') as f_out:
        for i in range(data_number):
            city = randint(0, len(cities) - 1)
            temperature = randint(TEMPERATURE_RANGE[0], TEMPERATURE_RANGE[1])
            humidity = randint(HUMIDITY_RANGE[0], HUMIDITY_RANGE[1])
            pressure = randint(PRESSURE_RANGE[0], PRESSURE_RANGE[1])
            print("%s %d %d %d" % (cities[city], temperature, humidity, pressure ), file=f_out)

        print(file=f_out)


if __name__ == "__main__":
    generate("input01.txt", 100)
