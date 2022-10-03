#include <iostream>
using namespace std;

int recSum(int n) {
    //complete the function
    if(n<=1){
        return 1;
    }
    return n + recSum(n-1);
}

int main() {
    //getting input
    int n;
    cin >> n;
    
    //call the recursive function and print returned value
    cout<<recSum(n);
    
    return 0;
}
