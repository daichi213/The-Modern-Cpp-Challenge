#include<iostream>
using namespace std;

int main(void){
    unsigned int num,inputs[100];
    cout << "Please enter the number of input number:" << endl;
    cin >> num;
    for(int i=0; i<num; i++){
        cout << "Enter the number: " << i << endl;
        cin >> inputs[i];
    }

}