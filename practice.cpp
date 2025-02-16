#include<iostream>
using namespace std;
//
//class Test
//{
//private:
//int x;
//public:
//Test(int x = 0) { this->x = x; }
//void change(Test *t) { this->x = t->x;}
//void print() { cout << "x = " << x << endl; }
//};
//
//int main()
//{
//Test obj(5);
//Test *ptr = new Test (10);
//obj.change(ptr);
//obj.print();
//return 0;
//}
//------------------------------------------------//

//#include<iostream>
//using namespace std;
//
//class Test
//{
//private:
//int x;
//int y;
//public:
//Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
//static void fun1() { cout << "Inside fun1()"; }
//static void fun2() { cout << "Inside fun2()"; fun1(); }
//};
//
//int main()
//{
//Test obj;
//obj.fun2();
//return 0;
//}
////------------------------------------------------//
//
//#include<iostream>
//using namespace std;
//
//class Test
//{
//private:
//int x;
//int y;
//public:
//Test (int x = 0, int y = 0) { this->x = x; this->y = y; }
//Test& setX(int a) { x = a; return *this; }
//Test& setY(int b) { y = b; return *this; }
//void print() { cout << "x = " << x << " y = " << y << endl; }
//};
//
//int main()
//{
//Test obj1;
//obj1.setX(10).setY(20);
//obj1.print();
//return 0;
//}
//
//------------------------------------------------//
//
//#include<iostream>
//using namespace std;
//
//class Test
//{
//private:
//int x;
//int y;
//public:
//Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
//void setX(int a) { x = a; }
//void setY(int b) { y = b; }
//void destroy() { delete this; }
//void print() { cout << "x = " << x << " y = " << y << endl; }
//};
//
//int main()
//{
//Test obj;
////obj.destroy();
//obj.print();
//return 0;
//}

//------------------------------------------------//

///////code1.cpp 
//class Alpha
//{ 
//int a; 
//public: 
// Alpha(int x = 1) 
// { 
// cout << "\nIN Alpha class constructor\n"; 
// a = x; 
// } 
//void print() 
// { 
// cout << "\nIN Alpha class Print"; 
// cout << "\n a is : " << a; 
// } 
// ~Alpha() 
// { 
// cout << "\nIN Alpha class Destructor\n"; 
// } 
//}; 
//class Beta 
//{ 
// 
//int b; 
//public: 
// Beta(int y = 1) 
// { 
// cout << "\nIN Beta class constructor\n"; 
// b = y; 
// } 
//void print() 
// { 
// cout << "\IN Beta class Print"; 
// cout << "\n B is : " << b; 
// 
// } 
// ~Beta() 
// { 
// cout << "\nIN Beta class Destructor\n"; 
// } 
//}; 
//class child : public Alpha, public Beta
//{ 
//int c; 
//public: 
// child(int c1 = 1, int c2 = 1, int c3 = 1):Beta(c3), Alpha(c2) 
// { 
// cout << "\nIN child class constructor\n"; 
// c = c1; 
// } 
// ~child() 
// { 
// cout << "\nIN child class Destructor\n"; 
// 
// } 
//}; 
//int main() 
//{ 
//child c1(2, 2,2); 
// 
// 
//} 
//
//
/////-----------------------code2.cpp-----------------------/// 
//class Alpha
//{ 
//int a; 
//public: 
// Alpha(int x = 1) 
// { 
// cout << "\nIN Alpha class constructor\n"; 
// a = x; 
// } 
//void print() 
// { 
// cout << "\nIN Alpha class Print"; 
// cout << "\n a is : " << a; 
// } 
// ~Alpha() 
// { 
// cout << "\nIN Alpha class Destructor\n"; 
// } 
//}; 
//class Beta 
//{ 
// 
//int b; 
//public: 
// Beta(int y = 1) 
// { 
// cout << "\nIN Beta class constructor\n"; 
// b = y; 
// } 
//void print() 
// { 
// cout << "\IN Beta class Print"; 
// cout << "\n B is : " << b; 
// 
// } 
// ~Beta() 
// { 
// cout << "\nIN Beta class Destructor\n"; 
// } 
//}; 
//class child : public Beta, public Alpha
//{ 
//int c; 
//public: 
// child(int c1 = 1, int c2 = 1, int c3 = 1):Beta(c3), Alpha(c2) 
// { 
// cout << "\nIN child class constructor\n"; 
// c = c1; 
// } 
// ~child() 
// { 
// cout << "\nIN child class Destructor\n"; 
// 
// } 
//}; 
//int main() 
//{ 
//child c1(2, 2,2); 
// 
// 
//}


//--------------------------------------------//


/////code4.cpp 
//class Grand
//{ 
//int g; 
//public: 
// Grand(int x = 10) 
// { 
// cout << "\nIN Grand class constructor\n"; 
// g = x; 
// } 
//void print() 
// { 
// cout << "\nIN Grand class Print"; 
// cout << "\n g is : " << g; 
// } 
// ~Grand() 
// { 
// cout << "\nIN Grand class Destructor\n"; 
// } 
//}; 
//class Alpha: public Grand
//{ 
//int a; 
//public: 
// Alpha(int x = 1) 
// { 
// cout << "\nIN Alpha class constructor\n"; 
// a = x; 
// } 
// ~Alpha() 
// { 
// cout << "\nIN Alpha class Destructor\n"; 
// } 
//}; 
//class Beta : public Grand
//{ 
// 
//int b; 
//public: 
// Beta(int y = 1) 
// { 
// cout << "\nIN Beta class constructor\n"; 
// b = y; 
// } 
// ~Beta() 
// { 
// cout << "\nIN B class Destructor\n"; 
// } 
//}; 
//class child : public Alpha, public Beta
//{ 
//int c; 
//public: 
// child(int c1 = 1, int c2 = 1, int c3 = 1):Beta(c3), Alpha(c2) 
// { 
// cout << "\nIN child class constructor\n"; 
// c = c1; 
// } 
// ~child() 
// { 
// cout << "\nIN child class Destructor\n"; 
// 
// } 
//}; 
//int main() 
//{ 
//child c1(2, 2,2); 
// c1.Alpha::print(); 
// 
//}

//--------------------------------------------//

//class abstract1 { //making an abstract class
//private: 
//int ab; 
//int cd; 
//public: 
//virtual void print() = 0; //pure Virtual function 
//virtual void fun() = 0;//pure Virtual function 
// abstract1() { 
// cout << "\nIn abstract Class Constructor"; 
// } 
// ~abstract1() { 
// cout << "\nIn abstract Class Destructor"; 
// } 
//}; 
//class Grand : public abstract1
//{ 
//int g; 
//public: 
// Grand(int x = 1) 
// { 
// cout << "\nIN Grand class constructor\n"; 
// g = x; 
// } 
//void print() 
// { 
// cout << "\nIN Grand class Print"; 
// cout << "\n g is : " << g; 
// } 
//void fun() 
// { 
// } 
// ~Grand() 
// { 
// cout << "\nIN Grand class Destructor\n"; 
// } 
//}; 
//class Alpha: public Grand
//{ 
//int a; 
//public: 
// Alpha(int x = 1, int y=1):Grand(y) 
// { 
// cout << "\nIN Alpha class constructor\n"; 
// a = x; 
// } 
//void print() 
// { 
// cout << "\nIN Alpha class Print"; 
// cout << "\n a is : " << a; 
// } 
//void EIDMUBARRIK() 
// { 
// cout << "\nEnjoy your EID"; 
// } 
// ~Alpha() 
// { 
// cout << "\nIN Alpha class Destructor\n"; 
// } 
//}; 
//class Beta : public Alpha
//{ 
// 
//int b; 
//public: 
// Beta(int x = 1, int y=1, int z=1):Alpha(y,z) 
// { 
// cout << "\nIN Beta class constructor\n"; 
// b = x; 
// 
// } 
//virtual void print() 
// { 
// cout << "\nIN Beta class Print"; 
// cout << "\n b is : " << b; 
// } 
//void fun() 
// { 
// cout << "\nWhat funny\n"; 
// } 
// ~Beta() 
// { 
// cout << "\nIN B class Destructor\n"; 
// } 
//}; 
//class child : public Beta
//{ 
//int c; 
//public: 
// child(int c1 = 1, int c2 = 1, int c3 = 1,int c4=1):Beta(c2,c3,c4) 
// { 
// cout << "\nIN child class constructor\n"; 
// c = c1; 
// } 
//void print() 
// { 
// cout << "\nIN Child class Print"; 
// cout << "\n c is : " << c; 
// } 
// ~child() 
// { 
// cout << "\nIN child class Destructor\n"; 
// 
// } 
//}; 
//int main() 
//{ 
////child c1(1, 2,3,4);
//////Grand G1;
//////c1.print();
//////child *p;
//////p = &G1; ==> Invalid
//////p = new Grand;
////abstract1 *p1[4];
//////p1 = &c1;//==>valid
//////p1->print();//
////
//// p1[0] = new Grand;
//// p1[1] = new Alpha;
//// p1[2] = new Beta;
//// p1[3] = new child;
//// for (int i = 0; i <= 3; i++)
//// {
//// p1[i]->print();
//// }
//// 
//// for (int i = 0; i <= 3; i++)
//// {
//// delete p1[i];
//// }
//abstract1 *a; 
// a = new child; 
// a->print(); 
// delete a; 
//
//}


//--------------------------------------------//
