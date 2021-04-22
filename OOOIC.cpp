/**
 * Code developed using "EDD" - "Error Driven Development"
 * has been some time i've used cpp and don't remember much...
*/

#include <typeinfo>
#include <iostream>
#include <stdexcept>


class One{
    private: int one = 1;

    /**
     * @description set one to desired value. Value must be '1'
     * @param {Number} newOne one
     * @example setOne(1) -> 1
     */
    public:int setOne(int newOne){
        if(typeid(newOne) != typeid(int()) || newOne != 1){
            throw std::runtime_error("Value must be 1");   
        }
        else{
            one = newOne;
            return one;
        }
    }

    /**
     * @description get actual one
     */
    public:int getOne(){
        return one;
    }
};


// just for testing
int main(){
    One i = One();

    printf("%d", i.getOne() + 1);

    // i.setOne(2);
    
    return i.getOne() + 1;
};
