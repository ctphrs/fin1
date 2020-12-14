/*
 * ChocChipCookie.cpp
 *
 *  Created on: Dec 14, 2020
 *      Author: danny
 */

#include <string>
#include <iostream>

#include "Dessert.h"
#include "ChocChipCookie.h"

using namespace std;
/**
		constructs object
	 *
	 * 	numb: which number dessert this is
	 */
ChocChipCookie::ChocChipCookie(int numb):Dessert(numb){

}

ChocChipCookie::~ChocChipCookie(){

}
/**
	 * 	if numb is 3 outputs "Chocolate Chip Cookie #3"
	 */
string ChocChipCookie::taste(){
return "Chocolate Chip Cookie #"+numb;
}



