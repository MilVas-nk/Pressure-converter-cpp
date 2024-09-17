#pragma once

namespace Pressureconvertercpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ main_form
	/// </summary>
	public ref class main_form : public System::Windows::Forms::Form
	{
	public:
		main_form(void)
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
		~main_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ rbtn_4_20_mA;
	private: System::Windows::Forms::RadioButton^ rbtn_0_5_V;
	private: System::Windows::Forms::RadioButton^ rbtn_20_100_kPa;
	private: System::Windows::Forms::Label^ lbl_range;
	protected:

	protected:

	protected:

	protected:



	private: System::Windows::Forms::Label^ lbl_a1;
	private: System::Windows::Forms::Label^ lbl_a2;
	private: System::Windows::Forms::Label^ lbl_a3;
	private: System::Windows::Forms::Label^ lbl_a4;
	private: System::Windows::Forms::Label^ lbl_a5;
	private: System::Windows::Forms::Label^ lbl_b1;
	private: System::Windows::Forms::Label^ lbl_b2;
	private: System::Windows::Forms::Label^ lbl_b3;
	private: System::Windows::Forms::Label^ lbl_b4;
	private: System::Windows::Forms::Label^ lbl_b5;
	private: System::Windows::Forms::Label^ lbl_b6;
	private: System::Windows::Forms::TextBox^ tbox_a1;
	private: System::Windows::Forms::TextBox^ tbox_a2;
	private: System::Windows::Forms::TextBox^ tbox_a3;
	private: System::Windows::Forms::TextBox^ tbox_a4;
	private: System::Windows::Forms::TextBox^ tbox_a5;
	private: System::Windows::Forms::TextBox^ tbox_b1;
	private: System::Windows::Forms::TextBox^ tbox_b2;
	private: System::Windows::Forms::TextBox^ tbox_b3;
	private: System::Windows::Forms::TextBox^ tbox_b4;
	private: System::Windows::Forms::TextBox^ tbox_b5;
	private: System::Windows::Forms::TextBox^ tbox_b6;
	private: System::Windows::Forms::TextBox^ tbox_LRV;

	private: System::Windows::Forms::TextBox^ tbox_URV;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbox_manu_press;
	private: System::Windows::Forms::TextBox^ tbox_calc_out_signal;






























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
			this->rbtn_4_20_mA = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn_0_5_V = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn_20_100_kPa = (gcnew System::Windows::Forms::RadioButton());
			this->lbl_range = (gcnew System::Windows::Forms::Label());
			this->lbl_a1 = (gcnew System::Windows::Forms::Label());
			this->lbl_a2 = (gcnew System::Windows::Forms::Label());
			this->lbl_a3 = (gcnew System::Windows::Forms::Label());
			this->lbl_a4 = (gcnew System::Windows::Forms::Label());
			this->lbl_a5 = (gcnew System::Windows::Forms::Label());
			this->lbl_b1 = (gcnew System::Windows::Forms::Label());
			this->lbl_b2 = (gcnew System::Windows::Forms::Label());
			this->lbl_b3 = (gcnew System::Windows::Forms::Label());
			this->lbl_b4 = (gcnew System::Windows::Forms::Label());
			this->lbl_b5 = (gcnew System::Windows::Forms::Label());
			this->lbl_b6 = (gcnew System::Windows::Forms::Label());
			this->tbox_a1 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_a2 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_a3 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_a4 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_a5 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_b1 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_b2 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_b3 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_b4 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_b5 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_b6 = (gcnew System::Windows::Forms::TextBox());
			this->tbox_LRV = (gcnew System::Windows::Forms::TextBox());
			this->tbox_URV = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbox_manu_press = (gcnew System::Windows::Forms::TextBox());
			this->tbox_calc_out_signal = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// rbtn_4_20_mA
			// 
			this->rbtn_4_20_mA->AutoSize = true;
			this->rbtn_4_20_mA->Location = System::Drawing::Point(64, 92);
			this->rbtn_4_20_mA->Name = L"rbtn_4_20_mA";
			this->rbtn_4_20_mA->Size = System::Drawing::Size(70, 17);
			this->rbtn_4_20_mA->TabIndex = 0;
			this->rbtn_4_20_mA->TabStop = true;
			this->rbtn_4_20_mA->Text = L"4 - 20 мј";
			this->rbtn_4_20_mA->UseVisualStyleBackColor = true;
			this->rbtn_4_20_mA->CheckedChanged += gcnew System::EventHandler(this, &main_form::rbtn_4_20_mA_CheckedChanged);
			// 
			// rbtn_0_5_V
			// 
			this->rbtn_0_5_V->AutoSize = true;
			this->rbtn_0_5_V->Location = System::Drawing::Point(169, 92);
			this->rbtn_0_5_V->Name = L"rbtn_0_5_V";
			this->rbtn_0_5_V->Size = System::Drawing::Size(56, 17);
			this->rbtn_0_5_V->TabIndex = 1;
			this->rbtn_0_5_V->TabStop = true;
			this->rbtn_0_5_V->Text = L"0 - 5 ¬";
			this->rbtn_0_5_V->UseVisualStyleBackColor = true;
			this->rbtn_0_5_V->CheckedChanged += gcnew System::EventHandler(this, &main_form::rbtn_0_5_V_CheckedChanged);
			// 
			// rbtn_20_100_kPa
			// 
			this->rbtn_20_100_kPa->AutoSize = true;
			this->rbtn_20_100_kPa->Location = System::Drawing::Point(272, 92);
			this->rbtn_20_100_kPa->Name = L"rbtn_20_100_kPa";
			this->rbtn_20_100_kPa->Size = System::Drawing::Size(87, 17);
			this->rbtn_20_100_kPa->TabIndex = 2;
			this->rbtn_20_100_kPa->TabStop = true;
			this->rbtn_20_100_kPa->Text = L"20 - 100 кѕа";
			this->rbtn_20_100_kPa->UseVisualStyleBackColor = true;
			this->rbtn_20_100_kPa->CheckedChanged += gcnew System::EventHandler(this, &main_form::rbtn_20_100_kPa_CheckedChanged);
			// 
			// lbl_range
			// 
			this->lbl_range->AutoSize = true;
			this->lbl_range->Location = System::Drawing::Point(107, 29);
			this->lbl_range->Name = L"lbl_range";
			this->lbl_range->Size = System::Drawing::Size(117, 13);
			this->lbl_range->TabIndex = 3;
			this->lbl_range->Text = L"ƒиапазон измерени€";
			// 
			// lbl_a1
			// 
			this->lbl_a1->AutoSize = true;
			this->lbl_a1->Location = System::Drawing::Point(24, 149);
			this->lbl_a1->Name = L"lbl_a1";
			this->lbl_a1->Size = System::Drawing::Size(35, 13);
			this->lbl_a1->TabIndex = 4;
			this->lbl_a1->Text = L"lbl_a1";
			// 
			// lbl_a2
			// 
			this->lbl_a2->AutoSize = true;
			this->lbl_a2->Location = System::Drawing::Point(27, 181);
			this->lbl_a2->Name = L"lbl_a2";
			this->lbl_a2->Size = System::Drawing::Size(35, 13);
			this->lbl_a2->TabIndex = 5;
			this->lbl_a2->Text = L"lbl_a2";
			// 
			// lbl_a3
			// 
			this->lbl_a3->AutoSize = true;
			this->lbl_a3->Location = System::Drawing::Point(30, 212);
			this->lbl_a3->Name = L"lbl_a3";
			this->lbl_a3->Size = System::Drawing::Size(35, 13);
			this->lbl_a3->TabIndex = 6;
			this->lbl_a3->Text = L"lbl_a3";
			// 
			// lbl_a4
			// 
			this->lbl_a4->AutoSize = true;
			this->lbl_a4->Location = System::Drawing::Point(27, 240);
			this->lbl_a4->Name = L"lbl_a4";
			this->lbl_a4->Size = System::Drawing::Size(35, 13);
			this->lbl_a4->TabIndex = 7;
			this->lbl_a4->Text = L"lbl_a4";
			// 
			// lbl_a5
			// 
			this->lbl_a5->AutoSize = true;
			this->lbl_a5->Location = System::Drawing::Point(27, 271);
			this->lbl_a5->Name = L"lbl_a5";
			this->lbl_a5->Size = System::Drawing::Size(35, 13);
			this->lbl_a5->TabIndex = 8;
			this->lbl_a5->Text = L"lbl_a5";
			// 
			// lbl_b1
			// 
			this->lbl_b1->AutoSize = true;
			this->lbl_b1->Location = System::Drawing::Point(211, 144);
			this->lbl_b1->Name = L"lbl_b1";
			this->lbl_b1->Size = System::Drawing::Size(35, 13);
			this->lbl_b1->TabIndex = 9;
			this->lbl_b1->Text = L"lbl_b1";
			// 
			// lbl_b2
			// 
			this->lbl_b2->AutoSize = true;
			this->lbl_b2->Location = System::Drawing::Point(214, 176);
			this->lbl_b2->Name = L"lbl_b2";
			this->lbl_b2->Size = System::Drawing::Size(35, 13);
			this->lbl_b2->TabIndex = 10;
			this->lbl_b2->Text = L"lbl_b2";
			// 
			// lbl_b3
			// 
			this->lbl_b3->AutoSize = true;
			this->lbl_b3->Location = System::Drawing::Point(214, 207);
			this->lbl_b3->Name = L"lbl_b3";
			this->lbl_b3->Size = System::Drawing::Size(35, 13);
			this->lbl_b3->TabIndex = 11;
			this->lbl_b3->Text = L"lbl_b3";
			// 
			// lbl_b4
			// 
			this->lbl_b4->AutoSize = true;
			this->lbl_b4->Location = System::Drawing::Point(214, 235);
			this->lbl_b4->Name = L"lbl_b4";
			this->lbl_b4->Size = System::Drawing::Size(35, 13);
			this->lbl_b4->TabIndex = 12;
			this->lbl_b4->Text = L"lbl_b4";
			// 
			// lbl_b5
			// 
			this->lbl_b5->AutoSize = true;
			this->lbl_b5->Location = System::Drawing::Point(211, 266);
			this->lbl_b5->Name = L"lbl_b5";
			this->lbl_b5->Size = System::Drawing::Size(35, 13);
			this->lbl_b5->TabIndex = 13;
			this->lbl_b5->Text = L"lbl_b5";
			// 
			// lbl_b6
			// 
			this->lbl_b6->AutoSize = true;
			this->lbl_b6->Location = System::Drawing::Point(211, 296);
			this->lbl_b6->Name = L"lbl_b6";
			this->lbl_b6->Size = System::Drawing::Size(35, 13);
			this->lbl_b6->TabIndex = 14;
			this->lbl_b6->Text = L"lbl_b6";
			// 
			// tbox_a1
			// 
			this->tbox_a1->Location = System::Drawing::Point(77, 149);
			this->tbox_a1->Name = L"tbox_a1";
			this->tbox_a1->ReadOnly = true;
			this->tbox_a1->Size = System::Drawing::Size(100, 20);
			this->tbox_a1->TabIndex = 15;
			this->tbox_a1->TabStop = false;
			// 
			// tbox_a2
			// 
			this->tbox_a2->Location = System::Drawing::Point(77, 181);
			this->tbox_a2->Name = L"tbox_a2";
			this->tbox_a2->ReadOnly = true;
			this->tbox_a2->Size = System::Drawing::Size(100, 20);
			this->tbox_a2->TabIndex = 16;
			this->tbox_a2->TabStop = false;
			// 
			// tbox_a3
			// 
			this->tbox_a3->Location = System::Drawing::Point(77, 212);
			this->tbox_a3->Name = L"tbox_a3";
			this->tbox_a3->ReadOnly = true;
			this->tbox_a3->Size = System::Drawing::Size(100, 20);
			this->tbox_a3->TabIndex = 17;
			this->tbox_a3->TabStop = false;
			// 
			// tbox_a4
			// 
			this->tbox_a4->Location = System::Drawing::Point(77, 240);
			this->tbox_a4->Name = L"tbox_a4";
			this->tbox_a4->ReadOnly = true;
			this->tbox_a4->Size = System::Drawing::Size(100, 20);
			this->tbox_a4->TabIndex = 18;
			this->tbox_a4->TabStop = false;
			// 
			// tbox_a5
			// 
			this->tbox_a5->Location = System::Drawing::Point(77, 271);
			this->tbox_a5->Name = L"tbox_a5";
			this->tbox_a5->ReadOnly = true;
			this->tbox_a5->Size = System::Drawing::Size(100, 20);
			this->tbox_a5->TabIndex = 19;
			this->tbox_a5->TabStop = false;
			// 
			// tbox_b1
			// 
			this->tbox_b1->Location = System::Drawing::Point(272, 144);
			this->tbox_b1->Name = L"tbox_b1";
			this->tbox_b1->ReadOnly = true;
			this->tbox_b1->Size = System::Drawing::Size(100, 20);
			this->tbox_b1->TabIndex = 20;
			this->tbox_b1->TabStop = false;
			// 
			// tbox_b2
			// 
			this->tbox_b2->Location = System::Drawing::Point(272, 176);
			this->tbox_b2->Name = L"tbox_b2";
			this->tbox_b2->ReadOnly = true;
			this->tbox_b2->Size = System::Drawing::Size(100, 20);
			this->tbox_b2->TabIndex = 21;
			this->tbox_b2->TabStop = false;
			// 
			// tbox_b3
			// 
			this->tbox_b3->Location = System::Drawing::Point(272, 207);
			this->tbox_b3->Name = L"tbox_b3";
			this->tbox_b3->ReadOnly = true;
			this->tbox_b3->Size = System::Drawing::Size(100, 20);
			this->tbox_b3->TabIndex = 22;
			this->tbox_b3->TabStop = false;
			// 
			// tbox_b4
			// 
			this->tbox_b4->Location = System::Drawing::Point(272, 235);
			this->tbox_b4->Name = L"tbox_b4";
			this->tbox_b4->ReadOnly = true;
			this->tbox_b4->Size = System::Drawing::Size(100, 20);
			this->tbox_b4->TabIndex = 23;
			this->tbox_b4->TabStop = false;
			// 
			// tbox_b5
			// 
			this->tbox_b5->Location = System::Drawing::Point(272, 266);
			this->tbox_b5->Name = L"tbox_b5";
			this->tbox_b5->ReadOnly = true;
			this->tbox_b5->Size = System::Drawing::Size(100, 20);
			this->tbox_b5->TabIndex = 24;
			this->tbox_b5->TabStop = false;
			// 
			// tbox_b6
			// 
			this->tbox_b6->Location = System::Drawing::Point(272, 296);
			this->tbox_b6->Name = L"tbox_b6";
			this->tbox_b6->ReadOnly = true;
			this->tbox_b6->Size = System::Drawing::Size(100, 20);
			this->tbox_b6->TabIndex = 25;
			this->tbox_b6->TabStop = false;
			// 
			// tbox_LRV
			// 
			this->tbox_LRV->Location = System::Drawing::Point(94, 57);
			this->tbox_LRV->Name = L"tbox_LRV";
			this->tbox_LRV->Size = System::Drawing::Size(100, 20);
			this->tbox_LRV->TabIndex = 26;
			this->tbox_LRV->Text = L"0";
			this->tbox_LRV->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbox_LRV->TextChanged += gcnew System::EventHandler(this, &main_form::tbox_LRV_TextChanged);
			// 
			// tbox_URV
			// 
			this->tbox_URV->Location = System::Drawing::Point(249, 57);
			this->tbox_URV->Name = L"tbox_URV";
			this->tbox_URV->Size = System::Drawing::Size(100, 20);
			this->tbox_URV->TabIndex = 27;
			this->tbox_URV->Text = L"0";
			this->tbox_URV->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbox_URV->TextChanged += gcnew System::EventHandler(this, &main_form::tbox_URV_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(137, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"ѕроизвольное значение давлени€";
			// 
			// tbox_manu_press
			// 
			this->tbox_manu_press->Location = System::Drawing::Point(123, 416);
			this->tbox_manu_press->Name = L"tbox_manu_press";
			this->tbox_manu_press->Size = System::Drawing::Size(100, 20);
			this->tbox_manu_press->TabIndex = 29;
			this->tbox_manu_press->TabStop = false;
			this->tbox_manu_press->Text = L"0";
			this->tbox_manu_press->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbox_manu_press->TextChanged += gcnew System::EventHandler(this, &main_form::tbox_manu_press_TextChanged);
			// 
			// tbox_calc_out_signal
			// 
			this->tbox_calc_out_signal->Location = System::Drawing::Point(169, 443);
			this->tbox_calc_out_signal->Name = L"tbox_calc_out_signal";
			this->tbox_calc_out_signal->ReadOnly = true;
			this->tbox_calc_out_signal->Size = System::Drawing::Size(100, 20);
			this->tbox_calc_out_signal->TabIndex = 30;
			this->tbox_calc_out_signal->TabStop = false;
			this->tbox_calc_out_signal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// main_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 540);
			this->Controls->Add(this->tbox_calc_out_signal);
			this->Controls->Add(this->tbox_manu_press);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbox_URV);
			this->Controls->Add(this->tbox_LRV);
			this->Controls->Add(this->tbox_b6);
			this->Controls->Add(this->tbox_b5);
			this->Controls->Add(this->tbox_b4);
			this->Controls->Add(this->tbox_b3);
			this->Controls->Add(this->tbox_b2);
			this->Controls->Add(this->tbox_b1);
			this->Controls->Add(this->tbox_a5);
			this->Controls->Add(this->tbox_a4);
			this->Controls->Add(this->tbox_a3);
			this->Controls->Add(this->tbox_a2);
			this->Controls->Add(this->tbox_a1);
			this->Controls->Add(this->lbl_b6);
			this->Controls->Add(this->lbl_b5);
			this->Controls->Add(this->lbl_b4);
			this->Controls->Add(this->lbl_b3);
			this->Controls->Add(this->lbl_b2);
			this->Controls->Add(this->lbl_b1);
			this->Controls->Add(this->lbl_a5);
			this->Controls->Add(this->lbl_a4);
			this->Controls->Add(this->lbl_a3);
			this->Controls->Add(this->lbl_a2);
			this->Controls->Add(this->lbl_a1);
			this->Controls->Add(this->lbl_range);
			this->Controls->Add(this->rbtn_20_100_kPa);
			this->Controls->Add(this->rbtn_0_5_V);
			this->Controls->Add(this->rbtn_4_20_mA);
			this->Name = L"main_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PrEsSuRe CoNvErTeR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void rbtn_4_20_mA_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->lbl_a1->Text = "4 мј";
		this->lbl_a2->Text = "8 мј";
		this->lbl_a3->Text = "12 мј";
		this->lbl_a4->Text = "16 мј";
		this->lbl_a5->Text = "20 мј";
		this->lbl_b1->Text = "4 мј";
		this->lbl_b2->Text = "7.2 мј";
		this->lbl_b3->Text = "10.4 мј";
		this->lbl_b4->Text = "13.6 мј";
		this->lbl_b5->Text = "16.8 мј";
		this->lbl_b6->Text = "20 мј";
}
	private: System::Void rbtn_0_5_V_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->lbl_a1->Text = "0 ¬";
		this->lbl_a2->Text = "1.25 ¬";
		this->lbl_a3->Text = "2.5 ¬";
		this->lbl_a4->Text = "3.75 ¬";
		this->lbl_a5->Text = "5 ¬";
		this->lbl_b1->Text = "0 ¬";
		this->lbl_b2->Text = "1 ¬";
		this->lbl_b3->Text = "2 ¬";
		this->lbl_b4->Text = "3 ¬";
		this->lbl_b5->Text = "4 ¬";
		this->lbl_b6->Text = "5 ¬";
	}
	private: System::Void rbtn_20_100_kPa_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->lbl_a1->Text = "20 кѕа";
		this->lbl_a2->Text = "40 кѕа";
		this->lbl_a3->Text = "60 кѕа";
		this->lbl_a4->Text = "80 кѕа";
		this->lbl_a5->Text = "100 кѕа";
		this->lbl_b1->Text = "20 кѕа";
		this->lbl_b2->Text = "36 кѕа";
		this->lbl_b3->Text = "52 кѕа";
		this->lbl_b4->Text = "68 кѕа";
		this->lbl_b5->Text = "84 кѕа";
		this->lbl_b6->Text = "100 кѕа";
	}
	private: System::Void tbox_LRV_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->tbox_LRV->Text != "-")
			range_calc(System::Convert::ToDouble(tbox_LRV->Text), System::Convert::ToDouble(tbox_URV->Text), System::Convert::ToDouble(tbox_manu_press->Text));
	}
	private: System::Void tbox_URV_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->tbox_URV->Text != "-")
			range_calc(System::Convert::ToDouble(tbox_LRV->Text), System::Convert::ToDouble(tbox_URV->Text), System::Convert::ToDouble(tbox_manu_press->Text));
	}
	private: System::Void tbox_manu_press_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->tbox_manu_press->Text != "-")
			range_calc(System::Convert::ToDouble(tbox_LRV->Text), System::Convert::ToDouble(tbox_URV->Text), System::Convert::ToDouble(tbox_manu_press->Text));

	}
	private: System::Void range_calc(double LRV, double URV, double MANU_P) {

		this->tbox_a1->Text = System::Convert::ToString(LRV);
		this->tbox_a2->Text = System::Convert::ToString((URV - LRV) / 4  + LRV);
		this->tbox_a3->Text = System::Convert::ToString((URV - LRV) / 2 + LRV);
		this->tbox_a4->Text = System::Convert::ToString((URV - LRV) / 4 * 3 + LRV);
		this->tbox_a5->Text = System::Convert::ToString(URV);

		this->tbox_b1->Text = System::Convert::ToString(LRV);
		this->tbox_b2->Text = System::Convert::ToString((URV - LRV) / 5 + LRV);
		this->tbox_b3->Text = System::Convert::ToString((URV - LRV) / 5 * 2 + LRV);
		this->tbox_b4->Text = System::Convert::ToString((URV - LRV) / 5 * 3 + LRV);
		this->tbox_b5->Text = System::Convert::ToString((URV - LRV) / 5 * 4 + LRV);
		this->tbox_b6->Text = System::Convert::ToString(URV);
	}

};
}
