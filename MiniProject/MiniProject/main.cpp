//
//  main.cpp
//  MiniProject

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int num[10]={33, 6, 8, 27, 25, 48, 12, 5, 18, 15};
    float avg, max = 0, max2 = 0;
    for (int i = 0; i<=9; i++) {
        if (num[i]>max) {
            max = num[i];
        }
    }
    for (int i = 0; i<=9; i++) {
        if (num[i]>max2 && num[i]!=max){
            max2 = num[i];
        }
    }
    avg = (max + max2)/2;
    cout << "The first largest number is " << max << endl;
    cout << "The second largest number is " << max2 << endl;
    cout << "The average of these two numbers is " << avg << endl;
    return 0;
}
