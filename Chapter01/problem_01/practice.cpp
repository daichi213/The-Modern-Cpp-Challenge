#include<iostream>
using namespace std;

int main(void) {
    int num,count=0;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (i%3 == 0 || i%5 == 0) count+=i;
    }
    cout << count << '\n';
    return 0;
}