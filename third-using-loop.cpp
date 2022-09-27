#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    double young = ages[0];
    for(int a=0;a<5;++a){
        if(young > ages[a]){
        young = ages[a];
        }
    }
    double dis = 50 -(50 * young/100);
    cout<<dis;
    
    return 0;
}
