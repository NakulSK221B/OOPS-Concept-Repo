# -*- coding: utf-8 -*-
"""
Created on Sat Mar 19 16:35:22 2022

@author: USER
"""
"""
SIMPLE CLASS
class Employee:
    empID = 0
    
emp = Employee ()
print ("Employee ID is ", emp.empID)

"""

"""
# CLASS WITH DEFAULT CONSTRUCTOR
class Employee:
    def __init__(self):
        self.name = "no name"
        self.id = 0
        
emp = Employee ()
print ("Employee ID is ", emp.id)
print ("Employee name is ", emp.name)
"""

def printClassDetails (emp):
    emp.printDetails()
    

class Person:
    pass

# CLASS WITH PARAMTER CONSTRUCTOR
class Employee:
    
    # CLASS ATTRIBUTES
    type = "Full-time"
    
    #PRIVATE / HIDDEN
    __count = 0
    
    #PROTECTED
    _cnt = 0
    
    def __init__(self, name, id=420):
        #INSTANCE ATTRIBUTES
        # PUBLIC
        self.name = name
        self.id = id
        Employee.__count = Employee.__count + 1
        Employee._cnt = Employee._cnt + 2
    
    def __del__(self):
        print ("Destroying object with name {0} and ID {1}".format (self.name, self.id))
    
    def __str__(self):
        return "CLASS DETAILS: Employee {0} with ID {1} is working as {2}".format(self.name, self.id, self.type)
    def incrementCount (self):
        self.__count = self.__count + 1
        
    def getCount (self):
        return self.__count
    
    @staticmethod
    def getClsCount ():
        return Employee.__count
    
    def incrementCnt (self):
        self._cnt = self._cnt + 2
    
    def printDetails(self):
        print ("printDetails: Employee ID is ", self.id)
        print ("printDetails: Employee name is ", self.name)
        print ("printDetails: Employee type is ", self.type)
        print ("printDetails: Class COUNT is ", self.__count)
        print ("printDetails: Class CNT is ", self._cnt)
        
    def setID (self, id):
        self.id = id
        
    @classmethod
    def printEmployeeType (cls):
        print ("Employee is of type ", cls.type)
        
emp = Employee ("Sachin", 112)
print ("Employee ID is ", emp.id)
print ("Employee name is ", emp.name)
print (emp.type)
print ("1-------------------")
#emp.incrementCount()
#emp.incrementCnt()
print ("Count is ", emp.getCount())
print ("Cnt is ", emp._cnt)
emp.setID(211)

emp.printDetails()

print (emp)

#del emp

Employee.type = "???"

emp1 = Employee ("SK", 222)
emp1.type = "Part-time"

print ("2-------------------")
emp1.printDetails()

print ("3-------------------")
printClassDetails (emp1)

print ("4-------------------")
emp2 = Employee("Max")
printClassDetails (emp2)

print ("5-------------------")
emp2.printEmployeeType()
Employee.printEmployeeType()
print (Employee.getClsCount())

print ("6-------------------")
