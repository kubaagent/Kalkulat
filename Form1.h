#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(30, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(351, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(30, 105);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(121, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(216, 105);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(30, 176);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(121, 176);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 43);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(216, 176);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 43);
			this->button6->TabIndex = 4;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(30, 245);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 43);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(121, 245);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 43);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(216, 245);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 43);
			this->button9->TabIndex = 7;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(30, 312);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 43);
			this->button10->TabIndex = 12;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(121, 312);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 43);
			this->button11->TabIndex = 11;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(216, 312);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 43);
			this->button12->TabIndex = 10;
			this->button12->Text = L"C";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(316, 245);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 43);
			this->button13->TabIndex = 15;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(316, 176);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 43);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(316, 105);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 43);
			this->button15->TabIndex = 13;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(316, 312);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 43);
			this->button16->TabIndex = 16;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 452);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Kalkulator";
			this->ResumeLayout(false);

		}
		int skladnik1, skladnik2, wynik;
		char dzialanie;
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "1";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "1";
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "2";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "2";
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "3";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "3";
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "6";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "6";
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "5";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "5";
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "4";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "4";
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "9";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "9";
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "8";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "8";
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "7";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "7";
		}
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = "";
		label1->Text = "0";
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "0") {
			label1->Text = "0";
		}
		else {
			label1->Text = Convert::ToDouble(label1->Text) + "0";
		}
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		skladnik1 = Convert::ToDouble(label1->Text);
		label1->Text = "0";
		dzialanie = '/';
	}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	skladnik2 = Convert::ToDouble(label1->Text);
	switch (dzialanie)
	{
	case '+':
			wynik = skladnik1 + skladnik2;
			label1->Text = System::Convert::ToString(wynik);
			break;

	case 'x':
			wynik = skladnik1 * skladnik2;
			label1->Text = System::Convert::ToString(wynik);
			break;

	case '/':
			wynik = skladnik1 / skladnik2;
			if (skladnik1 % skladnik2 != 0 )
			{
			
				int modulo;
				modulo = skladnik1 % skladnik2;
				label1->Text = System::Convert::ToString(wynik + " " + modulo + "/" + skladnik2);
				(MessageBox::Show("Wynik to: " + wynik + " " + modulo + "/" + skladnik2 + "\n Czyli " +  wynik + " ca³ych " + " i reszty " + modulo +"\n Nic ju¿ z tym nie zrobisz!", "Kalkulator prosty", MessageBoxButtons::OK, MessageBoxIcon::Error));
				label1->Text = "";
				label1->Text = "0";
			}
			else
			{
				label1->Text = System::Convert::ToString(wynik);
			}
			;
			break;

	case '-':
			wynik = skladnik1 - skladnik2;
			label1->Text = System::Convert::ToString(wynik);
			break;
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	skladnik1 = Convert::ToDouble(label1->Text);
	label1->Text = "0";
	dzialanie = '+';
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	skladnik1 = Convert::ToDouble(label1->Text);
	label1->Text = "0";
	dzialanie = '-';
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	skladnik1 = Convert::ToDouble(label1->Text);
	label1->Text = "0";
	dzialanie = 'x';
}
};
}

