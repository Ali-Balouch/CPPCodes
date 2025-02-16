/*
 * line.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#include "line.h"
#include<iostream>
#include<cmath>
using namespace std;
line::line(int x1,int y1,int x2,int y2):p1(point(x1,y1)),p2(point(x2,y2)){

}	// TODO Auto-generated constructor stub




line::line(const point &p1,const point &p2) {
	cout<<"Copy constructor inside line"<<endl;
	this->p1=p1;
	this->p2=p2;

}
float line::slope(){

	float slo;
	int yt=(p2.gety()-p1.gety());
	int xt=(p2.getx()-p1.getx());

	slo=yt/xt;
	//cout<<slo;


	return slo;
}

float line::length(){
	float lt;
	int xt=pow(p2.getx()-p1.getx(),2);
	int yt=pow(p2.gety()-p1.gety(),2);

	lt=sqrt(xt+yt);
	return lt;

}

point* line::midpoint(){
	float x;float y;
	x=(p1.getx()+p2.getx())/2;
	y=(p1.gety()+p2.gety())/2;

point* l3=new point(x,y);

return l3;

}

line::~line() {
	// TODO Auto-generated destructor stub
}


int main(){


//	int px,py,p1x,p2y;
//	cout<<"Enter point 1 x :"<<endl;
//	cin>>px;
//	cout<<"Enter point 1 y"<<endl;
//	cin>>py;
//	cout<<"Enter point 2 x :"<<endl;
//	cin>>p1x;
//	cout<<"Enter point 2 y"<<endl;
//
//
//	cin>>p2y;


	//default value
	cout<<"Defalut value pass through object(4,6,2,4) :"<<endl;
	line l1(4,6,2,4);

	//line l2(px,py,p1x,p2y);

	cout<<"Slope of object 1"<<endl;

	float slop=l1.slope();
	cout<<slop<<endl;


	cout<<"length of obj :"<<endl;
	float len=l1.length();
	cout<<len<<endl;



	point *l3=new point;
	l3=l1.midpoint();

	cout<<"Mid point : "<<endl;
	cout<<l3->getx()<<l3->gety();

//deleting pointer
	delete l3;
	l3=NULL;
}



