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
	int N;
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
	MyModel(int n){
		N = n;
		numericUpDown = gcnew array<NumericUpDown^>(n);
		textBox = gcnew array<TextBox^>(n);
		trackBar = gcnew array<TrackBar^>(n);
		value = gcnew array<int>(n);
		name = gcnew array<char>(n);
		allowBehavior = gcnew array<bool>(n);
	}
	bool SetValue(int a, int ind){
		bool res;
		bool inRange = (ind < N - 1) ? (a <= value[ind + 1]) : true;
		inRange = inRange && ((ind > 0) ? (a >= value[ind - 1]) : true);
		if(inRange){
			value[ind] = a;
			System::IO::File::WriteAllText(name[ind].ToString() + ".txt", value[ind].ToString());
			res = true;
		}else if(allowBehavior[ind]){
			if((ind < N - 1) && (a > value[ind + 1])){
				if(SetMax(a, ind+1)){
					value[ind] = a;
					res = true;
				}else{
					res = false;
				}
			}
			else if((ind > 0) && (a < value[ind - 1])){
				if(SetMin(a, ind - 1)){
					value[ind] = a;
					res = true;
				} else{
					res = false;
				}
			}
		}else{
			res = false;
		}
		if(observers != nullptr)
			observers->Invoke(this, gcnew MyEventArgs(value[ind], ind));
		return res;
		/*if(ind < N - 1 && ){
			if(( && ) || allowBehavior[ind]){
			}
		} else if(ind < N - 1){
			if(a <= value[ind + 1] || allowBehavior[ind]){
				value[ind] = a;
				if(observers != nullptr)
					observers->Invoke(this, gcnew MyEventArgs(value[ind], ind));
				System::IO::File::WriteAllText(name[ind].ToString() + ".txt", value[ind].ToString());
				return true;
			}
		} else if(ind > 0){
			if(a >= value[ind - 1] || allowBehavior[ind]){
				value[ind] = a;
				if(observers != nullptr)
					observers->Invoke(this, gcnew MyEventArgs(value[ind], ind));
				System::IO::File::WriteAllText(name[ind].ToString() + ".txt", value[ind].ToString());
				return true;
			}
		}else{
			return false;
		}*/
	}
	void SetValueEnd(int a, int ind){
	}
	void SetFromFile(int ind){
		SetValue(Convert::ToInt32(System::IO::File::ReadAllText(name[ind].ToString() + ".txt")), ind);
	}
	bool SetMax(int a, int ind){
		if(ind < N && ind >= 0)
			if(value[ind] < a){
				return SetValue(a, ind);
			}
		return false;
	}
	bool SetMin(int a, int ind){
		if(ind < N && ind >= 0)
			if(value[ind] > a){
				return SetValue(a, ind);
			}
		return false;
	}
	void SetAllowBehavior(bool s, int ind){
		if(ind < N && ind >= 0)
			allowBehavior[ind] = s;
	}
	void SetName(char s, int ind){
		if(ind < N && ind >= 0)
			name[ind] = s;
	}
	void SetNumericUpDown(System::Windows::Forms::NumericUpDown^ num, int ind){
		if(ind < N && ind >= 0)
			this->numericUpDown[ind] = num;
	}
	void SetTextBox(System::Windows::Forms::TextBox^ txt, int ind){
		if(ind < N && ind >= 0)
			this->textBox[ind] = txt;
	}
	void SetTrackBar(System::Windows::Forms::TrackBar^ trackBar, int ind){
		if(ind < N && ind >= 0)
			this->trackBar[ind] = trackBar;
	}
	int GetValue(int ind){
		if(ind < N && ind >= 0)
			return value[ind];
	}
	System::Windows::Forms::NumericUpDown^ GetNumericUpDown(int ind){
		if(ind < N && ind >= 0)
			return this->numericUpDown[ind];
	}
	System::Windows::Forms::TextBox^ GetTextBox(int ind){
		if(ind < N && ind >= 0)
			return this->textBox[ind];
	}
	System::Windows::Forms::TrackBar^ GetTrackBar(int ind){
		if(ind < N && ind >= 0)
			return this->trackBar[ind];
	}
};