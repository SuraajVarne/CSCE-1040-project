// DOCUMENTATION GOES HERE
#include <iostream> 
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "student.h"
#include "bubble.h"
#include <fstream> 
#include <cstdlib> 

using namespace std;
struct classStats{
  float mean, min, max, median;
  char *name;
};


int main()
{
  cout << "CSCE 1040 Suraj Varne Sheela " << endl;
  
  fstream Gradesfile;
  Gradesfile.open("grades.txt");
  
  if(!Gradesfile.is_open())
  {
      exit(EXIT_FAILURE);
  }
  
  
  
  //int *student = new int[19];
  //*student = (int*)malloc(20*sizeof(int));
  

    //int *student[19];
    //student *data;
    //data = new student[19];
    
 
 //student[19] = (int*)malloc(sizeof(int));
 
 
  string firstname, lastname, coursename;
  int grade1, grade2, grade3;
  string counter; 
  
  //int[]student = new int[19];
  
  
   Gradesfile >> coursename;    // This is out of the loop because we dont want to keep taking coursename again and again. 
   int i=0;
  while(!Gradesfile.eof())
  {
      //Gradesfile >> coursename >> firstname >> lastname >> grade1 >> grade2 >> grade3;
      //cout << coursename << firstname << lastname << grade1 << grade2 << grade3 << endl;
      /*Gradesfile >> firstname;
      Gradesfile >> lastname;
      Gradesfile >> grade1;
      Gradesfile >> grade2;
      Gradesfile >> grade3;
      */
      Gradesfile >> data[i].fn;
      Gradesfile >> data[i].ln;
      Gradesfile >> data[i].e1;
      Gradesfile >> data[i].e2;
      Gradesfile >> data[i].e3;
      
      cout << data[i].fn << data[i].ln << data[i].e1 << data[i].e2 << data[i].e3 << endl;
      i++;
     //float mean = (grade1 + grade2 + grade3) / 3;
     //cout << " The mean is: " << mean << endl;
  }
  
  
    
  return 0;
}
