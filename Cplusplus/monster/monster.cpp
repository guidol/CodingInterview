#include<iostream>
#include<string>
//#include<Windows.h>
#include<unistd.h>
using namespace std;

class Hero{
	private:
		int health;
	public:
		Hero(){
			health = 40;
		}
		void damage(int num);
		void ShowHealth();
};
void Hero::damage(int num){
	health-=num;
}

void Hero::ShowHealth(){
	cout<<"Hero:"<<health<<endl;
}


class Monster{
	private:
		int Dragon;
		int Orc;
	public:
		Monster(){
		Dragon = 20;
		Orc = 7;
		}
		void damage(int num);
		void ShowHealth();
};
void Monster::damage(int num){
	Orc-=num;
}

void Monster::ShowHealth(){
	cout<<"Orc:"<<Orc<<endl;
}


int main(){
	string input;
	Hero hero;
	Monster monster;

	for(int i=0; i < 3 ; i++){
		cout<<"Type 'attack Orc'"<<endl;
		getline(cin,input);
		if (input == "attack Orc" && i == 0)
		{	sleep(15);
			cout<<endl;
			cout<<"Orc attack"<<endl;
			cout<<"Hero attack"<<endl;
			hero.damage(1);
			monster.damage(2);
			cout<<endl;
		}
	
		else if (input == "attack Orc" && i == 1)
		{
			sleep(10);
			cout<<endl;
			cout<<"Dragon attack!!!"<<endl;
			hero.damage(3);
			monster.damage(2);
			cout<<endl;
		}
		else if (input == "attack Orc" && i == 2)
		{
			sleep(20);
			cout<<endl;
			cout<<"Orc attack"<<endl;
			cout<<"Orc attack"<<endl;
			cout<<"Dragon attack"<<endl;
			monster.damage(2);
			hero.damage(5);
			cout<<endl;
		}

		else
			cout<<"You typed wrong keyword!!!"<<endl;

	}	
	
		hero.ShowHealth();
		monster.ShowHealth();


	return 0;
}
