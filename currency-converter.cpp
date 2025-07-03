#include<iostream>
using namespace std;
int main(){
    double amount;
    string from, to;
    
    cout << "Enter currency from-to (e.g. 100 USD INR): ";
    cin >> amount >> from >> to;
    if ((from == "USD" || from == "usd") && (to == "INR" || to == "inr")) {
        cout << "Converted amount: " << amount * 85.69 << " INR" << endl;
    }
    

    

    return 0;
}