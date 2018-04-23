//  @Author
//  Created by Umut Cem Avin on 21.04.2018.
//  Student ID : 150140018
//  Copyright © 2018 avin. All rights reserved.

#ifndef grayling_h
#define grayling_h

#include <iostream>
#include <string>

using namespace std;

class Grayling{
public:
    Grayling(){isAlive=0;};
    Grayling(char, string);
    Grayling(const Grayling &g2, char, string);
    virtual void print() const;
    virtual void givebirth();
    virtual void aging();
    virtual ~Grayling() {};
    
protected:
    short age;
    string name;
    char gender;
    bool isAlive;
    bool isMutant;
    string motateto;
    double MPI;
    double MP;
    double nextMP;
    int offsCounter;
    int deathAge;
    int maxOffspring;
};

Grayling::Grayling(char gGender, string gName){
    name = gName;
    gender = gGender;
    age = 0;
    isAlive = 1;
    isMutant = 0;
    MP = 0;
    offsCounter = 0;
}

Grayling::Grayling(const Grayling &g2, char gGender, string gName){
    name = gName;
    gender = gGender;
    age = g2.age;
    isAlive = g2.isAlive;
    isMutant = g2.isMutant;
    MP = g2.MP;
    offsCounter = g2.offsCounter;
}

class Grayling1 : public Grayling{
public:
    Grayling1(char gGender, string gName) : Grayling(gGender, gName){
        MPI = 30;
        nextMP = 60;
        motateto = "Grayling 1";
        deathAge = 5;
    }
    
    Grayling1(const Grayling &g2, char gGender, string gName) :
    Grayling(g2, gGender, gName){
        MPI = 30;
        nextMP = 60;
        motateto = "Grayling 1";
        deathAge = 5;
    }
    ~Grayling1() {};
    void print() const;
    void givebirth();
    void aging();
    
};

class Grayling2 : public Grayling{
public:
    Grayling2(char gGender, string gName) :
    Grayling(gGender, gName){
        MPI = 40;
        nextMP = 80;
        motateto = "Grayling 2";
        deathAge = 4;
    }
    Grayling2(const Grayling &g2, char gGender, string gName) :
    Grayling(g2, gGender, gName){
        MPI = 40;
        nextMP = 80;
        motateto = "Grayling 2";
        deathAge = 4;
    }
    ~Grayling2() {};
    void print() const;
    void aging();
    void givebirth();
    
};

class Grayling3 : public Grayling{
public:
    Grayling3(char gGender, string gName) :
    Grayling(gGender, gName){
        MPI = 50;
        nextMP = 100;
        motateto = "Grayling 3";
        deathAge = 3;
    }
    
    Grayling3(const Grayling &g2, char gGender, string gName) :
    Grayling(g2, gGender, gName){
        MPI = 50;
        nextMP = 100;
        motateto = "Grayling 3";
        deathAge = 3;
    }
    
    ~Grayling3() {};
    void print() const;
    void givebirth();
    void aging();
    
};

#endif
