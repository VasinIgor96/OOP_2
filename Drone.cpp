#include "Drone.h"
#include <iostream>

Drone::Drone() {
    model = "";
    batteryCapacity = 0;
    maxFlightTime = 0.0;
    maxSpeed = 0;
}

Drone::Drone(const std::string& model, int batteryCapacity, double maxFlightTime, int maxSpeed) {
    this->model = model;
    this->batteryCapacity = batteryCapacity;
    this->maxFlightTime = maxFlightTime;
    this->maxSpeed = maxSpeed;
}

void Drone::input_data() {
    std::cout << "Введіть модель дрона: ";
    std::getline(std::cin, model);
    std::cout << "Введіть ємність акумулятора (mAh): ";
    std::cin >> batteryCapacity;
    std::cout << "Введіть максимальний час польоту (год): ";
    std::cin >> maxFlightTime;
    std::cout << "Введіть максимальну швидкість (км/год): ";
    std::cin >> maxSpeed;
}

void Drone::display_data() {
    std::cout << "Модель дрона: " << model << std::endl;
    std::cout << "Ємність акумулятора: " << batteryCapacity << " mAh" << std::endl;
    std::cout << "Максимальний час польоту: " << maxFlightTime << " год" << std::endl;
    std::cout << "Максимальна швидкість: " << maxSpeed << " км/год" << std::endl;
}
