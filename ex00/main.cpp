#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include "easyfind.hpp"

int main()
{
    // VECTOR
	std::cout << "_____VECTOR____\n";
    std::vector<int> v(5);
    for (int i = 0; i < 5; ++i)
        v[i] = i * 10;
    std::cout << "vector: ";
    for (size_t i = 0; i < v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << std::endl;

    int rechercheV = 20;
    std::cout << "Recherche dans vector : " << rechercheV << std::endl;
    try {
        std::vector<int>::iterator it = easyfind(v, rechercheV);
        std::cout << "Trouvé dans vector: " << *it << std::endl;
    } catch (const std::exception&) {
        std::cout << "Non trouvé dans vector !" << std::endl;
    }

    int absentV = 999;
    std::cout << "Recherche dans vector : " << absentV << std::endl;
    try {
        easyfind(v, absentV);
    } catch (const std::exception&) {
        std::cout << absentV << " n'est pas dans le vector !" << std::endl;
    }

    // DEQUE
	std::cout << "_____DEQUE____\n";
    std::deque<int> d(4);
    for (int i = 0; i < 4; ++i)
        d[i] = i * 5;
    std::cout << "deque: ";
    for (size_t i = 0; i < d.size(); ++i)
        std::cout << d[i] << " ";
    std::cout << std::endl;

    int rechercheD = 10;
    std::cout << "Recherche dans deque : " << rechercheD << std::endl;
    try {
        std::deque<int>::iterator it = easyfind(d, rechercheD);
        std::cout << "Trouvé dans deque: " << *it << std::endl;
    } catch (const std::exception&) {
        std::cout << "Non trouvé dans deque !" << std::endl;
    }

    int absentD = -1;
    std::cout << "Recherche dans deque : " << absentD << std::endl;
    try {
        easyfind(d, absentD);
    } catch (const std::exception&) {
        std::cout << absentD << " n'est pas dans la deque !" << std::endl;
    }

    // LIST
	std::cout << "_____LIST____\n";
    std::list<int> l;
    for (int i = 0; i < 5; ++i)
        l.push_back(100 + i);
    std::cout << "list: ";
    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    int rechercheL = 102;
    std::cout << "Recherche dans list : " << rechercheL << std::endl;
    try {
        std::list<int>::iterator it = easyfind(l, rechercheL);
        std::cout << "Trouvé dans list: " << *it << std::endl;
    } catch (const std::exception&) {
        std::cout << "Non trouvé dans list !" << std::endl;
    }

    int absentL = 42;
    std::cout << "Recherche dans list : " << absentL << std::endl;
    try {
        easyfind(l, absentL);
    } catch (const std::exception&) {
        std::cout << absentL << " n'est pas dans la list !" << std::endl;
    }

    // SET
	std::cout << "_____SET____\n";
    std::set<int> s;
    s.insert(7);
    s.insert(77);
    s.insert(777);
    std::cout << "set: ";
    for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    int rechercheS = 77;
    std::cout << "Recherche dans set : " << rechercheS << std::endl;
    try {
        std::set<int>::iterator it = easyfind(s, rechercheS);
        std::cout << "Trouvé dans set: " << *it << std::endl;
    } catch (const std::exception&) {
        std::cout << "Non trouvé dans set !" << std::endl;
    }

    int absentS = -7;
    std::cout << "Recherche dans set : " << absentS << std::endl;
    try {
        easyfind(s, absentS);
    } catch (const std::exception&) {
        std::cout << absentS << " n'est pas dans le set !" << std::endl;
    }

    return 0;
}
