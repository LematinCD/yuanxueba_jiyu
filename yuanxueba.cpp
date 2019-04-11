/*************************************************************************
	> File Name: yuanxuba.cpp
	> Author: lematin
	> Mail: lematin_cd@163.com 
	> Created Time: Thu 11 Apr 2019 11:25:13 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class yuanxuba{
public:
	void setTeamMemberInfo(string nam,string s,int a,string p,string e,string addr){
		name = nam;
		sex = s;
		age = a;
		phoneNum = p;
		email = e;
		address = addr;
	}
	void display(){
	cout<<"姓名:"<<name<<endl<<"性别:"<<sex<<endl<<"年龄:"<<age<<endl \
			<<"电话:"<<phoneNum<<endl<<"E-mail:"<<email<<endl<<"住址:"<<address<<endl;}
	
private:
	string name,sex,phoneNum,email,address;
	int age;
};

class embeddedness : public yuanxuba{
public:l
	embeddedness(){cout<<"大家好!自我介绍:"<<endl;} 
	~embeddedness(){cout<<"希望猿学霸越来越好!"<<endl;}
	void setRespon(string r){responsibility = r;};
	void setMarStatus(string s){marStatus = s;};
	void setProgLang(string p){proLang = p;};
	void dis_emb(){ 
		cout<<"职责:"<<responsibility<<endl<<"婚姻状态:"<<marStatus<<endl<<"擅长编程语言:"<<proLang<<endl;
	}
private:
	string responsibility,marStatus,proLang;
};

int main()
{
	embeddedness emb;
	emb.setTeamMemberInfo("尤亦","男",26,"17603071220","lematin_cd@163.com","成都市青羊区蜀新东路88号");
	emb.setRespon("嵌入式开发");
	emb.setMarStatus("单身");
	emb.setProgLang("C、C++、Python");
	emb.display();
	emb.dis_emb();
	return 0;
}
