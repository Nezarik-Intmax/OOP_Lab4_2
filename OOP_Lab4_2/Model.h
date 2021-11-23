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
	int value, maxV, minV;
	char name;
	bool allowBehavior;
	FILE* f;
	System::Windows::Forms::NumericUpDown^ numericUpDown;
	System::Windows::Forms::TextBox^ textBox;
	System::Windows::Forms::TrackBar^ trackBar;
public:
	System::EventHandler^ observers;
	System::EventHandler^ observerMin;
	System::EventHandler^ observerMax;
	MyModel^ observersMin;
	MyModel^ observersMax;
	MyModel():value(0), minV(0), maxV(100), allowBehavior(true){}
	MyModel(char name, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt, System::Windows::Forms::TrackBar^ trck):name(name), minV(0), maxV(100), allowBehavior(true){
		numericUpDown = num;
		textBox = txt;
		trackBar = trck;
		SetValue(Convert::ToInt32(System::IO::File::ReadAllText(name.ToString() + ".txt")));
	}
	MyModel(char name, int minV, int maxV, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt, System::Windows::Forms::TrackBar^ trck):value(value), minV(minV), maxV(maxV), name(name), allowBehavior(true){
		numericUpDown = num;
		textBox = txt;
		trackBar = trck;
		SetValue(Convert::ToInt32(System::IO::File::ReadAllText(name.ToString()+".txt")));
	}
	MyModel(char name, int value, int minV, int maxV, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt, System::Windows::Forms::TrackBar^ trck):value(value), minV(minV), maxV(maxV), name(name), allowBehavior(true){
		numericUpDown = num;
		textBox = txt;
		trackBar = trck;
	}
	void SetValue(int a){
		if((a >= minV)&&(a <= maxV))
			value = a;
		if(observers != nullptr)
			observers->Invoke(this, nullptr);
		if(observersMax != nullptr)
			observerMin->Invoke(observersMax, gcnew MyEventArgs(value));
		if(observersMin != nullptr)
			observerMax->Invoke(observersMin, gcnew MyEventArgs(value));
		name.ToString();
		System::IO::File::WriteAllText(name.ToString() + ".txt", value.ToString());

	}
	void SetMax(int a){maxV = a;}
	void SetMin(int a){minV = a;}
	void SetNumericUpDown(System::Windows::Forms::NumericUpDown^ num){
		this->numericUpDown = num;
	}
	void SetTextBox(System::Windows::Forms::TextBox^ txt){
		this->textBox = txt;
	}
	void SetTrackBar(System::Windows::Forms::TrackBar^ trackBar){
		this->trackBar = trackBar;
	}
	int GetValue(){return value;}
	System::Windows::Forms::NumericUpDown^ GetNumericUpDown(){return this->numericUpDown;}
	System::Windows::Forms::TextBox^ GetTextBox(){return this->textBox;}
	System::Windows::Forms::TrackBar^ GetTrackBar(){return this->trackBar;}
};