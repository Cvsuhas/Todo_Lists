#include <iostream>
#include <string>
#include <list>
using namespace std;

class TodoItems {
    private:
    int id;
    string discription;
    bool completed;

    TodoItems() {
        id = 0;
        discription = "";
        completed = false;
    }
};

int main() {

    list<TodoItems> todolists;          //created the list of TodoItems object
    char input_choice;

    while(1) {
        system("clear");

        list<TodoItems> :: iterator it;
        if(todolists.empty()) {         //check if list is empty
            cout << "Todo Tasks are empty!" << endl;
        }

        cout << "[a]add Todo Tasks" << endl;
        cout << "[c]omplete the tasks" << endl;
        cout << "[q]uit" <<endl;
        cout << "Enter the choice" << endl;
        cin >> input_choice;

        switch(input_choice) {          //switch condition for user input
            case 'a': {

            }
            case 'b': {

            }
            case 'q': 
                exit(0);
        }
    }

    return 0;
}