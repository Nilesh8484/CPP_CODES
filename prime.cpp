#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    bool isprime = true;

  
    cout << "enter the number :";
    cin >> num;

    for (int i= 2; i <= sqrt(num); i++){
 
        if (num % i== 0){
           isprime = false;
            break;

        }

    }

    if (isprime == true){
        cout << "number is prime "<< endl;
    }else {
        cout << "number is not prime"<<endl;
    }


    return 0;
}
