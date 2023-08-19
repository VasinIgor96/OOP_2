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
    std::cout << "������ ������ �����: ";
    std::getline(std::cin, model);
    std::cout << "������ ������ ����������� (mAh): ";
    std::cin >> batteryCapacity;
    std::cout << "������ ������������ ��� ������� (���): ";
    std::cin >> maxFlightTime;
    std::cout << "������ ����������� �������� (��/���): ";
    std::cin >> maxSpeed;
}

void Drone::display_data() {
    std::cout << "������ �����: " << model << std::endl;
    std::cout << "������ �����������: " << batteryCapacity << " mAh" << std::endl;
    std::cout << "������������ ��� �������: " << maxFlightTime << " ���" << std::endl;
    std::cout << "����������� ��������: " << maxSpeed << " ��/���" << std::endl;
}
