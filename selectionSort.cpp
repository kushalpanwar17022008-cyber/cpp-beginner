#include<iostream>
using namespace std;
void  selectionSortDescending(int arr[], int n){
    for(int i=0; i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]<arr[j]){
                minindex=j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}
void selectionSortAscending(int arr[], int n){
    for(int i=0; i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}


int main(){
    int n; cout<<"Enter size of your array : "; cin>>n;
    int arr[n];
    cout<<"Enter numbers : "<<endl;
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    char order;
    cout<<"Enter 'A' or 'a' for ascending order, 'D' or 'd' for descending order."<<endl;
    cin>>order;
    if(order=='A'||order=='a'){
        selectionSortAscending(arr, n);
    }
    else if(order=='D'|| order=='d'){
        selectionSortDescending(arr, n);
    }
    else {
        cout<<"Invalid Input!";
        return 0;
    }
    cout<<"This is your Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}