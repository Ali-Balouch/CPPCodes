#include<iostream>

using namespace std;

class point{
	
	private:
		int X_Coordinate;
		int Y_Coordinate;
	
	public:
		point ();
		point(int a, int b);
		void setXC(int x);
		void setYC(int y);
		int getXC();
		int getYC();
		void printfun();
		~ point();
};


	point::	point(){
			cout<<"DEfault constructor"<<endl;
		}
	point::	point(int a, int b){
			X_Coordinate = a;
			Y_Coordinate = b;
		}
    void point:: setXC(int x){
			X_Coordinate = x;
		}
	void point::	setYC(int y){
			Y_Coordinate = y;
		}
	int point::	getXC(){
			return X_Coordinate;
		}
	int point::	getYC(){
			return Y_Coordinate;
		}
	void point::	printfun(){
			cout<<"("<<X_Coordinate<<", "<<Y_Coordinate<<")"<<endl;
		}
	
	point:: ~point(){
			//destructor
		}
		


int main(){
	int x=5, y=4;
	//point p1();
	point p1(15, 10);
	p1.printfun();
	point p2(10, 15);
	p2.printfun();
	return 0;
}
