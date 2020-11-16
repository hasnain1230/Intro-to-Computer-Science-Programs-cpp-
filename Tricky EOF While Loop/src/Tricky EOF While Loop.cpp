//============================================================================
// Name        : Tricky.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>     
#include <fstream>      

using namespace std; 

int main () {

  ifstream is("example.txt");   

  char c;
  while (is.get(c))                  
  cout << c << endl;

  if (is.eof())                      
    cout << "[EoF reached]\n";
  else
  cout << "[error reading]\n";

  is.close();                        

  return 0;
}