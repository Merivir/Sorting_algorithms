#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& sortedVector) {
    for (int i = 1; i < sortedVector.size(); ++i) {
        int key = sortedVector[i];
        int j = i - 1;
        while (j >= 0 && sortedVector[j] > key) {
            sortedVector[j + 1] = sortedVector[j];
            --j;
        }
        sortedVector[j + 1] = key;
    }
}

int main() {
    std::cout << "Array elements ";
    std::vector<int> myVector;
    int tmp = 0;
    
    std::cout << "Enter elements for the vector (enter a non-integer to finish):" << std::endl;

    while (std::cin >> tmp) {
        myVector.push_back(tmp);
    }

    insertionSort(myVector);

    std::cout << "Vector elements: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
