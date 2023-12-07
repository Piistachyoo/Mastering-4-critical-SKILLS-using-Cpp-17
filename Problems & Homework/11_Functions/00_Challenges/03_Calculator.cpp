#include<iostream>

int read_option(void);
void read_numbers(double &n1, double &n2);
double add(double &n1, double &n2);
double subtract(double &n1, double &n2);
double multiply(double &n1, double &n2);
double divide(double &n1, double &n2);

int main(){
    double n1, n2;
    int option = 999, operations = 0;
    while(option){
        option = read_option();
        operations++;
        switch(option){
            case 0:
                operations--;
                break;
            case 1:
                read_numbers(n1, n2);
                std::cout << "Result = " << add(n1,n2)<<std::endl;
                break;
            
            case 2:
                read_numbers(n1, n2);
                std::cout << "Result = " << subtract(n1,n2)<<std::endl;
                break;
            case 3:
                read_numbers(n1, n2);
                std::cout << "Result = " << multiply(n1,n2)<<std::endl;
                break;
            case 4:
                read_numbers(n1, n2);
                std::cout << "Result = " << divide(n1,n2)<<std::endl;
                break;
        }
    }
    std::cout << "Number of operations: " << operations << std::endl;
    return 0;
}

int read_option(void){
    int ret_val;

    std::cout << "Choose your option: " << std::endl 
              << "1- Add 2 numbers" << std::endl
              << "2- Subtract 2 numbers" << std::endl
              << "3- Multiply 2 numbers" << std::endl
              << "4- Divide 2 numbers" << std::endl
              << "0- Exit Program" << std::endl;
    
    while(ret_val >= 5){
        std::cout << "Enter your choice: " ;
        std::cin >> ret_val;
    }

    return ret_val;
}

void read_numbers(double &n1, double &n2){
    std::cout << "Enter first number: ";
    std::cin >> n1;
    std::cout << "Enter second number: ";
    std::cin >> n2;
}

double add(double &n1, double &n2){
    return n1+n2;
}

double subtract(double &n1, double &n2){
    return n1-n2;
}

double multiply(double &n1, double &n2){
    return n1*n2;
}

double divide(double &n1, double &n2){
    if(n2 == 0)
        return 0;
    return n1/n2;
}
