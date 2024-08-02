# CPP
C with classes

## Tutorial

```c++
#include <iostream>

int main() 
{
	std::cout << "Hello, World" << std::endl;
	return 0;
}
```

In C++, the `::` symbol is called the **scope resolution operator**. It is used to define the context in which a name is defined, which can be particularly useful for specifying which class or namespace an identifier belongs to. After **scope resolution operator** you can use the features in the namespace or class.

`cout` = character out

terminate a statement with semicolon like in C.

* **Namespace**

	A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc.) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

* **Class**
  
  A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

* **Access specifiers** define how the members (attributes and methods) of a class can be accessed. In the example above, the members are public - which means that they can be accessed and modified from outside the code.
  
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


## Important

header file with the extension ***.hpp*** is specifically for cpp. ***.h*** is compatable in C and C++.
