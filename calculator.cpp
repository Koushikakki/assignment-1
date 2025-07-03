#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout << "enter the expression to be calculated (ex : 3 + 4)";
    cin >> a >> op >> b ;
    switch(op){
        case '+' :
            cout << "Result : " << a + b ;
            break;
    }

}