#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>


int main() {
    {
        std::cout << "=== MUTANTSTACK ===" << std::endl;
        MutantStack<int> mstack;
        mstack.push(0);
        mstack.push(1);
        mstack.push(2);
        mstack.push(3);
        mstack.push(4);
        mstack.push(5);
        mstack.push(6);
        mstack.push(7);
        mstack.push(12);
        mstack.pop(); // Supprime le 12

        std::cout << "iterators" << std::endl;
        std::cout << "___________________________________" << std::endl;
        for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
            std::cout << "[" << *it << "]" << std::endl;
        std::cout << "___________________________________" << std::endl;

        std::cout << "const iterators" << std::endl;
        std::cout << "___________________________________" << std::endl;
        for (MutantStack<int>::const_iterator c_it = mstack.begin(); c_it != mstack.end(); c_it++)
            std::cout << "[" << *c_it << "]" << std::endl;
        std::cout << "___________________________________" << std::endl;

        std::cout << "reverse iterators" << std::endl;
        std::cout << "___________________________________" << std::endl;
        for (MutantStack<int>::reverse_iterator r_it = mstack.rbegin(); r_it != mstack.rend(); r_it++)
            std::cout << "[" << *r_it << "]" << std::endl;
        std::cout << "___________________________________" << std::endl;

        std::cout << "const reverse iterators" << std::endl;
        std::cout << "___________________________________" << std::endl;
        for (MutantStack<int>::const_reverse_iterator cr_it = mstack.rbegin(); cr_it != mstack.rend(); cr_it++)
            std::cout << "[" << *cr_it << "]" << std::endl;
        std::cout << "___________________________________" << std::endl;
    }

    std::cout << std::endl << "=== STD::VECTOR ===" << std::endl;

    {
        std::vector<int> v;
        v.push_back(0);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
        v.push_back(7);
        v.push_back(12);
        v.pop_back();

        std::cout << "std::vector iterators" << std::endl;
        std::cout << "___________________________________" << std::endl;
        for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
            std::cout << "[" << *it << "]" << std::endl;
        std::cout << "___________________________________" << std::endl;

        std::cout << "std::vector reverse iterators" << std::endl;
        std::cout << "___________________________________" << std::endl;
        for (std::vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); rit++)
            std::cout << "[" << *rit << "]" << std::endl;
        std::cout << "___________________________________" << std::endl;
    }

    return 0;
}
