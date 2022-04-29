template< typename T >

Array<T>::Array( void ) :
	_ptr(0), _length(0)
{
	_ptr = new T[0];
}

template< typename T >
Array<T>::Array ( unsigned int i ) :
	_ptr(0), _length(i)
{
	this->_ptr = new T[_length]();
}

template< typename T >
Array<T>::Array ( const Array &rhs ) :
	_ptr(0), _length(rhs._length)
{
	if (_length) {
		_ptr = new T[_length];
		for (unsigned int i = 0; i < _length; i++) {
			_ptr[i] = rhs._ptr[i];
		}
	}
}

template< typename T >
Array<T>::~Array()
{
	delete[] _ptr;
}

template< typename T >
Array<T> & Array<T>::operator = ( const Array &rhs )
{
	delete [] _ptr;
	_length = rhs._length;
	_ptr = new T[_length];
	for (unsigned int i = 0; i < _length; i++) {
		_ptr[i] = rhs._ptr[i];
	}
	return (*this);
}

template< typename T >
T & Array<T>::operator [] ( unsigned int index )
{
	if (index < 0 || index >= _length)
		throw Array<T>::OutOfBounds();
	return (_ptr[index]);
}

template< typename T >
unsigned int	Array<T>::size( void ) const
{
	return (_length);
}

template< typename T >
const char *Array<T>::OutOfBounds::what() const throw ()
{
	return ("Array Exception: Index out of bounds.");
}