#include <iostream>
#include <vector>

void BubbleSort(std::vector<int>& sortedVector) {
    for (int i = 0; i < sortedVector.size() - 1; ++i) {
        for (int j = 0; j < sortedVector.size() - i - 1; ++j) {
            if (sortedVector[j] > sortedVector[j + 1]) {
                int tmp = sortedVector[j];
                sortedVector[j] = sortedVector[j + 1];
                sortedVector[j + 1] = tmp;
            }
        }
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

    BubbleSort(myVector);

    std::cout << "Vector elements: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
