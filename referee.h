#ifndef __Referee__
#define __Referee__

#include "person.h"

class Referee : public Person{

    private:
        string Role;
        float Experience;
        

    public:
        Referee(string name_,int age_,float height_,float weight_,string role_,float experince_) : Person(name_,age_,height_,weight_){
            this->Role=role_;
            this->Experience=experince_;
        };

        string getRole() const{
            return this->Role;
        }
        void setRole(string role_){
            this->Role=role_;
        }

};





#endif // __Referee__