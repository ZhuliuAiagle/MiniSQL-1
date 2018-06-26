#pragma once
#ifndef _API_H_
#include "interpreter.h"
#include "catalog_manager.h"
#include "record_manager.h" 

int create_table_api(InterTable newTable);
int insert_into_api(vector<string> valueList, string tableName);
int delete_from_api(string tableName, vector<condition> option);
//table* select_from_api(string tableName, vector<string> attrList, condition opt);
//table* select_from_api(string tableName, vector<string> attrList);
// �������������ӿڲ��豩¶
string select_api(string tableName, vector<string> attrList, vector<condition> options);

#endif // !_API_H_