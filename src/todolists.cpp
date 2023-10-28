TodoItems :: TodoItems() {
    id = 0;
    discription = "";
    completed = false;
}

friend TodoItems :: ostream& operator << (ostream &os, TodoItems &obj) {
    if(obj.completed) 
        os << obj.id << "  " << obj.discription << "  " << "DONE";
    else 
        os << obj.id << "  " << obj.discription << "  " << "NOT DONE";
    return os;
}

friend TodoItems :: istream& operator >> (istream &is, TodoItems &obj) {
    cout << "Enter the ID : " << endl;
    is >> obj.id;
    cout << "Enter the Discription : " << endl;
    is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(is,obj.discription);
    return is;
}