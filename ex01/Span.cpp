
#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int n) : n(n)
{}

Span::~Span()
{}

Span::Span(Span const & src)
{
	*this = src;
}


Span& Span::operator=(Span const & src)
{
	if (this != &src)
	{
		vect = src.vect;
		n = src.n;
	}
	return (*this);
}

void Span::addNumber(int number)
{
	if (vect.size() < n)
		vect.push_back(number);
	else
		throw NoMoreSpaceException();
}

int Span::shortestSpan()
{
	if (vect.size() < 2)
		throw NotEnoughNumbersException();
	int result =  std::numeric_limits<int>::max();
	std::sort(vect.begin(), vect.end());
	for (unsigned int i = 0; i < vect.size() - 1; i++)
	{
		if (vect[i + 1] - vect[i] < result)
			result = vect[i + 1] - vect[i];
	}
	return result;
}

int Span::longestSpan() const
{
	if (vect.size() < 2)
		throw NotEnoughNumbersException();
	return (*std::max_element(vect.begin(), vect.end()) - *std::min_element(vect.begin(), vect.end()));
}

void Span::addMultiplesNumbers(std::vector<int> &new_numbers)
{
	if (vect.size() + new_numbers.size() > n)
		throw NoMoreSpaceException();
	vect.insert(vect.end(), new_numbers.begin(), new_numbers.end());
}

const char *Span::NoMoreSpaceException::what() const throw()
{
	return ("no more space in span, can't add another integrer\n");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return ("not enough number to answer\n");
}

void Span::printVector()
{
	std::sort(vect.begin(), vect.end());
	for (unsigned int i = 0; i < vect.size(); i++)
	{
		std::cout << vect[i] << ", ";
	}
	std::cout << std::endl;
}
