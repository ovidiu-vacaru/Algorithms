//
// Created by Ovi on 14/08/2022.
//


#include <vector>
#include <iostream>

void selectionSort(std::vector<int> &arr){

    for (int i = 0; i < arr.size(); i++) {
        int selected {i};
        for (int j = i; j < arr.size(); j++) {
            if (arr[j] < arr[selected]){
                selected = j;
            }
        }
        std::swap(arr[i],arr[selected]);
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
    selectionSort(arr);
    printArr(arr);

}