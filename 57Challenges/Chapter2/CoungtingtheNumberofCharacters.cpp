#include<iostream>
#include<string>
#include<unistd.h>

int main(){

	std::string input;
	std::cout<<"what is the input strings?"<<" ";
		do{	
				std::cout<<"Please Enter any String!!"<<std::endl;
			//	std::cin >> input;
		}while(input.size() == 0);
			
		//	}while(input.size() == 0);

	//std::cin>> input;
	std::cout<<input<<" "<<"Has"<<" "<<input.size()<<" "<<"Characters."<<std::endl;
	
	return 0;
}
