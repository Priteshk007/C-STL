#include<bits/stdc++.h>
using namespace std;
int main(){
    // initialising an array using c++ stl
    array<int,4> a={1,2,3,4};
    int s=a.size();// a.size() returns the size of array a
    // normal traversing
    cout<<"\nElements in the array are: ";
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }

    cout<<"\nelement at index 2 :  "<<a.at(2);//at function returns tha value at that index
    cout<<"\nempty: 0 and not empty 1 : "<<a.empty();//empty() returns a boolean value that is 0 for not empty and 1 for empty
    cout<<"\nelement at front :  "<<a.front();//Returns the value at index 0
    cout<<"\nelement at back :  "<<a.back();// returns the element present at the end of array
}