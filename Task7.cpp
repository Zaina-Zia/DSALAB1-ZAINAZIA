#include <iostream>
#include <vector>
using namespace std;
vector<int> function(int arr[], int size, int key) { //function to find all indices of key in array
    vector<int> v;
    for(int i = 0; i < size; i++){
        if(arr[i] == key){   
            v.push_back(i);         //pushing the index in vector if key is found
        }
    }
    return v;
}
#ifdef RUN_MAIN
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;     //taking size of array as input
    if(size == 0) {    
        cout << "Array is empty." << endl;  //handling edge case where size = 0
        return 0;  
    }
    int* arr = new int[size]; //here we are dynamically allocating the array because we need a test case where size = 0
    cout << "Enter " << size << " elements in array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key: ";
    cin >> key;
    vector<int> indices = function(arr, size, key); //calling the function
    if(indices.empty()) { //checking if the vector is empty
        cout << "not found" << endl;
    } 
    else {
        cout << "The vector of indices found: ";
        for(int index : indices) {
            cout << index << " ";
        }
        cout << endl;
    }
    return 0;
}
#endif