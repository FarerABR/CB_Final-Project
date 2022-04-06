#pragma once
#include<string>
#include<msclr/marshal_cppstd.h>
#include"Additional_Files/GetNumber.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ mainScreen;
	private: System::Windows::Forms::Button^ BTN0;
	private: System::Windows::Forms::Button^ BTNdot;
	private: System::Windows::Forms::Button^ BTN1;
	private: System::Windows::Forms::Button^ BTN2;
	private: System::Windows::Forms::Button^ BTN3;
	private: System::Windows::Forms::Button^ BTN4;
	private: System::Windows::Forms::Button^ BTN5;
	private: System::Windows::Forms::Button^ BTN6;
	private: System::Windows::Forms::Button^ BTN7;
	private: System::Windows::Forms::Button^ BTN8;
	private: System::Windows::Forms::Button^ BTN9;
	private: System::Windows::Forms::Button^ BTN_Equal;
	private: System::Windows::Forms::Button^ BTN_Plus;
	private: System::Windows::Forms::Button^ BTN_Minus;
	private: System::Windows::Forms::Button^ BTN_Multi;
	private: System::Windows::Forms::Button^ BTN_Divid;
	private: System::Windows::Forms::Button^ BTN_RadStat;
	private: System::Windows::Forms::Button^ BTN_Clear;
	private: System::Windows::Forms::Button^ BTN_ClearAll;
	private: System::Windows::Forms::Button^ BTN_p;
	private: System::Windows::Forms::Button^ BTN_e;
	private: System::Windows::Forms::Button^ BTN_closeBrac;
	private: System::Windows::Forms::Button^ BTN_openBrac;
	private: System::Windows::Forms::Button^ BTN_pow;
	private: System::Windows::Forms::Button^ BTN_fact;
	private: System::Windows::Forms::Button^ BTN_sin;
	private: System::Windows::Forms::Button^ BTN_cos;
	private: System::Windows::Forms::Button^ BTN_tan;
	private: System::Windows::Forms::Button^ BTN_cot;
	private: System::Windows::Forms::Button^ BTN_csc;
	private: System::Windows::Forms::Button^ BTN_sec;
	private: System::Windows::Forms::Button^ BTN_sinh;
	private: System::Windows::Forms::Button^ BTN_cosh;
	private: System::Windows::Forms::Button^ BTN_tanh;
	private: System::Windows::Forms::Button^ BTN_coth;
	private: System::Windows::Forms::Button^ BTN_csch;
	private: System::Windows::Forms::Button^ sech;
	private: System::Windows::Forms::Button^ BTN_log;
	private: System::Windows::Forms::Button^ BTN_ln;
	private: System::Windows::Forms::Button^ BTN_radical;
	private: System::Windows::Forms::Button^ BTN_abs;
	private: System::Windows::Forms::Button^ BTN_floor;
	private: System::Windows::Forms::Button^ BTN_ceiling;
	private: System::Windows::Forms::Button^ BTN_baseConvert;
	private: System::Windows::Forms::Label^ label_from;
	private: System::Windows::Forms::Label^ label_to;
	private: System::Windows::Forms::TextBox^ textbox_baseInput;
	private: System::Windows::Forms::TextBox^ textbox_base;
	private: System::Windows::Forms::TextBox^ textbox_newBase;
	private: System::Windows::Forms::Label^ label_baseResult;
	private: System::Windows::Forms::TextBox^ textbox_equation_a;
	private: System::Windows::Forms::Label^ label_equation_Xpow2;
	private: System::Windows::Forms::TextBox^ textbox_equation_b;
	private: System::Windows::Forms::Label^ label_equation_x;
	private: System::Windows::Forms::TextBox^ textbox_equation_c;
	private: System::Windows::Forms::Button^ BTN_equation;
	private: System::Windows::Forms::Label^ label_equation_result;
	private: System::Windows::Forms::Button^ BTN_radToDeg;
	private: System::Windows::Forms::Button^ BTN_degToRad;
	private: System::Windows::Forms::Button^ BTN_radToGrad;
	private: System::Windows::Forms::Button^ BTN_degToGrad;
	private: System::Windows::Forms::Button^ BTN_gradToRad;
	private: System::Windows::Forms::Button^ BTN_gradToDeg;
	private: System::Windows::Forms::TextBox^ textbox_angleConvert;
	private: System::Windows::Forms::Label^ label_angleConvertResult;
















	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->mainScreen = (gcnew System::Windows::Forms::TextBox());
			this->BTN0 = (gcnew System::Windows::Forms::Button());
			this->BTNdot = (gcnew System::Windows::Forms::Button());
			this->BTN1 = (gcnew System::Windows::Forms::Button());
			this->BTN2 = (gcnew System::Windows::Forms::Button());
			this->BTN3 = (gcnew System::Windows::Forms::Button());
			this->BTN4 = (gcnew System::Windows::Forms::Button());
			this->BTN5 = (gcnew System::Windows::Forms::Button());
			this->BTN6 = (gcnew System::Windows::Forms::Button());
			this->BTN7 = (gcnew System::Windows::Forms::Button());
			this->BTN8 = (gcnew System::Windows::Forms::Button());
			this->BTN9 = (gcnew System::Windows::Forms::Button());
			this->BTN_Equal = (gcnew System::Windows::Forms::Button());
			this->BTN_Plus = (gcnew System::Windows::Forms::Button());
			this->BTN_Minus = (gcnew System::Windows::Forms::Button());
			this->BTN_Multi = (gcnew System::Windows::Forms::Button());
			this->BTN_Divid = (gcnew System::Windows::Forms::Button());
			this->BTN_RadStat = (gcnew System::Windows::Forms::Button());
			this->BTN_Clear = (gcnew System::Windows::Forms::Button());
			this->BTN_ClearAll = (gcnew System::Windows::Forms::Button());
			this->BTN_p = (gcnew System::Windows::Forms::Button());
			this->BTN_e = (gcnew System::Windows::Forms::Button());
			this->BTN_closeBrac = (gcnew System::Windows::Forms::Button());
			this->BTN_openBrac = (gcnew System::Windows::Forms::Button());
			this->BTN_pow = (gcnew System::Windows::Forms::Button());
			this->BTN_fact = (gcnew System::Windows::Forms::Button());
			this->BTN_sin = (gcnew System::Windows::Forms::Button());
			this->BTN_cos = (gcnew System::Windows::Forms::Button());
			this->BTN_tan = (gcnew System::Windows::Forms::Button());
			this->BTN_cot = (gcnew System::Windows::Forms::Button());
			this->BTN_csc = (gcnew System::Windows::Forms::Button());
			this->BTN_sec = (gcnew System::Windows::Forms::Button());
			this->BTN_sinh = (gcnew System::Windows::Forms::Button());
			this->BTN_cosh = (gcnew System::Windows::Forms::Button());
			this->BTN_tanh = (gcnew System::Windows::Forms::Button());
			this->BTN_coth = (gcnew System::Windows::Forms::Button());
			this->BTN_csch = (gcnew System::Windows::Forms::Button());
			this->sech = (gcnew System::Windows::Forms::Button());
			this->BTN_log = (gcnew System::Windows::Forms::Button());
			this->BTN_ln = (gcnew System::Windows::Forms::Button());
			this->BTN_radical = (gcnew System::Windows::Forms::Button());
			this->BTN_abs = (gcnew System::Windows::Forms::Button());
			this->BTN_floor = (gcnew System::Windows::Forms::Button());
			this->BTN_ceiling = (gcnew System::Windows::Forms::Button());
			this->BTN_baseConvert = (gcnew System::Windows::Forms::Button());
			this->label_from = (gcnew System::Windows::Forms::Label());
			this->label_to = (gcnew System::Windows::Forms::Label());
			this->textbox_baseInput = (gcnew System::Windows::Forms::TextBox());
			this->textbox_base = (gcnew System::Windows::Forms::TextBox());
			this->textbox_newBase = (gcnew System::Windows::Forms::TextBox());
			this->label_baseResult = (gcnew System::Windows::Forms::Label());
			this->textbox_equation_a = (gcnew System::Windows::Forms::TextBox());
			this->label_equation_Xpow2 = (gcnew System::Windows::Forms::Label());
			this->textbox_equation_b = (gcnew System::Windows::Forms::TextBox());
			this->label_equation_x = (gcnew System::Windows::Forms::Label());
			this->textbox_equation_c = (gcnew System::Windows::Forms::TextBox());
			this->BTN_equation = (gcnew System::Windows::Forms::Button());
			this->label_equation_result = (gcnew System::Windows::Forms::Label());
			this->BTN_radToDeg = (gcnew System::Windows::Forms::Button());
			this->BTN_degToRad = (gcnew System::Windows::Forms::Button());
			this->BTN_radToGrad = (gcnew System::Windows::Forms::Button());
			this->BTN_degToGrad = (gcnew System::Windows::Forms::Button());
			this->BTN_gradToRad = (gcnew System::Windows::Forms::Button());
			this->BTN_gradToDeg = (gcnew System::Windows::Forms::Button());
			this->textbox_angleConvert = (gcnew System::Windows::Forms::TextBox());
			this->label_angleConvertResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// mainScreen
			// 
			this->mainScreen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mainScreen->Font = (gcnew System::Drawing::Font(L"Arial", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainScreen->Location = System::Drawing::Point(12, 23);
			this->mainScreen->Multiline = true;
			this->mainScreen->Name = L"mainScreen";
			this->mainScreen->Size = System::Drawing::Size(455, 155);
			this->mainScreen->TabIndex = 0;
			this->mainScreen->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// BTN0
			// 
			this->BTN0->BackColor = System::Drawing::Color::MistyRose;
			this->BTN0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN0->Location = System::Drawing::Point(78, 514);
			this->BTN0->Name = L"BTN0";
			this->BTN0->Size = System::Drawing::Size(60, 58);
			this->BTN0->TabIndex = 1;
			this->BTN0->Text = L"0";
			this->BTN0->UseVisualStyleBackColor = false;
			this->BTN0->Click += gcnew System::EventHandler(this, &MyForm::BTNzero_Click);
			// 
			// BTNdot
			// 
			this->BTNdot->BackColor = System::Drawing::Color::MistyRose;
			this->BTNdot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNdot->Location = System::Drawing::Point(12, 514);
			this->BTNdot->Name = L"BTNdot";
			this->BTNdot->Size = System::Drawing::Size(60, 58);
			this->BTNdot->TabIndex = 2;
			this->BTNdot->Text = L".";
			this->BTNdot->UseVisualStyleBackColor = false;
			this->BTNdot->Click += gcnew System::EventHandler(this, &MyForm::BTNdot_Click);
			// 
			// BTN1
			// 
			this->BTN1->BackColor = System::Drawing::Color::MistyRose;
			this->BTN1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN1->Location = System::Drawing::Point(12, 448);
			this->BTN1->Name = L"BTN1";
			this->BTN1->Size = System::Drawing::Size(60, 58);
			this->BTN1->TabIndex = 3;
			this->BTN1->Text = L"1";
			this->BTN1->UseVisualStyleBackColor = false;
			this->BTN1->Click += gcnew System::EventHandler(this, &MyForm::BTN1_Click);
			// 
			// BTN2
			// 
			this->BTN2->BackColor = System::Drawing::Color::MistyRose;
			this->BTN2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN2->Location = System::Drawing::Point(78, 448);
			this->BTN2->Name = L"BTN2";
			this->BTN2->Size = System::Drawing::Size(60, 58);
			this->BTN2->TabIndex = 4;
			this->BTN2->Text = L"2";
			this->BTN2->UseVisualStyleBackColor = false;
			this->BTN2->Click += gcnew System::EventHandler(this, &MyForm::BTN2_Click);
			// 
			// BTN3
			// 
			this->BTN3->BackColor = System::Drawing::Color::MistyRose;
			this->BTN3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN3->Location = System::Drawing::Point(144, 448);
			this->BTN3->Name = L"BTN3";
			this->BTN3->Size = System::Drawing::Size(60, 58);
			this->BTN3->TabIndex = 5;
			this->BTN3->Text = L"3";
			this->BTN3->UseVisualStyleBackColor = false;
			this->BTN3->Click += gcnew System::EventHandler(this, &MyForm::BTN3_Click);
			// 
			// BTN4
			// 
			this->BTN4->BackColor = System::Drawing::Color::MistyRose;
			this->BTN4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN4->Location = System::Drawing::Point(12, 384);
			this->BTN4->Name = L"BTN4";
			this->BTN4->Size = System::Drawing::Size(60, 58);
			this->BTN4->TabIndex = 6;
			this->BTN4->Text = L"4";
			this->BTN4->UseVisualStyleBackColor = false;
			this->BTN4->Click += gcnew System::EventHandler(this, &MyForm::BTN4_Click);
			// 
			// BTN5
			// 
			this->BTN5->BackColor = System::Drawing::Color::MistyRose;
			this->BTN5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN5->Location = System::Drawing::Point(78, 384);
			this->BTN5->Name = L"BTN5";
			this->BTN5->Size = System::Drawing::Size(60, 58);
			this->BTN5->TabIndex = 7;
			this->BTN5->Text = L"5";
			this->BTN5->UseVisualStyleBackColor = false;
			this->BTN5->Click += gcnew System::EventHandler(this, &MyForm::BTN5_Click);
			// 
			// BTN6
			// 
			this->BTN6->BackColor = System::Drawing::Color::MistyRose;
			this->BTN6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN6->Location = System::Drawing::Point(144, 384);
			this->BTN6->Name = L"BTN6";
			this->BTN6->Size = System::Drawing::Size(60, 58);
			this->BTN6->TabIndex = 8;
			this->BTN6->Text = L"6";
			this->BTN6->UseVisualStyleBackColor = false;
			this->BTN6->Click += gcnew System::EventHandler(this, &MyForm::BTN6_Click);
			// 
			// BTN7
			// 
			this->BTN7->BackColor = System::Drawing::Color::MistyRose;
			this->BTN7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN7->Location = System::Drawing::Point(12, 315);
			this->BTN7->Name = L"BTN7";
			this->BTN7->Size = System::Drawing::Size(60, 58);
			this->BTN7->TabIndex = 9;
			this->BTN7->Text = L"7";
			this->BTN7->UseVisualStyleBackColor = false;
			this->BTN7->Click += gcnew System::EventHandler(this, &MyForm::BTN7_Click);
			// 
			// BTN8
			// 
			this->BTN8->BackColor = System::Drawing::Color::MistyRose;
			this->BTN8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN8->Location = System::Drawing::Point(78, 315);
			this->BTN8->Name = L"BTN8";
			this->BTN8->Size = System::Drawing::Size(60, 58);
			this->BTN8->TabIndex = 10;
			this->BTN8->Text = L"8";
			this->BTN8->UseVisualStyleBackColor = false;
			this->BTN8->Click += gcnew System::EventHandler(this, &MyForm::BTN8_Click);
			// 
			// BTN9
			// 
			this->BTN9->BackColor = System::Drawing::Color::MistyRose;
			this->BTN9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN9->Location = System::Drawing::Point(144, 315);
			this->BTN9->Name = L"BTN9";
			this->BTN9->Size = System::Drawing::Size(60, 58);
			this->BTN9->TabIndex = 11;
			this->BTN9->Text = L"9";
			this->BTN9->UseVisualStyleBackColor = false;
			this->BTN9->Click += gcnew System::EventHandler(this, &MyForm::BTN9_Click);
			// 
			// BTN_Equal
			// 
			this->BTN_Equal->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_Equal->Location = System::Drawing::Point(144, 514);
			this->BTN_Equal->Name = L"BTN_Equal";
			this->BTN_Equal->Size = System::Drawing::Size(60, 58);
			this->BTN_Equal->TabIndex = 12;
			this->BTN_Equal->Text = L"=";
			this->BTN_Equal->UseVisualStyleBackColor = false;
			this->BTN_Equal->Click += gcnew System::EventHandler(this, &MyForm::BTN_Equal_Click);
			// 
			// BTN_Plus
			// 
			this->BTN_Plus->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_Plus->Location = System::Drawing::Point(210, 514);
			this->BTN_Plus->Name = L"BTN_Plus";
			this->BTN_Plus->Size = System::Drawing::Size(60, 58);
			this->BTN_Plus->TabIndex = 13;
			this->BTN_Plus->Text = L"+";
			this->BTN_Plus->UseVisualStyleBackColor = false;
			this->BTN_Plus->Click += gcnew System::EventHandler(this, &MyForm::BTN_Plus_Click);
			// 
			// BTN_Minus
			// 
			this->BTN_Minus->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_Minus->Location = System::Drawing::Point(210, 448);
			this->BTN_Minus->Name = L"BTN_Minus";
			this->BTN_Minus->Size = System::Drawing::Size(60, 58);
			this->BTN_Minus->TabIndex = 14;
			this->BTN_Minus->Text = L"-";
			this->BTN_Minus->UseVisualStyleBackColor = false;
			this->BTN_Minus->Click += gcnew System::EventHandler(this, &MyForm::BTN_Minus_Click);
			// 
			// BTN_Multi
			// 
			this->BTN_Multi->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_Multi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_Multi->Location = System::Drawing::Point(210, 384);
			this->BTN_Multi->Name = L"BTN_Multi";
			this->BTN_Multi->Size = System::Drawing::Size(60, 58);
			this->BTN_Multi->TabIndex = 15;
			this->BTN_Multi->Text = L"*";
			this->BTN_Multi->UseVisualStyleBackColor = false;
			this->BTN_Multi->Click += gcnew System::EventHandler(this, &MyForm::BTN_Multi_Click);
			// 
			// BTN_Divid
			// 
			this->BTN_Divid->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_Divid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_Divid->Location = System::Drawing::Point(210, 315);
			this->BTN_Divid->Name = L"BTN_Divid";
			this->BTN_Divid->Size = System::Drawing::Size(60, 58);
			this->BTN_Divid->TabIndex = 16;
			this->BTN_Divid->Text = L"/";
			this->BTN_Divid->UseVisualStyleBackColor = false;
			this->BTN_Divid->Click += gcnew System::EventHandler(this, &MyForm::BTN_Divid_Click);
			// 
			// BTN_RadStat
			// 
			this->BTN_RadStat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BTN_RadStat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_RadStat->Location = System::Drawing::Point(407, 120);
			this->BTN_RadStat->Name = L"BTN_RadStat";
			this->BTN_RadStat->Size = System::Drawing::Size(60, 58);
			this->BTN_RadStat->TabIndex = 17;
			this->BTN_RadStat->Text = L"Rad";
			this->BTN_RadStat->UseVisualStyleBackColor = false;
			this->BTN_RadStat->Click += gcnew System::EventHandler(this, &MyForm::BTN_RadStat_Click);
			// 
			// BTN_Clear
			// 
			this->BTN_Clear->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_Clear->Location = System::Drawing::Point(210, 250);
			this->BTN_Clear->Name = L"BTN_Clear";
			this->BTN_Clear->Size = System::Drawing::Size(60, 58);
			this->BTN_Clear->TabIndex = 18;
			this->BTN_Clear->Text = L"C";
			this->BTN_Clear->UseVisualStyleBackColor = false;
			this->BTN_Clear->Click += gcnew System::EventHandler(this, &MyForm::BTN_Clear_Click);
			// 
			// BTN_ClearAll
			// 
			this->BTN_ClearAll->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_ClearAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_ClearAll->Location = System::Drawing::Point(144, 250);
			this->BTN_ClearAll->Name = L"BTN_ClearAll";
			this->BTN_ClearAll->Size = System::Drawing::Size(60, 58);
			this->BTN_ClearAll->TabIndex = 19;
			this->BTN_ClearAll->Text = L"CE";
			this->BTN_ClearAll->UseVisualStyleBackColor = false;
			this->BTN_ClearAll->Click += gcnew System::EventHandler(this, &MyForm::BTN_ClearAll_Click);
			// 
			// BTN_p
			// 
			this->BTN_p->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_p->Location = System::Drawing::Point(210, 185);
			this->BTN_p->Name = L"BTN_p";
			this->BTN_p->Size = System::Drawing::Size(60, 58);
			this->BTN_p->TabIndex = 20;
			this->BTN_p->Text = L"p";
			this->BTN_p->UseVisualStyleBackColor = false;
			this->BTN_p->Click += gcnew System::EventHandler(this, &MyForm::BTN_p_Click);
			// 
			// BTN_e
			// 
			this->BTN_e->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_e->Location = System::Drawing::Point(144, 185);
			this->BTN_e->Name = L"BTN_e";
			this->BTN_e->Size = System::Drawing::Size(60, 58);
			this->BTN_e->TabIndex = 21;
			this->BTN_e->Text = L"e";
			this->BTN_e->UseVisualStyleBackColor = false;
			this->BTN_e->Click += gcnew System::EventHandler(this, &MyForm::BTN_e_Click);
			// 
			// BTN_closeBrac
			// 
			this->BTN_closeBrac->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_closeBrac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_closeBrac->Location = System::Drawing::Point(78, 250);
			this->BTN_closeBrac->Name = L"BTN_closeBrac";
			this->BTN_closeBrac->Size = System::Drawing::Size(60, 58);
			this->BTN_closeBrac->TabIndex = 22;
			this->BTN_closeBrac->Text = L")";
			this->BTN_closeBrac->UseVisualStyleBackColor = false;
			this->BTN_closeBrac->Click += gcnew System::EventHandler(this, &MyForm::BTN_closeBrac_Click);
			// 
			// BTN_openBrac
			// 
			this->BTN_openBrac->BackColor = System::Drawing::Color::MistyRose;
			this->BTN_openBrac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_openBrac->Location = System::Drawing::Point(12, 250);
			this->BTN_openBrac->Name = L"BTN_openBrac";
			this->BTN_openBrac->Size = System::Drawing::Size(60, 58);
			this->BTN_openBrac->TabIndex = 23;
			this->BTN_openBrac->Text = L"(";
			this->BTN_openBrac->UseVisualStyleBackColor = false;
			this->BTN_openBrac->Click += gcnew System::EventHandler(this, &MyForm::BTN_openBrac_Click);
			// 
			// BTN_pow
			// 
			this->BTN_pow->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_pow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_pow->Location = System::Drawing::Point(78, 185);
			this->BTN_pow->Name = L"BTN_pow";
			this->BTN_pow->Size = System::Drawing::Size(60, 58);
			this->BTN_pow->TabIndex = 24;
			this->BTN_pow->Text = L"POW";
			this->BTN_pow->UseVisualStyleBackColor = false;
			this->BTN_pow->Click += gcnew System::EventHandler(this, &MyForm::BTN_pow_Click);
			// 
			// BTN_fact
			// 
			this->BTN_fact->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_fact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_fact->Location = System::Drawing::Point(12, 185);
			this->BTN_fact->Name = L"BTN_fact";
			this->BTN_fact->Size = System::Drawing::Size(60, 58);
			this->BTN_fact->TabIndex = 25;
			this->BTN_fact->Text = L"!";
			this->BTN_fact->UseVisualStyleBackColor = false;
			this->BTN_fact->Click += gcnew System::EventHandler(this, &MyForm::BTN_fact_Click);
			// 
			// BTN_sin
			// 
			this->BTN_sin->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_sin->Location = System::Drawing::Point(342, 185);
			this->BTN_sin->Name = L"BTN_sin";
			this->BTN_sin->Size = System::Drawing::Size(60, 58);
			this->BTN_sin->TabIndex = 26;
			this->BTN_sin->Text = L"sin";
			this->BTN_sin->UseVisualStyleBackColor = false;
			this->BTN_sin->Click += gcnew System::EventHandler(this, &MyForm::BTN_sin_Click);
			// 
			// BTN_cos
			// 
			this->BTN_cos->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_cos->Location = System::Drawing::Point(342, 250);
			this->BTN_cos->Name = L"BTN_cos";
			this->BTN_cos->Size = System::Drawing::Size(60, 58);
			this->BTN_cos->TabIndex = 27;
			this->BTN_cos->Text = L"cos";
			this->BTN_cos->UseVisualStyleBackColor = false;
			this->BTN_cos->Click += gcnew System::EventHandler(this, &MyForm::BTN_cos_Click);
			// 
			// BTN_tan
			// 
			this->BTN_tan->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_tan->Location = System::Drawing::Point(342, 315);
			this->BTN_tan->Name = L"BTN_tan";
			this->BTN_tan->Size = System::Drawing::Size(60, 58);
			this->BTN_tan->TabIndex = 28;
			this->BTN_tan->Text = L"tan";
			this->BTN_tan->UseVisualStyleBackColor = false;
			this->BTN_tan->Click += gcnew System::EventHandler(this, &MyForm::BTN_tan_Click);
			// 
			// BTN_cot
			// 
			this->BTN_cot->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_cot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_cot->Location = System::Drawing::Point(342, 384);
			this->BTN_cot->Name = L"BTN_cot";
			this->BTN_cot->Size = System::Drawing::Size(60, 58);
			this->BTN_cot->TabIndex = 29;
			this->BTN_cot->Text = L"cot";
			this->BTN_cot->UseVisualStyleBackColor = false;
			this->BTN_cot->Click += gcnew System::EventHandler(this, &MyForm::BTN_cot_Click);
			// 
			// BTN_csc
			// 
			this->BTN_csc->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_csc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_csc->Location = System::Drawing::Point(342, 448);
			this->BTN_csc->Name = L"BTN_csc";
			this->BTN_csc->Size = System::Drawing::Size(60, 58);
			this->BTN_csc->TabIndex = 30;
			this->BTN_csc->Text = L"csc";
			this->BTN_csc->UseVisualStyleBackColor = false;
			this->BTN_csc->Click += gcnew System::EventHandler(this, &MyForm::BTN_csc_Click);
			// 
			// BTN_sec
			// 
			this->BTN_sec->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_sec->Location = System::Drawing::Point(342, 514);
			this->BTN_sec->Name = L"BTN_sec";
			this->BTN_sec->Size = System::Drawing::Size(60, 58);
			this->BTN_sec->TabIndex = 31;
			this->BTN_sec->Text = L"sec";
			this->BTN_sec->UseVisualStyleBackColor = false;
			this->BTN_sec->Click += gcnew System::EventHandler(this, &MyForm::BTN_sec_Click);
			// 
			// BTN_sinh
			// 
			this->BTN_sinh->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_sinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_sinh->Location = System::Drawing::Point(408, 185);
			this->BTN_sinh->Name = L"BTN_sinh";
			this->BTN_sinh->Size = System::Drawing::Size(60, 58);
			this->BTN_sinh->TabIndex = 32;
			this->BTN_sinh->Text = L"sinh";
			this->BTN_sinh->UseVisualStyleBackColor = false;
			this->BTN_sinh->Click += gcnew System::EventHandler(this, &MyForm::BTN_sinh_Click);
			// 
			// BTN_cosh
			// 
			this->BTN_cosh->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_cosh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_cosh->Location = System::Drawing::Point(408, 250);
			this->BTN_cosh->Name = L"BTN_cosh";
			this->BTN_cosh->Size = System::Drawing::Size(60, 58);
			this->BTN_cosh->TabIndex = 33;
			this->BTN_cosh->Text = L"cosh";
			this->BTN_cosh->UseVisualStyleBackColor = false;
			this->BTN_cosh->Click += gcnew System::EventHandler(this, &MyForm::BTN_cosh_Click);
			// 
			// BTN_tanh
			// 
			this->BTN_tanh->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_tanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_tanh->Location = System::Drawing::Point(408, 315);
			this->BTN_tanh->Name = L"BTN_tanh";
			this->BTN_tanh->Size = System::Drawing::Size(60, 58);
			this->BTN_tanh->TabIndex = 34;
			this->BTN_tanh->Text = L"tanh";
			this->BTN_tanh->UseVisualStyleBackColor = false;
			this->BTN_tanh->Click += gcnew System::EventHandler(this, &MyForm::BTN_tanh_Click);
			// 
			// BTN_coth
			// 
			this->BTN_coth->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_coth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_coth->Location = System::Drawing::Point(408, 384);
			this->BTN_coth->Name = L"BTN_coth";
			this->BTN_coth->Size = System::Drawing::Size(60, 58);
			this->BTN_coth->TabIndex = 35;
			this->BTN_coth->Text = L"coth";
			this->BTN_coth->UseVisualStyleBackColor = false;
			this->BTN_coth->Click += gcnew System::EventHandler(this, &MyForm::BTN_coth_Click);
			// 
			// BTN_csch
			// 
			this->BTN_csch->BackColor = System::Drawing::Color::MediumPurple;
			this->BTN_csch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_csch->Location = System::Drawing::Point(408, 448);
			this->BTN_csch->Name = L"BTN_csch";
			this->BTN_csch->Size = System::Drawing::Size(60, 58);
			this->BTN_csch->TabIndex = 36;
			this->BTN_csch->Text = L"csch";
			this->BTN_csch->UseVisualStyleBackColor = false;
			this->BTN_csch->Click += gcnew System::EventHandler(this, &MyForm::BTN_csch_Click);
			// 
			// sech
			// 
			this->sech->BackColor = System::Drawing::Color::MediumPurple;
			this->sech->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sech->Location = System::Drawing::Point(408, 514);
			this->sech->Name = L"sech";
			this->sech->Size = System::Drawing::Size(60, 58);
			this->sech->TabIndex = 37;
			this->sech->Text = L"sech";
			this->sech->UseVisualStyleBackColor = false;
			this->sech->Click += gcnew System::EventHandler(this, &MyForm::sech_Click);
			// 
			// BTN_log
			// 
			this->BTN_log->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_log->Location = System::Drawing::Point(276, 185);
			this->BTN_log->Name = L"BTN_log";
			this->BTN_log->Size = System::Drawing::Size(60, 58);
			this->BTN_log->TabIndex = 38;
			this->BTN_log->Text = L"log";
			this->BTN_log->UseVisualStyleBackColor = false;
			this->BTN_log->Click += gcnew System::EventHandler(this, &MyForm::BTN_log_Click);
			// 
			// BTN_ln
			// 
			this->BTN_ln->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_ln->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_ln->Location = System::Drawing::Point(276, 250);
			this->BTN_ln->Name = L"BTN_ln";
			this->BTN_ln->Size = System::Drawing::Size(60, 58);
			this->BTN_ln->TabIndex = 39;
			this->BTN_ln->Text = L"ln";
			this->BTN_ln->UseVisualStyleBackColor = false;
			this->BTN_ln->Click += gcnew System::EventHandler(this, &MyForm::BTN_ln_Click);
			// 
			// BTN_radical
			// 
			this->BTN_radical->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_radical->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_radical->Location = System::Drawing::Point(276, 315);
			this->BTN_radical->Name = L"BTN_radical";
			this->BTN_radical->Size = System::Drawing::Size(60, 58);
			this->BTN_radical->TabIndex = 40;
			this->BTN_radical->Text = L"√";
			this->BTN_radical->UseVisualStyleBackColor = false;
			this->BTN_radical->Click += gcnew System::EventHandler(this, &MyForm::BTN_radical_Click);
			// 
			// BTN_abs
			// 
			this->BTN_abs->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_abs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_abs->Location = System::Drawing::Point(276, 384);
			this->BTN_abs->Name = L"BTN_abs";
			this->BTN_abs->Size = System::Drawing::Size(60, 58);
			this->BTN_abs->TabIndex = 41;
			this->BTN_abs->Text = L"| |";
			this->BTN_abs->UseVisualStyleBackColor = false;
			this->BTN_abs->Click += gcnew System::EventHandler(this, &MyForm::BTN_abs_Click);
			// 
			// BTN_floor
			// 
			this->BTN_floor->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_floor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_floor->Location = System::Drawing::Point(276, 514);
			this->BTN_floor->Name = L"BTN_floor";
			this->BTN_floor->Size = System::Drawing::Size(60, 58);
			this->BTN_floor->TabIndex = 42;
			this->BTN_floor->Text = L"⌊⌋";
			this->BTN_floor->UseVisualStyleBackColor = false;
			this->BTN_floor->Click += gcnew System::EventHandler(this, &MyForm::BTN_floor_Click);
			// 
			// BTN_ceiling
			// 
			this->BTN_ceiling->BackColor = System::Drawing::Color::SpringGreen;
			this->BTN_ceiling->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_ceiling->Location = System::Drawing::Point(276, 448);
			this->BTN_ceiling->Name = L"BTN_ceiling";
			this->BTN_ceiling->Size = System::Drawing::Size(60, 58);
			this->BTN_ceiling->TabIndex = 43;
			this->BTN_ceiling->Text = L"⌈⌉";
			this->BTN_ceiling->UseVisualStyleBackColor = false;
			this->BTN_ceiling->Click += gcnew System::EventHandler(this, &MyForm::BTN_ceiling_Click);
			// 
			// BTN_baseConvert
			// 
			this->BTN_baseConvert->BackColor = System::Drawing::Color::Moccasin;
			this->BTN_baseConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_baseConvert->Location = System::Drawing::Point(534, 120);
			this->BTN_baseConvert->Name = L"BTN_baseConvert";
			this->BTN_baseConvert->Size = System::Drawing::Size(138, 58);
			this->BTN_baseConvert->TabIndex = 44;
			this->BTN_baseConvert->Text = L"Base Convert";
			this->BTN_baseConvert->UseVisualStyleBackColor = false;
			this->BTN_baseConvert->Click += gcnew System::EventHandler(this, &MyForm::BTN_baseConvert_Click);
			// 
			// label_from
			// 
			this->label_from->AutoSize = true;
			this->label_from->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_from->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_from->Location = System::Drawing::Point(531, 44);
			this->label_from->MaximumSize = System::Drawing::Size(99, 101);
			this->label_from->Name = L"label_from";
			this->label_from->Size = System::Drawing::Size(40, 17);
			this->label_from->TabIndex = 45;
			this->label_from->Text = L"From";
			// 
			// label_to
			// 
			this->label_to->AutoSize = true;
			this->label_to->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_to->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_to->Location = System::Drawing::Point(634, 43);
			this->label_to->MaximumSize = System::Drawing::Size(99, 101);
			this->label_to->Name = L"label_to";
			this->label_to->Size = System::Drawing::Size(20, 17);
			this->label_to->TabIndex = 46;
			this->label_to->Text = L"to";
			// 
			// textbox_baseInput
			// 
			this->textbox_baseInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_baseInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->textbox_baseInput->Location = System::Drawing::Point(474, 42);
			this->textbox_baseInput->Multiline = true;
			this->textbox_baseInput->Name = L"textbox_baseInput";
			this->textbox_baseInput->Size = System::Drawing::Size(51, 26);
			this->textbox_baseInput->TabIndex = 47;
			this->textbox_baseInput->Text = L"2";
			this->textbox_baseInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textbox_base
			// 
			this->textbox_base->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_base->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->textbox_base->Location = System::Drawing::Point(579, 42);
			this->textbox_base->Multiline = true;
			this->textbox_base->Name = L"textbox_base";
			this->textbox_base->Size = System::Drawing::Size(51, 26);
			this->textbox_base->TabIndex = 48;
			this->textbox_base->Text = L"10";
			this->textbox_base->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textbox_newBase
			// 
			this->textbox_newBase->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_newBase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->textbox_newBase->Location = System::Drawing::Point(660, 42);
			this->textbox_newBase->Multiline = true;
			this->textbox_newBase->Name = L"textbox_newBase";
			this->textbox_newBase->Size = System::Drawing::Size(51, 26);
			this->textbox_newBase->TabIndex = 49;
			this->textbox_newBase->Text = L"2";
			this->textbox_newBase->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_baseResult
			// 
			this->label_baseResult->BackColor = System::Drawing::SystemColors::Info;
			this->label_baseResult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_baseResult->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label_baseResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_baseResult->Location = System::Drawing::Point(555, 88);
			this->label_baseResult->MaximumSize = System::Drawing::Size(101, 100);
			this->label_baseResult->Name = L"label_baseResult";
			this->label_baseResult->Size = System::Drawing::Size(101, 31);
			this->label_baseResult->TabIndex = 50;
			this->label_baseResult->Text = L"0";
			this->label_baseResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_baseResult->UseWaitCursor = true;
			// 
			// textbox_equation_a
			// 
			this->textbox_equation_a->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_equation_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->textbox_equation_a->Location = System::Drawing::Point(474, 208);
			this->textbox_equation_a->Multiline = true;
			this->textbox_equation_a->Name = L"textbox_equation_a";
			this->textbox_equation_a->Size = System::Drawing::Size(51, 26);
			this->textbox_equation_a->TabIndex = 51;
			this->textbox_equation_a->Text = L"1";
			this->textbox_equation_a->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_equation_Xpow2
			// 
			this->label_equation_Xpow2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_equation_Xpow2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_equation_Xpow2->Location = System::Drawing::Point(532, 210);
			this->label_equation_Xpow2->MaximumSize = System::Drawing::Size(99, 101);
			this->label_equation_Xpow2->Name = L"label_equation_Xpow2";
			this->label_equation_Xpow2->Size = System::Drawing::Size(41, 17);
			this->label_equation_Xpow2->TabIndex = 52;
			this->label_equation_Xpow2->Text = L"x^2 +";
			this->label_equation_Xpow2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textbox_equation_b
			// 
			this->textbox_equation_b->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_equation_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->textbox_equation_b->Location = System::Drawing::Point(579, 208);
			this->textbox_equation_b->Multiline = true;
			this->textbox_equation_b->Name = L"textbox_equation_b";
			this->textbox_equation_b->Size = System::Drawing::Size(51, 26);
			this->textbox_equation_b->TabIndex = 53;
			this->textbox_equation_b->Text = L"1";
			this->textbox_equation_b->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_equation_x
			// 
			this->label_equation_x->AutoSize = true;
			this->label_equation_x->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_equation_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_equation_x->Location = System::Drawing::Point(633, 210);
			this->label_equation_x->MaximumSize = System::Drawing::Size(99, 101);
			this->label_equation_x->Name = L"label_equation_x";
			this->label_equation_x->Size = System::Drawing::Size(26, 17);
			this->label_equation_x->TabIndex = 54;
			this->label_equation_x->Text = L"x +";
			// 
			// textbox_equation_c
			// 
			this->textbox_equation_c->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_equation_c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->textbox_equation_c->Location = System::Drawing::Point(660, 208);
			this->textbox_equation_c->Multiline = true;
			this->textbox_equation_c->Name = L"textbox_equation_c";
			this->textbox_equation_c->Size = System::Drawing::Size(51, 26);
			this->textbox_equation_c->TabIndex = 55;
			this->textbox_equation_c->Text = L"1";
			this->textbox_equation_c->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// BTN_equation
			// 
			this->BTN_equation->BackColor = System::Drawing::Color::Teal;
			this->BTN_equation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_equation->Location = System::Drawing::Point(537, 273);
			this->BTN_equation->Name = L"BTN_equation";
			this->BTN_equation->Size = System::Drawing::Size(138, 58);
			this->BTN_equation->TabIndex = 56;
			this->BTN_equation->Text = L"Equation Result";
			this->BTN_equation->UseVisualStyleBackColor = false;
			this->BTN_equation->Click += gcnew System::EventHandler(this, &MyForm::BTN_equation_Click);
			// 
			// label_equation_result
			// 
			this->label_equation_result->BackColor = System::Drawing::SystemColors::Info;
			this->label_equation_result->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_equation_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_equation_result->Location = System::Drawing::Point(507, 239);
			this->label_equation_result->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label_equation_result->Name = L"label_equation_result";
			this->label_equation_result->Size = System::Drawing::Size(204, 31);
			this->label_equation_result->TabIndex = 57;
			this->label_equation_result->Text = L"0";
			this->label_equation_result->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BTN_radToDeg
			// 
			this->BTN_radToDeg->BackColor = System::Drawing::Color::PaleVioletRed;
			this->BTN_radToDeg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_radToDeg->Location = System::Drawing::Point(507, 384);
			this->BTN_radToDeg->Name = L"BTN_radToDeg";
			this->BTN_radToDeg->Size = System::Drawing::Size(87, 58);
			this->BTN_radToDeg->TabIndex = 58;
			this->BTN_radToDeg->Text = L"Rad To Deg";
			this->BTN_radToDeg->UseVisualStyleBackColor = false;
			this->BTN_radToDeg->Click += gcnew System::EventHandler(this, &MyForm::BTN_radToDeg_Click);
			// 
			// BTN_degToRad
			// 
			this->BTN_degToRad->BackColor = System::Drawing::Color::PaleVioletRed;
			this->BTN_degToRad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_degToRad->Location = System::Drawing::Point(507, 448);
			this->BTN_degToRad->Name = L"BTN_degToRad";
			this->BTN_degToRad->Size = System::Drawing::Size(87, 58);
			this->BTN_degToRad->TabIndex = 59;
			this->BTN_degToRad->Text = L"Deg To Rad";
			this->BTN_degToRad->UseVisualStyleBackColor = false;
			this->BTN_degToRad->Click += gcnew System::EventHandler(this, &MyForm::BTN_degToRad_Click);
			// 
			// BTN_radToGrad
			// 
			this->BTN_radToGrad->BackColor = System::Drawing::Color::PaleVioletRed;
			this->BTN_radToGrad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_radToGrad->Location = System::Drawing::Point(612, 384);
			this->BTN_radToGrad->Name = L"BTN_radToGrad";
			this->BTN_radToGrad->Size = System::Drawing::Size(87, 58);
			this->BTN_radToGrad->TabIndex = 60;
			this->BTN_radToGrad->Text = L"Rad To Grad";
			this->BTN_radToGrad->UseVisualStyleBackColor = false;
			this->BTN_radToGrad->Click += gcnew System::EventHandler(this, &MyForm::BTN_radToGrad_Click);
			// 
			// BTN_degToGrad
			// 
			this->BTN_degToGrad->BackColor = System::Drawing::Color::PaleVioletRed;
			this->BTN_degToGrad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_degToGrad->Location = System::Drawing::Point(507, 512);
			this->BTN_degToGrad->Name = L"BTN_degToGrad";
			this->BTN_degToGrad->Size = System::Drawing::Size(87, 58);
			this->BTN_degToGrad->TabIndex = 61;
			this->BTN_degToGrad->Text = L"Deg To Grad";
			this->BTN_degToGrad->UseVisualStyleBackColor = false;
			this->BTN_degToGrad->Click += gcnew System::EventHandler(this, &MyForm::BTN_degToGrad_Click);
			// 
			// BTN_gradToRad
			// 
			this->BTN_gradToRad->BackColor = System::Drawing::Color::PaleVioletRed;
			this->BTN_gradToRad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_gradToRad->Location = System::Drawing::Point(612, 448);
			this->BTN_gradToRad->Name = L"BTN_gradToRad";
			this->BTN_gradToRad->Size = System::Drawing::Size(87, 58);
			this->BTN_gradToRad->TabIndex = 62;
			this->BTN_gradToRad->Text = L"Grad To Rad";
			this->BTN_gradToRad->UseVisualStyleBackColor = false;
			this->BTN_gradToRad->Click += gcnew System::EventHandler(this, &MyForm::BTN_gradToRad_Click);
			// 
			// BTN_gradToDeg
			// 
			this->BTN_gradToDeg->BackColor = System::Drawing::Color::PaleVioletRed;
			this->BTN_gradToDeg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_gradToDeg->Location = System::Drawing::Point(612, 512);
			this->BTN_gradToDeg->Name = L"BTN_gradToDeg";
			this->BTN_gradToDeg->Size = System::Drawing::Size(87, 58);
			this->BTN_gradToDeg->TabIndex = 63;
			this->BTN_gradToDeg->Text = L"Grad To Deg";
			this->BTN_gradToDeg->UseVisualStyleBackColor = false;
			this->BTN_gradToDeg->Click += gcnew System::EventHandler(this, &MyForm::BTN_gradToDeg_Click);
			// 
			// textbox_angleConvert
			// 
			this->textbox_angleConvert->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textbox_angleConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->textbox_angleConvert->Location = System::Drawing::Point(507, 337);
			this->textbox_angleConvert->Multiline = true;
			this->textbox_angleConvert->Name = L"textbox_angleConvert";
			this->textbox_angleConvert->Size = System::Drawing::Size(87, 45);
			this->textbox_angleConvert->TabIndex = 64;
			this->textbox_angleConvert->Text = L"30";
			this->textbox_angleConvert->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_angleConvertResult
			// 
			this->label_angleConvertResult->BackColor = System::Drawing::SystemColors::Info;
			this->label_angleConvertResult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_angleConvertResult->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label_angleConvertResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_angleConvertResult->Location = System::Drawing::Point(612, 337);
			this->label_angleConvertResult->MaximumSize = System::Drawing::Size(101, 100);
			this->label_angleConvertResult->Name = L"label_angleConvertResult";
			this->label_angleConvertResult->Size = System::Drawing::Size(87, 45);
			this->label_angleConvertResult->TabIndex = 65;
			this->label_angleConvertResult->Text = L"0";
			this->label_angleConvertResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_angleConvertResult->UseWaitCursor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(738, 582);
			this->Controls->Add(this->label_angleConvertResult);
			this->Controls->Add(this->textbox_angleConvert);
			this->Controls->Add(this->BTN_gradToDeg);
			this->Controls->Add(this->BTN_gradToRad);
			this->Controls->Add(this->BTN_degToGrad);
			this->Controls->Add(this->BTN_radToGrad);
			this->Controls->Add(this->BTN_degToRad);
			this->Controls->Add(this->BTN_radToDeg);
			this->Controls->Add(this->label_equation_result);
			this->Controls->Add(this->BTN_equation);
			this->Controls->Add(this->textbox_equation_c);
			this->Controls->Add(this->label_equation_x);
			this->Controls->Add(this->textbox_equation_b);
			this->Controls->Add(this->label_equation_Xpow2);
			this->Controls->Add(this->textbox_equation_a);
			this->Controls->Add(this->label_baseResult);
			this->Controls->Add(this->textbox_newBase);
			this->Controls->Add(this->textbox_base);
			this->Controls->Add(this->textbox_baseInput);
			this->Controls->Add(this->label_to);
			this->Controls->Add(this->label_from);
			this->Controls->Add(this->BTN_baseConvert);
			this->Controls->Add(this->BTN_ceiling);
			this->Controls->Add(this->BTN_floor);
			this->Controls->Add(this->BTN_abs);
			this->Controls->Add(this->BTN_radical);
			this->Controls->Add(this->BTN_ln);
			this->Controls->Add(this->BTN_log);
			this->Controls->Add(this->sech);
			this->Controls->Add(this->BTN_csch);
			this->Controls->Add(this->BTN_coth);
			this->Controls->Add(this->BTN_tanh);
			this->Controls->Add(this->BTN_cosh);
			this->Controls->Add(this->BTN_sinh);
			this->Controls->Add(this->BTN_sec);
			this->Controls->Add(this->BTN_csc);
			this->Controls->Add(this->BTN_cot);
			this->Controls->Add(this->BTN_tan);
			this->Controls->Add(this->BTN_cos);
			this->Controls->Add(this->BTN_sin);
			this->Controls->Add(this->BTN_fact);
			this->Controls->Add(this->BTN_pow);
			this->Controls->Add(this->BTN_openBrac);
			this->Controls->Add(this->BTN_closeBrac);
			this->Controls->Add(this->BTN_e);
			this->Controls->Add(this->BTN_p);
			this->Controls->Add(this->BTN_ClearAll);
			this->Controls->Add(this->BTN_Clear);
			this->Controls->Add(this->BTN_RadStat);
			this->Controls->Add(this->BTN_Divid);
			this->Controls->Add(this->BTN_Multi);
			this->Controls->Add(this->BTN_Minus);
			this->Controls->Add(this->BTN_Plus);
			this->Controls->Add(this->BTN_Equal);
			this->Controls->Add(this->BTN9);
			this->Controls->Add(this->BTN8);
			this->Controls->Add(this->BTN7);
			this->Controls->Add(this->BTN6);
			this->Controls->Add(this->BTN5);
			this->Controls->Add(this->BTN4);
			this->Controls->Add(this->BTN3);
			this->Controls->Add(this->BTN2);
			this->Controls->Add(this->BTN1);
			this->Controls->Add(this->BTNdot);
			this->Controls->Add(this->BTN0);
			this->Controls->Add(this->mainScreen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Science Calculator (i guess- Ali Baghaee Ravari)";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BTNdot_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += ".";

	}
	private: System::Void BTNzero_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "0";
	}
	private: System::Void BTN1_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "1";
	}
	private: System::Void BTN2_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "2";
	}
	private: System::Void BTN3_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "3";
	}
	private: System::Void BTN4_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "4";
	}
	private: System::Void BTN5_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "5";
	}
	private: System::Void BTN6_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "6";
	}
	private: System::Void BTN7_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "7";
	}
	private: System::Void BTN8_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "8";
	}
	private: System::Void BTN9_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "9";
	}
	private: System::Void BTN_Plus_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "+";
	}
	private: System::Void BTN_Minus_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "-";
	}
	private: System::Void BTN_Multi_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "*";
	}
	private: System::Void BTN_Divid_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "/";
	}
		   int radStatus; // for rad function
	private: System::Void BTN_RadStat_Click(System::Object^ sender, System::EventArgs^ e) { // for changing rad and deg and grad
		radStatus++;
		if (radStatus % 3 == 0) {
			BTN_RadStat->Text = "Rad";
			BTN_RadStat->BackColor = Color::LightBlue;
		}
		else if (radStatus % 3 == 1)
		{
			BTN_RadStat->Text = "Deg";
			BTN_RadStat->BackColor = Color::LightGreen;
		}
		else
		{
			BTN_RadStat->Text = "Grad";
			BTN_RadStat->BackColor = Color::LightPink;
		}
	}
	private: System::Void BTN_ClearAll_Click(System::Object^ sender, System::EventArgs^ e) { // clear all
		mainScreen->Text = "";
	}
	private: System::Void BTN_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		int len = mainScreen->Text->Length;
		if (len != 0)
		{
			mainScreen->Text = mainScreen->Text->Remove(len - 1, 1);
		}
	}
	private: System::Void BTN_p_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "3.14159265";
	}
	private: System::Void BTN_e_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "2.71828";
	}
	private: System::Void BTN_closeBrac_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += ")";
	}
	private: System::Void BTN_openBrac_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "(";
	}
	private: System::Void BTN_pow_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "pow";
	}
	private: System::Void BTN_fact_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "!";
	}
	private: System::Void BTN_sin_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "sin(";
	}
	private: System::Void BTN_cos_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "cos(";
	}
	private: System::Void BTN_tan_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "tan(";
	}
	private: System::Void BTN_cot_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "cot(";
	}
	private: System::Void BTN_csc_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "csc(";
	}
	private: System::Void BTN_sec_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "sec(";
	}
	private: System::Void BTN_sinh_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "sinh(";
	}
	private: System::Void BTN_cosh_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "cosh(";
	}
	private: System::Void BTN_tanh_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "tanh(";
	}
	private: System::Void BTN_coth_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "coth(";
	}
	private: System::Void BTN_csch_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "csch(";
	}
	private: System::Void sech_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "sech(";
	}
	private: System::Void BTN_log_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "log";
	}
	private: System::Void BTN_ln_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "ln";
	}
	private: System::Void BTN_radical_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "radical";
	}
	private: System::Void BTN_abs_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "abs";
	}
	private: System::Void BTN_floor_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "floor";
	}
	private: System::Void BTN_ceiling_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text += "ceiling";
	}




















		   // ############################################################## magic part ##############################################################
	private: System::Void BTN_Equal_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempValue = mainScreen->Text;
		std::string value = msclr::interop::marshal_as<std::string>(tempValue); // value inside textbox

		// adding status and ) to the triangle functions
		if (value.find("sinh") != -1 || value.find("cosh") != -1 || value.find("tanh") != -1 || value.find("coth") != -1 || value.find("csch") != -1 || value.find("sech") != -1)
		{
			value.push_back(')'); // adding ) to the end
		}
		else
		{
			if (value.find("sin") != -1 || value.find("cos") != -1 || value.find("tan") != -1 || value.find("cot") != -1 || value.find("csc") != -1 || value.find("sec") != -1)
			{
				if (BTN_RadStat->Text == "Rad") // its in radian
				{
					value.insert(0, "0");
				}
				else if (BTN_RadStat->Text == "Deg") // its in deg
				{
					value.insert(0, "1");
				}
				else // its in gradian
				{
					value.insert(0, "2");
				}
				value.push_back(')'); // adding ) to the end
			}
		}


		// ################################################################
		std::string std_output = main_Operator(value); // geting the output
		// ################################################################


		// if its error
		if (std_output == "ERROR")
		{
			std_output.push_back('0');
		}

		if (std_output[std_output.length() - 1] == ')') // removing the posible )
		{
			std_output.pop_back();
		}

		std_output.pop_back(); // removing the last digit to keep the number under 5 digit after .

		int dotLoc = std_output.find('.');
		for (int i = dotLoc + 5; i > 0; i--) // remmoving the posible 0 after .
		{
			if (std_output[i] == '0')
			{
				std_output.pop_back(); // removing each 0
			}
			else
			{
				break;
			}
		}
		if (std_output[std_output.length() - 1] == '.') // removing the . if the number is not float
		{
			std_output.pop_back();
		}


		// output
		System::String^ output = gcnew String(std_output.c_str()); // system string output
		mainScreen->Text = output; // action!


	}


	private: System::Void BTN_baseConvert_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempInput = textbox_baseInput->Text;
		std::string input = msclr::interop::marshal_as<std::string>(tempInput); // input

		System::String^ tempBase = textbox_base->Text;
		std::string base = msclr::interop::marshal_as<std::string>(tempBase); // current base

		System::String^ tempNewBase = textbox_newBase->Text;
		std::string newbase = msclr::interop::marshal_as<std::string>(tempNewBase); // current base

		std::string finalInput = input + "from" + base + "to" + newbase; // final input

		finalInput = main_Operator(finalInput);

		// output
		System::String^ output = gcnew String(finalInput.c_str()); // system string output
		label_baseResult->Text = output; // action!
	}

	private: System::Void BTN_equation_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempA = textbox_equation_a->Text;
		std::string aStr = msclr::interop::marshal_as<std::string>(tempA); // a

		System::String^ tempB = textbox_equation_b->Text;
		std::string bStr = msclr::interop::marshal_as<std::string>(tempB); // b

		System::String^ tempC = textbox_equation_c->Text;
		std::string cStr = msclr::interop::marshal_as<std::string>(tempC); // c

		// converting to double
		double a = stod(aStr);
		double b = stod(bStr);
		double c = stod(cStr);

		std::string output;
		double delta = (b * b) - (4 * a * c);
		double out;
		// math
		if (delta < 0) // delta negative
		{
			output = "ERROR";
		}
		else if (delta == 0) // delta 0
		{
			out = b / (a * 2);
			output = to_string(out);

			output.pop_back(); // removing the last digit to keep the number under 5 digit after .

			int dotLoc0 = output.find('.');
			for (int i = dotLoc0 + 5; i > 0; i--) // remmoving the posible 0 after .
			{
				if (output[i] == '0')
				{
					output.pop_back(); // removing each 0
				}
				else
				{
					break;
				}
			}
			if (output[output.length() - 1] == '.') // removing the . if the number is not float
			{
				output.pop_back();
			}
		}
		else  // delta positive
		{
			std::string out1 = to_string((b + sqrt(delta)) / (a * 2)); // x1 in string

			out1.pop_back(); // removing the last digit to keep the number under 5 digit after .

			int dotLoc1 = out1.find('.');
			for (int i = dotLoc1 + 5; i > 0; i--) // remmoving the posible 0 after .
			{
				if (out1[i] == '0')
				{
					out1.pop_back(); // removing each 0
				}
				else
				{
					break;
				}
			}
			if (out1[out1.length() - 1] == '.') // removing the . if the number is not float
			{
				out1.pop_back();
			}


			std::string out2 = to_string((b - sqrt(delta)) / (a * 2)); // x2 in string

			out2.pop_back(); // removing the last digit to keep the number under 5 digit after .

			int dotLoc2 = out2.find('.');
			for (int i = dotLoc2 + 5; i > 0; i--) // remmoving the posible 0 after .
			{
				if (out2[i] == '0')
				{
					out2.pop_back(); // removing each 0
				}
				else
				{
					break;
				}
			}
			if (out2[out2.length() - 1] == '.') // removing the . if the number is not float
			{
				out2.pop_back();
			}

			output = "X1:  " + out1 + "   -  " + " X2:  " + out2;

		}

		// output
		System::String^ finalOutput = gcnew String(output.c_str()); // system string output
		label_equation_result->Text = finalOutput; // action!
	}
	private: System::Void BTN_radToDeg_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempInput = textbox_angleConvert->Text;
		std::string inputStr = msclr::interop::marshal_as<std::string>(tempInput); // input

		double input = stod(inputStr); // making it double 

		input = radToDeg(input); // magic part

		std::string output = to_string(input);

		// output
		System::String^ finalOutput = gcnew String(output.c_str()); // system string output
		label_angleConvertResult->Text = finalOutput; // action!

	}
	private: System::Void BTN_radToGrad_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempInput = textbox_angleConvert->Text;
		std::string inputStr = msclr::interop::marshal_as<std::string>(tempInput); // input

		double input = stod(inputStr); // making it double 

		input = radToGrad(input); // magic part

		std::string output = to_string(input);

		// output
		System::String^ finalOutput = gcnew String(output.c_str()); // system string output
		label_angleConvertResult->Text = finalOutput; // action!
	}
	private: System::Void BTN_degToRad_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempInput = textbox_angleConvert->Text;
		std::string inputStr = msclr::interop::marshal_as<std::string>(tempInput); // input

		double input = stod(inputStr); // making it double 

		input = degToRad(input); // magic part

		std::string output = to_string(input);

		// output
		System::String^ finalOutput = gcnew String(output.c_str()); // system string output
		label_angleConvertResult->Text = finalOutput; // action!
	}
	private: System::Void BTN_degToGrad_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempInput = textbox_angleConvert->Text;
		std::string inputStr = msclr::interop::marshal_as<std::string>(tempInput); // input

		double input = stod(inputStr); // making it double 

		input = degToGrad(input); // magic part

		std::string output = to_string(input);

		// output
		System::String^ finalOutput = gcnew String(output.c_str()); // system string output
		label_angleConvertResult->Text = finalOutput; // action!
	}
	private: System::Void BTN_gradToRad_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempInput = textbox_angleConvert->Text;
		std::string inputStr = msclr::interop::marshal_as<std::string>(tempInput); // input

		double input = stod(inputStr); // making it double 

		input = gradToRad(input); // magic part

		std::string output = to_string(input);

		// output
		System::String^ finalOutput = gcnew String(output.c_str()); // system string output
		label_angleConvertResult->Text = finalOutput; // action!
	}
	private: System::Void BTN_gradToDeg_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ tempInput = textbox_angleConvert->Text;
		std::string inputStr = msclr::interop::marshal_as<std::string>(tempInput); // input

		double input = stod(inputStr); // making it double 

		input = gradToDeg(input); // magic part

		std::string output = to_string(input);

		// output
		System::String^ finalOutput = gcnew String(output.c_str()); // system string output
		label_angleConvertResult->Text = finalOutput; // action!
	}
	};
}
