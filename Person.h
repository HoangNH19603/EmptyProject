//
// Created by parrot on 13/09/2022.
//
#ifndef EMPTY_PROJECT_PERSON_H
#define EMPTY_PROJECT_PERSON_H
#pragma once
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class Person {
private:
    int birthDate;
    int birthMonth;
    int birthYear;
    int weight;
    int height;
    int gender;
    string firstName;
    string surName;
    string lastName;
    string address;
    string workAt;
    string idNumber;
    vector<string> phoneNumbers;
    vector<string> mails;
    vector<string> socialNetworks;
    vector<string> education;
    vector<string> boy_girl_friends;
    vector<string> habits;
public:
    // constructors
    /*Person(){
        int birthDate = 0;
        int birthMonth = 0;
        int birthYear = 0;
        int weight = 0;
        int height = 0;
        int gender = -1;
        string firstName = "NULL";
        string surName = "NULL";
        string lastName = "NULL";
        string address = "NULL";
        string workAt = "NULL";
        string idNumber = "NULL";
        cout << "New object created" << endl;
    }*/
    explicit Person(string firstName = "NULL", string surName = "NULL", string lastName = "NULL", int gender = -1, int birthDate= 0, int birthMonth = 0, int birthYear = 0, int height = 0, int weight = 0, string address = "NULL", string workAt = "NULL", string idNumber = "NULL") {
        this->firstName = std::move(firstName);
        this->surName = surName;
        this->lastName = lastName;
        this->gender = gender;
        this->birthDate = birthDate;
        this->birthMonth = birthMonth;
        this->birthYear = birthYear;
        this->height = height;
        this->weight = weight;
        this->address = address;
        this->workAt = workAt;
        this->idNumber = idNumber;
        cout << "New object created" << endl;
    }
    Person(string firstName, string surName, string lastName, int gender, int birthDate, int birthMonth, int birthYear, int height, int weight, string address, string workAt, string idNumber, string phoneNumber, string mail, string socialNetwork, string edu, string friends, string habit) {
        this->firstName = firstName;
        this->surName = surName;
        this->lastName = lastName;
        this->gender = gender;
        this->birthDate = birthDate;
        this->birthMonth = birthMonth;
        this->birthYear = birthYear;
        this->height = height;
        this->weight = weight;
        this->address = address;
        this->workAt = workAt;
        this->idNumber = idNumber;
        phoneNumbers.push_back(phoneNumber);
        mails.push_back(mail);
        socialNetworks.push_back(socialNetwork);
        education.push_back(edu);
        boy_girl_friends.push_back(friends);
        habits.push_back(habit);
        cout << "New object created" << endl;
    }

    // setters
    void setFirstName(string firstName) { this->firstName = firstName; }
    void setSurName(string surName) { this->surName = surName; }
    void setLastName(string lastName) { this->lastName = lastName; }
    void setGender(int gender) { this->gender = gender; }
    void setDateOfBirth(int date, int month, int year) {
        birthDate = date < 1 ? 1 : (date > 31 ? 31 : date);
        birthMonth = month < 1 ? 1 : (month > 12 ? 12 : month);
        birthYear = year;
    }
    void setBirthDate(int date) { birthDate = date < 1 ? 1 : (date > 31 ? 31 : date); }
    void setBirthMonth(int month) { birthMonth = month < 1 ? 1 : (month > 12 ? 12 : month); }
    void setBirthYear(int year) { birthYear = year; }
    void setHeight(int height) { this->height = height; }
    void setWeight(int weight) { this-> weight = weight; }
    void setAddress(string address) { this->address = address; }
    void setWorkAt(string workAt) { this->workAt = workAt; }
    void setId(string id) { idNumber = id; }
    void addPhoneNumber(string phoneNumber) { phoneNumbers.push_back(phoneNumber); }
    void addMailAddress(string mail) { mails.push_back(mail); }
    void addSocialNetwork(string socialNetwork) { socialNetworks.push_back(socialNetwork); }
    void addEducation(string edu) { education.push_back(edu); }
    void addFriends(string friends) { boy_girl_friends.push_back(friends); }
    void addHabit(string habit) { habits.push_back(habit); }

    // getters
    string getFirstName() { return firstName; }
    string getSurName() { return surName; }
    string getLastName() { return lastName; }
    string getFullName() { return getFirstName() + " " + getSurName() + " " + getLastName(); }
    [[nodiscard]] string getGender() const { return gender == 0 ? "Male" : (gender == 1 ? "Female" : "Unknown"); }
    int getBirthDate() { return birthDate; }
    int getBirthMonth() { return birthMonth; }
    int getBirthYear() { return birthYear; }
    [[nodiscard]] string getDateOfBirth() const {
        string date = birthDate < 10 ? ("0" + to_string(birthDate)) : to_string(birthDate);
        string month = birthMonth < 10 ? ("0" + to_string(birthMonth)) : to_string(birthMonth);
        string year = to_string(birthYear);
        return date + "/" + month + "/" + year;
    }
    [[nodiscard]] int getWeight() const { return weight; }
    [[nodiscard]] int getHeight() const { return height; }
    string getAddress() { return address; }
    string getWorkAt() { return workAt; }
    string getId() { return idNumber; }
    string getPhoneNumbers() {
        if(phoneNumbers.empty()) {
            return "NULL";
        }
        string numbers;
        int count = 0;
        for(const auto& number : phoneNumbers) {
            ++count;
            numbers += to_string(count) + ". +" + number + "\n";
        }
        return numbers;
    }
    string getMails() {
        if(mails.empty()) {
            return "NULL";
        }
        string mailAddress;
        int count = 0;
        for(const auto& mail : mails) {
            ++count;
            mailAddress += to_string(count ) + ". " + mail + "\n";
        }
        return mailAddress;
    }
    string getSocialNetwork() {
        if(socialNetworks.empty()) {
            return "NULL";
        }
        string linkAddress;
        int count = 0;
        for(const auto& link : socialNetworks) {
            ++count;
            linkAddress += to_string(count) + ". " + link + "\n";
        }
        return linkAddress;
    }
    string getEducation() {
        if(education.empty()) {
            return "NULL";
        }
        string schools;
        for(const auto& school : education) {
            schools += '[' + school + ']' + "\n";
        }
        return schools;
    }
    string getFriends() {
        if(boy_girl_friends.empty()) {
            return "NULL";
        }
        string friends;
        for(const auto& friend_ : boy_girl_friends) {
            friends += "- " + friend_ + "\n";
        }
        return friends;
    }
    string getHabits() {
        if(habits.empty()) {
            return "NULL";
        }
        string habits_;
        for(const auto& habit : habits) {
            habits_ += "- " + habit + "\n";
        }
        return habits_;
    }

//    Write to files
//    Read from files

    void display() {
        cout << "Name: " << getFullName() << endl;
        cout << "Date of birth: " << getDateOfBirth();
        cout << "Gender: " << getGender() << endl;
        cout << "Height: " << getHeight() << "cm\tWeight" << getWeight() << "kg" << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Id number: " << getId() << endl;
        cout << "Work at: " << getWorkAt() << endl;
        cout << "Phone numbers:\n" << getPhoneNumbers();
        cout << "Emails:\n" << getMails();
        cout << "Social network:\n" << getSocialNetwork();
        cout << "Education:\n" << getEducation();
        cout << "Friends:\n" << getFriends();
        cout << "Habits:\n" << getHabits();
    }
};

#endif //EMPTY_PROJECT_PERSON_H