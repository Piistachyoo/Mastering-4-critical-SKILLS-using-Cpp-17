#include<iostream>

void set_powers(int arr[], int len = 5, int m = 2){
    arr[0] = 1;
    for(int i = 1; i < len; ++i){
        arr[i] = arr[i - 1] * m;
    }
}

int main(){
    int arr[10], len, m;
    std::cin >> len >> m;

    set_powers(arr, len, m);

    for(int i = 0; i < len; i++)
        std::cout << arr[i] << ' ';

    std::cout << std::endl;
    return 0;
}