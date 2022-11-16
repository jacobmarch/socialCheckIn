#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

class Date {
    public:
        int day, month, year;
};

class Person {
    public:
        void setName(string n){
            name = n;
        }
        string getName() {
            return name;
        }
        void setAge(int x){
            age = x;
        }
        int getAge() {
            return age;
        }
        Person(string n, int a, int dayMet, int monthMet, int yearMet){
            age = a;
            name = n;
            dateMet.day = dayMet;
            dateMet.month = monthMet;
            dateMet.year = yearMet;
            lastInteracted.day = dayMet;
            lastInteracted.month = monthMet;
            lastInteracted.year = yearMet;
        }
        void updateLastInteraction(int day, int month, int year){
            lastInteracted.day = day;
            lastInteracted.month = month;
            lastInteracted.year = year;
        }
    protected:
        string name;
        int age;
        Date dateMet;
        Date lastInteracted;
};

void interactedWith(Person p, int day, int month, int year){
    p.updateLastInteraction(day, month, year);
}

int main() {
    
}