#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream ifs;
	ifs.open("Mytxt.txt");
	string name;
	int age;
	string computer;

	ifs>>name>>age>>computer;
	ifs.close();

	cout<<"name"<<name<<endl;
	cout<<"age"<<age<<endl;
	cout<<"computer"<<computer<<endl;

	return 0;
}
