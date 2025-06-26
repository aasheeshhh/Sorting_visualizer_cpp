#include<iostream>
#include <vector>
#include<chrono>
#include<thread>
#include<cctype>

using namespace std;

void Interface(vector<int>& arr);
void Bubble_sort(vector<int>& arr);
void Selection_sort(vector<int>& arr);

int main(){
    cout << "Program started!" << endl;

    int size;
    cout<<"Select Size of Elements\n";
    cin>>size;

    vector<int> arr(size);

    cout<<"Select Elements\n";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Your Elements are\n";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Interface(arr);

    return 0;
}

void Interface(vector<int>& arr){
char user_choice;
cout<<"*****SORTING VISUALIZER*****\n";
cout<<R"(Select method of sorting
B = Bubble Sort
S = Selection sort)"<<'\n';  

cin>>user_choice;
user_choice = toupper(user_choice);

if(user_choice=='B'){
    Bubble_sort(arr);
}
else if(user_choice=='S'){
    Selection_sort(arr);
}
else{
    cout<<"Enter a Valid character\n";
    Interface(arr);
}
}
void Bubble_sort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                for(int k=0;k<n;k++){
                    cout<<arr[k]<<" ";
                              
                }cout<<endl;
                this_thread::sleep_for(chrono::milliseconds(500));

            }  
        }
    }
    cout<<"Sorted Array\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";                             
    }cout<<endl;    
}
void Selection_sort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int minimum_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum_index]){
                minimum_index = j;   
            }
        }
        swap(arr[i],arr[minimum_index]);
            for(int k=0;k<n;k++){
                cout<<arr[k]<<" ";                             
            }cout<<endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
cout << "Sorted Array\n";
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
cout << endl;
}
