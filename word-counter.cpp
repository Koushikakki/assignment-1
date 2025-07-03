#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
    string filename,word;
    int count=0;
    cout<< "enter file name:";
    cin>>filename;

    ifstream file(filename);
    if(!file){
        cout << "file not found\n";
        return 1;
    }
    while(file >> word) count++;

    cout << "word count : " << count << endl;
    return 0;
}