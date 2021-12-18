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
	MyModel^ model;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){
		model = gcnew MyModel();
		model->observers += gcnew System::EventHandler(this, &MyForm::UpdateDataA);
		model->observers += gcnew System::EventHandler(this, &MyForm::UpdateDataB);
		model->observers += gcnew System::EventHandler(this, &MyForm::UpdateDataC);
		model->UpdateData();
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e){
		model->SetValueA(Convert::ToInt32(numericUpDown1->Value));
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e){
		try{
		model->SetValueA(Convert::ToInt32(textBox1->Text));
		} catch(System::FormatException^){
			this->UpdateDataC(this, nullptr);
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e){
		model->SetValueA(Convert::ToInt32(trackBar1->Value));
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e){
		model->SetValueB(Convert::ToInt32(numericUpDown2->Value));
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e){
		try{
		model->SetValueB(Convert::ToInt32(textBox2->Text));
		} catch(System::FormatException^){
			this->UpdateDataC(this, nullptr);
		}
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e){
		model->SetValueB(Convert::ToInt32(trackBar2->Value));
	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e){
		model->SetValueC(Convert::ToInt32(numericUpDown3->Value));
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e){
		try{
			model->SetValueC(Convert::ToInt32(textBox3->Text));
		} catch(System::FormatException^){
			this->UpdateDataC(this, nullptr);
		}
	}
	private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e){
		model->SetValueC(Convert::ToInt32(trackBar3->Value));
	}
	void UpdateDataA(System::Object^ sender, System::EventArgs^ e){
		MyModel^ sender1 = (MyModel^)sender;
		numericUpDown1->Value = sender1->GetValueA();
		textBox1->Text = sender1->GetValueA().ToString();
		trackBar1->Value = sender1->GetValueA();
	}
	void UpdateDataB(System::Object^ sender, System::EventArgs^ e){
		MyModel^ sender1 = (MyModel^)sender;
		numericUpDown2->Value = sender1->GetValueB();
		textBox2->Text = sender1->GetValueB().ToString();
		trackBar2->Value = sender1->GetValueB();
	}
	void UpdateDataC(System::Object^ sender, System::EventArgs^ e){
		MyModel^ sender1 = (MyModel^)sender;
		numericUpDown3->Value = sender1->GetValueC();
		textBox3->Text = sender1->GetValueC().ToString();
		trackBar3->Value = sender1->GetValueC();
	}
};
}
