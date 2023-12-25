#include <iostream> 
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int size_l = mid - left + 1;
    int size_r = right - mid;
    std::vector<int> arr_l;
    std::vector<int> arr_r;
    
    for (int i = 0; i < size_l; ++i) {
        arr_l.push_back(arr[left + i]);
    }

    for (int i = 0; i < size_r; ++i) {
        arr_r.push_back(arr[mid + i + 1]);
    }
    
    int i = 0; 
    int j = 0;
    int k = left;

    while (i < size_l && j < size_r) {
        if (arr_l[i] > arr_r[j]) {
            arr[k++] = arr_r[j++]; 
        } else { 
            arr[k++] = arr_l[i++]; 
        }
    }

    while (i < size_l) {
        arr[k++] = arr_l[i++]; 
    }

    while (j < size_r) {
        arr[k++] = arr_r[j++]; 
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) return;

    std::cout << "Function called\n";

    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    std::cout << "Array elements ";
    std::vector<int> myVector;
    int tmp = 0;
    
    std::cout << "Enter elements for the vector (enter a non-integer to finish):" << std::endl;

    while (std::cin >> tmp) {
        myVector.push_back(tmp);
    }

    std::cout << "Function call\n";

    mergeSort(myVector, 0, myVector.size() - 1);

    std::cout << "Vector elements: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0; 
}
