#include "Drone.h"
#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Drone drone;

    std::cout << "������ ��� ��� �����:\n";
    drone.input_data();

    std::cout << "��� �����:\n";
    drone.display_data();

    return 0;
}
