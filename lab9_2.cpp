#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ifstream cheerbook;
    cheerbook.open("C:\\Users\\lab314-21\\Desktop\\lab9\\lab9-2562-2-Kitiyaparnnn\\cheerbook.txt");
    string name;
    ofstream cheerbook_copy;
    cheerbook_copy.open("cheerbook_copy.txt");
    cheerbook_copy<<"-------------------- SOTUS ---------------------\n";
    while(getline(cheerbook,name))
    {
        cheerbook_copy<<name<<"\n";
    }
    cheerbook_copy<<"-------------------- SOTUS ---------------------";
    cheerbook.close();
    cheerbook_copy.close();
    return 0;
}


//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
