#include<iostream>

int max (int a, int b, int c){
    int ret_val = a;

    if(ret_val < b)
        ret_val = b;

    if(ret_val < c)
        ret_val = c;

    return ret_val;
}

int max (int a, int b, int c, int d){
    int ret_val = max(a,b,c);

    if(ret_val < d)
        ret_val = d;

    return ret_val;
}

int max (int a, int b, int c, int d, int e){
    int ret_val = max(a,b,c,d);

    if(ret_val < e)
        ret_val = e;

    return ret_val;
}

int max (int a, int b, int c, int d, int e, int f){
    int ret_val = max(a,b,c,d,e);

    if(ret_val < f)
        ret_val = f;

    return ret_val;
}

int main(){
    int n1, n2, n3, n4, n5, n6;
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5 >>  n6;

    std::cout << max(n1,n2,n3,n4,n5,n6) << std::endl;
    
    return 0;
}