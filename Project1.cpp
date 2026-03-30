#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,2,8,1,3,4};
    int n = 6;

    int even[50], odd[50];
    int e = 0, O = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[O++] = arr[i];   
    }

 
    for(int i = 0; i < e - 1; i++){
        for(int j = 0; j < e - i - 1; j++){
            if(even[j] > even[j+1]){
                int temp = even[j];
                even[j] = even[j+1];
                even[j+1] = temp;
            }
        }
    }


    for (int i = 0; i < O - 1; i++) {
        for (int j = 0; j < O - i - 1; j++) {
            if (odd[j] < odd[j + 1]) {
                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array : ";

    for(int i = 0; i < e; i++){
        cout << even[i] << " ";
    }
    for(int i = 0; i < O; i++){
        cout << odd[i] << " ";
    }
}