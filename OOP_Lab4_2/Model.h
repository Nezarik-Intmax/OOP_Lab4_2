#pragma once
#include <Windows.h>
#include <stdio.h>
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
ref class MyEventArgs : System::EventArgs{
public:
	int value, ind;
	MyEventArgs(int value, int ind):value(value),ind(ind){}
};

ref class MyModel{
private:
	FILE* f;
	array<NumericUpDown^>^ numericUpDown;
	array<TextBox^>^ textBox;
	array<TrackBar^>^ trackBar;
	array<int>^ value;
	array<int>^ maxV;
	array<int>^ minV;
	array<char>^ name;
	array<bool>^ allowBehavior;
public:
	System::EventHandler^ observers;
	System::EventHandler^ observerMin;
	System::EventHandler^ observerMax;
	MyModel^ observersMin;
	MyModel^ observersMax;
	MyModel(int n){
		numericUpDown = gcnew array<NumericUpDown^>(n);
		textBox = gcnew array<TextBox^>(n);
		trackBar = gcnew array<TrackBar^>(n);
		value = gcnew array<int>(n);
		maxV = gcnew array<int>(n);
		minV = gcnew array<int>(n);
		name = gcnew array<char>(n);
		allowBehavior = gcnew array<bool>(n);
	}
	void SetValue(int a, int ind){
		if((a >= minV[ind])&&(a <= maxV[ind])||allowBehavior)
			value[ind] = a;
		if(observers != nullptr)
			observers->Invoke(this, gcnew MyEventArgs(value[ind], ind));
		if(observersMax != nullptr)
			observerMin->Invoke(this, gcnew MyEventArgs(value[ind], ind));
		if(observersMin != nullptr)
			observerMax->Invoke(this, gcnew MyEventArgs(value[ind], ind));
		name[ind].ToString();
		System::IO::File::WriteAllText(name[ind].ToString() + ".txt", value[ind].ToString());

	}
	void SetMax(int a, int ind){
		maxV[ind] = a;
		if(value[ind] > maxV[ind])
			SetValue(maxV[ind], ind);
	}
	void SetMin(int a, int ind){
		minV[ind] = a;
		if(value[ind] < minV[ind])
			SetValue(minV[ind], ind);
	}
	void SetNumericUpDown(System::Windows::Forms::NumericUpDown^ num, int ind){
		this->numericUpDown[ind] = num;
	}
	void SetTextBox(System::Windows::Forms::TextBox^ txt, int ind){
		this->textBox[ind] = txt;
	}
	void SetTrackBar(System::Windows::Forms::TrackBar^ trackBar, int ind){
		this->trackBar[ind] = trackBar;
	}
	int GetValue(int ind){return value[ind];}
	System::Windows::Forms::NumericUpDown^ GetNumericUpDown(int ind){return this->numericUpDown[ind];}
	System::Windows::Forms::TextBox^ GetTextBox(int ind){return this->textBox[ind];}
	System::Windows::Forms::TrackBar^ GetTrackBar(int ind){return this->trackBar[ind];}
};