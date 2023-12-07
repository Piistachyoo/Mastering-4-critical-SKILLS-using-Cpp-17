#include<iostream>

void replace_str(std::string &input, std::string &pattern, std::string& to){
    bool is_found = false;
    for(int i = 0; i < input.length(); ++i){
        if(input[i] == pattern[0]){
            is_found = true;
            for(int j = 0; j < pattern.length(); j++){
                if(input[j + i] != pattern[j]){
                    is_found = false;
                    break;
                }
            }
            if(is_found){
                    input.erase(input.begin()+i, input.begin()+i+pattern.length());
                input.insert(i, to);
            }
        }
    }
}

bool starts_with(std::string &input, std::string &pattern, int pos){
    for(int i = 0; i < pattern.length(); i++){
        if(input[pos + i] != pattern[i])
            return false;
    }
    return true;
}

int main(){
    std::string str1, str2, str3;
    std::cin >> str1 >> str2 >> str3;
    std::cout << std::boolalpha << starts_with(str1, str2, 1) << std::endl;
    replace_str(str1, str2, str3);
    std::cout << str1 << std::endl;

    return 0;
}