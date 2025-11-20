#include <iostream>
//This is how you'll usually define a structure    
using namespace std;
struct MyOwnStructure { // keyword "struct" followed by a name, followed by braces containing the datatypes you like, followed by a semicolon
    int property_one;
    int property_two;
    char property_three;
    bool property_four;
    //...
};

int main (void) {
    MyOwnStructure demo1; //Declare demo1 of type MyOwnStructure
    MyOwnStructure demo2; //Declare demo2 of type MyOwnStructure

    //set demo1's with values
    demo1.property_one = 1;
    demo1.property_two = 2;
    demo1.property_three = 'a';
    demo1.property_four = false;

    //set demo2's values
    demo2.property_one = 3;
    demo2.property_two = 4;
    demo2.property_three = 'b';
    demo2.property_four = true;

    cout << "Demo1: " << demo1.property_one << demo1.property_two << demo1.property_three << demo1.property_four << endl;
    cout << "Demo2: " << demo2.property_one << demo2.property_two << demo2.property_three << demo2.property_four << endl;
    /*
    Will output
    Demo1: 12a0
    Demo2: 34b1
    */
    return 0;
}
