#include <iostream>

#include "LiftInformation.cpp"

using namespace std;

int main(int argc, char* argv[]) {
    
    Lift *a = new Lift();
    Lift *b = new Lift();

    a->setCurrentFloor(0);
    b->setCurrentFloor(27);

    cout << a->getCurrentFloor() << endl;
    cout << b->getCurrentFloor() << endl;

    delete a;
    delete b;

    return 0;
}