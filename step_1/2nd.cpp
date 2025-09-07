#include <bits/stdc++.h>
using namespace std;

void star_rectangle(int r, int c){
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        cout << endl;}
    }

void star_right_angle_triangle(int r){
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout << endl;}
    }

void star_right_angle_triangle_inverted(int r, int c){
    for(int i=1;i<=r;i++){
        for(int j=c;j>=i;j--){
            cout<<"*";
        }
        cout << endl;}
    }

void Number_right_angle_triangle_inverted(int r, int c){
    for(int i=1;i<=r;i++){
        for(int j=r;j>=i;j--){
            cout<<r-j+1;
        }
        cout << endl;}
    }

void pyramid(int r){
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout << endl;}
    }

void inverted_pyramid(int r){
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*(r-i)+1;k++){
            cout<<"*";
        }
        cout << endl;}
    }

void side_pyramid(int r){
    for(int i=1;i<=2*r-1;i++){
        int stars=i;
        if(i>r){stars=2*r-i;}
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout << endl;}
    }

void hollow_square(int r){
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if (i==1||j==1||i==r||j==r){
                cout<<"*";
            }
            else {cout << " ";}
        }
        cout << endl;
    }}

void two_triangle (int r){
    
    for (int i=1;i<=r;i++){
    for (int j=1;j<=i;j++){
        cout << j;
    }
    int spaces=2*(r-i);
    for(int j=1; j<=spaces;j++){
        cout<<" ";
    }
    for (int j=i;j>=1;j--){
        cout << j;
    }
    cout << endl;
}
}
int main(){
int rows,col;
    cout<<"enter rows" << endl;
    cin >> rows;
    cout<<"enter cols" << endl;
    cin >> col;

    cout << endl;

    star_rectangle(rows,col);
    cout << endl;

    star_right_angle_triangle(rows);
    cout << endl;

    star_right_angle_triangle_inverted(rows,col);
    cout << endl;

    Number_right_angle_triangle_inverted(rows,col);
    cout << endl;

    pyramid(rows);
    cout << endl;

    inverted_pyramid(rows);
    cout << endl;

    side_pyramid(rows);
    cout << endl;

    hollow_square(rows);
    cout << endl;

    two_triangle(rows);
    cout<< endl;

    return 0;
}