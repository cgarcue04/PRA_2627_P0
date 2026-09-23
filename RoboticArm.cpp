#include "RoboticArm.h"

  RoboticArm::RoboticArm(double _x, double _y, double _z) {
    // pomgo aqui las asignaciones
    
	  x = _x;
	  y = _y;
	  z = _z;

	  sujetandoObjeto = false;

  //chasta aqui declaraciin constructor
  }

 double RoboticArm:: getX() const {
	 return x;
 }

 double RoboticArm:: getY() const {
	return y;
 }	

 double RoboticArm:: getZ() const {
        return z;
 } 

 bool RoboticArm::getSujetandoObjeto() const {
	 return sujetandoObjeto;
 }

// metodo grab 

 void RoboticArm::grab() {
    sujetandoObjeto = true;
}

// metodo relase
//
 void RoboticArm::release() {
    sujetandoObjeto = false;
}

// metodo move 
//
 void RoboticArm::move(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}
