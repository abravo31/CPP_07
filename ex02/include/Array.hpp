#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>
# include <cstdlib>

template <typename T>

class Array{

    public:
    // Constructor with no parameters
        Array( void ) : _elem(NULL), _arraySize(0){
            std::cout << "Constructor with no parameters called" << std::endl;
        }

    // Constructor with unsigned int parameter
        explicit Array( unsigned int n ) : _arraySize(n) {
            std::cout << "Constructor with unsigned int parameter called" << std::endl;
            _elem = new T[_arraySize];

            for( unsigned int i = 0; i < _arraySize; i++ ){
                _elem[i] = T(); //Initialize Default value
            }
        }

    // Copy constructor
        Array( const Array& copy ) : _arraySize(copy._arraySize){
            std::cout << "Constructor Copy called" << std::endl;
            _elem = new T[_arraySize];
            
            for( unsigned int i = 0; i < _arraySize; i++ ){
                _elem[i] = copy._elem[i];
            }
        }
    
    // Destructor
        ~Array( void ){
            std::cout << "Destructor called" << std::endl;
            delete[] _elem;
        }

    // Assignement operator            
        Array&  operator = ( const Array& src ){
            std::cout << "Assignement operator called" << std::endl;
            if( this != &src ){
                delete[] _elem;
                _arraySize = src._arraySize;
                _elem = new T[_arraySize];
                for( unsigned int i = 0; i < _arraySize; i++ ){
                    _elem[i] = src._elem[i];
                }
            }
            return *this;
        }

        T&      operator [] ( unsigned int index  ){
            if ( index >= this->_arraySize )
                throw std::out_of_range("Index is out of bonds");
            return this->_elem[index];
        }

    // Functions Member
        unsigned int size() const{
            return this->_arraySize;
        }

    private:
        T*              _elem;
        unsigned int    _arraySize;
};

#endif
