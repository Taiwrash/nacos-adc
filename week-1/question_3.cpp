#include <iostream>

int main(){
    int *arr, target, length,i=0;
    int begin =0;
    int end == length-1;
    int *swap = new int[length];
    while (i<end)
    {
        if (arr[i] <arr[target])
        {
            swap[begin] = arr[i];
            begin += 1;
        }else if(arr[i] > arr[target]){
            swap[end] = arr[i];
            end -=1;
        }
        for(int j= 0; j<length;j++){
            swap[j] = arr[target];
        }
        for (int i = 0; i <length; i++)
        {
           std::cout << swap[i];
        }
        
        
        i++;
    }
    
}