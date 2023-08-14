#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename Func>
void    iter( T* array, size_t lenght, Func function ){
    for( size_t i = 0; i < lenght; i++ )
        function( array[i] );
}

// Exemple of function for testing
template <typename T>
void    printElement( const T& elem ){
    std::cout << elem << " - ";
}

#endif