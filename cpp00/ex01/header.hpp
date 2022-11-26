#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>


bool check_Naming(std::string text);
bool check_number(std::string text);
void print_contact(int ID, std::string first_name, std::string last_name,
                                                    std::string nick_name);
#endif