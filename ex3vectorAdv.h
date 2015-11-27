//Create a vector class that utilizes an allocator
//define default construction, copy construction of both 
//const type and non const... (IE vector&& rhs)
//define assignment operator for const and non const
//define a destructor
//define indexing and iterators

#include <algorithm> // equal, lexicographical_compare
#include <cstddef>   // ptrdiff_t, size_t
#include <memory>    // allocator
#include <stdexcept> // out_of_range
#include <utility>   // !=, <=, >, >=, swap

//using namespace std::rel_ops; // doesn't compile
using std::rel_ops::operator!=;