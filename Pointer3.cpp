#include<iostream>
#include<cstring>
using namespace std;

//--------------------------------------Home Work Q1 ----------------------------------------------------------
//void f1(int *, int); 
//void f2(int *, int); 
//int main() 
//{ 
// int a; 
// int b; 
// a=3; 
// b=5; /// The trick here is that the value of B not change here.
// f1(&a,b); // a = 5 &&  b = 3;
// f2(&a,b); // a = 5 &&  b = 5; 
// cout<< a<<","<<b<<",";  // a = 5 && b = 5 
// cout<< a<<","<<b; 
// getchar(); 
// } 
//void f1( int* p , int q) 
//{ 
// int tmp; 
// tmp =*p; // temp=3
// *p = q; // a = 5
// q= tmp; // b = 3
//} 
//void f2( int* p , int q) 
//{ 
// int tmp; 
// tmp =*p; 
// *p = q; 
// q= tmp; 
//}
//--------------------------------------Home Work Q2 ----------------------------------------------------------
//int fun2(char *a,char *b) 
//{ 
//for(; *a==*b;a++,b++) 
// if(*a=='\0') 
// return 0; 
//return *a-*b; 
//} 
// int main(){ 
// char a[10]="date", b[10]="data"; 
// cout<<fun2(a,b)<<endl; 
//} 
 
//--------------------------------------Home Work Q3 ----------------------------------------------------------

//
//int main( ) 
//{ 
//void *vp; 
//char ch = 'g', *cp = "goofy"; 
//int j = 20; 
//vp = &ch; 
//cout<< *(char *)vp; 
//vp = &j; 
//cout<<*(int *)vp; 
//vp = cp; 
//cout<<(char *)vp + 3<<endl; 
//}
//--------------------------------------Home Work Q4 ----------------------------------------------------------
//
//int  main() 
//{ 
//int const *p=5; 
//cout<<++(*p); 
//} 
//--------------------------------------Home Work Q5 ----------------------------------------------------------
//int main ( ) 
//{ 
// static char *s[ ] = {"black", "white", "yellow", "violet"}; 
// char **ptr[ ] = {s+3, s+2, s+1, s}, ***p; 
// p = ptr; 
// **++p; 
// cout<<*--*++p + 3<<endl; 
//}

//--------------------------------------Home Work Q6 ----------------------------------------------------------
//int main ( ) 
//{ 
//char *ptr; 
//char myString[] = "programing I"; 
//ptr = myString; 
//ptr += 5; 
// cout<<ptr; 
//	return 0;
//}
//--------------------------------------Home Work Q7 ----------------------------------------------------------
//int main ( ) 
//{ 
//int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
//int *ptr = arr + 2; 
//cout<<ptr[ 7 ];   // 9
//
//	return 0;
//}
//--------------------------------------Home Work Q8 ----------------------------------------------------------
//int main ( ) 
//{ 
//char *buffer = " Hello World"; 
//char *ptr = buffer; 
//ptr += 5; 
//cout<<ptr<<endl; 
//cout<<buffer; 
//	return 0;
//}
//--------------------------------------Home Work Q9 -----------------------------ERROR-----------------------------

//int main ( ) 
//{ 
//int x=20; 
//int &y =x; // &y is referencing operavtor
//cout<<y<<endl;
//int *p = &x; 		
//x=x+20; 
//cout<<*p<<endl;
//y=y+50; 
//cout<< *p << " "<< y; 
//	return 0;
//}
//--------------------------------------Home Work Q10 ----------------------------------------------------------
//void magic(int *sp, int *ep){ 
// while (sp >= ep){ 
// cout << *sp << " "; // 5 , 4 , 3, 2, 1, 2, 3, 4, 5
// sp--; // 4, 3, 2, 1 ,0 , -1, -2, -3, -4
// } 
// sp += 4; 
// cout << endl; 
// while (sp >= ep){ 
// cout << *sp << " ";// 2, 3, 4, 5  
// sp--; // 4 , 3, 2, 1
// } 
// cout << endl; 
//} 
//int main(){ 
// int array[] = { 5, 4, 3, 2, 1, 2, 3, 4, 5 }; 
// magic(array + 8, array); 
// return 0; 
//}
//--------------------------------------Home Work Q11 ----------------------------------------------------------
//void my_fun(int *p, int *s) { 
// s = p; 
// *s = 23; 
// int x = 5; 
// s = &x; 
// return; 
//} 
//int main() { 
// int x = 3; 
// int *p = &x; 
// int *s; 
// s = &x; 
// my_fun(p, s); 
// cout << "x = " << x << " *p=" << *p << " *s=" << *s; 
// return 0; 
//}
//--------------------------------------Home Work Q12 ----------------------------------------------------------
//void Encrypt(char *T) 
//{ 
// for (int i = 0; *T != '\0'; i += 1) 
// { 
// if (*T == 'W' || *T == 'H' || *T == 'D') 
// *T = '#'; 
// else if (*T >= 'a' && *T <= 'z') 
// *T -= 32; 
// else if (i % 2 == 0) 
// *T = *T - 1; 
// else 
// *T = '&'; 
// T = T + 1; 
// } 
//} 
//int main() 
//{ 
// char text[] = "Hello WorlD"; 
// Encrypt(text); 
// cout << text << endl; 
// return 0; 
//}
//--------------------------------------Home Work Q13 ----------------------------ERROR------------------------------
//int num = 0; 
//int func(int* num) 
//{ 
// *num += 5; 
// return ((*num * *num) + 5); 
//} 
//int main() 
//{ 
// int num = 10; 
// int * q = func(&num); 
// cout << *q; 
// return 0; 
//} 
//--------------------------------------Home Work Q14 ----------------------------------------------------------
//void fun(int *p, int *s) { 
// s = p; 
// *s = 10; 
// int x = 5; 
// s = &x; 
// return; 
//} 
//int main() { 
// int x = 5; 
// int *p = &x; 
// int *s; 
// s = &x; 
// fun(p, s); 
//cout << "x = " << x << " *p=" << *p << " *s=" << *s; 
// return 0; 
//} 
//--------------------------------------Home Work Q15 ----------------------ERROR------------------------------------
//void f(int *pi, int *qj, int* kf) 
//{ 
// pi = qj; 
// kf = pi; 
// qj = kf; 
// *pi = 2,*qj=*kf+3;*kf=*kf+1;
// cout<<*pi<<*qj<<*kf<<endl; 
//} 
//int i = 0, j = 1,n=6;
//int main() 
//{
//	cout<<i<<n<<j<<endl;   // 0 , 6 , 1
// f(&i,&j,&n); // 6, 6, 6
// cout<<i<< n <<j; // 0, 6, 6
// return 0; 
//} 
//--------------------------------------Home Work Q16 --------------------------ERROR--------------------------------
//void My_Func ( int *q, int row, int col ) 
//{ 
//int i, j ; 
//for ( i = 0 ; i < row ; i++ ) 
//{ 
//for ( j = 0 ; j < i ; j++ ) 
// * ( q + i * col + j ) = * ( q + i * col + j ) *3.2 ; 
// } 
//} 
//int main() 
//{ 
//int a[5][5] = { 1, 2, 3, 4, 5, 6,7,8,9, 0,1, 6,3,3,4,1,9,8,6,1}; 
//My_Func ( a, 5, 5 ); 
//}
//--------------------------------------Home Work Q17 ------------------------------ERROR----------------------------
//int main() 
//{ 
//int *p1 = new int ; 
// *p1 = 100; 
//if( p1!=NULL ) 
//{ 
//int *p2 = p1 ; 
//delete p2 ; 
//} 
// cout << *p1 << endl ; // 100
//return 0; 
//}
//---------------------------Home Work Q18 ----------------------------------------------------------
//int main ( ) 
//{ 
//char *s[4] = {"black", "white", "yellow", "violet"}; 
// 
// cout<<(*(s+1)+2)<<endl; // ite
// cout<<*(*(s+2)+3);  // yellow == 1
//return 0; 
//} 
//--------------------------------------Home Work Q19 ------------------------------------ERROR----------------------
//int check1(char *x, char *y) 
//{ 
// return strcmp(x,y); 
//} 
//int check2(char *x, char *y) 
//{ 
// return strncmp(x,y,3); 
//} 
//int main() 
//{ 
// char e1[] = "Alpha"; 
// char e2[] = "Bravo"; 
// char e3[] = "Alpak"; 
// 
// cout<<check1(e1, e2)<<endl; 
// cout<<check1(e1, e1)<<endl; 
// cout<<check2(e1, e3)<<endl; 
//return 0; 
//}
//--------------------------------------Home Work Q20 -------------------------------ERROR---------------------------
//void print(const char* p){ 
// for(int i = 0; i < strlen(p);){ 
// cout<<p<<endl; //  123 // 23 // 3
// p++;           
// }              
//} 
//int main(){ 
// char p[] ={'1','2','3','\0'}; 
// print(p);  // char string print all the string  
// return 0; 
//} 
//--------------------------------------Home Work Q21 ----------------------------------------------------------
//void print(const char* p){ 
// for(int i = 0; i < strlen(p); i++){ 
// cout<<p<<endl; 
// p++; 
// } 
//} 
//int main(){ 
// char p[] ={'a','b','c','\0'}; 
// cout<<strlen(p);
// print(p); 
// return 0; 
//} 
//--------------------------------------Home Work Q22 ----------------------------------------------------------
//int g_One=1; 
//void func(int* pInt){ 
// pInt=&g_One; 
//} 
//void func2(int*& rpInt){ 
// rpInt=&g_One; 
//} 
//int main(){ 
// int nvar=2; 
// int* pvar=&nvar; 
// func(pvar); 
// cout<<*pvar<<endl; 
// func2(pvar); 
// cout<<*pvar<<endl; 
// return 0; 
//} 
//--------------------------------------Home Work Q23 ----------------------------------------------------------
//int main(){ 
//int array[] = {1,2,3,4,5}; 
//int*p = array; 
//cout<<(p+(10-5)/2 == array+2); // not sure if it is possible  // Possible 
//return 0; 
//}
//--------------------------------------Home Work Q24 ----------------------------------------------------------
//int main(){ 
// int x = 10; // ok 
// int *q = &x; // going good 
// int const*const my_strange_const_friend=q; // this is cruel 
// cout<<my_strange_const_friend <<endl; // speechless here 
// cout<<*my_strange_const_friend <<endl; 
// cout<<&my_strange_const_friend <<"\t"<<&q; // speechless here, again! 
// return 0; 
//} 
//--------------------------------------Home Work Q25 ----------------------------------------------------------
//int main(){ 
// int data = 10; 
// int const * what; 
// what = &data; // oh dear 
// cout<<what<<"\t" 
// <<*what<<"\\" 
// <<&what; // interesting ;) 
// return 0; 
//}
//int main(){
//int m = 44;
//cout<<m<<endl;
//int* p = &m;
//cout<<*p<<endl;
//cout<<p<<endl;
//int& r = m;
//cout<<&r<<endl;
//cout<<r<<endl;
//cout<<m<<endl;
//int n = (*p)++;
//cout<<n<<endl;
//int* q = p - 1;
//cout<<q<<endl;
//cout<<*q<<endl;
//r = --(*p) + 1;
//cout<<r<<endl;
//++*q;
//cout<<q<<endl;
//cout<<*q<<endl;
//	return 0;
//}

