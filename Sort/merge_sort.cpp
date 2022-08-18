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

std::vector<int> merge(std::vector<int> arrOne, std::vector<int>arrTwo){
    std::vector<int> c;

    int i,  j {0};

    while (i < arrOne.size() && j < arrTwo.size()){

        if (arrOne[i] < arrTwo[j])
            c.push_back(arrOne[i++]);
        else
            c.push_back(arrTwo[j++]);

    }

    for (; i<arrOne.size() ; i++) {
        c.push_back(arrOne[i]);
    }

    for (; j<arrTwo.size() ; j++) {
        c.push_back(arrTwo[j]);
    }

    return c;
}

std::vector<int> mergeSort(std::vector<int> arr){
    int n = arr.size();

    if (n <= 1)
        return arr;

     int mid = n / 2;

     std::vector<int> left_list = mergeSort(std::vector<int>(arr.begin(), arr.begin() + mid));
     std::vector<int> right_list = mergeSort(std::vector<int>(arr.begin()+mid, arr.end()));

     return merge(left_list, right_list);

}

int main(){

    // Random array
    std::vector<int> arr {4, 3, 2 , 10, 8};
    printArr(arr);
    // call sort

    std::cout << "-SORTED- " << std::endl;
    auto sorted_list = mergeSort(arr);
    printArr(sorted_list);

}
