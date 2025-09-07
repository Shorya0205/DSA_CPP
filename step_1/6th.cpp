//HASHING---------------------------------------------------------------------------------------------

//1. NUMBER HASHING
/*

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    // array input
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //precompute
    int hash[10000];
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    //answering queries
    int no_of_queries;
    cin >> no_of_queries;
    

    while(no_of_queries--){
        int numbers;
        cout << "enter the number" << endl;
        cin>>numbers;
        //fetch
        cout << hash[numbers] << endl;

    }
    return 0;
}

// size of the hash array -> inside main() = 10^6
//                        -> globally = 10^8

*/
/*
//2. CHARACTER HASHING
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
//precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++;
    }
// answerin queries
    int q;
    cin>> q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout << hash[c-'a'] << endl;
    }
    return 0;
}
*/

///3. BY STL

// MAP <KEY , VALUE>
// MAP <NUMBER,FREQUENCY>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    // array input
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //precompute
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]++];
    }
    //answering queries
    int no_of_queries;
    cin >> no_of_queries;
    

    while(no_of_queries--){
        int numbers;
        cout << "enter the number" << endl;
        cin>>numbers;
        //fetch
        cout << mpp[numbers] << endl;

    }
    //map store all in sorted order
    //iterating in the loop
    for(auto it :mpp){
        cout << it.first << "->" << it.second << endl;
    }
    
    //character hashing
    //mpp<char,int>
    //mpp<char,frequency>

    //unorderd map has lowest time complexity and we can replace map to the unordred map
    //always use unorderd map
    return 0;
}

