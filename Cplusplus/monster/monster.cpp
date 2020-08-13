#include<iostream>
#include<string>
#include<chrono>
typedef std::chrono::high_resolution_clock Clock;
using namespace std;

class Hero{
	private:
		int health;
	public:
		Hero(int h){
			health = h;
		}
		void damage(int num);
		void ShowHealth();
		void SetDead();
		int GetHealth();
};
void Hero::damage(int num){
	health-=num;
}
void Hero::ShowHealth(){
	cout<<"Hero:"<<health<<endl;
}
void Hero::SetDead(){
	health=0;
}
int Hero::GetHealth(){
	return health;
}

class Dragon{
	private:
		int health;
	public:
		Dragon(int h){
			health = h;
		}
		void damage(int num);
		void ShowHealth();
		void SetDead();
		int GetHealth();
};

void Dragon::damage(int num){
	health-=num;
}

void Dragon::ShowHealth(){
	cout<<"Dragon:"<<health<<endl;
}
void Dragon::SetDead(){
	health=0;
}
int Dragon::GetHealth(){
	return health;
}
class Orc{
	private:
		int health;
	public:
		Orc(int h){
			health = h;
		}
		void damage(int num);
		void ShowHealth();
		void SetDead();
		int GetHealth();
};

void Orc::damage(int num){
	health-=num;
}

void Orc::ShowHealth(){
	cout<<"Orc:"<<health<<endl;
}
void Orc::SetDead(){
	health=0;
}
int Orc::GetHealth(){
	return health;
}

int main(){
	string input;
	Hero hero(40);
	Dragon dragon(20);
	Orc orc(7); 
	auto t1 = Clock::now();

	while(hero.GetHealth()){

		cout<<"Type"<<" "<<"\"attack orc\""<<" "<<"or"<<" "<<"\"attack dragon\""<<"starting game"<<endl;
		getline(cin,input);

		if(input == "attack orc"){ 
			auto t2 = Clock::now();
			cout<<"Game started"<< ":" <<chrono::duration_cast<chrono::milliseconds>(t2-t1).count()<<" "<<"Milliseconds ago"<<endl;
			auto t3 = chrono::duration_cast<chrono::milliseconds>(t2-t1).count()/1400;
			
			if(orc.GetHealth()>0)
				orc.damage(2);
			if(orc.GetHealth()<0)
				orc.SetDead();
			if(hero.GetHealth()>0 && orc.GetHealth()>0)
				for(int i=0;i < t3;i++){
					hero.damage(1);
				}
			if(hero.GetHealth()<0){
				hero.SetDead();
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
			if(dragon.GetHealth()<0)
				dragon.SetDead();
			if(hero.GetHealth()>0 && dragon.GetHealth()>0)
				for(int i=0;i < t5;i++){
					hero.damage(1);
				}
			if(hero.GetHealth()<0){
				hero.SetDead();
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
