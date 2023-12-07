#include<iostream>

bool is_prime(int num){
    if(num == 0 || num == 1)
        return false;

    for(int i = 2; i <= num; i++){
        if(num % i == 0 && i != num)
            return false;
    }

    return true;
}

int nth_prime(int n){
    int count = 0, ret_val;

    for(int i = 2; count < n; i++){
        if(is_prime(i))
            count++;

        if(count == n)
            ret_val = i;
    }

    return ret_val;
}

int main(){
    std::cout << nth_prime(6) << std::endl;
    return 0;
}
