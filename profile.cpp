#include <iostream>
#include <vector>
#include <string>
#include "profile.hpp"

using namespace std;

Profile::Profile(string newName, int newAge, string newCity = "N/A", string newCountry = "N/A", string newPronouns = "They/Them"){

    name = newName;
    age = newAge;
    city = newCity;
    country = newCountry;
    pronouns = newPronouns;

}

void Profile::view_profile(){

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Pronouns: " << pronouns << endl;
    cout << "Hobbies: ";
    for(int i=0; i < hobbies.size(); i++){

        cout << hobbies[i] << " ";
    }
}

string Profile::get_name(){
    return name;
}

int Profile::get_age(){
    return age;
}

string Profile::get_city(){
    return city;
}

string Profile::get_country(){
    return country;
}

string Profile::get_pronouns(){
    return pronouns;
}

vector<string> Profile::get_hobbies(){
    return hobbies;
}

void Profile::add_hobby(string newHobby){
    hobbies.push_back(newHobby);
}