#include "MyStack.h"
#include <string>

int main()
{
    myStack::Stack< std::string> p32;
    p32.showStack();
    cout << "------------------------------------\n";
    p32.push_back("Students"); //Students
    p32.push_back("of"); //Students of
    p32.push_back("the"); //Students of the
    p32.push_back("group"); //Students of the group
    p32.push_back("P32"); //Students of the group P32
    p32.showStack();
    cout << "TOP: " << p32.top() << endl; //P32
    cout << "------------------------------------\n";
    p32.pop_back(); //delete P32
    p32.showStack(); //Students of the group
    cout << "------------------------------------\n";
    //Розвантаження стеку
    while (!p32.isEmpty()) {
        if (p32.top().length() == 2) cout << p32.top() << " ";
        p32.pop_back();
    }
    cout << endl;
    p32.showStack();
}
