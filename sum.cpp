#include<iostream>
using namespace std;

int main(){


    int n = 10829;
    int reverse=0;


    while (n > 0){
        
        int last = n % 10;
        reverse = (reverse*10) + last;
        n /= 10;


    }

    cout<< reverse ;


return 0;
}