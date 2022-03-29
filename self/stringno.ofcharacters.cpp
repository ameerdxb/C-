// single string with no space
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string phrase;
    cout << "Input Text : \n";
    getline(cin,phrase);
//    cin >> phrase;
    cout << "No.of characters: " << phrase.length()<<endl;
    cout << "Third character: " << phrase[2]<<endl;
//  cout << phrase.find("ameer",0);

    return 0;
}
