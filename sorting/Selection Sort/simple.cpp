// #include <iostream>
// using namespace std;
// void InsertionSort(int arr[]){
//     int n=sizeof(arr)/sizeof(int);
//     cout<<n;
// }
// int main(){
//     int arr[]={64,25,12,22,11};
//     InsertionSort(arr);
//     return 0;
// }
// in the above program , we can see that value of n will be 1, since argument of insertionsort will be a pointer 

// better program will be look like this 
// C++ program for implementation of 
// selection sort 
#include <iostream> 
using namespace std; 
  
// Function for Selection sort 
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of 
    // unsorted subarray 
    for (i = 0; i < n - 1; i++) { 
  
        // Find the minimum element in 
        // unsorted array 
        min_idx = i; 
        for (j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        } 
  
        // Swap the found minimum element 
        // with the first element 
        if (min_idx != i) 
            swap(arr[min_idx], arr[i]); 
    } 
} 
  
// Function to print an array 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
        cout << endl; 
    } 
} 
  
// Driver program 
int main() 
{ 
    int arr[] = { 64, 25, 12, 22, 11 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Function Call 
    selectionSort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 
  
// This is code is contributed by rathbhupendra