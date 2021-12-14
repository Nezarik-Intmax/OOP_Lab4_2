#pragma once
#include "Model.h"

namespace OOPLab42 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(176, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(147, 232);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 258);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(147, 285);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(120, 45);
			this->trackBar1->TabIndex = 3;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(318, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 55);
			this->label2->TabIndex = 4;
			this->label2->Text = L"B";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(285, 285);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(120, 45);
			this->trackBar2->TabIndex = 7;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(285, 258);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(285, 232);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(424, 285);
			this->trackBar3->Maximum = 100;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(120, 45);
			this->trackBar3->TabIndex = 11;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar3_Scroll);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(424, 258);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 20);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(424, 232);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 9;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(457, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 55);
			this->label3->TabIndex = 8;
			this->label3->Text = L"C";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 483);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	MyModel^ a;
	MyModel^ b;
	MyModel^ c;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){
		a = gcnew MyModel(3);
		a->observers += gcnew System::EventHandler(this, &MyForm::UpdateData);
		a->observerMax += gcnew System::EventHandler(this, &MyForm::UpdateMax);
		a->observerMin += gcnew System::EventHandler(this, &MyForm::UpdateMin);

		/*b = gcnew MyModel('B', false, numericUpDown2, textBox2, trackBar2);
		b->observers += gcnew System::EventHandler(this, &MyForm::UpdateData);
		b->observerMax += gcnew System::EventHandler(this, &MyForm::UpdateMax);
		b->observerMin += gcnew System::EventHandler(this, &MyForm::UpdateMin);

		c = gcnew MyModel('C', true, numericUpDown3, textBox3, trackBar3);
		c->observers += gcnew System::EventHandler(this, &MyForm::UpdateData);
		c->observerMax += gcnew System::EventHandler(this, &MyForm::UpdateMax);
		c->observerMin += gcnew System::EventHandler(this, &MyForm::UpdateMin);

		a->observersMax = b;
		b->observersMin = a;
		b->observersMax = c;
		c->observersMin = b;*/
		a->SetValue(a->GetValue(0), 0);
		b->SetValue(b->GetValue(1), 1);
		c->SetValue(c->GetValue(2), 2);
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e){
		a->SetValue(Convert::ToInt32(numericUpDown1->Value), 0);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e){
		a->SetValue(Convert::ToInt32(textBox1->Text), 0);
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e){
		a->SetValue(Convert::ToInt32(trackBar1->Value), 0);
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e){
		b->SetValue(Convert::ToInt32(numericUpDown2->Value), 1);
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e){
		b->SetValue(Convert::ToInt32(textBox2->Text), 1);
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e){
		b->SetValue(Convert::ToInt32(trackBar2->Value), 1);
	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e){
		c->SetValue(Convert::ToInt32(numericUpDown3->Value), 3);
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e){
		c->SetValue(Convert::ToInt32(textBox3->Text), 3);
	}
	private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e){
		c->SetValue(Convert::ToInt32(trackBar3->Value), 3);
	}
	void UpdateData(System::Object^ sender, System::EventArgs^ e){
		MyModel^ sender1 = (MyModel^)sender;
		if(sender1->GetNumericUpDown(((MyEventArgs^)e)->ind) != nullptr)
			sender1->GetNumericUpDown(((MyEventArgs^)e)->ind)->Value = ((MyEventArgs^)e)->value;
		if(sender1->GetTextBox(((MyEventArgs^)e)->ind) != nullptr)
			sender1->GetTextBox(((MyEventArgs^)e)->ind)->Text = ((MyEventArgs^)e)->value.ToString();
		if(sender1->GetTrackBar(((MyEventArgs^)e)->ind) != nullptr)
			sender1->GetTrackBar(((MyEventArgs^)e)->ind)->Value = ((MyEventArgs^)e)->value;
	}
	void UpdateMin(System::Object^ sender, System::EventArgs^ e){
		MyModel^ sender1 = (MyModel^)sender;
		sender1->SetMin(((MyEventArgs^)e)->value, ((MyEventArgs^)e)->ind);
	}
	void UpdateMax(System::Object^ sender, System::EventArgs^ e){
		MyModel^ sender1 = (MyModel^)sender;
		sender1->SetMax(((MyEventArgs^)e)->value, ((MyEventArgs^)e)->ind);
	}
};
}
