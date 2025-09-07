// QUICK SORT
//PICK UP A PIVOT AND PACE IT AT ITS CORRECT PLACE
//SMALLER ELEMENTS TO THE LEFT AND LARGER TO THE RIGHT AND REPEAT THESE TEPS

// from start first guy who is greater than the pivot and from last first guy who is smaller 
// than the pivot swap them repeat this until start and end cross each other
#include <iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(int arr[], int low, int high){
    if (low < high){
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot -1);
        quick_sort(arr, pivot +1, high);
    }
}

int main (){
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    quick_sort(arr, 0, n-1);

    cout << "Sorted array: ";
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
