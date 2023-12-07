#include<iostream>

bool is_palindrome(int arr[], int len){

    for(int i = 0; i < len/2; i++){
        if(arr[i] != arr[len - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    int arr[10];
    std::cin >> N;
    for(int i = 0; i < N; i++)
        std::cin >> arr[i];

    std::cout << std::boolalpha << is_palindrome(arr, N) << std::endl;
    return 0;
}