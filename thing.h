#ifndef __Thing__
#define __Thing__

#include <string>

using namespace std;

class Thing{

    protected:
        float X;
        float Y;
        string Clearence;
        

    public:
        Thing(float x_,float y_,string clearence_){
            this->X=x_;
            this->Y=y_;
            this->Clearence=clearence_;
        };

        string getClearence() const{
            return this->Clearence;
        }
        


};





#endif // __Thing__