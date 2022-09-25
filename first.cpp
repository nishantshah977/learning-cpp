#include<iostream>
using namespace std;
int main(){
	int a,t,b;
	cout<<"Enter Total Passenger";
	cin>>a;
	t = a % 50;
	b = 50 - t;
	cout<<"The last bust will have "<<b<<" seats left";
	return 0;
}
