/* 

Managing the information of Lift Class

*/

#include <iostream>

using namespace std;

class Lift {
public:
    
    int status;
    int currentFloor;
    int headingFloor;
    
    Lift(){
        //Constructer
    }
    ~Lift(){
        //Destructer
    }
    //currentFloor
    int getCurrentFloor(){
        return currentFloor;
    }
    void setCurrentFloor(int floor){
        currentFloor = floor;
    }
    //headingFloor
    int getHeadingFloor(){
        return headingFloor;
    }
    void setHeadingFloor(int floor){
        headingFloor = floor;
    }
};



enum status{
    STOP,
    GOING_DOWN,
    GOING_UP
};