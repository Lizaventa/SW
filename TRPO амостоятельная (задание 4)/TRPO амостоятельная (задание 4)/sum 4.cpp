#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int dl_p, sh_p, vis_p, dl_otv, sh_otv, vis_otv, v_p;
	cout << "������� ����� ��������� ���������������: " << endl;
	cin >> dl_p;
	cout << "������� ������ ��������� ���������������: " << endl;
	cin >> sh_p;
	cout << "������� ������ ���������������: " << endl;
	cin >> vis_p;
	cout << "������� ����� ���������" << endl;
	cin >> dl_otv;
	cout << "������� ������ ���������: " << endl;
	cin >> sh_otv;
	if ((dl_p < dl_otv && sh_p < sh_otv) || (dl_p < sh_otv && sh_p < dl_otv) || (sh_p < sh_otv && vis_p < dl_otv) || (dl_p < sh_otv && vis_p < dl_otv) || (vis_p < sh_otv && dl_p < dl_otv) || (vis_p < sh_otv && sh_p < dl_otv))
	{
		cout << "����������" << endl;
	}
	else
	{
		cout << "�� ����������" << endl;
	}
	return 0;

}