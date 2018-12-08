#ifndef __Ball__
#define __Ball__

#include "thing.h"

class Ball : public Thing{

    private:
        float Weight;
    
    public:
        Ball(float x_,float y_,string clearence_,float weight_) : Thing(x_,y_,clearence_){
            this->Weight=weight_;
            
        };

        float getWeight() const{
            return this->Weight;
        }
        
};





#endif // __Ball__