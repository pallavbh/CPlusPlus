/*
Lab 1 (Arrays & Pointers):
 Write a program that takes n integers from the user and stores them in a dynamically allocated array. 
 Then, use a function that accepts a pointer to the array and its size to reverse the order of the elements in the array.
 Finally, print the reversed array.
 */

 #include <iostream>

using namespace std;

void reverseArray(int* arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end pointers
        int temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;

        // Move pointers towards the center
        start++;
        end--;
    }
}

int main() {
    int n;

    // Ask user for the number of elements
    cout << "Enter the number of integers: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* ptr = new int[n];

    // Take input from the user
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i); // Accessing array index using pointer notation
    }

    // Call the function to reverse the array
    reverseArray(ptr, n);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] ptr;
    ptr = nullptr;

    return 0;
}