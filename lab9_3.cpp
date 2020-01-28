#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    ifstream score;
    score.open("score.txt");
    string textnum;
    double sum=0,mean=0,i=0,sd=0,x=0;
    while(getline(score,textnum))
    {
        sum+= atof(textnum.c_str());
        i++;
    }
    mean=sum/i;
    x=(sum*sum/i);
    sd=sqrt(x-(mean*mean));
    cout << "Number of data = "<<i<<"\n";
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<sd<<"\n";
}



//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
