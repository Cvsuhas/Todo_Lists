#include <iostream>
#include <string>
#include <list>
#include <limits>
using namespace std;

class TodoItems {
    private:
    int id;
    string discription;
    bool completed;

    public:
    TodoItems() {
        id = 0;
        discription = "";
        completed = false;
    }

    friend ostream& operator << (ostream &os, TodoItems &obj);  // friend function for output object
    friend istream& operator >> (istream &is, TodoItems &obj);  // friend function for input object
    int GetId();
    void SetComplete();
};

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

int main() {

    list<TodoItems> todolists;          //created the list of TodoItems object
    char input_choice;

    while(1) {
        system("clear");

        list<TodoItems> :: iterator it;
        if(todolists.empty()) {         //check if list is empty
            cout << "Todo Tasks are empty!" << endl;
        }

        for(it = todolists.begin(); it != todolists.end(); it++) {      //displays the list of tasks
            cout << *it << endl;
            cout << endl;
        }

        cout << "[a]add Todo Tasks" << endl;
        cout << "[c]omplete the tasks" << endl;
        cout << "[q]uit" <<endl;
        cout << "Enter the choice" << endl;
        cin >> input_choice;

        switch(input_choice) {          //switch condition for user input
            case 'a': {
                TodoItems todo;
                cin >> todo;
                todolists.push_back(todo);
            }
                break;
            case 'c': {
                int c_completed;
                cout<<"Enter the ID to be completed"<<endl;
                cin>>c_completed;
                for(it = todolists.begin(); it != todolists.end(); it++) {
                    if(c_completed == it->GetId()) {
                        it->SetComplete();
                        break;
                    }
                }
            }
                break;
            case 'q': 
                exit(0);
        }
    }

    return 0;
}