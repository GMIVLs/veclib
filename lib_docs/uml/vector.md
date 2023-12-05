### ___The UML Diagram___
---
In our project there is many class, one of them is ___vector class___ which is the base class of ___vector2d class___. We will use the ___ASCII ART___ to make our class diagram alive and modren.

#### Vector Class Diagram:
_In the ASCII diagram below the UML of vector class:_


```lua
+-----------------------------------------+
|                vector                   |
+-----------------------------------------+
| - x : double                            |
| - y : double                            |
| - id: int                               |
| - verbose: bool                         |
+-----------------------------------------+
| + vector() : vector<Gtype>              |
| + vector(Gtype,Gtype) : vector<Gtype>   |
| + ~vector() :                           |
+-----------------------------------------+
| + set_x(Gtype) : void                   |
| + set_y(Gtype) : void                   |
| + set_active(bool) : void               |
| + set_id(int) : void                    |
|--------------------------               |
| + get_x() : Gtype                       |
| + get_y() : Gtype                       |
| + get_id(): int                         |
|--------------------------               |
| + is_active() : bool                    |
| + display() : void                      |
|--------------------------               |
| + operator<<(ostream&,vector&) : vector |
+-----------------------------------------+
```
-------
the class uml above show the main fileds, operator overload, and methods that simply made this class a base for other classes like vector2d and immutable::vector2d.

#### Vector Class Brief:

- ___Class Fileds:___
  - x: the x-coordinate of the vector, which of type (int, double, float).
  - y: the y-coordinate of the vector, which of type (int, double, float).
  - id: the number of vector when created, which of type (int).
  - verbose: show the vector activation, which of type (bool).

- ___Class Constructor:___
  - vector(): this constructor create an object of what primitive type (Gtype), where (x=0, y=0).
  - vector(Gtype,Gtype): this constructor create an object of primitive type (Gtype), where (x=Gtype, y=Gtype).

- ___Class Destructor:___
  - ~vector(): this class destructor destroy the created object class, also check for verbose state.

- ___Class Operator Overload:___
  - operator<<: this operator overloaded so the output of vector object like (xi+yj).

- ___Class Setters Methods:___
  - set_x(Gtype): this is a simple setters for set the x-coordinate.
  - set_y(Gtype): this is a simple setters for set the y-coordinate.
  - set_id(int): this is a simple setters for set the object id number.
  - set_active(bool): this is a simple setters for set the object verbose to (true of false).

- ___Class Getters Methods:___
  - get_x(): this is a simple getters for get the value of x-coordinate.
  - get_y(): this is a simple getters for get the value of y-coordinate.
  - get_id(): this is a simple getters for get the value of object id#.

- ___Class Test Method:___
  - is_active(): this is a simple test methods, which check the verbose of an object.

- ___Class Display Method:___
  - display(): this is a vector object display method for console output.

this class is a part of the vector math in 2d space library, which is a part of ___Graphic Engine___. This class is a based class for the vector2d, and immutable::vector2d class.
