// -*- c++ -*-
#ifndef Dataarray_H
#define Dataarray_H

//#define USE_ASSERT
#ifdef USE_ASSERT
#include <assert.h>
#endif

//#define CHECK_Dataarray

#include <algorithm>
#include <iostream>
#include "../Expr/IndexG.h"
template < class A, class T, char i > class Expr1;
	
template < class T > class Dataarray
{	

	
	private:
	typedef  Dataarray<T> CSELFTYPE;
	int dim1;
	T * data;
	int allocated;
	public:

	~Dataarray ()
	{	
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Destructor = " << (this) << std::endl;
		#endif
		if (allocated != 0)
		{
			delete[]this->data;
		}
	
	}
	Dataarray (): dim1(0), data(0), allocated(0)
	{
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Construc.Default = " << (*this) << std::endl;
		#endif
	}
	Dataarray (int reqdim1):dim1(reqdim1), data(0), allocated(0)
	{
	
		if( dim1 > 0 )
		{
		   data = new T[dim1];
		   allocated = 1;
		}
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Construc.(int size) = " << (*this) << std::endl;
		#endif
	}
	Dataarray (const Dataarray & a) : dim1(a.dim1), data(a.data), allocated(0)
	{	
		int size = get_size();
		if (size > 0)
		{
			data = new T[size];
			allocated = 1;
			std::copy (a.data, a.data + size, data);
		}
		//std::cout << "Dataarray<>.Constructor(by Copyconst) = " << (*this) << std::endl;
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Constructor(by Copyconst) = " << (*this) << std::endl;
		#endif		
	}
	Dataarray (const Dataarray & a,const int & k) : dim1(a.dim1), data(a.data), allocated(0)
	{
		//std::cout << "Dataarray<>.Constructor(by Copyconst) = " << (*this) << std::endl;
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Constructor(by Copyconst) = " << (*this) << std::endl;
		#endif		
	}
	Dataarray (Dataarray & a,const int & k) : dim1(a.dim1), data(a.data), allocated(0)
	{
		//std::cout << "Dataarray<>.Constructor(by Copyconst) = " << (*this) << std::endl;
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Constructor(by Copyconst) = " << (*this) << std::endl;
		#endif		
	}
	Dataarray (Dataarray & a) : dim1(a.dim1), data(a.data), allocated(0)
	{
		int size = get_size();
		if (size > 0)
		{
			data = new T[size];
			allocated = 1;
			std::copy (a.data, a.data + size, data);
		}
		//std::cout << "Dataarray<>.Constructor(by Copy) = " << (*this) << std::endl;
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Constructor(by Copy) = " << (*this) << std::endl;
		#endif		
	}

	Dataarray (T * a, const int &dim1req):dim1(dim1req), data(a), allocated(0)
	{
		int size = get_size();
		if (size > 0)
		{
			data = new T[size];
			allocated = 1;
			std::copy (a, a + size, data);
		}
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Constructor(pointertodata,int size) = " 
			<< (*this) << std::endl;
		#endif
	}
	Dataarray (T * a, const int &dim1req,const int & k):dim1(dim1req), data(a), allocated(0)
	{/*
		if (size > 0)
		{
			data = new T[size];
			allocated = 1;
			std::copy (a, a + size, data);
		}
	*/
		#ifdef CHECK_Dataarray
			std::cout << "Dataarray<>.Constructor(pointertodata,int size) = " 
			<< (*this) << std::endl;
		#endif
	}

////////////////////////////////////////////////
// Define OPERATORS for Dataarray<T,rank=1>
////////////////////////////////////////////////

	Dataarray & operator= (const Dataarray & a)
	{      
		#ifdef USE_ASSERT
			assert (this->dim1 == a.dim1);
			assert (this != &a);
			assert (this->dim1 != 0);
		#endif
		std::copy (a.data, a.data + a.size, this->data);
			#ifdef CHECK_Dataarray
				std::cout << "Dataarray<>.Assign(const &Dataarray)" 
				<< (*this) << std::endl;
			#endif
		return (*this);
	}
	Dataarray & operator= (Dataarray & a)
	{      
		#ifdef USE_ASSERT
			assert (this->dim1 == a.dim1);
			assert (this != &a);
			assert (this->dim1 != 0);
		#endif
		std::copy (a.data, a.data + a.size, this->data);
			#ifdef CHECK_Dataarray
				std::cout << "Dataarray<>.Assign(&Dataarray)" 
				<< (*this) << std::endl;
			#endif
		return (*this);
	}
	Dataarray & operator+= (const Dataarray & a)
	{      
		#ifdef USE_ASSERT
			assert (this->dim1 == a.dim1);
			assert (this != &a);
			assert (this->dim1 != 0);
		#endif
		//std::copy (a.data, a.data + a.size, this->data);
		for (int n1 = 0; n1 < dim1; ++n1)
		{
			(*this)(n1) += a(n1);
		}

		#ifdef CHECK_Dataarray
				std::cout << "Dataarray<>.oper+=(const &Dataarray)" 
				<< (*this) << std::endl;
		#endif
		return (*this);
	}	//
	// create IndexedExpressions
	//
      

	template < char i >
	Expr1 < CSELFTYPE, T, i >
	operator() ( IndexG < i > &index)
	{
		//std::cout << "T1Exp=T1(IndexG)" << std::endl;
		return Expr1 < CSELFTYPE, T, i > (*this);
	}

	template < char i >
	Expr1 < const CSELFTYPE , T, i >
	operator() (const IndexG < i > &index) const
	{
		//std::cout << "T1Exp=constT1(IndexG)" << std::endl;
		return Expr1 < const CSELFTYPE, T, i > (*this);
	}

	template < char i >
	Expr1 < const CSELFTYPE , T, i >
	operator() (const IndexG < i > &index)
	{
		//std::cout << "T1Exp=constT1(IndexG)" << std::endl;
		return Expr1 < const CSELFTYPE, T, i > (*this);
	}
	//
	// Operator oveloading
	//
	T operator() (const int n) const
	{
		#ifdef USE_ASSERT
		//std::cout << "n " << n << "size " << size << std::endl;
		assert (n >= 0 && n < size);
		#endif
		return data[n];
	}

	T & operator() (const int n)
	{
		#ifdef USE_ASSERT
	      //std::cout << "n " << n << "size " << size << std::endl;
         	assert (n >= 0 && n < size);
		#endif
		return data[n];
	}
	//
	int get_size ()
	{
		return dim1;
	}
	int get_dim1 () const
	{
		return dim1;
	}


	inline void show_values ()
	{
		std::cout << "BEGIN:Dataarray<> = " << this << " pointing to " << data 
	      << " of dim1= " << dim1;
		std::cout << " allocated= " << allocated <<std::endl;
		std::cout << "[ ";
		for (int n1 = 0; n1 < dim1; ++n1)
		{
			std::cout << (*this)(n1) << " ";
		}
	      std::cout << "]" << std::endl <<"END:Dataarray<1>" << std::endl;
		return;
	}

	//
	// friend functions
	//
	friend std::ostream & operator<< (std::ostream & os,
					  const Dataarray & v)
	{
		os << "[ ";
		for (int n1 = 0; n1 < v.get_dim1(); ++n1)
		{
				os << v(n1) << " ";
		}
	      os << "]" << std::endl;
		return os;
	}

};


template < class T>
inline const Dataarray <T>
operator+  (const Dataarray < T > &ExprL, 
		const Dataarray < T > &ExprR)
{     
      //std::cout << "In opertor+(TExprR,TexpreL)" << std::endl; 
	//typedef const Sum_Expr1 < A, B, T, i > Sum_Expr1_Obj;
	return Dataarray< T >(ExprL) += ExprR;
}
#endif
