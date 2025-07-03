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
    else if ((from == "INR" || from == "inr") && (to == "USD" || to == "usd")) {
        cout << "Converted amount: " << amount / 85.69 << " USD" << endl;
    }
    else {
        cout << "Invalid currency conversion\n";
    }
    

    

    return 0;
}