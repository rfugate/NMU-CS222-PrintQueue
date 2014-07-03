#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "queue.h"
#include "IntItem.h"
#include "Item.h"
#include "LLQueue.h"

using namespace std;

int main(){
	queue *Q1 = new LLQueue();
	queue *Q2 = new LLQueue();
	int complete = 0;
	int count = 0;
	int time;
	int ctime;
	string strTime;
	string cTime;
	string hour;
	string min;
	string cmd;
	ifstream infile("pg3cmds.txt",ios::binary);

	while(!infile.eof()){
		count++;
		infile >> strTime >> cmd >> cTime;
		for(int i=0; i<strTime.length();i++){
			if(strTime[i]==':'){
				min = strTime.substr(i+1,strTime.length());
				hour = strTime.substr(0,i);
			}
		}
		time = (atoi(hour.c_str()))*60 + (atoi(min.c_str()));
		ctime = atoi(cTime.c_str());

		Q1->EnQueue(new IntItem(time,ctime));

		if(complete+ctime<time+ctime){
			Q2->EnQueue(new IntItem(time+ctime,time));
			complete = time + ctime;
		}
		else{
			Q2->EnQueue(new IntItem(complete+ctime, time));
			complete = complete + ctime;
		}
	}

	infile.close();
	count = count * 2;
	IntItem *temp1 = (IntItem *)(Q1->DeQueue());
	IntItem *temp2 = (IntItem *)(Q2->DeQueue());

	int t1 = temp1->geti();
	int t2 = temp1->geti2();
	int t3 = temp2->geti();
	int t4 = temp2->geti2();
	int c = 0;

	while(c<count){
		c++;
		if(t1<t3){
			string a = "";
			if(t3%60<10){
				a = "0";
			}
			cout << (t1/60) << ":" << a << (t1%60) << " received " << t2 << " min print request " << endl;
			delete temp1;
			if(!Q1->IsEmpty()){
				temp1 = (IntItem *)(Q1->DeQueue());
				t1 = temp1->geti();
				t2 = temp1->geti2();
			}
			if(Q1->IsEmpty()){
				t1 = t3;
			}
		}
		else{
			string a = "";
			string b = "";
			if(t3%60<10) a = "0";
			if(t4%60<10) b = "0";
			cout << (t3/60) << ":" << a << (t3%60) << " completed print request submitted at " << (t4/60) << ":" << b << (t4%60) << endl;
			delete temp2;
			if(!Q2->IsEmpty()){
				temp2 = (IntItem *)(Q2->DeQueue());
				t3 = temp2->geti();
				t4 = temp2->geti2();
			}
			if(Q2->IsEmpty()){
				t1 = t3;
			}
		}
	}
	delete Q1, Q2;
	system("pause");
	return 0;
}