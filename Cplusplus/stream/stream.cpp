#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ofstream file ("Mytxt.txt",ios::trunc);
	file<<"aidan"<<endl;
	file<<40<<endl;
	file<<"mac"<<endl;

	file.close();

	return 0;
}

