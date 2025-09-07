#include<bits/stdc++.h>
using namespace std;


void pass_by_value(int num) {
    num += 5;
    cout << "Inside function: " << num << endl;
}

void pass_by_refernce(int &num){
    num += 5;
    cout << "Inside function: " << num << endl;
}

void pass_array_refernce(int arr[], int n){
for(int i=0; i<n;i++){
    arr[i] *=2;
}
for(int i=0; i<n;i++){
    cout << arr[i];
}
}
int main() {
    int number = 5;
    cout << "pass by value"<< endl;
    pass_by_value(number);
    cout << "outside function: " << number << endl;

    cout << "pass by refernce" << endl;
    pass_by_refernce(number);
    cout << "outside function: " << number << endl;
    
    cout << "passing array by refernce" << endl;
    int arr[5]={1,2,3,4,5};
    pass_array_refernce(arr,5);
    return 0;
}

