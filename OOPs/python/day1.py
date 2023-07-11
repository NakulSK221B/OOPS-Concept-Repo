# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
class Employee:
    Object_count=0;
    def __init__(self):
        Employee.Object_count = Employee.Object_count+1;
        self.input_credentials()
        self.Display_Credentials()
    
    def __del__(self):
        class_name=self.__class__.__name__
        print(class_name,"Class Object Destroyed.....") 
        
    def input_credentials(self):
        print("Please Enter Your Credentials....")
        self._name=str(input("Enter Your Name: "))
        self._ID=str(input("Enter Your ID: "))
        self._age=int(input("Enter Your Age: "))
        
    def Display_Credentials(self):
        if self._ID and self._age and self._name is not None:
            print("\nDisplaying Entered Credentials.....")
            print("\nEmployee Name:",self._name)
            print("Employee ID:",self._ID)
            print("Employee Age:",self._age)
            print("\nCurrent count of Employees: ",Employee.Object_count)
        else:
            print("Missing Credentials..... ")
        

Employee1=Employee()
Employee2=Employee()

print("----")