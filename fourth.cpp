#include <iostream>
#include <cstdlib>
using namespace std;


/* You must set a PIN for your suitcase that contains 4 digits in the range of 0 to N.
Write a program to take the N number as input, generate 4 random numbers from the range and print them sequentially, without spaces.
 */
int main() {
    srand(0);
    int range,n;
    cin >> range;
    //your code goes here
    for(n=0;n<4;n++){
    cout<<1 + (rand()%range);
    }
    return 0;
}
