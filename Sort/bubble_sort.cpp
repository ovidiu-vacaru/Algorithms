#include <vector>
#include <iostream>

void bubbleSort(std::vector<int> &arr){

    bool swapped {false};
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - 1 - i; j++) {
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

void printArr(std::vector<int> &arr){
    for(auto var : arr){
        std::cout << var << " ";
    }
    std::cout << std::endl;
}


int main(){

    // Random array
    std::vector<int> arr {10, 5, 6 , 20};
    printArr(arr);
    // call sort
    bubbleSort(arr);
    printArr(arr);

}