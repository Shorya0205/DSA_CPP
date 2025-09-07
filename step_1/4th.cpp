// BASIC MATHS

#include <bits/stdc++.h>
using namespace std;

void count_digits(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
}

void count_reverse(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int reverse=0;
    while(n>0){
        reverse=reverse*10+n%10;
        n=n/10;
    }
    cout<<reverse<<endl;
}

void check_palindrome(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int original=n;
    int reverse=0;
    while(n>0){
        reverse=reverse*10+n%10;
        n=n/10;
    }
    if (original==reverse){
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<<"Not a Palindrome"<<endl;
    }
}

void hcf(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<a<<endl;
}

void armstrong(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int original=n;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if (original==sum){
        cout<<"Armstrong Number"<<endl;
    }
    else {
        cout<<"Not an Armstrong Number"<<endl;
    }
}

void all_divisors(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            cout<<i<<endl;
            if (i!=n/i){
                cout<<n/i<<endl;
            }
        }
    }
}

void check_for_prime(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool isPrime=true;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime){
        cout<<"Prime"<<endl;
    }
    else {
        cout<<"Not a Prime"<<endl;
    }
}

int main(){
    // count_digits();
    // count_reverse();
    // hcf();
    // all_divisors();
    // check_for_prime();
    // check_palindrome();
    // armstrong();
    return 0;
}