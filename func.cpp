#include "head.h"

void printTest(std::vector<Worker> &v)
{
    std::cout << "--------------------" << std::endl;
    for (std::vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << it->m_Name << ":" << it->m_Salary << " ";
    }
    std::cout << std::endl;
    std::cout << "--------------------" << std::endl;
}

void creatWorker(std::vector<Worker> &v)
{
    std::string nameSeed = "ADCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        Worker worker;
        worker.m_Name += nameSeed[i];
        worker.m_Salary = rand() % 2001 + 1000;
        v.push_back(worker);
    }
}

void setGroup(std::vector<Worker> &v, std::multimap<int, Worker> &m)
{
    for (std::vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        int deptId = rand() % 3;
        m.insert(std::make_pair(deptId, *it));
    }
}

void showWorker(std::multimap<int, Worker> &m)
{
    std::cout << "AA:" << std::endl;
    std::multimap<int, Worker>::iterator pos = m.find(AA);
    int count = m.count(AA);
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        std::cout << pos->second.m_Name << ":" << pos->second.m_Salary << " ";
    }
    std::cout << std::endl;

    std::cout << "BB:" << std::endl;
    pos= m.find(BB);
    count = m.count(BB);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        std::cout << pos->second.m_Name << ":" << pos->second.m_Salary << " ";
    }
    std::cout << std::endl;

    std::cout << "CC:" << std::endl;
    pos= m.find(CC);
    count = m.count(CC);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        std::cout << pos->second.m_Name << ":" << pos->second.m_Salary << " ";
    }
    std::cout << std::endl;
}

void test()
{
    std::vector<Worker> v;
    creatWorker(v);
    printTest(v);
    std::multimap<int, Worker> m;
    setGroup(v, m);
    showWorker(m);
}