//  @Author
//  Created by Umut Cem Avin on 21.04.2018.
//  Student ID : 150140018
//  Copyright © 2018 avin. All rights reserved.

#include "grayling.h"
#include <iostream>

//Prints attributes of the grayling
//"const" is used to prevent changes in the function
void Grayling::print() const{
    cout << " -> Age: " << age << " Nname: " << name << " G: " << gender
    << " MPI: " << MPI << " MP: " << MP << " Mutate at: " << nextMP << endl;
}

void Grayling::givebirth(){
    /*
     Conditional statements to differ graylings by considering their life status,
     gender and offspring number. These values show us their availability for
     giving birth.
    */
    if(isAlive == 0){
        if(offsCounter >=maxOffspring)
            cout << "- Trying to GIVE BIRTH BUT " << name <<
            " is not alive and no ability to give birth!" << endl;
        else
            cout << "- Trying to GIVE BIRTH BUT " << name <<
            " is not alive!" << endl;
    }
    else if(gender == 'f' && isAlive == 1){
        if(offsCounter < maxOffspring){
            cout << "- " << name << " gave birth to " << offsCounter+1 <<
            " offsprings!" << endl;
            offsCounter++;
        }
        else if(offsCounter >=maxOffspring){
            cout << "- Trying to GIVE BIRTH BUT " << name <<
            " has no ability to give birth!" << endl;
        }
    }
    else if(gender == 'm' && isAlive == 1)
        cout << "- Trying to GIVE BIRTH BUT " << name <<
        " has no ability to give birth!" << endl;
}

/*
 Conditional statements to know whether the grayling can age. Life status,
 mutation possibility(MP) and maximum age values are considered.
 According to their aging; mutation possibility(MP), mutation possibility
 increasing(MPI), isAlive and isMutant values are recalculated.
 */
void Grayling::aging(){
    if(isAlive == 0){
        cout << "- Trying to AGING BUT " << name << " is not alive" << endl;
    }
    else if(age < deathAge && isAlive == 1){
        age++;
        MP = MP+MPI;
        if(isMutant == 0){
            cout << "- AGING: name: " << name << " -> Age: " << age <<
            " MPI: " << MPI << " MP: " << MP << endl;
            if(age == deathAge){
                cout << "- " << name << " is dead because of AGING!" << endl;
                isAlive=0;
            }
            
            if(MP==100){
                cout << "- " << name << " is dead because of HIGH MUTATION ";
                cout << "RATE!" << endl;
                isAlive = 0;
            }
            else if(MP>=MPI*2){
                cout << "- Mutated TO: " << motateto << endl;
                isMutant = 1;
                MP = 0;
                MPI = MPI+10;
            }
        }
        else{
            cout << "- AGING: name: " << name << " -> " << motateto <<
            " Age: " << age << " MPI: " << MPI << " MP: " << MP << endl;
            if(age == deathAge-1){
                cout << "- " << name << " is dead because of AGING!" << endl;
                isAlive=0;
            }
        }
    }
}
//Derived classes' functions

//Derived print function for Grayling1 class.
void Grayling1::print() const{
    cout << "- Grayling 1";
    Grayling::print();
}

//Derived givebirth function for Grayling1 class.
void Grayling1::givebirth() {
    maxOffspring = 2;
    Grayling::givebirth();
    
}

//Derived aging function for Grayling1 class.
void Grayling1::aging(){
    motateto = "Grayling2";
    Grayling::aging();
}

//Derived print function for Grayling2 class.
void Grayling2::print() const{
    cout << "- Grayling 2";
    Grayling::print();
}

//Derived givebirth function for Grayling2 class.
void Grayling2::givebirth() {
    maxOffspring = 1;
    Grayling::givebirth();
    
}

//Derived aging function for Grayling2 class.
void Grayling2::aging(){
    motateto = "Grayling3";
    Grayling::aging();
}

//Derived print function for Grayling3 class.
void Grayling3::print() const{
    cout << "- Grayling 3";
    Grayling::print();
}

//Derived givebirth function for Grayling3 class.
void Grayling3::givebirth(){
    maxOffspring = 0;
    Grayling::givebirth();
}

//Derived aging function for Grayling3 class.
void Grayling3::aging(){
    Grayling::aging();
}
