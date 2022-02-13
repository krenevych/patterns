package com.customs;

// Інтерфейс митниця
public interface Customs {
    float vehiclePrice(Auto auto); // розрахувати ціну автомобіля
    float tax(Auto auto);          // розрахувати варність розмитнення автомобіля
}
