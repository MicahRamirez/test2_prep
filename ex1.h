
//define a abstract shape class that defines the basics of the qualities of a shape object with r/w operators, equality operator
//make design decisions based on what should be virtual, pure virtual, and what should
//be implemented in the parent class

//After defining the abstract class create a rectangle derived class and a cylinder derived class

#include <utility>

using namespace std; 
//using rel_ops::operator!=;

class AbstractShape {
	
	//Instance vars of a base shape
	private:
		unsigned int _width;
		unsigned int _height;

	public:

		AbstractShape(unsigned int width, unsigned int height) : 
			_width(width), 
			_height(height) 
		{}

		AbstractShape(const AbstractShape&) = default;
		AbstractShape(AbstractShape&&) = default;

		/**
		* Needs to be virtual so that objects are destructed in order
		* IF this wasn't virtual we'd have a memory leak
		*/
		virtual ~AbstractShape()
			{}

		//Area of a generic shape cannot be computed abstractly
		virtual unsigned int get_area(){return 0;}

		/**
		* Move method 
		* In a traditional sense shapes have width and height
		*/
		virtual void move(unsigned int new_width, unsigned int new_height){
			this->_width = new_width;
			this->_height = new_height;
		}
}