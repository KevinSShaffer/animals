*******************************************************
*  Name      :  Kevin Shaffer
*  Student ID:  106069743
*  Class     :  CSCI 2312-001        
*  HW#       :  4
*  Due Date  :  Oct 10th, 2017
*******************************************************

## Read Me


*******************************************************
   Description of the program
*******************************************************

This application demonstrates inheritance but having a 
base class of animal and derived classes as types of 
animals.  The project also uses file streams as a 
method of reading in the data required to instantiate
the objects.  Error checking and exception handling is 
also demonstrated.


*******************************************************
   Source files
*******************************************************

Name:  main.cpp
  Main program.  This is the driver program that takes
  the user's input and uses it to create the animal
  objects and handles the output.

Name:  str_func.h
  Contains the definitions for the string functions
  and places them in their own namespace.

Name:  str_func.cpp
  Contains the member functions for the string 
  functions.

Name:  exceptions.h
  Contains the definitions for the custom
  exceptions used by the animal classes.

Name:  exceptions.cpp
  Contains the member functions for the exception
  classes.

Name:  animal.h
  Contains the definitions for the Animal base
  class.

Name:  animal.cpp
  Contains the implementation of the Animal
  class.

Name:  [derived animal classes].h
  Contains the definitions for the classes
  derived from the Animal class.

Name:  [derived animal classes].cpp
  Contain the implemntation of the derived classes.

Name: files
  Directory containing the files used to generate
  the animal objects.
   
   
*******************************************************
   Circumstances of programs
*******************************************************

   The program runs successfully.
   
   The program was developed using the sublime text
   editor and compiled using gcc version 7.2.0 
   (Rev1, Built by MSYS2 project).

   The program was also tested by compiling and running
   on CSEGrid.

   This application lives in an open source repository
   at https://github.com/KevinSShaffer/animals


*******************************************************
   How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip ShafferHW4.zip

   Now you should see:
    Directory named 'animals' with the files:
      animal.cpp
      exceptions.cpp
      fish.h
      lizard.h
      monkey.h
      animal.h
      exceptions.h
      horse.cpp
      main.cpp
      README.md
      dog.cpp
      horse.h
      makefile
      str_func.cpp
      dog.h
      fish.cpp
      lizard.cpp
      monkey.cpp
      str_func.h

    Directory named 'files' with the files:
      Dog.csv
      Fish.csv
      Horse.csv
      Lizard.csv
      Monkey.csv

2. Build the program.
    Change to the directory that contains the file by:
    % cd animals 

    Compile the program by:
    % make

3. Run the program by:
   % ./animals

4. Delete the obj files, executables, and core dump by
   % make clean