// Recursion
#include <bits/stdc++.h>
using namespace std;

void print_n_times_rec(int n){
    if (n==0){
        return;
    }
    cout<<"Hello"<<endl;
    print_n_times_rec(n-1);
}

void print_1_to_N_rec(int n){
    if (n==0){
        return;
    }
    print_1_to_N_rec(n-1);
    cout<<n<<" ";
}

void print_N_to_1_rec(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    print_N_to_1_rec(n-1);
}

int sum_first_n_numbers(int n){
    if (n==0){
        return 0;
    }
    return n + sum_first_n_numbers(n-1);
}

int factorial(int n){
    if (n==0){
        return 1;
    }
    return n * factorial(n-1);
}

void reverse_a_array(int arr[], int n, int i){
    if (i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse_a_array(arr,n,i+1);
}

int fibonacci_rec(int n){
    if (n <= 1){
        return n;
    }
    return fibonacci_rec(n-1) + fibonacci_rec(n-2);
}

bool check_string_palindrome(string s, int i){
    if (i >= s.length()/2){
        return true;
    }
    if (s[i] != s[s.length()-i-1]){
        return false;
    }
    return check_string_palindrome(s, i+1);
}

int main(){
    cout << "enter number" << endl;
    int n;
    cin >> n;
    cout << "Sum: " << sum_first_n_numbers(n) << endl;
    cout<<endl;

    print_n_times_rec(n);
    cout<<endl;

    print_1_to_N_rec(n);
    cout<<endl;

    print_N_to_1_rec(n);
    cout<<endl;

    cout<<check_string_palindrome("racecar", 0);
    cout<<endl;

    cout<<factorial(n);
    cout<<endl;

    cout<<fibonacci_rec(n);
    cout<<endl;

    int arr[]={1,2,3,4,5};
    reverse_a_array(arr,5,0);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}