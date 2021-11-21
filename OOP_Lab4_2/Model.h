#pragma once
ref class MyModel{
private:
	int value, max, min;
	System::Windows::Forms::NumericUpDown^ numericUpDown;
	System::Windows::Forms::TextBox^ textBox;
	System::Windows::Forms::TrackBar^ trackBar;
public:
	System::EventHandler^ observers;
	MyModel():value(0), min(0), max(100){}
	MyModel(int value):value(value), min(0), max(100){}
	MyModel(int value, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt):value(value), numericUpDown(num), textBox(txt){}
	MyModel(int value, int min, int max):value(value), min(min), max(max){}
	MyModel(int value, int min, int max, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt):value(value), min(min), max(max){
		numericUpDown = num;
		textBox = txt;
	}
	MyModel(int value, int min, int max, System::Windows::Forms::NumericUpDown^ num, System::Windows::Forms::TextBox^ txt, System::Windows::Forms::TrackBar^ trck):value(value), min(min), max(max){
		numericUpDown = num;
		textBox = txt;
		trackBar = trck;
	}
	void SetValue(int a){
		if((a >= min)&&(a <= max))
			value = a;
		//UpdateData();
		observers->Invoke(this, nullptr);
	}
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