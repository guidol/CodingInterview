#include<iostream>
#include<string>
using namespace std;

/*

Initialize billamount to 0
Initialize tip to 0
initialize tipRate to 0
initialize total to 0

Prompt for billAmount with "what is the bill amount?"
Prompt for tipRate with "what is the tip rate?"

convert billAmount to a number
convert tipRate to number

tip = bilAmount * (tipRate / 100)

#round tip up to nearest cent 

total = billAmount + tip
Display "Tip: $ " + tip
Display "Total:$" + total

End

Expected result: Please enter a valid number for the bill amount.
keep asking the user for correct input until it is provided.
Don't allow the user to enter a negative number.
Break the program into functions that do computations.
#automatically updates the values when any values challanges. ---> That means makes a GUI version??



1. make a Calculator class.
2. setup the inputs.
*/

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

