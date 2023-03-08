2#include <iostream>
using namespace std;
int brinarysearch(int arr[], int size, int find) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2; //(start+end)/2;
  while (start <= end) {
    if (arr[mid] == find) {
      return mid;
    }
    // Go to Rigth part
    else if (find > arr[mid]) {
      start = mid + 1;
    }
    // Go to left part
    else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2; //(start+end)/2
  }
  return -1;
}

int main() {
  // std::cout << "Hello World!\n";
  int arr1[7] = {6, 7, 8, 9, 10, 12, 24};
  int arr2[7] = {25, 30, 35, 40, 45, 50, 60};
  int ok = brinarysearch(arr1, 7, 7);
  cout << " Arr1 Find the value of 7 Index pogasation :" << ok << endl;
  int ok1 = brinarysearch(arr2, 7, 45);
  cout << " Arr2 Find the value of 45 Index pogasation :" << ok1 << endl;
}
// #include <iostream> - This line includes the input/output stream library,
// which allows for input and output operations such as printing to the console.

// using namespace std; - This line allows for the use of standard C++ library
// functions without having to specify the std namespace.

// int binarysearch(int arr[],int size,int find){ - This line declares a
// function called binarysearch that takes an array of integers, its size, and
// an integer to be searched for as input. The function returns an integer.

// int start=0; - This line declares a variable called "start" and initializes
// it to 0. It will be used to keep track of the starting index of the current
// search range.

// int end = size-1; - This line declares a variable called "end" and
// initializes it to the last index of the array, "size-1". It will be used to
// keep track of the ending index of the current search range.

// int mid = start+(end-start)/2; - This line declares a variable called "mid"
// and initializes it to the middle index of the current search range,
// calculated as the average of "start" and "end".

// while(start<=end){ - This line starts a while loop that will continue until
// the starting index becomes greater than the ending index, indicating that the
// search range is empty and the element is not found.

// if(arr[mid]==find){ - This line checks if the element at the current middle
// index is equal to the element being searched for.

// return mid; - If the above "if" statement is true, the function returns the
// current middle index as the result.

// else if (find>arr[mid]){ - If the element being searched for is greater than
// the element at the current middle index, the search range is narrowed down to
// the right half of the array.

// start=mid+1; - The starting index is updated to one index after the current
// middle index.

// else{ - If the element being searched for is less than the element at the
// current middle index, the search range is narrowed down to the left half of
// the array.

// end=mid-1; - The ending index is updated to one index before the current
// middle index.

// mid=start+(end-start)/2; - The middle index is recalculated as the average of
// the updated starting and ending indices.

// } - The while loop continues until the element is found or the search range
// is empty.

// return -1; - If the element is not found, the function returns -1 as the
// result.

// int main() { - This line starts the main function, which is the entry point
// of the program.

// int arr1[7]={6,7,8,9,10,12,24}; - This line declares an array called "arr1"
// and initializes it with 7 elements.

// int arr2[7]={25,30,35,40,45,50,60}; - This line declares an array called
// "arr2" and initializes it with 7 elements.

// int ok =brinarysearch(arr1, 7, 24); - This line calls the binarysearch
// function on the "arr1" array and the element 24, and assigns the result to
// the variable "ok".