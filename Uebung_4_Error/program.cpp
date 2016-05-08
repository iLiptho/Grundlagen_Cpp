
#include <iostream>
#include <time.h>
#include "TestObject.h"

// ### Exercise 4 - References ###
// # Firstly, some of the code has questions to it, please answer these in your own words. (not necessarily in code or comments. ;) )
// # Secondly, please fix any errors you see, explain your solution in your own words.
// # 
// # Bonus 1: Think of a good use of pointers, then try to implement it with references. Document any problems, errors and solutions.
// # Bonus 2: Make everything const correct.


// This codes has quite a few (intentional) errors in it
// TODO: debug and fix the errors.

// Should return the reference to a sum of two ints
// TODO: rewrite this as a template (without the bug)
int& sumTheElements(int a, int b)
{
    int *result = new int (a + b);  //make result refference
    return *result;
}

void main()
{
    // using a bit of random here.
    srand(time(nullptr)); //initialize random seed based on time

    // Where will this object live? Is this a good choice? Why or why not?
    TestObject anObject = TestObject(30);

    // Name differences between pointers and references
    TestObject *anotherObject =  new TestObject(2); //error: new returns a pointer-> '*'

    // When should we use pointers, references and values? why?
    TestObject &referenceToAnObject = anObject;  //error: no &

    TestObject &referenceToAnotherObject = *anotherObject;  //error  original adress called with '*'

    TestObject* pointerToAnObject = &anObject;	//error: for pointer,adress of obj. is needed with &

    TestObject* pointerToAnotherObject = &referenceToAnotherObject; // error fix: for pointer, adress of Obj. is needed with '&'
    

    // Testing if the correct strings are being printed.
    referenceToAnotherObject.printAllStrings();
    std::cout << "The Following should be the same as above: " << std::endl;
    pointerToAnotherObject->printAllStrings();

    std::cout << std::endl << "total number of strings:" << std::endl;
   
    int& TotalElementNumber = sumTheElements(referenceToAnObject.elementCount(), referenceToAnotherObject.elementCount());
    std::cout << TotalElementNumber << std::endl;
    std::cout << "Do calculations in another scope and display the same value again inside that scope: " << std::endl; 
    { 
        //this isn't really doing anything, just for testing purposes
        int ignoreMe = 20; 
        ignoreMe *= TotalElementNumber;
        std::cout << TotalElementNumber << std::endl;
    }

    std::cout << "And again outside the scope: " << std::endl;
    std::cout << TotalElementNumber << std::endl;


    delete anotherObject;
	//cant delete objects with stack
    //delete pointerToAnObject;
    //delete pointerToAnotherObject;


}

