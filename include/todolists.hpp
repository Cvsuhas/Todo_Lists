#ifndef TODOLISTS_HPP
#define TODOLISTS_HPP

#include <iostream>
#include <string>
#include <limits>
using namespace std;

class TodoItems {
    private:
    int id;
    string discription;
    bool completed;

    public:
    TodoItems();

    friend ostream& operator << (ostream &os, TodoItems &obj);  // friend function for output object
    friend istream& operator >> (istream &is, TodoItems &obj);  // friend function for input object
    int GetId();
    void SetComplete();
};

#endif
