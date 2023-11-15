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

//! vector basic definition
#include <ostream>

//! Generic class definition
template <class Gtype>
class vector
{
  friend std::ostream& operator<<(std::ostream& os, const vector& v)
  {
    if (v.verbose)
      os << "Vector:[" << v.id << "] " << v.get_x() << "i+" << v.get_y() << "j";
    else
      os << "Vector:[" << v.id << "] <" << v.get_x() << "," << v.get_y() << ">";
    return os;
  }

 public:
  //! this is the constructors definition of class vector
  vector();
  vector(Gtype, Gtype);

  //! this is the destructor definition of class vector
  ~vector();

  //! this is the public getters methods for x and y
  Gtype get_x() const;
  Gtype get_y() const;
  //! this is the public getters methods for id & counter
  int get_counter() const;
  int get_id() const;
  //! this is the test method to check the verbose of object
  bool is_active() const;

  //! this is the public setters methods for x and y
  void set_x(Gtype);
  void set_y(Gtype);
  //! this is the setters method for object id#
  void set_id(int);
  //! this is the setters method for object verbose state
  void set_active(bool);

  // this is the definition of virtual display method
  virtual void display() const;

 protected:
  Gtype x{};            // x coordinate of the vector
  Gtype y{};            // y coordinate of the vector
  static int counter;   // Created Objects Counter
  int id{0};            // created object ID#
  bool verbose{false};  // object verbose state active or inactive
};
#endif  // !_VECTOR_H_
