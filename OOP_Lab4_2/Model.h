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
	MyModel():value(0), minV(0), maxV(100){
		f = fopen(strcat((char*)name, ".txt"), "r");
		if(f != nullptr)
			fscanf(f, "%i", value);
		else{
			f = fopen(strcat((char*)name, ".txt"), "w");
			fprintf(f, "%i", value);
		}
	}
	MyModel(char name, int value):value(value), minV(0), maxV(100){
		f = fopen(strcat((char*)name, ".txt"), "r");
		if(f != nullptr)
			fscanf(f, "%i", value);
		else{
			f = fopen(strcat((char*)name, ".txt"), "w");
			fprintf(f, "%i", value);
		}
	}
	MyModel(char name, int value, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt):value(value), numericUpDown(num), textBox(txt){
		f = fopen(strcat((char*)name, ".txt"), "r");
		if(f != nullptr)
			fscanf(f, "%i", value);
		else{
			f = fopen(strcat((char*)name, ".txt"), "w");
			fprintf(f, "%i", value);
		}
	}
	MyModel(char name, int value, int minV, int maxV):value(value), minV(minV), maxV(maxV){}
	MyModel(char name, int value, int minV, int maxV, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt):value(value), minV(minV), maxV(maxV){
		numericUpDown = num;
		textBox = txt;
		f = fopen(strcat((char*)name, ".txt"), "r");
		if(f != nullptr)
			fscanf(f, "%i", value);
		else{
			f = fopen(strcat((char*)name, ".txt"), "w");
			fprintf(f, "%i", value);
		}
	}
	MyModel(char name, int value, int minV, int maxV, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt, System::Windows::Forms::TrackBar^ trck):value(value), minV(minV), maxV(maxV){
		numericUpDown = num;
		textBox = txt;
		trackBar = trck; 
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "TextFiles (*.txt)|*.txt|All files(*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->FileName = name.ToString();
		saveFileDialog1->RestoreDirectory = true;
		if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
			System::IO::File::WriteAllText(saveFileDialog1->FileName, value.ToString());
		}
	}
	void SetValue(int a){
		if((a >= minV)&&(a <= maxV))
			value = a;
		observers->Invoke(this, nullptr);
		if(observersMax != nullptr)
			observerMin->Invoke(observersMax, gcnew MyEventArgs(value));
		if(observersMin != nullptr)
			observerMax->Invoke(observersMin, gcnew MyEventArgs(value));
		f = fopen(strcat((char*)name, ".txt"), "w");
		fprintf(f, "%i", value);
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
	/*void UpdateData(){
		if(numericUpDown != nullptr)
			numericUpDown->Value = value;
		if(textBox != nullptr)
			textBox->Text = this->GetValue().ToString();
		if(trackBar != nullptr)
			trackBar->Value = value;
	}*/
};