#include <iostream>
#include "RoboticArm.h"

int main() {
    RoboticArm arm(0.0, 0.0, 0.0);
    std::cout << "Brazo robótico inicializado en (0, 0, 0).\n";

    arm.move(15.5, 20.0, 5.2);
    arm.grab();

    std::cout << "Estado actual:\n";
    std::cout << "X: " << arm.getX() << ", Y: " << arm.getY() << ", Z: " << arm.getZ() << "\n";
    std::cout << "¿Sujetando objeto?: " << (arm.getSujetandoObjeto() ? "Sí" : "No") << "\n";

    arm.release();
    return 0;
}
