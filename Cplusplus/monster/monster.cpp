#include<iostream>
#include<string>
#include<chrono>

std::chrono::high_resolution_clock Clock;

class Hero{
	private:
		int health;
	public:
		Hero(int h){
			health = h;
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
		int health;
	public:
		void setHealth(int h);
		void damage(int num);
		void ShowHealth();
};

void Monster::setHealth(int h){
	health = h;
}
void Monster::damage(int num){
	health-=num;
}

void Monster::ShowHealth(){
	cout<<"Monster:"<<health<<endl;
}

class Dragon : public Monster{
			
};
class Orc : public Monster{
};

int main(){
	string input;
	Hero hero(40);
	Dragon dragon;
	Orc orc; 


	dragon.setHealth(20);
	orc.setHealth(7);
	
	while(true){
		auto t1 = clock::now();
		
		cout<<"Type 'attack Orc' for starting game"<<endl;
		getline(cin,input);

		if(input == "attack Orc"){
			auto t2 = clock::now();
			cout<<"Game started"<<chrono::duration_cast<chrono::milliseconds>(t2-t1).count()<<"Milliseconds ago"<<endl;
			auto t3 = chrono::duration_cast<chrono::milliseconds>(t2-t1).count()/1400;
			orc.damage(2);
			
			for(int i=0;i < t3;i++){
				hero.damage(1);
			}
			hero.ShowHealth();
			dragon.ShowHealth();
			orc.ShowHealth();
		}

		break;

	}

	

	return 0;
}
