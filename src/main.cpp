#include <iostream>
#include <list>
#include "todolists.hpp"

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
