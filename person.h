#ifndef __Person__
#define __Person__

#include <string>

using namespace std;

class Person{

    protected:
        string Name;
        int Age;
        float Height;
        float Weight;

    public:
        Person(){

        };
        Person(string name_,int age_,float height_,float weight_){
            this->Name=name_;
            this->Age=age_;
            this->Height=height_;
            this->Weight=weight_;
        };
        string getName() {
            return this->Name;
        }

        virtual string getPosition() const {}
        //virtual  getPosition() const {}


};





#endif // __Person__