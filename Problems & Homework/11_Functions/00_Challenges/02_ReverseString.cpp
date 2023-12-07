#include <iostream>
#include<sstream>

std::string reverse_str(const std::string &str){
    std::string ret_val{};

    for(int i = str.length() - 1; i >= 0; --i){
        ret_val += str[i];
    }

    return ret_val;
}

int main(){
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    std::string reversed = reverse_str(input_string);
    std::cout << "Reversed string: " << reversed << std::endl;
    return 0;
}