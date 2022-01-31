#include <iostream>
#include <vector>
#include <string>
#include "profile.hpp"

using namespace std;

int main(){

    string newHobby;

    Profile sam("Sam Drakkila", 30, "New York", "USA", "He/Him");

    cout << "Add a hobby: ";
    cin >> newHobby;
    cout << endl;
    sam.add_hobby(newHobby);

    cout << "Add a hobby: ";
    cin >> newHobby;
    sam.add_hobby(newHobby);
    sam.view_profile();

    return 0;
}