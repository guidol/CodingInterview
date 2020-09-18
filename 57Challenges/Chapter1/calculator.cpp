//#automatically updates the values when any values challanges. ---> That means makes a GUI version??


#include<iostream>
#include<string>
using namespace std; //Actually, this is NOT a good for practice. But, this program is NOT commercial one, so i could use it for convenience my own.

class Calculator{
	private:
		string billamount;
		float tip; 
		string tipRate;
		float total;
	public:
		Calculator(string amount="", float tipnum=0, string rates="", float totalnum=0)
			:billamount(amount),tip(tipnum),tipRate(rates),total(totalnum){}

		void takeTheBill();
};

void Calculator::takeTheBill(){
	try{
		do{
			cout<<"\"What is the bill amount?\""<<endl;                                  
			getline(cin,this->billamount);
			if(std::stof(this->billamount) < 0)
				cout<<"Please enter a valid number for the bill amount"<<endl;
		}while(std::stof(this->billamount) < 0);
		
		do{
			cout<<"\"What is the tip rate?\""<<endl;
			getline(cin,this->tipRate);
			if(std::stof(this->tipRate) < 0)
				cout<<"Please enter a valid number for the tip rate"<<endl;
		}while(std::stof(this->tipRate) < 0);

		this->tip = std::stof(this->billamount) * std::stof(this->tipRate) /100;
		this->total = std::stof(this->billamount) + this->tip;
		cout<<"\"Tip: $\""<<this->tip<<endl;
		cout<<"\"Total\""<<":"<<this->total<<" "<<"Dollars"<<endl;
	}catch(std::invalid_argument){
		cout<<"Please Enter Numbers ONLY, NOT Characters"<<endl;
		cout<<"Program will be End"<<endl;
	}

}

int main(){
	
	Calculator *cal = new Calculator();
	cal->takeTheBill();	
	
	return 0;
}

