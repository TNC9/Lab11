#include<iostream>
using namespace std;

int main(){
	int i = 0;
	char grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << i+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			//Do something
			count[0] = count[0]+1;
			i++;
		}else if(grade == 'B'){ // if grade is B
			//Do something
			count[1] = count[1]+1;
			i++;
		//and so on ... for grade = C, D, F	
		}else if(grade == 'C'){
			count[2] = count[2]+1;
			i++;
		}else if(grade == 'D'){
			count[3] = count[3]+1;
			i++;
		}else if(grade == 'F'){
			count[4] = count[4]+1;
			i++;
		}else if(grade == '0'){
			break;
		}else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again." << endl;
		}
	}
	
	while(grade != 0);
	cout << "In total " << i << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}
