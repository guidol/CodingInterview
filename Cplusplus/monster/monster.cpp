#include<iostream>
#include<string>
#include<chrono>
typedef std::chrono::high_resolution_clock Clock;
using namespace std;

class Hero{
	private:
		int health;
	public:
		
		Hero(int h):health(h){}
		void damage(int num);
		void ShowHealth();
		bool IsAlive();
		int GetHealth() const;
};
void Hero::damage(int num){
	health-=num;
	if(health < 1)
		health=0;
}
void Hero::ShowHealth(){
	cout<<"Hero:"<<health<<endl;
}
bool Hero::IsAlive(){
	if(health > 0)
		return true;
}
int Hero::GetHealth() const{
	return health;
}

class Monster{
	private:
		int health;
	public:
		Monster(int h):health(h){}
		void damage(int num);
		void DisplayHealth() const;
		int GetHealth() const;
};

void Monster::damage(int num){
	health-=num;
	if(health < 1)
		health=0;
}

void Monster::DisplayHealth() const{
	cout << health << endl;
}

int Monster::GetHealth() const{
	if(health > 0)
		return health;
	else
		return 0;
}

class Dragon:public Monster{
	public:
		using Monster::Monster;
		void ShowHealth();
};

void Dragon::ShowHealth(){
	cout<<"Dragon:" ;
	DisplayHealth();
}

class Orc:public Monster{
	public:
		using Monster::Monster;
		void ShowHealth();
};

void Orc::ShowHealth(){
	cout<<"Orc:" ;
	DisplayHealth();
}



int main(){
	string input;
	Hero hero(40);
	Dragon dragon(20);
	Orc orc(7); 
	auto t1 = Clock::now();
	
	while(hero.IsAlive()){

		cout<<"Type"<<" "<<"\"attack orc\""<<" "<<"or"<<" "<<"\"attack dragon\""<<"starting game"<<endl;
		getline(cin,input);

		if(input == "attack orc"){ 
			auto t2 = Clock::now();
			cout<<"Game started"<< ":" <<chrono::duration_cast<chrono::milliseconds>(t2-t1).count()<<" "<<"Milliseconds ago"<<endl;
			auto t3 = chrono::duration_cast<chrono::milliseconds>(t2-t1).count()/1400;
			
			if(orc.GetHealth()>0)
				orc.damage(2);
			if(hero.GetHealth()>0 && orc.GetHealth()>0)
				for(int i=0;i < t3;i++){
					hero.damage(1);
				}
			cout<<"================="<<endl;
			hero.ShowHealth();
			dragon.ShowHealth();
			orc.ShowHealth();
			cout<<"================="<<endl;
		}

		if(input == "attack dragon"){ 
			auto t4 = Clock::now();
			cout<<"Game started"<< ":" <<chrono::duration_cast<chrono::milliseconds>(t4-t1).count()<<" "<<"Milliseconds ago"<<endl;
			auto t5 = chrono::duration_cast<chrono::milliseconds>(t4-t1).count()/2200;
		
			if(dragon.GetHealth()>0)
				dragon.damage(2);
			if(hero.GetHealth()>0 && dragon.GetHealth()>0)
				for(int i=0;i < t5;i++){
					hero.damage(1);
				}
	
			cout<<"================="<<endl;
			hero.ShowHealth();
			dragon.ShowHealth();
			orc.ShowHealth();
			cout<<"================="<<endl;
		}
	}

	return 0;
}
