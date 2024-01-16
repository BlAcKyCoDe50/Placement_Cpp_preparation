#include<iostream>
using namespace std;
class Game{
public:
void play(int a,string s){
    cout<<"Cricket"<<endl;
}
void play(string s,int b){
    cout<<"Football"<<endl;
}
};

main(){

Game g;
g.play(7,"Dhoni");
g.play("Messie",10);


return 0;
}