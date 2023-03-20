//Name: Laura Thornburg
//Class: CIS 164
//Date: 3/19/23
//Email: lthornburg1@dmacc.edu
//Program Details: Program to show Try/catch and exception handling

#include <iostream>
#include <string>
using namespace std;

class Printer{
    string _name;
    int _availablePaper;
public:
    Printer(string name, int availablePaper){
        _name = name;
        _availablePaper = availablePaper;
    }
    void Print(string txtDoc){
        int requiredPaper = txtDoc.length()/10;

        if(requiredPaper > _availablePaper)
            throw "No Paper in printer";

        cout << "Printing..." << txtDoc << endl;
        _availablePaper -= requiredPaper;
    }
};

int main() {
    Printer myPrinter("HP DeskJet 2500", 5);
    try {
        myPrinter.Print("Hello, I am printing this document.  This is a C++ assignment.");
        myPrinter.Print("This is additional text.");
    }
    catch(const char * txtException){
        cout << "Exception: " << txtException << endl;
    }
    catch(...){
        cout << "Exception occurred." << endl;
    }

    return 0;
}

//If I input 10 pages available, then both lines will "print"
//If I input 5 pages available, then I get an exception that I am out of paper

//I access the debugger from the top toolbar in my IDE.  I am using CLion from JetBrains
//I can change the settings from the side toolbar.  I can manually place "stops" where I want/need them
//I have struggled in the past with understanding how to really utilize the debugger but it is getting better.
