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

std::vector<int> merge(const std::vector<int> &arrOne, const std::vector<int>&arrTwo){
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

int main(){

    // Random array
    std::vector<int> A {1, 3, 5 , 7, 9};
    std::vector<int> B {2, 4, 6, 8, 10};
    // call sort

    std::cout << "-SORTED- " << std::endl;
    auto merged_list = merge(A,B);
    printArr(merged_list);

}
