/**
 * @file vector.h
 *
 * Header file contain class vector,
 * which is the based class for the
 * class vector2d contain basic math
 * for vector algebra in 2D.
 *
 */

#ifndef _VECTOR_H_
#define _VECTOR_H_

//! the class vector basic definition, used as a base class for the class
//! vector2d & vector3d contain vector math algebra
#include <ostream>

//! Generic class definition of type Gtype
template <class Gtype>
class vector
{
  //! operator << overload declared as friend method, it's contain formatting
  //! output styles depend on object active or not.
  friend std::ostream& operator<<(std::ostream& os, const vector& v)
  {
    if (v.verbose)
      os << "Vector:[" << v.id << "] " << v.get_x() << "i+" << v.get_y() << "j";
    else
      os << "Vector:[" << v.id << "] <" << v.get_x() << "," << v.get_y() << ">";
    return os;
  }

 public:
  //! this is the default constructor definition of class vector
  vector();
  //! this is the Gtype constructor definition of class vector
  vector(Gtype, Gtype);

  //! this is the destructor definition of class vector
  ~vector();

  //! this is the get method of data members x, it return the value x which is
  //! of type Gtype
  Gtype get_x() const;

  //! this it the get method of data members y, it return the value y which is
  //! of type Gtype
  Gtype get_y() const;

  //! this is the getter method for data members counter, which is a counter of
  //! all objects created
  int get_counter() const;

  //! this is the getter method for data members id, which the id# of created
  //! object.
  int get_id() const;

  //! this is the definition of a test method, which is check the verbose of
  //! object true or false
  bool is_active() const;

  //! this is the setter method of x, which will set the value of x.
  void set_x(Gtype);

  //! this is the setter method of y, which will set the value of y.
  void set_y(Gtype);

  //! this is the setters method for object id#, which will set the id# value of
  //! object.
  void set_id(int);

  //! this is the setters method for object status active/inactive
  void set_active(bool);

  // this is the definition of virtual display method, for object display.
  virtual void display() const;

 protected:
  //! this is the data members of vector object represent the
  //! x-coordinate of the vector take(int,float,double).
  Gtype x{};

  //! this is the data members of vector object represent the
  //! y-coordinate of the vector take(int,float,double).
  Gtype y{};

  //! this is static data member for count all the created
  //! objects.
  static int counter;

  //! this is the data member represent the created object id number, each
  //! object will take a number when created.
  int id{};

  //! this is the data member, which set object verbose
  //! state active or inactive
  bool verbose{false};

};      //! end vector
#endif  // !_VECTOR_H_
