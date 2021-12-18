#pragma once
#include <Windows.h>
#include <stdio.h>
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
ref class MyEventArgs : System::EventArgs{
public:
	int value;
	MyEventArgs(int value):value(value){}
};
ref class MyModel{
private:
	int a, b, c;
public:
	System::EventHandler^ observers;
	MyModel(){
		if(System::IO::File::Exists("c.txt"))
			SetValueC(Convert::ToInt32(System::IO::File::ReadAllText("c.txt")));
		else System::IO::File::WriteAllText("c.txt", "0");
		if(System::IO::File::Exists("b.txt"))
			SetValueB(Convert::ToInt32(System::IO::File::ReadAllText("b.txt")));
		else System::IO::File::WriteAllText("b.txt", "0");
		if(System::IO::File::Exists("a.txt"))
			SetValueA(Convert::ToInt32(System::IO::File::ReadAllText("a.txt")));
		else System::IO::File::WriteAllText("a.txt", "0");
	}
	void SetValueA(int val){
		if(val >= 0 && val <=100){
			a = val;
			if(val > c)
				SetValueC(val);
			if(val > b)
				SetValueB(val);
			System::IO::File::WriteAllText("a.txt", a.ToString());
		}
		if(observers != nullptr)
			observers->Invoke(this, nullptr);
	}
	void SetValueB(int val){
		if(val >= 0 && val <= 100){
			if((val >= a) && (val <= c))
				b = val;
			System::IO::File::WriteAllText("b.txt", b.ToString());
		}
		if(observers != nullptr)
			observers->Invoke(this, nullptr);
	}
	void SetValueC(int val){
		if(val >= 0 && val <= 100){
			c = val;
			if(val < a)
				SetValueA(val);
			if(val < b)
				SetValueB(val);
			System::IO::File::WriteAllText("c.txt", c.ToString());
		}
		if(observers != nullptr)
			observers->Invoke(this, nullptr);
	}
	void UpdateData(){
		if(observers != nullptr)
			observers->Invoke(this, nullptr);
	}
	int GetValueA(){return a;}
	int GetValueB(){ return b; }
	int GetValueC(){ return c; }
};