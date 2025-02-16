#include<iostream>
using namespace std;
//
//int main(){
//
//	char ch ='A';
//	char *ptr=& ch;
//	int a =10;
//	int* ptr1=& a;
//	float b =10.5;
//	float *ptr2=& b;
//	double c =12.34;
//	double *ptr3=& c;
//	long d = 12345;
//	long *ptr4=& d;
//	short e =12;
//	short *ptr5=& e;
//	string st ="abscd";
//	string *ptr6 = &st;
//	cout<<sizeof(ch)<<endl;
//	cout<<sizeof(ptr)<<endl;
//	cout<<sizeof(a)<<endl;
//	cout<<sizeof(ptr1)<<endl;
//	cout<<sizeof(b)<<endl;
//	cout<<sizeof(ptr2)<<endl;
//	cout<<sizeof(c)<<endl;
//	cout<<sizeof(ptr3)<<endl;
//	cout<<sizeof(d)<<endl;
//	cout<<sizeof(ptr4)<<endl;
//	cout<<sizeof(e)<<endl;
//	cout<<sizeof(ptr5)<<endl;
//	cout<<sizeof(st)<<endl;
//	cout<<sizeof(ptr6)<<endl;
//}
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
//
//int a=2,b=7,c=11;
//int * aptr=&a, * bptr=&b, * cptr=&c;
//cout<<&a<<" "<<&b<<" "<<&c;
//cout<<*aptr<<" "<<*bptr<<endl;
//*aptr=*bptr;
//cout<<a<<" "<<b;
//bptr=cptr;
//cout<<*bptr<<endl;
//aptr=bptr;
//bptr=cptr;
//cptr=aptr;
//cout<<*bptr<<" "<<*cptr<<endl;
//void location(int arr[], int size, int target){
//	
//	for(int i=0; i<size; i++){
//		if(target == *(arr+i))
//			cout<<"\n Required Number is "<<target<<" at Address "<<arr+i<<endl;
//		}
//			if(!target)
//				cout<<"Element Not found";
//	}
//	
//int main(){
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	location(arr, 10, 0);
//	
//	return 0;
//}
//int main(){
//double *ptr;
//double a[3]={1.2, 2.3, 3.4};
//ptr = &a[1];
//ptr+=1;
//cout<<*ptr<<endl;
//
//	return 0;
////}
//int main(){
//	
//int * aptr, * bptr, * cptr;
//int x[3]={5,9,11};
//char y[6]={'H','E','L','L','O','\0'}, *sptr=NULL;
//		cout<<x<<endl;
//		cout<<y<<endl;
//		cout<<(x+2)<<endl;
//		cout<<(y+2)<<endl;
//		cout<<*(x+2)<<" "<<*(y+2)<<endl;
//		cout<<x[2]<<" "<<y[2]<<endl;
//		cout<<&x[2]<<endl;
//		cout<<&y[2]<<endl;
//		cout<<1[x]<<" "<<1[y]<<endl;//why does this work?
//		cout<<*x+2<<" "<<*y+2<<endl;
//		aptr=x;
//		cout<<*aptr<<endl;
//		aptr=x+1;
//		cout<<*aptr<<endl;
//		sptr=y;
//		cout<<*sptr<<endl;
//		sptr=y;
//		sptr++;
//		cout<<sptr<<endl;//compare with 18
//		x[0]=-11;
////		cout<<x<<endl;	
//	return 0;
//}

int main()
{
int *iptr, a; 
double *fptr, b;
int x;
 a = 10;
 b = 20;
 iptr = &a; 
 fptr = &b; 
 for ( x = 0; x < 10; x++) 
 cout << iptr+x << " " << fptr+x << '\n'; 
 return 0;
}






