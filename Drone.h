#include <iostream>
#include <string>

class Drone
{
private:
    std::string model;
    int batteryCapacity;
    double maxFlightTime;
    int maxSpeed;
    int altitude;
    bool isFlying;

public:
    Drone();
    Drone(const std::string& model, int batteryCapacity, double maxFlightTime, int maxSpeed);

    void input_data();
    void display_data();

    void take_off();
    void land();
    void ascend(int meters);
    void descend(int meters);
    void hover();
    void show_status();
};