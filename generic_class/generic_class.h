#ifndef GENERIC_CLASS_H
#define GENERIC_CLASS_H



template <typename T>
class MyClass
{
private:
	T x;
public:
	MyClass(T xx);	
	T getx() const;
	void setx(T ax);
};

template <typename T>
MyClass<T>::MyClass(T xx)
		: x{ xx }
	{}

template <typename T>	
T MyClass<T>::getx() const
	{
		return x;
	}

template <typename T>
void MyClass<T>::setx(T xx)
	{
		x = xx;
	}



#endif // GENERIC_CLASS_H