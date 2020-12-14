/*
 * Dessert.cpp
 *
 *  Created on: Dec 14, 2020
 *      Author: danny
 */

#include <string>
#include <iostream>

#include "Dessert.h"

using namespace std;

Dessert::Dessert(int numb):numb(numb){

}

Dessert::~Dessert(){

}

/**
	 * derived classes output "Name_of_Dessert #numb
	 * for instance if the dessert is a Pecan Bar and numb=1 it should return "Pecan Bar #1"
	 * std::to_string(numb) may be useful
	 */
string Dessert::taste(){

}
