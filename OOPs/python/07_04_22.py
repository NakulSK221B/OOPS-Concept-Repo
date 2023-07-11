# -*- coding: utf-8 -*-
"""
Created on Thu Apr  7 10:30:00 2022
@author: NAKUL

"""
import day1

class human:
    def __init__(self,name):
        print("\nHuman Class Created....")
        self.name=name
        #
        super().__init__()
        print("\nHuman:",self.name)
        return self.name
    
class person:
    #Latest_name_entry=''
    def __init__(self,name):
        print("\nPerson Created....")
        self.name=name
        super().__init__('ABC')
        #person.Latest_name_entry=name
        print("\nPerson Name:",self.name)
        return self.name
        
    def printdetails(self):
        print("\nPrinting Person's Credentials....")
    
    def __del__(self):
        print("\nPerson Destroyed....")
        
class Faculty(person,human):
    def __init__(self):
        #person.__init__(self) #To call base class constructor in derived class
        faculty_name=super().__init__('ABC')
        print("\nFaculty Added....")
        self.printdetails(faculty_name)
        
    def printdetails(self,faculty_name):
        print("\nPrinting Faculty Credentials....")
        print("\nFaculty Name:",faculty_name)
        
    def __del__(self):
        print("\nFaculty Removed....")

#p1=person()
#p1.printdetails()

f1=Faculty()
del f1