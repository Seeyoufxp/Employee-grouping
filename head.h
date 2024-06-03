#pragma once

#include <iostream>
#include <map>
#include <vector>
#include <ctime>
#include <string>

#define AA 0
#define BB 1
#define CC 2

class Worker
{
public:
    std::string m_Name;
    int m_Salary;
};

void printTest(std::vector<Worker> &v);

void creatWorker(std::vector<Worker> &v);

void setGroup(std::vector<Worker> &v, std::multimap<int, Worker> &m);

void showWorker(std::multimap<int, Worker> &m);

void test();