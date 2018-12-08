#include <iostream>

#include "player.h"
#include "referee.h"
#include "ball.h"
#include "goal_line.h"
using namespace std;

int main(void){

    
    Player Player1("Alperen",23,173,70,"Forward",100,100,100);
    cout<<Player1.getPosition()<<endl;
    Referee Refere1("Mehmet",28,173,70,"yan hakem",100);
    cout<<Refere1.getRole()<<endl;
    Refere1.setRole("ana hakem");
    cout<<Refere1.getRole()<<endl;
    Thing Thing1(10,20,"temiz");
    cout<<Thing1.getClearence() <<endl;
    Ball Ball1(10,20,"kirli",1);
    cout<<Ball1.getClearence() <<endl;
    GoalLine GoalLine1(10,20,"temiz");
    cout<<GoalLine1.getClearence() <<endl;
    return 0;
}
