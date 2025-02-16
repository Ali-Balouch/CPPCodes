//#include <iostream> 
//using namespace std; 
//class Tank 
// { 
// private: 
// int gallons; 
// public: 
// Tank() 
// { gallons = 50; } 
// Tank(int gal) 
// { gallons = gal; } 
// int getGallons() 
// { return gallons; } 
// }; 
//int main() 
// { 
// Tank storage[3] = { 10, 20 }; 
// for (int index = 0; index < 3; index++) 
// cout << storage[index].getGallons() << endl; 
// return 0; 
// }
//
//#include <iostream> 
//using namespace std; 
//class Package 
// { 
// private: 
// int value; 
// public: 
// Package() 
// { value = 7; cout << value << endl; } 
// Package(int v) 
// { value = v; cout << value << endl; } 
// ~Package() 
// { cout << value << endl; } 
// }; 
//int main() 
// { 
// Package obj1(4); 
// Package obj2; // Not printing 7 . why??
// Package obj3(2); 
// 
// //output = 4,2,2,4   while I think output should be 4,7,2,2,7,4
// return 0; 
// } 
//
//#include <iostream> 
//using namespace std; 
//class DumbBell
// { 
// int weight; 
// public: 
// void setWeight(int); 
// }; 
//void DumbBell:: setWeight(int w) 
// { 
// weight = w; 
// } 
//int main() 
// { 
// DumbBell bar; 
// bar.setWeight(20); 
// cout << "The weight is " << bar.weight << endl;//getter missing 
// return 0; 
//}




