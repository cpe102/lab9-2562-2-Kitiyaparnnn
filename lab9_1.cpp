#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i=1;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<i<< "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A') // if grade is A
			count[0]++;
		else if(grade=='B') // if grade is B
			count[1]++;
		else if(grade=='C') // if grade is B
			count[2]++;
		else if(grade=='D') // if grade is B
			count[3]++;
		else if(grade=='F') // if grade is B
			count[4]++;
		else if(grade=='0') // if grade is B
			break;
		else{ // grade is wrong input
			cout<<"Wrong input. Please input again.\n";
			i--;
		}
		i++; 
	}while(true);
	
	
	cout << "In total "<<i-1<<" students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";
	
	
	return 0;
}
