#include <iostream.h>
#include <conio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1; 
}

void main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    clrscr();
    cout << "Enter the element to search: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    getch();
}
