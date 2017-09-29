/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: trevinmiller
 *
 * Created on September 28, 2017, 7:16 PM
 */

#include <cstdlib>
#include <string> 
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    std::string sentence; 
    std::getline(std::cin, sentence);
    
    for(int i = 0; i < sentence.length();)
    {
        if(sentence.at(i) == ' ' && sentence.at((i) - 1) == ' ')
        {
            sentence.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    
    std::cout << sentence << "\n";

    
}

