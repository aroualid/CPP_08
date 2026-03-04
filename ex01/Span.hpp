
#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <limits>
#include <iostream>
class Span {

public:
	class NoMoreSpaceException : public std::exception 
	{	
		virtual const char *what() const throw();
	};
	class NotEnoughNumbersException : public std::exception 
	{	
		virtual const char *what() const throw();
	};
	Span(unsigned int n);
	Span(Span const & src);
	~Span();
	Span &operator=(Span const & src);
	void addNumber(int number);
	int shortestSpan();
	int longestSpan() const;
	void addMultiplesNumbers(std::vector<int> &new_numbers);
	//void printVector();
private:
	Span();
	unsigned int n;
	std::vector<int> vect;
};

#endif
