//
// Created by Ovi on 15/08/2022.
//

#include <vector>
#include <iostream>

void printArr(std::vector<int> &arr){
    for(auto var : arr){
        std::cout << var << " ";
    }
    std::cout << std::endl;
}

void mergeSort(std::vector<int> &arr){
     int n = arr.size();
     int mid = n / 2;
     std::cout << mid << "\n";
     std::vector<int> left_list = std::vector<int>(arr.begin(), arr.begin() + mid);
     std::vector<int> right_list = std::vector<int>(arr.begin()+mid, arr.end());
     printArr(left_list);
     printArr(right_list);
}

int main(){

    // Random array
    std::vector<int> arr {4, 3, 2 , 10, 8};
    printArr(arr);
    // call sort

    std::cout << "-SORTED- " << std::endl;
    mergeSort(arr);
    printArr(arr);

}
