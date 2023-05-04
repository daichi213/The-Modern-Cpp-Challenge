#include <iostream>
using namespace std;

int main(void) {
    int input1,input2,divisor=0,i=1;
    bool finish_flg=true;
    cout << "Please, input two numbers:";
    cin >> input1 >> input2;
    while (finish_flg) {
        // cout << i << endl;
        if (i%input1 == 0 && i%input2 == 0) divisor=i;
        if (divisor != 0) finish_flg=false;
        i++;
        // 開発用
        if (i == 200) finish_flg=false;
    }
    cout << "Greatest common divisor is" << endl;
    cout << divisor << endl;
}