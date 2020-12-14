/*
 * PecanBar.cpp
 *
 *  Created on: Dec 14, 2020
 *      Author: danny
 */

#include <string>
#include <iostream>

#include "PecanBar.h"
#include "Dessert.h"

using namespace std;
/**
		 constructs object
	 *
	 * numb: which number dessert this is
	 */
PecanBar::PecanBar(int numb):Dessert(numb){

}

PecanBar::~PecanBar(){

}
/**
	 * if numb is 3 outputs "Pecan Bar #3"
	 *
	 */
string PecanBar::taste(){
return "Pecan Bar #"+to_string(numb);
}


