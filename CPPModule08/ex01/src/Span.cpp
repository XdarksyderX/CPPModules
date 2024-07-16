#include "Span.hpp"

Span::Span(size_t n)
{
	max = n;
}

Span::Span(const Span &s)
{
	if (this != &s)
	{
		vector = s.vector;
		max = s.max;
	}
}

Span &Span::operator=(const Span &s)
{
	if (this != &s)
	{
		vector = s.vector;
		max = s.max;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (vector.size() == max)
		throw Span::SpanIsFullException();
	vector.push_back(n);
}

const char *Span::SpanIsFullException::what() const throw()
{
	return ("The span is full!");
}

const char *Span::SpanTooSmallException::what() const throw()
{
	return ("The span have less items than needed!");
}

size_t Span::shortestSpan()
{
	if (vector.size() < 2)
		throw Span::SpanTooSmallException();
	std::sort(vector.begin(), vector.end());
	size_t shortest = UINT_MAX;
	for (int i = 0; i < (int) vector.size() - 1; i++)
		shortest = std::min(shortest, static_cast<size_t>(vector[i + 1] - vector[i]));
	return (static_cast<size_t>(shortest));
}

size_t Span::longestSpan()
{
	if (vector.size() < 2)
		throw Span::SpanTooSmallException();
	std::vector<int>::iterator max = std::max_element(vector.begin(), vector.end());
	std::vector<int>::iterator min = std::min_element(vector.begin(), vector.end());
	return (*max - *min);
}
