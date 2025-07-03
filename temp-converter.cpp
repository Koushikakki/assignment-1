#include<iostream>
using namespace std;
int main(){
    double temp;
    char unit;
    cout<<"enter temperature (ex 100 C or 100 F)";
    cin>> temp >> unit;
    if(unit=='C' || unit=='c'){
        cout<< "Fahrenheit :" << (temp*9/5)+32 <<endl;
    }
    
    return 0;
    
}