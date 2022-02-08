#include <iostream>
using namespace std;
int main(){
	cout<<"Hello \n";
	cout<<"Enter your age \n";
	int age;
	cin>>age;
	cout<<"You are "<<age <<" years old \n";
	if (age >= 18 && age<30){
		cout<<"You are youth \n";
	}
	else if (age <18){
		cout<<"You are a child \n";
	}
	else {
		cout<<"You are an adult \n";
	};
	int DOB=2022-age;
	cout<<"You were born in "<<DOB <<" \n";
 return 0;
}
