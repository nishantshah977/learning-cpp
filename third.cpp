#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	float f;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	// Testing a
	if(a<b && a<c && a<d && a<e){
	f = a;
	}
	else{
			//Testing b
			if(b<a && b<c && b<d && b<e){
	f = b;
	}
	else{
			//Tesring C
			if(c<b && c<a && c<d && c<e){
	f = c;
	}
	else{
			//Testing D
			if(d<b && d<c && d<a && d<e){
	f = d;
	}
	else{
			// Testing E
			if(e<b && e<c && e<d && e<a){
	f = e;
	}
	else{
		if(a==b && b==c && c==d && d==e){
			f = a;
		}
		}
		}
		}
	}
	}
float discount = f/100*50;
float amount = 50 - discount;
cout<<amount;
	return 0;
}
