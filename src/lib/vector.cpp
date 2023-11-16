/**
 *
 * @file vector.cpp
 * this is the implementation of the
 * header vector.h of vector algebra
 * math.
 *
 */

#include "vector.h"

#include <iostream>

//! this is the objects counter initializing
template <class Gtype>
int vector<Gtype>::counter = 0;

//! this is the implementation of the vector class constructors
template <class Gtype>
vector<Gtype>::vector() : x{}, y{}
{
  ++counter;
  id = counter;
  verbose = false;
}
template <class Gtype>
vector<Gtype>::vector(Gtype x, Gtype y) : x{x}, y{y}
{
  ++counter;
  id = counter;
  verbose = false;
}
//! this is the implementation of the vector class destructor
template <class Gtype>
vector<Gtype>::~vector()
{
  if (verbose)
    std::cout << "Vector:[" << id << "]"
              << ", was deleted successfully" << '\n';
}
//! this is the implementation of the getters methods of x & y
template <class Gtype>
Gtype vector<Gtype>::get_x() const
{
  return this->x;
}
template <class Gtype>
Gtype vector<Gtype>::get_y() const
{
  return this->y;
}
//! this is the implementation of getters method of all created objects counter
template <class Gtype>
int vector<Gtype>::get_counter() const
{
  return this->counter;
}
//! this is the implementation of object vector id# getters method
template <class Gtype>
int vector<Gtype>::get_id() const
{
  return this->id;
}
// this is the implementation of the setters methods for x & y
template <class Gtype>
void vector<Gtype>::set_x(Gtype x_cord)
{
  this->x = x_cord;
}
template <class Gtype>
void vector<Gtype>::set_y(Gtype y_cord)
{
  this->y = y_cord;
}
//! this is the implementation of object id# setters method
template <class Gtype>
void vector<Gtype>::set_id(int new_id)
{
  this->id = new_id;
}
//! this the implementation of verbose state
template <class Gtype>
void vector<Gtype>::set_active(bool state)
{
  this->verbose = state;
}
//! this is the implementation of is_active() check method
template <class Gtype>
bool vector<Gtype>::is_active() const
{
  if (this->verbose)
    return true;
  else
    return false;
}
//! this is the implementation of the display method of the vector
template <class Gtype>
void vector<Gtype>::display() const
{
  std::cout << "Vector is [ " << this->get_x() << " : " << this->get_y() << " ]"
            << std::endl;
}

// instantation of the class to work with different primitive data type
template class vector<double>;
template class vector<float>;
template class vector<int>;
