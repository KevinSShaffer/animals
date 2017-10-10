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
Name:  main.h
  Contains the definitions for the main methods.

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
   at https://github.com/KevinSShaffer/ship


*******************************************************
   How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip ShafferHW3.zip

   Now you should see:
    Directory named 'grid' with the files:
      main.h
      main.cpp
      grid.h
      grid.cpp
      makefile
      README.md
    Directory named 'ship' with the files:
      main.cpp
      main.h
      position.cpp
      position.h
      README.md
      makefile
      submarine.cpp
      submarine.h
      water_vehicle.cpp
      water_vehicle.h

2. Build the program.
    Change to the directory that contains the file by:
    % cd ship 

    Compile the program by:
    % make

3. Run the program by:
   % ./ship

4. Delete the obj files, executables, and core dump by
   % make clean