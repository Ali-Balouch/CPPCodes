////// C++ program to demonstrate segmentation fault/core dump
////// by modifying a string literal
////
////#include <iostream>
////using namespace std;
////
////int main()
////{
////char *str;
////
/////* Stored in read only part of data segment */
////str = "GfG";	
////
/////* Problem: trying to modify read only memory */
////*(str + 1) = 'n';
////return 0;
////}
////
//
//
//// C++ program to demonstrate segmentation
//// fault when array out of bound is accessed.
//#include <iostream>
//using namespace std;
//
//int main()
//{
//int arr[2];
//arr[3] = 10; // Accessing out of bound
//return 0;
//}

