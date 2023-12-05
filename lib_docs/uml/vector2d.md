### ___The UML Diagram___
---
In the vector2d library there is many class, one of them is ___vector2d class___ which is the class contain ___basic vector math algebra___. We will use the ___ASCII Diagram___ to make our class diagram alive and modren.

#### Vector2d Class Diagram:
_In figure below the UML of vector2d class:_

```lua
+-----------------------------------------------------------+
|                  vector2d : public vector                 |
+-----------------------------------------------------------+
| + vector2d() : vector2d<Gtype>(0,0)                       |
| + vector2d(Gtype,Gtype) : vector2d<Gtype>(x,y)            |
| + vector2d(const vector2d<Gtype>&) : vector2d<Gtype>(x,y) |
| + ~vector2d() :                                           |
+-----------------------------------------------------------+
| + operator+(vector2d<Gtype>&) : vector2d<Gtype>           |
| + operator-(vector2d<Gtype>&) : vector2d<Gtype>           |
| + operator* (Gtype>&) : vector2d<Gtype>                   |
| + operator/(Gtype&) : vector2d<Gtype>                     |
| + operator+=(vector2d<Gtype>&) : vector2d<Gtype>          |
| + operator-=(vector2d<Gtype>&) : vector2d<Gtype>          |
| + operator*=(Gtype&) : vector2d<Gtype>                    |
| + operator/=(Gtype&) : vector2d<Gtype>                    |
| + operator()(Gtype&,Gtype&) : vector2d<Gtype>             |
+-----------------------------------------------------------+
| + add(const vector2d<Gtype>&): vector2d<Gtype>            |
| + sub(const vector2d<Gtype>&): vector2d<Gtype>            |
| + multi(const Gtype&): vector2d<Gtype>                    |
| + divide(const vector2d<Gtype>&): vector2d<Gtype>         |
| + divide(const Gtype&): vector2d<Gtype>                   |
| + dot(const vector2d<Gtype>&): Gtype                      |
| + length(): Gtype                                         |
| + normalize(): vector2d<Gtype>                            |
| + is_normaliz(): bool                                     |
| + reflect(const vector2d<Gtype>&): vector2d<Gtype>        |
| + distance_to(Gtype&,Gtype&): Gtype                       |
| + rotate(double&): void                                   |
| + projection(vector2d<Gtype>&): vector2d<Gtype>           |
| + update(double&,double&): vector2d<Gtype>                |
+-----------------------------------------------------------+
```

#### Vector2d Class Brief:

   This class inherited publicly from ___vector class___, in the library we are used two version of this class, where one of them is ___vector2d___ which change the caller object and modified it, while the other one is ___immutable::vector2d___ which is not modified the caller object but it return ___new vector2d object___.

- ___Class Fileds:___
  - there is no new fileds in the this class all will inherited from vector class.

- ___Class Constructor:___
  - vector2d(): this is a constructor create vector2d<Gtype>, where (x=0,y=0).
  - vector2d(Gtype,Gtype): this is a constructor create vector2d<Gtype>, where (x,y)
  - vector2d(const vector2d<Gtype>&): this is a copy constructor create vector2d<Gtype>, copied from other object.

- ___Class Destructor:___
  - ~vector2d(): this is the vector2d class destructor, which destory the created objects.

- ___Class Operators Overloads___

  - operator+ : this is the (+) operator overload to simply use this operator with vector2d class object.
  - operator- : this is the (-) operator overload to simply use this operator with vector2d class object.
  - operator* : this is the (*) operator overload to simply use this operator with vector2d class object.
  - operator/ : this is the (/) operator overload to simply use this operator with vector2d class object.
  - operator+=: this is the (+=) operator overload to simply use this operator with vector2d class object.
  - operator-=: this is the (-=) operator overload to simply use this operator with vector2d class object.
  - operator*=: this is the (*=) operator overload to simply use this operator with vector2d class object.
  - operator/=: this is the (/=) operator overload to simply use this operator with vector2d class object.
  - operator(): this is the () operator overload to simply use class call like function call, which update the postion of an object.

- ___Class Methods:___

  - add: this method is used to add one vector object to another one and return a vector object.
  - sub: this method is used to sub one vector object from another and return a vector object.
  - multi: this method is used to multiply vector object by scalar and return a vecgtor object.
  - divide: this method is used to divided vector by a scalar and return a vector object.
  - divide: this method is overloaded to divided one vector object by another and return a vector object.
  - dot: this method is used to find the dot product of two vectors in 2d space and return double result.
  - length: this method is used to find the length of a vector object and return the result.
  - normalize: this method is used to normalize the vector object (make it's length equal to 1).
  - is_normaliz: this method is used to test if a vector object is normal or not.
  - reflect: this method is used to find a vector object reflection on another vector object.
  - distance_to: this method is used to find the distance between a vector object and a point in the space.
  - rotate: this method is used to rotate the vector object by a given angle (theta) counter clockwise.
  - projection: this method is used to find the projection of vector on another vector object.
  - update: this method is used to update the position of a vector to another one.
------
As i mentioned earlier this class inherited from the class vector. This class has two version can be used in vector algebra one is update the fileds of the caller object which is ___(vector2d)___, and the other one just return a new vector object which is ___(immutable::vector2d)___, so you can use both of them interchangable in your work as needed according to problem you may need our library to simplify.
