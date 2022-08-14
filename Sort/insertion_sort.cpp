//
// Created by Ovi on 14/08/2022.
//


#include <vector>
#include <iostream>

void insertionSort(std::vector<int> &arr){
    for (int i = 1; i < arr.size(); i++) {
        for (int j = i; j > 0; j--) {
            if(arr[j] < arr[j-1]){
                std::swap(arr[j],arr[j-1]);
            }
        }
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
    insertionSort(arr);
    printArr(arr);

}