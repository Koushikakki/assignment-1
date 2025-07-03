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
    else if(unit=='F' || unit =='f'){
        cout<<"celsius :" << (temp-32)* 5/9 << endl;
    }
    else{
        cout <<" invalid unit\n";
    }
    
    return 0;
    
}