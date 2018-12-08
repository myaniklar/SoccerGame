#ifndef __Player__
#define __Player__

#include "person.h"

class Player : public Person{

    private:
        string Position;
        float Stamina;
        float Agility;
        float Experience;
        

    public:
        Player(string name_,int age_,float height_,float weight_,string position_,float stamina_,float agility_,float experince_) : Person(name_,age_,height_,weight_){
            this->Position=position_;
            this->Stamina=stamina_;
            this->Agility=agility_;
            this->Experience=experince_;
        };

        string getPosition() const{
            return this->Position;
        }
        


};





#endif // __Player__