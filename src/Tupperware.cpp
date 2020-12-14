/*
 * Tupperware.cpp
 *
 *  Created on: Dec 14, 2020
 *      Author: danny
 */
#include <string>
#include <iostream>
#include <vector>
#include "Dessert.h"
#include "Tupperware.h"

using namespace std;

Tupperware::Tupperware(int max_desserts):max_desserts(4){

}

Tupperware::~Tupperware(){

}

/**
		 trys to add the dessert to myDesserts if there is room
	 *
	 * \param pDessert: can be either a ChocChipCookie or a PecanBar
	 * \return  true, dessert was added
	 *			false, already have max_desserts desserts cannot add another
	 *
	 */
bool Tupperware::AddDessert(Dessert* pDessert){
		if(myDesserts.size()<max_desserts){
			myDesserts.push_back(pDessert);
			return true;
		}
		else{
			return false;
		}
	}
/**
		 iterates over the container full of Desserts
		 and outputs the result of each Dessert's taste() method
	 *
	 * \return Nothing
	 */
void Tupperware::ListDesserts(){
	for(unsigned int i = 0;i<myDesserts.size();i++){
		cout<<myDesserts.at(i)->taste()<<endl;
	}
}
/**
			 clears the vector of desserts
		 *
		 */
void Tupperware::clear(){
	for(std::vector<Dessert*>::iterator it = myDesserts.begin(); it != myDesserts.end();++it){
		delete(*it);
		}
}

