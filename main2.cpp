#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

vector<int> arr {10,20,30,40,50};
// arr.push_back(1);
// arr.push_back(0);
// arr.push_back(1);
// arr.push_back(1);
// arr.push_back(0);
// arr.push_back(1);
// arr.push_back(0);
// arr.push_back(1);
// arr.push_back(1);
// arr.push_back(1);

 cout << "The required array is: "<<endl;
for(int i=0; i<arr.size(); i++){
    cout << arr[i] <<" ";
}
 

int start =0;
int end = arr.size()-1;
int i =0;


while(i != end ){
    if(arr[i] == 0){
        swap(arr[start],arr[i]);
        i++;
        start++;
    }

    if(arr[i] == 1){
        swap(arr[i] , arr[end]);
        end--;
  
         
    }
}
 
 

cout<<"sorted array is:" <<endl;
//   for (auto val : arr) {
//     cout << val << " ";
//   }

for(int i=0; i<arr.size(); i++){
    cout << arr[i] <<" ";
}

    return 0;
}
 