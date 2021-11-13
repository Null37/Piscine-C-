#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class span
{
private:
    uint  N;
    std::vector<int> con_V; 
public:
    span();
    span(unsigned int  N);
    span(const span& old);
    ~span();


    int get_N();
    std::vector<int> get_v() const;


    void set_N(int);
    void set_V(int index, int number);
    span& operator=(const span&);
    
    void addNumbe(int tobAdd);
    class OUT_OF_RANGE: public std::exception
    {
        const char *what() const throw();
    };
    class CANT_SPAN: public std::exception
    {
        const char *what() const throw();
    };
    uint shortestSpan();
    uint longestSpan();
    
};






#endif