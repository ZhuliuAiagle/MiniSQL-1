#include "interpreter.h"
#include"record_manager.h"
#include"catalog_manager.h"
#include"table.h"
using namespace std;

int main()
{
	//int mode;
	//data_dictionary db;
	//string input;
	//cout << "*************************************" << endl;
	//cout << "*    ��ӭʹ��MiniSQL΢�����ݿ�      *" << endl;
	//cout << "*        Date:2018-6-13             *" << endl;
	//cout << "* ����:���ӬB�����ģ������裬������ *" << endl;
	//cout << "*************************************" << endl;
	//cout << "1. ���ִ��ģʽ" << endl;
	//cout << "2. �ű�ִ��ģʽ" << endl;
	//cout << "3. ����" << endl;
	//cout << "4. �˳�������" << endl;
	//while (true)
	//{
	//	cout << "��ѡ��ģʽ[1/2/3(����)/4]��";
	//	cin >> mode;
	//	getchar();
	//	switch (mode)
	//	{
	//	case 1:
	//	{
	//		while (true)
	//		{
	//			input = Input();
	//			string temp = input;
	//			RemoveSpace(temp);
	//			if (temp == "describe;")
	//			{
	//				db.listTable();
	//			}
	//			if (temp == "quit;")
	//			{
	//				break;
	//			}
	//			else
	//			{
	//				string result = Interpreter(input); //ִ��sql���
	//				if (result == "99")
	//				{
	//					cout << "���ִ�д���" << endl;
	//				}
	//				else if(result == "80")
	//				{
	//					cout << "���ִ����ȷ" << endl;
	//				}
	//				else
	//				{
	//					cout << "���ִ�д���" << endl;
	//				}
	//			}
	//		}
	//		break;
	//	}
	//	case 2:
	//	{

	//	}
	//	case 3:
	//	{
	//		cout << "*****�����ֲ�****" << endl;
	//		cout << "1. ���ִ��ģʽ" << endl;
	//		cout << "2. �ű�ִ��ģʽ" << endl;
	//		cout << "3. ����" << endl;
	//		cout << "4. �˳�������" << endl;
	//		cout << "*****************" << endl;
	//		break;
	//	}
	//	case 4:
	//	{
	//		char iff;
	//		cout << "��ȷ��Ҫ�˳���? [Y/N]:";
	//		cin >> iff;
	//		if (iff == 'Y')
	//		{
	//			cout << "���! " << endl;
	//			system("pause");
	//			return 0;
	//		}
	//		else if (iff == 'N')
	//		{}
	//		break;
	//	}
	//	}
	//}
	//system("pause");
	//return 0;
	int mode;
	data_dictionary db;
	string input;
	
	while (true)
	{
		input = Input();
		string temp = input;
		RemoveSpace(temp);
		if (temp == "describe;" || temp == "describe ;")
		{
			db.db = new database();
			db.listTable();
		}
		else if (temp == "quit;")
		{
			break;
		}
		else
		{
			string result = Interpreter(input); //ִ��sql���
			if (result == "99")
			{
				cout << "���ִ��ʧ��" << endl;
			}
			else if (result == "80")
			{
				cout << "���ִ�гɹ�" << endl;
			}
			else
			{
				cout << "���ִ��ʧ��" << endl;
			}
		}
	}
	system("pause");
	return 0;
}

//int main() {
//	
//	data_dictionary d;
//	m_string tableName("book");
//	m_string colName("bno");
//	m_string name("index1");
//	record_manager r;
//	int rows[2]{ 1,4 };
//	r._delete_2(m_string("t2"),rows,2);
//	d.listTable();
//	system("pause");
//}