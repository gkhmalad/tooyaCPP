#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Profile
{
private:
    string name;
    int age;
    string city;
    string country;
    string pronouns;
    vector<string> hobbies;
public:
    Profile(string newName, int newAge, string newCity, string newCountry, string newPronouns);
    void view_profile();
    string get_name();
    int get_age();
    string get_city();
    string get_country();
    string get_pronouns();
    vector<string> get_hobbies();
    void add_hobby(string newHobby);
};

