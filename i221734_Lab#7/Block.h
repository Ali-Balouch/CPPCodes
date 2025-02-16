/*
 * Block.h
 *
 *  Created on: Mar 8, 2023
 *      Author: muazam
 */

#ifndef BLOCK_H_
#define BLOCK_H_
#include <string>
using namespace std;

class Block {
private:
	double Length;
	double Width;
	double Height;
	const string material;
	string colour;

public:

 static int countofBlocks;

 //Block();
 Block(double = 2.0, double = 2.0, double = 2.0,string = "Black",string = "Card");

	const string& getColour() const;
	void setColour(const string &colour);
	double getHeight() const;
	void setHeight(double height);
	double getLength() const;
	void setLength(double length);
	const string& getMaterial() const;
	double getWidth() const;
	void setWidth(double width);
	double getVolume();
	double getSurfaceArea();
	void print();
	virtual ~Block();
};

int Block::countofBlocks =0;

#endif /* BLOCK_H_ */
