#include <iostream> 
using namespace std;
class weeb//创建类，记录姓名及备注
{
public:
	void SetName(char name[]);
	void ChangeName();
	void SetNote(char note[]);
	void ChangeNote();
	void Print();
private:
	char weeb_name[20]="0", weeb_note[40]="0";
};
void weeb::SetName(char name[])//输入姓名
{
	int i = 0;
	for (; name[i] != '\0'; i++)
		weeb_name[i] = name[i];
}
void weeb::ChangeName()//更改姓名
{
	int i = 0;
	char newname[20];
	cout << "请输入新的姓名" << endl;
	cin >> newname;
	for (; newname[i] != '\0'; i++)
		weeb_name[i] = newname[i];
}
void weeb::SetNote(char note[])//输入备注
{
	int i = 0;
	for (; note[i] != '\0'; i++)
		weeb_note[i] = note[i];
}
void weeb::ChangeNote()//更改备注
{
	int i = 0;
	char newnote[20];
	cout << "请输入新的备注" << endl;
	cin >> newnote;
	for (; newnote[i] != '\0'; i++)
		weeb_note[i] = newnote[i];
}
void weeb::Print()//输出
{
	cout << "您好，二次元。\n您的名字为：" << weeb_name << endl;
	cout << "您的备注为：" << weeb_note << endl;
}
void main()
{
	int a, j;
	cout << "你是二次元吗？\n1-是的    2-不是，你***才是二刺猿" << endl;
	cin >> a;
	if (a == 1)
	{
		char name[20], note[40];
		cout << "请输入姓名：" << endl;
		cin >> name;
		cout << "请输入备注：" << endl;
		cin >> note;
		weeb Weeb;
		Weeb.SetName(name);
		Weeb.SetNote(note);
		cout << "请检查信息：" << endl;
		for (j = 3; ;)//确认信息并判断是否需要修改
		{
			Weeb.Print();
			cout << "是否需要修改？\n1-需要修改姓名    2-需要修改备注    0-不需要修改" << endl;
			cin >> j;
			if (j == 1)
				Weeb.ChangeName();
			if (j == 2)
				Weeb.ChangeNote();
			if (j == 0)
			{
				cout << "二次元！二次魂！" << endl;
				break;
			}
		}
	}
	else if (a == 2)
		cout << "三次元现充速爬" << endl;
	else
		cout << "速爬" << endl;
}