# CPP
C with classes, finally Object-Oriented-Programming.

* **Object Oriented Programming** : Object-Oriented Programming (OOP) is a programming paradigm that **uses objects and classes to organize and structure code**. It models real-world entities and their interactions, allowing for more modular, reusable, and maintainable code.

## Tutorial

* **Class** : In order to describe the real world entity, we need two things: characteristics and functions. A class is a mechanism of binding these two methods in a single unit.
```c++
class MyClass
{
	Access_Specifier;
	Data Members;
	myfunc //Member Functions()
	{
	//body
	}
}
```

* **Object** : An object can be defined as an instance ofa class. No memory is allocated when we define a class. When an object is created then memory is allocated. *Syntax: Class_name Obj_name;*
```c++
MyClass myObj;
```
* **Member Functions** : Any function that is declared as part of class. It is invoked by sending messages to an instance of class. The dot(.) operator is used to access public members of a class.
```c++
MyClass myObj;

myObj.myfunc();
```

* **Constructor** : A special type of member function of a class that is called automatically whenever an object is created. Can be either parameterized or not. Must be same name as class name. 
```c++
MyClass(arguments);
//or
MyClass(void);
```

* **Destructor** : A special member function that destorys the object as soon as the scope of the object ends.
```c++
~MyClass(void);
```

**Are Const. Dest. MUST-TO-HAVE IN A CLASS?** No, compiler provides default Const. Dest. unless it is provided.

<br/>

In C++, the `::` symbol is called the **scope resolution operator**. It is used to define the context in which a name is defined, which can be particularly useful for specifying which class or namespace an identifier belongs to. After **scope resolution operator** you can use the features in the namespace or class. `cout` = character out. Terminate a statement with semicolon like in C.<br/>

```c++
#include <iostream>

int main() 
{
	std::cout << "Hello, World" << std::endl;
	return 0;
}
```

* **Namespace**

	A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc.) inside it. Namespaces are used to organize code into logical groups and **to prevent name collisions that can occur especially when your code base includes multiple libraries**.

* **Class**
  
  A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

* **Access specifiers**
  define how the members (attributes and methods) of a class can be accessed. In the example below, the members are ***public*** - which means that they can be accessed and modified from outside the class. ***Private*** = Accessed only from within the class, by function for example. ***Protected***-accessed from inside and outsied of class with the help of friend function(?).
  
```c++
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}
```

* **static elements in class**
  
  In C++, static member functions belong to the class rather than to any particular object instance of the class. This means they can be called without an object of the class. **Static member functions can access static data members and other static member functions but cannot access non-static members directly**. 

## Important

header file with the extension ***.hpp*** is specifically for cpp. ***.h*** is compatable in C and C++.

* **Ampersand(&)**
  
  In C++, **&** in the function signature denotes a reference, which allows you to work directly with the original object and make changes if needed.

  In C, **&** is used to get the address of a variable, and to modify data, you pass pointers to the function.
So while the & symbol in function signatures in C++ and C serves different roles, the concept of passing data to a function without copying it (through references in C++ or pointers in C) is similar in both languages.

* **Stack** VS **Heap**
  **Stack** : a region of static memory allocation. Region for local variables, paramters in a function, life-time is limited to the scope they are defined. Faster due to LIFO(Last In First Out).
  **Heap** : a region for dynamically allocated memory. With keyword `new`, `delete` in C++, or `malloc`, `free` in C. Slower than Stack. Much more space available than stack.
## References 
https://www.youtube.com/watch?v=vIcOhM_Vkc4
