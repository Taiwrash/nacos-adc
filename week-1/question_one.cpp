#include <iostream>

int main(){
    int length;
    std::cout << "Enter the length of the array: ";
    std::cin >> length;
    int *list = new int(length);
    for(int i=0;i<length;i++){
        std::cin >> list[i];
    }
    for(int j =0; j<length;j++){
        std::cout << list[i] << "\t";
    }
    return 0;
}