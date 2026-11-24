#include <iostream>
using namespace std;

void insertElement(int arr[], int &size, int element, int position) {
    if (position > size) {
        cout << "Insertion not possible. Position out of bounds." << endl;
        return;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    insertElement(arr, size, 10, 2);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}