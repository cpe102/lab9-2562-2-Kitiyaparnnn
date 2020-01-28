#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ifstream cheerbook_copy;
    cheerbook_copy.open("C:\\Users\\lab314-21\\Desktop\\lab9\\lab9-2562-2-Kitiyaparnnn\\cheerbook.txt");
    string name;
    cout<<"-------------------- SOTUS ---------------------\n";
    
    while(getline(cheerbook_copy,name))
    {
        cout<<name<<"\n";
    }

    cout<<"-------------------- SOTUS ---------------------";
    cheerbook_copy.close();
    return 0;
}


//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
