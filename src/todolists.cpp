#include "todolists.hpp"

TodoItems :: TodoItems() {
    id = 0;
    discription = "";
    completed = false;
}

ostream& operator << (ostream &os, TodoItems &obj) {
    if(obj.completed) 
        os << obj.id << "  " << obj.discription << "  " << "DONE";
    else 
        os << obj.id << "  " << obj.discription << "  " << "NOT DONE";
    return os;
}

istream& operator >> (istream &is, TodoItems &obj) {
    cout << "Enter the ID : " << endl;
    is >> obj.id;
    cout << "Enter the Discription : " << endl;
    is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(is,obj.discription);
    return is;
}

int TodoItems :: GetId() {
    return id;
}

void TodoItems :: SetComplete() {
    completed = true;
}
