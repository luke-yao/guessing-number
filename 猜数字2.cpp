#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{int num1, num2, num3, yournum1, yournum2, yournum3;
 char x;
 int i = 0, j = 0, p = 0, k = 0, q = 0; //������ 
 
	while(true)
	{
		cout<< "��Ҫ����Ϸ��Y/N��" ;
		cin>> x;
		if (x == 'Y') 
			{
			cout<< x;
			do
			{
			srand(time(NULL));
			num1 = rand()% 10;
			num2 = rand()% 10;
			num3 = rand()% 10;
		 	}
		 	while (num1 == num2 || num1 == num3 || num2 == num3);
			while(p < 7)
				{
				int rnum = 0, wnum = 0;
				cout<<"��������²�����֣�\n";
				cin>>yournum1>>yournum2>>yournum3;
				if (num1 == yournum1 && num2 == yournum2 && num3 == yournum3)
				{
					rnum = 3;
					cout<< "��ϲ����¶���"<<endl;
					++q;
					break;
				 }
				else
					{	
		 			int a[3] = {num1, num2, num3 };
		 			int b[3] = {yournum1, yournum2, yournum3 };
		 			for (i = 0; i < 3; ++i )
		 				for (j = 0; j < 3; ++j )
		 					{
		 					if (a[i] == b[j]) 
						 		{
						 		if (i == j) ++rnum;
								else ++wnum;
							 	}		 				 				
							 }
					cout<< rnum<<"A"<<wnum<<"B"<<endl;
					} 
				++p;
				}
			}
		else if (x == 'N') break;
		++k;
	}
	cout<<"��һ������"<<k<<"��,Ӯ��"<<q<<"�֣�����"<<k-q<<"��"<<endl; 
	return 0;
}
