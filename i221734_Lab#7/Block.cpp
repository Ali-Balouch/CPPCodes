/*
 * Block.cpp
 *
 *  Created on: Mar 8, 2023
 *      Author: muazam
 */

#include "Block.h"
#include<iostream>
using namespace std;


//Block::Block():material("Card") {
	// TODO Auto-generated constructor stub

//}

//----------------------- Parametarized constructor-------//

Block :: Block(double length, double width, double height,string colour,string mname):material(mname){
	this -> Length = length;
	this -> Width = width;
	this -> Height = height;
	this -> colour = colour;

	countofBlocks++;

}


//------------------- Getter settter ----------started --------//

const string& Block::getColour() const {
	return colour;
}

void Block::setColour(const string &colour) {
	this->colour = colour;
}


double Block::getHeight() const {
	return Height;
}

void Block::setHeight(double height) {
	Height = height;
}

double Block::getLength() const {
	return Length;
}

void Block::setLength(double length) {
	Length = length;
}

const string& Block::getMaterial() const {
	return material;
}

double Block::getWidth() const {
	return Width;
}

void Block::setWidth(double width) {
	Width = width;
}
//-------------------------------------- Volumn -------------//

double Block:: getVolume(){

	double v = Length * Width * Height;
	return  v;
}

//-------------------------- Surface area --------------------//

double Block :: getSurfaceArea(){

	double surfacearea = 2 * (Length*Width + Length*Height + Width*Height);
	return surfacearea;
}

//---------------------- Print function --------------------//

void Block :: print(){

	cout<<"\n Length =  "<<Length<<endl;
	cout<<"\n Width  =  "<<Width<<endl;
	cout<<"\n Height  =  "<<Height<<endl;
	cout<<"\n Material  =  "<<material<<endl;
	cout<<"\n Colour  =  "<<colour<<endl;
	cout<<"\n Volumn  =  "<<getVolume()<<endl;
	cout<<"\n Surface Area = "<<getSurfaceArea()<<endl;

}

Block::~Block() {
	// TODO Auto-generated destructor stub
	countofBlocks--;
}


int main(){

	Block b1(1,1,1,"red");
	b1.print();
	cout<<endl;
	cout<<"Count of Block = "<<b1.countofBlocks<<endl;
	cout<<endl;
	Block b2;
	b2.print();
	cout<<endl;
	cout<<"Count of Block = "<<b2.countofBlocks<<endl;



}

