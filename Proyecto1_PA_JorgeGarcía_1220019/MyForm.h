#pragma once
#include "Nodo.h"
#include "Pila.h"
#include "Colas.h"
#include "NodoL.h"
#include "Lista.h"
namespace Proyecto1PAJorgeGarcía1220019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cBCantPrecios;
	protected:

	private: System::Windows::Forms::Button^  BtnIniciar;
	protected:

	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio1_1;
	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio1_2;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio1_4;

	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio1_3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio2_4;

	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio2_3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio2_2;

	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio2_1;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio3_4;

	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio3_3;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio3_2;

	private: System::Windows::Forms::MaskedTextBox^  mTBPrecio3_1;
	private: System::Windows::Forms::TextBox^  tBPila_1;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tBPila_2;
	private: System::Windows::Forms::TextBox^  tBPila_3;
	private: System::Windows::Forms::TextBox^  tBPila_4;
	private: System::Windows::Forms::TextBox^  tBPila_5;
	private: System::Windows::Forms::TextBox^  tBPila_10;





	private: System::Windows::Forms::TextBox^  tBPila_9;

	private: System::Windows::Forms::TextBox^  tBPila_8;

	private: System::Windows::Forms::TextBox^  tBPila_7;

	private: System::Windows::Forms::TextBox^  tBPila_6;
	private: System::Windows::Forms::TextBox^  tbCola_10;


	private: System::Windows::Forms::TextBox^  tbCola_9;

	private: System::Windows::Forms::TextBox^  tbCola_8;

	private: System::Windows::Forms::TextBox^  tbCola_7;

	private: System::Windows::Forms::TextBox^  tbCola_6;

	private: System::Windows::Forms::TextBox^  tbCola_5;

	private: System::Windows::Forms::TextBox^  tbCola_4;

	private: System::Windows::Forms::TextBox^  tbCola_3;

	private: System::Windows::Forms::TextBox^  tbCola_2;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tbCola_1;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tbPrecio3;

private: System::Windows::Forms::TextBox^  tbPrecio2;

private: System::Windows::Forms::TextBox^  tbPrecio1;

	private: System::Windows::Forms::Button^  BtnGuardar;
	private: System::Windows::Forms::Button^  BtnOrdenar;


	private: System::Windows::Forms::Button^  BtnBorrar;
private: System::Windows::Forms::Button^  BtnCambiarCant;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cBCantPrecios = (gcnew System::Windows::Forms::ComboBox());
			this->BtnIniciar = (gcnew System::Windows::Forms::Button());
			this->mTBPrecio1_1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTBPrecio1_2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mTBPrecio1_4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTBPrecio1_3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->mTBPrecio2_4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTBPrecio2_3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->mTBPrecio2_2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTBPrecio2_1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->mTBPrecio3_4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTBPrecio3_3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->mTBPrecio3_2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTBPrecio3_1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tBPila_1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tBPila_2 = (gcnew System::Windows::Forms::TextBox());
			this->tBPila_3 = (gcnew System::Windows::Forms::TextBox());
			this->tBPila_4 = (gcnew System::Windows::Forms::TextBox());
			this->tBPila_5 = (gcnew System::Windows::Forms::TextBox());
			this->tBPila_10 = (gcnew System::Windows::Forms::TextBox());
			this->tBPila_9 = (gcnew System::Windows::Forms::TextBox());
			this->tBPila_8 = (gcnew System::Windows::Forms::TextBox());
			this->tBPila_7 = (gcnew System::Windows::Forms::TextBox());
			this->tBPila_6 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_10 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_9 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_8 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_7 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_6 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_5 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_4 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_3 = (gcnew System::Windows::Forms::TextBox());
			this->tbCola_2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbCola_1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tbPrecio3 = (gcnew System::Windows::Forms::TextBox());
			this->tbPrecio2 = (gcnew System::Windows::Forms::TextBox());
			this->tbPrecio1 = (gcnew System::Windows::Forms::TextBox());
			this->BtnGuardar = (gcnew System::Windows::Forms::Button());
			this->BtnOrdenar = (gcnew System::Windows::Forms::Button());
			this->BtnBorrar = (gcnew System::Windows::Forms::Button());
			this->BtnCambiarCant = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cBCantPrecios
			// 
			this->cBCantPrecios->FormattingEnabled = true;
			this->cBCantPrecios->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Un precio", L"Dos precios", L"Tres precios" });
			this->cBCantPrecios->Location = System::Drawing::Point(12, 108);
			this->cBCantPrecios->Name = L"cBCantPrecios";
			this->cBCantPrecios->Size = System::Drawing::Size(121, 21);
			this->cBCantPrecios->TabIndex = 0;
			this->cBCantPrecios->Text = L"Cantidad de precios";
			// 
			// BtnIniciar
			// 
			this->BtnIniciar->Location = System::Drawing::Point(35, 140);
			this->BtnIniciar->Name = L"BtnIniciar";
			this->BtnIniciar->Size = System::Drawing::Size(75, 23);
			this->BtnIniciar->TabIndex = 1;
			this->BtnIniciar->Text = L"Iniciar";
			this->BtnIniciar->UseVisualStyleBackColor = true;
			this->BtnIniciar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// mTBPrecio1_1
			// 
			this->mTBPrecio1_1->Enabled = false;
			this->mTBPrecio1_1->Location = System::Drawing::Point(207, 109);
			this->mTBPrecio1_1->Mask = L"9";
			this->mTBPrecio1_1->Name = L"mTBPrecio1_1";
			this->mTBPrecio1_1->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio1_1->TabIndex = 2;
			this->mTBPrecio1_1->ValidatingType = System::Int32::typeid;
			this->mTBPrecio1_1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::mTBPrecio1_1_MaskInputRejected);
			// 
			// mTBPrecio1_2
			// 
			this->mTBPrecio1_2->Enabled = false;
			this->mTBPrecio1_2->Location = System::Drawing::Point(228, 109);
			this->mTBPrecio1_2->Mask = L"9";
			this->mTBPrecio1_2->Name = L"mTBPrecio1_2";
			this->mTBPrecio1_2->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio1_2->TabIndex = 3;
			this->mTBPrecio1_2->ValidatingType = System::Int32::typeid;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Location = System::Drawing::Point(249, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L".";
			// 
			// mTBPrecio1_4
			// 
			this->mTBPrecio1_4->Enabled = false;
			this->mTBPrecio1_4->Location = System::Drawing::Point(286, 109);
			this->mTBPrecio1_4->Mask = L"9";
			this->mTBPrecio1_4->Name = L"mTBPrecio1_4";
			this->mTBPrecio1_4->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio1_4->TabIndex = 6;
			this->mTBPrecio1_4->ValidatingType = System::Int32::typeid;
			// 
			// mTBPrecio1_3
			// 
			this->mTBPrecio1_3->Enabled = false;
			this->mTBPrecio1_3->Location = System::Drawing::Point(265, 109);
			this->mTBPrecio1_3->Mask = L"9";
			this->mTBPrecio1_3->Name = L"mTBPrecio1_3";
			this->mTBPrecio1_3->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio1_3->TabIndex = 5;
			this->mTBPrecio1_3->ValidatingType = System::Int32::typeid;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(156, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Precio 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(156, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Precio 2";
			// 
			// mTBPrecio2_4
			// 
			this->mTBPrecio2_4->Enabled = false;
			this->mTBPrecio2_4->Location = System::Drawing::Point(286, 145);
			this->mTBPrecio2_4->Mask = L"9";
			this->mTBPrecio2_4->Name = L"mTBPrecio2_4";
			this->mTBPrecio2_4->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio2_4->TabIndex = 12;
			this->mTBPrecio2_4->ValidatingType = System::Int32::typeid;
			// 
			// mTBPrecio2_3
			// 
			this->mTBPrecio2_3->Enabled = false;
			this->mTBPrecio2_3->Location = System::Drawing::Point(265, 145);
			this->mTBPrecio2_3->Mask = L"9";
			this->mTBPrecio2_3->Name = L"mTBPrecio2_3";
			this->mTBPrecio2_3->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio2_3->TabIndex = 11;
			this->mTBPrecio2_3->ValidatingType = System::Int32::typeid;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Enabled = false;
			this->label4->Location = System::Drawing::Point(249, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L".";
			// 
			// mTBPrecio2_2
			// 
			this->mTBPrecio2_2->Enabled = false;
			this->mTBPrecio2_2->Location = System::Drawing::Point(228, 145);
			this->mTBPrecio2_2->Mask = L"9";
			this->mTBPrecio2_2->Name = L"mTBPrecio2_2";
			this->mTBPrecio2_2->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio2_2->TabIndex = 9;
			this->mTBPrecio2_2->ValidatingType = System::Int32::typeid;
			// 
			// mTBPrecio2_1
			// 
			this->mTBPrecio2_1->Enabled = false;
			this->mTBPrecio2_1->Location = System::Drawing::Point(207, 145);
			this->mTBPrecio2_1->Mask = L"9";
			this->mTBPrecio2_1->Name = L"mTBPrecio2_1";
			this->mTBPrecio2_1->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio2_1->TabIndex = 8;
			this->mTBPrecio2_1->ValidatingType = System::Int32::typeid;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(156, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Precio 3";
			// 
			// mTBPrecio3_4
			// 
			this->mTBPrecio3_4->Enabled = false;
			this->mTBPrecio3_4->Location = System::Drawing::Point(286, 184);
			this->mTBPrecio3_4->Mask = L"9";
			this->mTBPrecio3_4->Name = L"mTBPrecio3_4";
			this->mTBPrecio3_4->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio3_4->TabIndex = 18;
			this->mTBPrecio3_4->ValidatingType = System::Int32::typeid;
			// 
			// mTBPrecio3_3
			// 
			this->mTBPrecio3_3->Enabled = false;
			this->mTBPrecio3_3->Location = System::Drawing::Point(265, 184);
			this->mTBPrecio3_3->Mask = L"9";
			this->mTBPrecio3_3->Name = L"mTBPrecio3_3";
			this->mTBPrecio3_3->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio3_3->TabIndex = 17;
			this->mTBPrecio3_3->ValidatingType = System::Int32::typeid;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Enabled = false;
			this->label6->Location = System::Drawing::Point(249, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L".";
			// 
			// mTBPrecio3_2
			// 
			this->mTBPrecio3_2->Enabled = false;
			this->mTBPrecio3_2->Location = System::Drawing::Point(228, 184);
			this->mTBPrecio3_2->Mask = L"9";
			this->mTBPrecio3_2->Name = L"mTBPrecio3_2";
			this->mTBPrecio3_2->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio3_2->TabIndex = 15;
			this->mTBPrecio3_2->ValidatingType = System::Int32::typeid;
			// 
			// mTBPrecio3_1
			// 
			this->mTBPrecio3_1->Enabled = false;
			this->mTBPrecio3_1->Location = System::Drawing::Point(207, 184);
			this->mTBPrecio3_1->Mask = L"9";
			this->mTBPrecio3_1->Name = L"mTBPrecio3_1";
			this->mTBPrecio3_1->Size = System::Drawing::Size(15, 20);
			this->mTBPrecio3_1->TabIndex = 14;
			this->mTBPrecio3_1->ValidatingType = System::Int32::typeid;
			// 
			// tBPila_1
			// 
			this->tBPila_1->Enabled = false;
			this->tBPila_1->Location = System::Drawing::Point(461, 44);
			this->tBPila_1->Name = L"tBPila_1";
			this->tBPila_1->Size = System::Drawing::Size(24, 20);
			this->tBPila_1->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(461, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Pila";
			// 
			// tBPila_2
			// 
			this->tBPila_2->Enabled = false;
			this->tBPila_2->Location = System::Drawing::Point(461, 70);
			this->tBPila_2->Name = L"tBPila_2";
			this->tBPila_2->Size = System::Drawing::Size(24, 20);
			this->tBPila_2->TabIndex = 22;
			// 
			// tBPila_3
			// 
			this->tBPila_3->Enabled = false;
			this->tBPila_3->Location = System::Drawing::Point(461, 96);
			this->tBPila_3->Name = L"tBPila_3";
			this->tBPila_3->Size = System::Drawing::Size(24, 20);
			this->tBPila_3->TabIndex = 23;
			// 
			// tBPila_4
			// 
			this->tBPila_4->Enabled = false;
			this->tBPila_4->Location = System::Drawing::Point(461, 122);
			this->tBPila_4->Name = L"tBPila_4";
			this->tBPila_4->Size = System::Drawing::Size(24, 20);
			this->tBPila_4->TabIndex = 24;
			// 
			// tBPila_5
			// 
			this->tBPila_5->Enabled = false;
			this->tBPila_5->Location = System::Drawing::Point(461, 148);
			this->tBPila_5->Name = L"tBPila_5";
			this->tBPila_5->Size = System::Drawing::Size(24, 20);
			this->tBPila_5->TabIndex = 25;
			// 
			// tBPila_10
			// 
			this->tBPila_10->Enabled = false;
			this->tBPila_10->Location = System::Drawing::Point(461, 278);
			this->tBPila_10->Name = L"tBPila_10";
			this->tBPila_10->Size = System::Drawing::Size(24, 20);
			this->tBPila_10->TabIndex = 30;
			// 
			// tBPila_9
			// 
			this->tBPila_9->Enabled = false;
			this->tBPila_9->Location = System::Drawing::Point(461, 252);
			this->tBPila_9->Name = L"tBPila_9";
			this->tBPila_9->Size = System::Drawing::Size(24, 20);
			this->tBPila_9->TabIndex = 29;
			// 
			// tBPila_8
			// 
			this->tBPila_8->Enabled = false;
			this->tBPila_8->Location = System::Drawing::Point(461, 226);
			this->tBPila_8->Name = L"tBPila_8";
			this->tBPila_8->Size = System::Drawing::Size(24, 20);
			this->tBPila_8->TabIndex = 28;
			// 
			// tBPila_7
			// 
			this->tBPila_7->Enabled = false;
			this->tBPila_7->Location = System::Drawing::Point(461, 200);
			this->tBPila_7->Name = L"tBPila_7";
			this->tBPila_7->Size = System::Drawing::Size(24, 20);
			this->tBPila_7->TabIndex = 27;
			// 
			// tBPila_6
			// 
			this->tBPila_6->Enabled = false;
			this->tBPila_6->Location = System::Drawing::Point(461, 174);
			this->tBPila_6->Name = L"tBPila_6";
			this->tBPila_6->Size = System::Drawing::Size(24, 20);
			this->tBPila_6->TabIndex = 26;
			// 
			// tbCola_10
			// 
			this->tbCola_10->Enabled = false;
			this->tbCola_10->Location = System::Drawing::Point(517, 278);
			this->tbCola_10->Name = L"tbCola_10";
			this->tbCola_10->Size = System::Drawing::Size(24, 20);
			this->tbCola_10->TabIndex = 41;
			// 
			// tbCola_9
			// 
			this->tbCola_9->Enabled = false;
			this->tbCola_9->Location = System::Drawing::Point(517, 252);
			this->tbCola_9->Name = L"tbCola_9";
			this->tbCola_9->Size = System::Drawing::Size(24, 20);
			this->tbCola_9->TabIndex = 40;
			// 
			// tbCola_8
			// 
			this->tbCola_8->Enabled = false;
			this->tbCola_8->Location = System::Drawing::Point(517, 226);
			this->tbCola_8->Name = L"tbCola_8";
			this->tbCola_8->Size = System::Drawing::Size(24, 20);
			this->tbCola_8->TabIndex = 39;
			// 
			// tbCola_7
			// 
			this->tbCola_7->Enabled = false;
			this->tbCola_7->Location = System::Drawing::Point(517, 200);
			this->tbCola_7->Name = L"tbCola_7";
			this->tbCola_7->Size = System::Drawing::Size(24, 20);
			this->tbCola_7->TabIndex = 38;
			// 
			// tbCola_6
			// 
			this->tbCola_6->Enabled = false;
			this->tbCola_6->Location = System::Drawing::Point(517, 174);
			this->tbCola_6->Name = L"tbCola_6";
			this->tbCola_6->Size = System::Drawing::Size(24, 20);
			this->tbCola_6->TabIndex = 37;
			// 
			// tbCola_5
			// 
			this->tbCola_5->Enabled = false;
			this->tbCola_5->Location = System::Drawing::Point(517, 148);
			this->tbCola_5->Name = L"tbCola_5";
			this->tbCola_5->Size = System::Drawing::Size(24, 20);
			this->tbCola_5->TabIndex = 36;
			// 
			// tbCola_4
			// 
			this->tbCola_4->Enabled = false;
			this->tbCola_4->Location = System::Drawing::Point(517, 122);
			this->tbCola_4->Name = L"tbCola_4";
			this->tbCola_4->Size = System::Drawing::Size(24, 20);
			this->tbCola_4->TabIndex = 35;
			// 
			// tbCola_3
			// 
			this->tbCola_3->Enabled = false;
			this->tbCola_3->Location = System::Drawing::Point(517, 96);
			this->tbCola_3->Name = L"tbCola_3";
			this->tbCola_3->Size = System::Drawing::Size(24, 20);
			this->tbCola_3->TabIndex = 34;
			// 
			// tbCola_2
			// 
			this->tbCola_2->Enabled = false;
			this->tbCola_2->Location = System::Drawing::Point(517, 70);
			this->tbCola_2->Name = L"tbCola_2";
			this->tbCola_2->Size = System::Drawing::Size(24, 20);
			this->tbCola_2->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(517, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Cola";
			// 
			// tbCola_1
			// 
			this->tbCola_1->Enabled = false;
			this->tbCola_1->Location = System::Drawing::Point(517, 44);
			this->tbCola_1->Name = L"tbCola_1";
			this->tbCola_1->Size = System::Drawing::Size(24, 20);
			this->tbCola_1->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tbPrecio3);
			this->groupBox1->Controls->Add(this->tbPrecio2);
			this->groupBox1->Controls->Add(this->tbPrecio1);
			this->groupBox1->Location = System::Drawing::Point(325, 70);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(111, 164);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Precios a mostrar";
			// 
			// tbPrecio3
			// 
			this->tbPrecio3->Enabled = false;
			this->tbPrecio3->Location = System::Drawing::Point(6, 114);
			this->tbPrecio3->Name = L"tbPrecio3";
			this->tbPrecio3->Size = System::Drawing::Size(100, 20);
			this->tbPrecio3->TabIndex = 2;
			// 
			// tbPrecio2
			// 
			this->tbPrecio2->Enabled = false;
			this->tbPrecio2->Location = System::Drawing::Point(6, 75);
			this->tbPrecio2->Name = L"tbPrecio2";
			this->tbPrecio2->Size = System::Drawing::Size(100, 20);
			this->tbPrecio2->TabIndex = 1;
			// 
			// tbPrecio1
			// 
			this->tbPrecio1->Enabled = false;
			this->tbPrecio1->Location = System::Drawing::Point(6, 39);
			this->tbPrecio1->Name = L"tbPrecio1";
			this->tbPrecio1->Size = System::Drawing::Size(100, 20);
			this->tbPrecio1->TabIndex = 0;
			// 
			// BtnGuardar
			// 
			this->BtnGuardar->Enabled = false;
			this->BtnGuardar->Location = System::Drawing::Point(207, 225);
			this->BtnGuardar->Name = L"BtnGuardar";
			this->BtnGuardar->Size = System::Drawing::Size(94, 20);
			this->BtnGuardar->TabIndex = 43;
			this->BtnGuardar->Text = L"Guardar Precios";
			this->BtnGuardar->UseVisualStyleBackColor = true;
			this->BtnGuardar->Click += gcnew System::EventHandler(this, &MyForm::BtnGuardar_Click);
			// 
			// BtnOrdenar
			// 
			this->BtnOrdenar->Enabled = false;
			this->BtnOrdenar->Location = System::Drawing::Point(466, 304);
			this->BtnOrdenar->Name = L"BtnOrdenar";
			this->BtnOrdenar->Size = System::Drawing::Size(75, 23);
			this->BtnOrdenar->TabIndex = 44;
			this->BtnOrdenar->Text = L"Ordenar";
			this->BtnOrdenar->UseVisualStyleBackColor = true;
			this->BtnOrdenar->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// BtnBorrar
			// 
			this->BtnBorrar->Enabled = false;
			this->BtnBorrar->Location = System::Drawing::Point(207, 252);
			this->BtnBorrar->Name = L"BtnBorrar";
			this->BtnBorrar->Size = System::Drawing::Size(94, 20);
			this->BtnBorrar->TabIndex = 45;
			this->BtnBorrar->Text = L"Borrar Precios";
			this->BtnBorrar->UseVisualStyleBackColor = true;
			this->BtnBorrar->Click += gcnew System::EventHandler(this, &MyForm::BtnBorrar_Click);
			// 
			// BtnCambiarCant
			// 
			this->BtnCambiarCant->Enabled = false;
			this->BtnCambiarCant->Location = System::Drawing::Point(23, 174);
			this->BtnCambiarCant->Name = L"BtnCambiarCant";
			this->BtnCambiarCant->Size = System::Drawing::Size(99, 42);
			this->BtnCambiarCant->TabIndex = 46;
			this->BtnCambiarCant->Text = L"Cambiar cantidad de precios";
			this->BtnCambiarCant->UseVisualStyleBackColor = true;
			this->BtnCambiarCant->Click += gcnew System::EventHandler(this, &MyForm::BtnCambiarCant_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 355);
			this->Controls->Add(this->BtnCambiarCant);
			this->Controls->Add(this->BtnBorrar);
			this->Controls->Add(this->BtnOrdenar);
			this->Controls->Add(this->BtnGuardar);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tbCola_10);
			this->Controls->Add(this->tbCola_9);
			this->Controls->Add(this->tbCola_8);
			this->Controls->Add(this->tbCola_7);
			this->Controls->Add(this->tbCola_6);
			this->Controls->Add(this->tbCola_5);
			this->Controls->Add(this->tbCola_4);
			this->Controls->Add(this->tbCola_3);
			this->Controls->Add(this->tbCola_2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbCola_1);
			this->Controls->Add(this->tBPila_10);
			this->Controls->Add(this->tBPila_9);
			this->Controls->Add(this->tBPila_8);
			this->Controls->Add(this->tBPila_7);
			this->Controls->Add(this->tBPila_6);
			this->Controls->Add(this->tBPila_5);
			this->Controls->Add(this->tBPila_4);
			this->Controls->Add(this->tBPila_3);
			this->Controls->Add(this->tBPila_2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tBPila_1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->mTBPrecio3_4);
			this->Controls->Add(this->mTBPrecio3_3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->mTBPrecio3_2);
			this->Controls->Add(this->mTBPrecio3_1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->mTBPrecio2_4);
			this->Controls->Add(this->mTBPrecio2_3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->mTBPrecio2_2);
			this->Controls->Add(this->mTBPrecio2_1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->mTBPrecio1_4);
			this->Controls->Add(this->mTBPrecio1_3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mTBPrecio1_2);
			this->Controls->Add(this->mTBPrecio1_1);
			this->Controls->Add(this->BtnIniciar);
			this->Controls->Add(this->cBCantPrecios);
			this->Name = L"MyForm";
			this->Text = L"Proyecto_PA";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//Se crean todas las estructuras a utilizars
		Pila * PilaP = new Pila();
		Pila * PilaAux = new Pila();
		Colas * ColaP = new Colas();
		Colas * ColaAux = new Colas();
		Lista * Precio1 = new Lista();
		Lista * Precio2 = new Lista();
		Lista * Precio3 = new Lista();
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Desactivación y activación de botones y masked textboxs para más control.
		mTBPrecio1_1->Enabled = false;
		mTBPrecio1_2->Enabled = false;
		mTBPrecio1_3->Enabled = false;
		mTBPrecio1_4->Enabled = false;
		mTBPrecio2_1->Enabled = false;
		mTBPrecio2_2->Enabled = false;
		mTBPrecio2_3->Enabled = false;
		mTBPrecio2_4->Enabled = false;
		mTBPrecio3_1->Enabled = false;
		mTBPrecio3_2->Enabled = false;
		mTBPrecio3_3->Enabled = false;
		mTBPrecio3_4->Enabled = false;
		BtnGuardar->Enabled = true;
		BtnOrdenar->Enabled = true;
		BtnCambiarCant->Enabled = true;
		switch (cBCantPrecios->SelectedIndex)
		{
		case 0:
			mTBPrecio1_1->Enabled = true;
			mTBPrecio1_2->Enabled = true;
			mTBPrecio1_3->Enabled = true;
			mTBPrecio1_4->Enabled = true;
			break;
		case 1:
			mTBPrecio1_1->Enabled = true;
			mTBPrecio1_2->Enabled = true;
			mTBPrecio1_3->Enabled = true;
			mTBPrecio1_4->Enabled = true;
			mTBPrecio2_1->Enabled = true;
			mTBPrecio2_2->Enabled = true;
			mTBPrecio2_3->Enabled = true;
			mTBPrecio2_4->Enabled = true;
			break;

		case 2:
			mTBPrecio1_1->Enabled = true;
			mTBPrecio1_2->Enabled = true;
			mTBPrecio1_3->Enabled = true;
			mTBPrecio1_4->Enabled = true;
			mTBPrecio2_1->Enabled = true;
			mTBPrecio2_2->Enabled = true;
			mTBPrecio2_3->Enabled = true;
			mTBPrecio2_4->Enabled = true;
			mTBPrecio3_1->Enabled = true;
			mTBPrecio3_2->Enabled = true;
			mTBPrecio3_3->Enabled = true;
			mTBPrecio3_4->Enabled = true;
			break;
		default:
			break;
		}
		//Se llena la pila principal y la cola principal
		for (int i = 0; i < 10; i++)
		{
			PilaP->Apilar(i);
			ColaP->Insertar(i);
		}
		//Se actualizan los textboxs para visualizar las colas y las pilas
		Actualizar();
		//Se desactiva el botón inicializar, para evitar llenarse de nuevo la pila y la Cola
		BtnIniciar->Enabled = false;
	}
	private: System::Void mTBPrecio1_1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//Se llama a una función que ordena las pila y la cola por Bubble sort
		OrdenarB();
		Actualizar();
		//Se vuelve a activar el botón de cambiar cantidades
		BtnCambiarCant->Enabled = true;
	}
	private: System::Void Actualizar() {
	//Se vacían todas los textboxs para´poder escribirlos de nuevo
		tBPila_10->Text = "";
		tBPila_9->Text = "";
		tBPila_8->Text = "";
		tBPila_7->Text = "";
		tBPila_6->Text = "";
		tBPila_5->Text = "";
		tBPila_4->Text = "";
		tBPila_3->Text = "";
		tBPila_2->Text = "";
		tBPila_1->Text = "";
		tbCola_10->Text = "";
		tbCola_9->Text = "";
		tbCola_8->Text = "";
		tbCola_7->Text = "";
		tbCola_6->Text = "";
		tbCola_5->Text = "";
		tbCola_4->Text = "";
		tbCola_3->Text = "";
		tbCola_2->Text = "";
		tbCola_1->Text = "";
		//Se recorre la pila principal, con ayuda de la pila auxiliar
		while (PilaP->NElementos != 0) {
			PilaAux->Apilar(PilaP->Desapilar());
		}
		//Se vuelven a apilar los elementos en la pila principal y se usa un switch-case para colocarlos en su textbox correspondiente.
		while (PilaAux->NElementos != 0)
		{
			PilaP->Apilar(PilaAux->Desapilar());
			switch (PilaP->NElementos)
			{
			case 1:
				tBPila_10->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 2:
				tBPila_9->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 3:
				tBPila_8->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 4:
				tBPila_7->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 5:
				tBPila_6->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 6:
				tBPila_5->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 7:
				tBPila_4->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 8:
				tBPila_3->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 9:
				tBPila_2->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			case 10:
				tBPila_1->Text = System::Convert::ToString(PilaP->Obtenercima());
				break;
			default:
				break;
			}
		}
		//Se realiza el mismo procedimiento con la Cola
		while (ColaP->NElementos != 0) {
			ColaAux->Insertar(ColaP->Quitar());

		}
		while (ColaAux->NElementos != 0) {
			ColaP->Insertar(ColaAux->Quitar());
			switch (ColaP->NElementos)
			{
			case 1:
				tbCola_1->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 2:
				tbCola_2->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 3:
				tbCola_3->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 4:
				tbCola_4->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 5:
				tbCola_5->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 6:
				tbCola_6->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 7:
				tbCola_7->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 8:
				tbCola_8->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 9:
				tbCola_9->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			case 10:
				tbCola_10->Text = System::Convert::ToString(ColaP->ObtenerUP());
				break;
			default:
				break;
			}
		}
	}
	private: System::Void BtnGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
		//Se deshabilitan botones que pueden causar problemas
		BtnGuardar->Enabled = false;
		BtnBorrar->Enabled = true;
		BtnOrdenar->Enabled = false;
		BtnCambiarCant->Enabled = false;
		int n;
		//try-catch para evitar que el usuario ingrese un precio incompleto
		try
		{
			//Switch que sirve para contar la cantidad de precios a ingresar
			switch (cBCantPrecios->SelectedIndex)
			{
				
			case 0:
				//Se evalúa que la casilla no se encuentre vacía
				if (mTBPrecio1_1->Text != "")
				{
					//Se toma el número que se encuentra en el primer maskedtextbox
					n = System::Convert::ToInt16(mTBPrecio1_1->Text);
					//Se evalua el número ingresado
					switch (n)
					{
					case 0:
						//Se llama al procedimiento BuscarNum para ingresar el número deseado en la lista
						//Se le envían los parámetros, valor que es el valor deseado, posición que es la posición a ingresar en la lista, y el precio, para saber a que lista se va a ingresar
						BuscarNum(0, 0, 1);
						break;
						//Se repite el mismo procedimiento con los demás números
					case 1:
						BuscarNum(1, 0, 1);
						break;
					case 2:
						BuscarNum(2, 0, 1);
						break;
					case 3:
						BuscarNum(3, 0, 1);
						break;
					case 4:
						BuscarNum(4, 0, 1);
						break;
					case 5:
						BuscarNum(5, 0, 1);
						break;
					case 6:
						BuscarNum(6, 0, 1);
						break;
					case 7:
						BuscarNum(7, 0, 1);
						break;
					case 8:
						BuscarNum(8, 0, 1);
						break;
					case 9:
						BuscarNum(9, 0, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_2->Text != "")
				{
					//Se repite el procedimiento con los demás números ingresados
					n = System::Convert::ToInt16(mTBPrecio1_2->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 1, 1);
						break;
					case 1:
						BuscarNum(1, 1, 1);
						break;
					case 2:
						BuscarNum(2, 1, 1);
						break;
					case 3:
						BuscarNum(3, 1, 1);
						break;
					case 4:
						BuscarNum(4, 1, 1);
						break;
					case 5:
						BuscarNum(5, 1, 1);
						break;
					case 6:
						BuscarNum(6, 1, 1);
						break;
					case 7:
						BuscarNum(7, 1, 1);
						break;
					case 8:
						BuscarNum(8, 1, 1);
						break;
					case 9:
						BuscarNum(9, 1, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_3->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_3->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 2, 1);
						break;
					case 1:
						BuscarNum(1, 2, 1);
						break;
					case 2:
						BuscarNum(2, 2, 1);
						break;
					case 3:
						BuscarNum(3, 2, 1);
						break;
					case 4:
						BuscarNum(4, 2, 1);
						break;
					case 5:
						BuscarNum(5, 2, 1);
						break;
					case 6:
						BuscarNum(6, 2, 1);
						break;
					case 7:
						BuscarNum(7, 2, 1);
						break;
					case 8:
						BuscarNum(8, 2, 1);
						break;
					case 9:
						BuscarNum(9, 2, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_4->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_4->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 3, 1);
						break;
					case 1:
						BuscarNum(1, 3, 1);
						break;
					case 2:
						BuscarNum(2, 3, 1);
						break;
					case 3:
						BuscarNum(3, 3, 1);
						break;
					case 4:
						BuscarNum(4, 3, 1);
						break;
					case 5:
						BuscarNum(5, 3, 1);
						break;
					case 6:
						BuscarNum(6, 3, 1);
						break;
					case 7:
						BuscarNum(7, 3, 1);
						break;
					case 8:
						BuscarNum(8, 3, 1);
						break;
					case 9:
						BuscarNum(9, 3, 1);
						break;
					default:
						break;
					}
				}
				tbPrecio1->Text = System::Convert::ToString(Precio1->MostrarP(0)) + System::Convert::ToString(Precio1->MostrarP(1)) + "." + System::Convert::ToString(Precio1->MostrarP(2)) + System::Convert::ToString(Precio1->MostrarP(3));
				break;
			case 1:
				if (mTBPrecio1_1->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_1->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 0, 1);
						break;
					case 1:
						BuscarNum(1, 0, 1);
						break;
					case 2:
						BuscarNum(2, 0, 1);
						break;
					case 3:
						BuscarNum(3, 0, 1);
						break;
					case 4:
						BuscarNum(4, 0, 1);
						break;
					case 5:
						BuscarNum(5, 0, 1);
						break;
					case 6:
						BuscarNum(6, 0, 1);
						break;
					case 7:
						BuscarNum(7, 0, 1);
						break;
					case 8:
						BuscarNum(8, 0, 1);
						break;
					case 9:
						BuscarNum(9, 0, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_2->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_2->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 1, 1);
						break;
					case 1:
						BuscarNum(1, 1, 1);
						break;
					case 2:
						BuscarNum(2, 1, 1);
						break;
					case 3:
						BuscarNum(3, 1, 1);
						break;
					case 4:
						BuscarNum(4, 1, 1);
						break;
					case 5:
						BuscarNum(5, 1, 1);
						break;
					case 6:
						BuscarNum(6, 1, 1);
						break;
					case 7:
						BuscarNum(7, 1, 1);
						break;
					case 8:
						BuscarNum(8, 1, 1);
						break;
					case 9:
						BuscarNum(9, 1, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_3->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_3->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 2, 1);
						break;
					case 1:
						BuscarNum(1, 2, 1);
						break;
					case 2:
						BuscarNum(2, 2, 1);
						break;
					case 3:
						BuscarNum(3, 2, 1);
						break;
					case 4:
						BuscarNum(4, 2, 1);
						break;
					case 5:
						BuscarNum(5, 2, 1);
						break;
					case 6:
						BuscarNum(6, 2, 1);
						break;
					case 7:
						BuscarNum(7, 2, 1);
						break;
					case 8:
						BuscarNum(8, 2, 1);
						break;
					case 9:
						BuscarNum(9, 2, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_4->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_4->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 3, 1);
						break;
					case 1:
						BuscarNum(1, 3, 1);
						break;
					case 2:
						BuscarNum(2, 3, 1);
						break;
					case 3:
						BuscarNum(3, 3, 1);
						break;
					case 4:
						BuscarNum(4, 3, 1);
						break;
					case 5:
						BuscarNum(5, 3, 1);
						break;
					case 6:
						BuscarNum(6, 3, 1);
						break;
					case 7:
						BuscarNum(7, 3, 1);
						break;
					case 8:
						BuscarNum(8, 3, 1);
						break;
					case 9:
						BuscarNum(9, 3, 1);
						break;
					default:
						break;
					}
				}

				if (mTBPrecio2_1->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio2_1->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 0, 2);
						break;
					case 1:
						BuscarNum(1, 0, 2);
						break;
					case 2:
						BuscarNum(2, 0, 2);
						break;
					case 3:
						BuscarNum(3, 0, 2);
						break;
					case 4:
						BuscarNum(4, 0, 2);
						break;
					case 5:
						BuscarNum(5, 0, 2);
						break;
					case 6:
						BuscarNum(6, 0, 2);
						break;
					case 7:
						BuscarNum(7, 0, 2);
						break;
					case 8:
						BuscarNum(8, 0, 2);
						break;
					case 9:
						BuscarNum(9, 0, 2);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio2_2->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio2_2->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 1, 2);
						break;
					case 1:
						BuscarNum(1, 1, 2);
						break;
					case 2:
						BuscarNum(2, 1, 2);
						break;
					case 3:
						BuscarNum(3, 1, 2);
						break;
					case 4:
						BuscarNum(4, 1, 2);
						break;
					case 5:
						BuscarNum(5, 1, 2);
						break;
					case 6:
						BuscarNum(6, 1, 2);
						break;
					case 7:
						BuscarNum(7, 1, 2);
						break;
					case 8:
						BuscarNum(8, 1, 2);
						break;
					case 9:
						BuscarNum(9, 1, 2);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio2_3->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio2_3->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 2, 2);
						break;
					case 1:
						BuscarNum(1, 2, 2);
						break;
					case 2:
						BuscarNum(2, 2, 2);
						break;
					case 3:
						BuscarNum(3, 2, 2);
						break;
					case 4:
						BuscarNum(4, 2, 2);
						break;
					case 5:
						BuscarNum(5, 2, 2);
						break;
					case 6:
						BuscarNum(6, 2, 2);
						break;
					case 7:
						BuscarNum(7, 2, 2);
						break;
					case 8:
						BuscarNum(8, 2, 2);
						break;
					case 9:
						BuscarNum(9, 2, 2);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio2_4->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio2_4->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 3, 2);
						break;
					case 1:
						BuscarNum(1, 3, 2);
						break;
					case 2:
						BuscarNum(2, 3, 2);
						break;
					case 3:
						BuscarNum(3, 3, 2);
						break;
					case 4:
						BuscarNum(4, 3, 2);
						break;
					case 5:
						BuscarNum(5, 3, 2);
						break;
					case 6:
						BuscarNum(6, 3, 2);
						break;
					case 7:
						BuscarNum(7, 3, 2);
						break;
					case 8:
						BuscarNum(8, 3, 2);
						break;
					case 9:
						BuscarNum(9, 3, 2);
						break;
					default:
						break;
					}
				}
				tbPrecio1->Text = System::Convert::ToString(Precio1->MostrarP(0)) + System::Convert::ToString(Precio1->MostrarP(1)) + "." + System::Convert::ToString(Precio1->MostrarP(2)) + System::Convert::ToString(Precio1->MostrarP(3));
				tbPrecio2->Text = System::Convert::ToString(Precio2->MostrarP(0)) + System::Convert::ToString(Precio2->MostrarP(1)) + "." + System::Convert::ToString(Precio2->MostrarP(2)) + System::Convert::ToString(Precio2->MostrarP(3));
				break;
			case 2:
				if (mTBPrecio1_1->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_1->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 0, 1);
						break;
					case 1:
						BuscarNum(1, 0, 1);
						break;
					case 2:
						BuscarNum(2, 0, 1);
						break;
					case 3:
						BuscarNum(3, 0, 1);
						break;
					case 4:
						BuscarNum(4, 0, 1);
						break;
					case 5:
						BuscarNum(5, 0, 1);
						break;
					case 6:
						BuscarNum(6, 0, 1);
						break;
					case 7:
						BuscarNum(7, 0, 1);
						break;
					case 8:
						BuscarNum(8, 0, 1);
						break;
					case 9:
						BuscarNum(9, 0, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_2->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_2->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 1, 1);
						break;
					case 1:
						BuscarNum(1, 1, 1);
						break;
					case 2:
						BuscarNum(2, 1, 1);
						break;
					case 3:
						BuscarNum(3, 1, 1);
						break;
					case 4:
						BuscarNum(4, 1, 1);
						break;
					case 5:
						BuscarNum(5, 1, 1);
						break;
					case 6:
						BuscarNum(6, 1, 1);
						break;
					case 7:
						BuscarNum(7, 1, 1);
						break;
					case 8:
						BuscarNum(8, 1, 1);
						break;
					case 9:
						BuscarNum(9, 1, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_3->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_3->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 2, 1);
						break;
					case 1:
						BuscarNum(1, 2, 1);
						break;
					case 2:
						BuscarNum(2, 2, 1);
						break;
					case 3:
						BuscarNum(3, 2, 1);
						break;
					case 4:
						BuscarNum(4, 2, 1);
						break;
					case 5:
						BuscarNum(5, 2, 1);
						break;
					case 6:
						BuscarNum(6, 2, 1);
						break;
					case 7:
						BuscarNum(7, 2, 1);
						break;
					case 8:
						BuscarNum(8, 2, 1);
						break;
					case 9:
						BuscarNum(9, 2, 1);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio1_4->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio1_4->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 3, 1);
						break;
					case 1:
						BuscarNum(1, 3, 1);
						break;
					case 2:
						BuscarNum(2, 3, 1);
						break;
					case 3:
						BuscarNum(3, 3, 1);
						break;
					case 4:
						BuscarNum(4, 3, 1);
						break;
					case 5:
						BuscarNum(5, 3, 1);
						break;
					case 6:
						BuscarNum(6, 3, 1);
						break;
					case 7:
						BuscarNum(7, 3, 1);
						break;
					case 8:
						BuscarNum(8, 3, 1);
						break;
					case 9:
						BuscarNum(9, 3, 1);
						break;
					default:
						break;
					}
				}

				if (mTBPrecio2_1->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio2_1->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 0, 2);
						break;
					case 1:
						BuscarNum(1, 0, 2);
						break;
					case 2:
						BuscarNum(2, 0, 2);
						break;
					case 3:
						BuscarNum(3, 0, 2);
						break;
					case 4:
						BuscarNum(4, 0, 2);
						break;
					case 5:
						BuscarNum(5, 0, 2);
						break;
					case 6:
						BuscarNum(6, 0, 2);
						break;
					case 7:
						BuscarNum(7, 0, 2);
						break;
					case 8:
						BuscarNum(8, 0, 2);
						break;
					case 9:
						BuscarNum(9, 0, 2);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio2_2->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio2_2->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 1, 2);
						break;
					case 1:
						BuscarNum(1, 1, 2);
						break;
					case 2:
						BuscarNum(2, 1, 2);
						break;
					case 3:
						BuscarNum(3, 1, 2);
						break;
					case 4:
						BuscarNum(4, 1, 2);
						break;
					case 5:
						BuscarNum(5, 1, 2);
						break;
					case 6:
						BuscarNum(6, 1, 2);
						break;
					case 7:
						BuscarNum(7, 1, 2);
						break;
					case 8:
						BuscarNum(8, 1, 2);
						break;
					case 9:
						BuscarNum(9, 1, 2);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio2_3->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio2_3->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 2, 2);
						break;
					case 1:
						BuscarNum(1, 2, 2);
						break;
					case 2:
						BuscarNum(2, 2, 2);
						break;
					case 3:
						BuscarNum(3, 2, 2);
						break;
					case 4:
						BuscarNum(4, 2, 2);
						break;
					case 5:
						BuscarNum(5, 2, 2);
						break;
					case 6:
						BuscarNum(6, 2, 2);
						break;
					case 7:
						BuscarNum(7, 2, 2);
						break;
					case 8:
						BuscarNum(8, 2, 2);
						break;
					case 9:
						BuscarNum(9, 2, 2);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio2_4->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio2_4->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 3, 2);
						break;
					case 1:
						BuscarNum(1, 3, 2);
						break;
					case 2:
						BuscarNum(2, 3, 2);
						break;
					case 3:
						BuscarNum(3, 3, 2);
						break;
					case 4:
						BuscarNum(4, 3, 2);
						break;
					case 5:
						BuscarNum(5, 3, 2);
						break;
					case 6:
						BuscarNum(6, 3, 2);
						break;
					case 7:
						BuscarNum(7, 3, 2);
						break;
					case 8:
						BuscarNum(8, 3, 2);
						break;
					case 9:
						BuscarNum(9, 3, 2);
						break;
					default:
						break;
					}
				}

				if (mTBPrecio3_1->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio3_1->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 0, 3);
						break;
					case 1:
						BuscarNum(1, 0, 3);
						break;
					case 2:
						BuscarNum(2, 0, 3);
						break;
					case 3:
						BuscarNum(3, 0, 3);
						break;
					case 4:
						BuscarNum(4, 0, 3);
						break;
					case 5:
						BuscarNum(5, 0, 3);
						break;
					case 6:
						BuscarNum(6, 0, 3);
						break;
					case 7:
						BuscarNum(7, 0, 3);
						break;
					case 8:
						BuscarNum(8, 0, 3);
						break;
					case 9:
						BuscarNum(9, 0, 3);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio3_2->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio3_2->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 1, 3);
						break;
					case 1:
						BuscarNum(1, 1, 3);
						break;
					case 2:
						BuscarNum(2, 1, 3);
						break;
					case 3:
						BuscarNum(3, 1, 3);
						break;
					case 4:
						BuscarNum(4, 1, 3);
						break;
					case 5:
						BuscarNum(5, 1, 3);
						break;
					case 6:
						BuscarNum(6, 1, 3);
						break;
					case 7:
						BuscarNum(7, 1, 3);
						break;
					case 8:
						BuscarNum(8, 1, 3);
						break;
					case 9:
						BuscarNum(9, 1, 3);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio3_3->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio3_3->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 2, 3);
						break;
					case 1:
						BuscarNum(1, 2, 3);
						break;
					case 2:
						BuscarNum(2, 2, 3);
						break;
					case 3:
						BuscarNum(3, 2, 3);
						break;
					case 4:
						BuscarNum(4, 2, 3);
						break;
					case 5:
						BuscarNum(5, 2, 3);
						break;
					case 6:
						BuscarNum(6, 2, 3);
						break;
					case 7:
						BuscarNum(7, 2, 3);
						break;
					case 8:
						BuscarNum(8, 2, 3);
						break;
					case 9:
						BuscarNum(9, 2, 3);
						break;
					default:
						break;
					}
				}
				if (mTBPrecio3_4->Text != "")
				{
					n = System::Convert::ToInt16(mTBPrecio3_4->Text);
					switch (n)
					{
					case 0:
						BuscarNum(0, 3, 3);
						break;
					case 1:
						BuscarNum(1, 3, 3);
						break;
					case 2:
						BuscarNum(2, 3, 3);
						break;
					case 3:
						BuscarNum(3, 3, 2);
						break;
					case 4:
						BuscarNum(4, 3, 3);
						break;
					case 5:
						BuscarNum(5, 3, 3);
						break;
					case 6:
						BuscarNum(6, 3, 3);
						break;
					case 7:
						BuscarNum(7, 3, 3);
						break;
					case 8:
						BuscarNum(8, 3, 3);
						break;
					case 9:
						BuscarNum(9, 3, 3);
						break;
					default:
						break;
					}
				}
				tbPrecio1->Text = System::Convert::ToString(Precio1->MostrarP(0)) + System::Convert::ToString(Precio1->MostrarP(1)) + "." + System::Convert::ToString(Precio1->MostrarP(2)) + System::Convert::ToString(Precio1->MostrarP(3));
				tbPrecio2->Text = System::Convert::ToString(Precio2->MostrarP(0)) + System::Convert::ToString(Precio2->MostrarP(1)) + "." + System::Convert::ToString(Precio2->MostrarP(2)) + System::Convert::ToString(Precio2->MostrarP(3));
				tbPrecio3->Text = System::Convert::ToString(Precio3->MostrarP(0)) + System::Convert::ToString(Precio3->MostrarP(1)) + "." + System::Convert::ToString(Precio3->MostrarP(2)) + System::Convert::ToString(Precio3->MostrarP(3));
				break;
			default:
				break;
			}
		}
		catch(...)
		{
			System::Windows::Forms::MessageBox::Show("Debe llenar todos los espacios de precio");
		}
		Actualizar();
	}
	private: System::Void BuscarNum(int valor, int posicion, int precio) 
	{
		//Se crea una variable para saber si se encontro el valor deseado
		int n = -1;
		//Se desapilan los datos de la pila y se evalúa si la cima es igual al valor, este proceso se repite hasta que encuentre el valor o se vacíe la pila
		while (PilaP->Obtenercima() != valor && PilaP->NElementos != 0)
		{
			//Se despilan los datos y se ingresan en la Pila Auxiliar
			PilaAux->Apilar(PilaP->Desapilar());
			//Si la cima de la pila concuerda con el valor deseado se cambia n a este valor
			if (PilaP->Obtenercima() == valor) {
				n = PilaP->Obtenercima();
			}
		}
		//En caso de que nos quedemos sin elementos en la pila y no se haya encontrado el valor deseado (n siga siendo -1), se repite el proceso de búsqueda con la Cola
		if (PilaP->NElementos == 0 && n == -1)
		{
			n = -1;
			while (ColaP->ObtenerPP() != valor && ColaP->NElementos != 0)
			{
				ColaAux->Insertar(ColaP->Quitar());
				if (ColaP->ObtenerPP() == valor) 
				{
					n = ColaP->ObtenerPP();
				}
			}
			//Si no sé logro encontrar el elemento en la cola, se vuelven a llenar la pila y la cola ptincipal y se llama a este procedimiento de manera recursiva pero buscando el siguiente valor
			if (ColaP->NElementos == 0 && n == -1) 
			{
				while (ColaP->NElementos != 0) {
					ColaAux->Insertar(ColaP->Quitar());
				}
				while (PilaAux->NElementos != 0)
				{
					PilaP->Apilar(PilaAux->Desapilar());
				}
				while (ColaAux->NElementos != 0) 
				{
					ColaP->Insertar(ColaAux->Quitar());
				}
				BuscarNum(valor + 1, posicion, precio);
			}
			else
			{
				//Dependiendo del precio ingresado, se inserta en la lista equivalente al precio
				switch (precio) {
				case 1:
					//Dependiendo de la posición ingresada, será la posición a insertar en la fila
					switch (posicion)
					{
					case 0:
						Precio1->InsertarI(ColaP->Quitar());
						break;
					case 1:
						Precio1->InsertarP(ColaP->Quitar(), 2);
						break;
					case 2:
						Precio1->InsertarP(ColaP->Quitar(), 3);
						break;
					case 3:
						Precio1->InsertarF(ColaP->Quitar());
						break;
					}
					break;
				case 2:
					switch (posicion)
					{
					case 0:
						Precio2->InsertarI(ColaP->Quitar());
						break;
					case 1:
						Precio2->InsertarP(ColaP->Quitar(), 2);
						break;
					case 2:
						Precio2->InsertarP(ColaP->Quitar(), 3);
						break;
					case 3:
						Precio2->InsertarF(ColaP->Quitar());
						break;
					}
					break;
				case 3:
					switch (posicion)
					{
					case 0:
						Precio3->InsertarI(ColaP->Quitar());
						break;
					case 1:
						Precio3->InsertarP(ColaP->Quitar(), 2);
						break;
					case 2:
						Precio3->InsertarP(ColaP->Quitar(), 3);
						break;
					case 3:
						Precio3->InsertarF(ColaP->Quitar());
						break;
					}
					break;
				}
				//Se ingresan todos los valores a sus estructuras originales
				while (ColaP->NElementos != 0) {
					ColaAux->Insertar(ColaP->Quitar());
				}
				while (ColaAux->NElementos != 0) {
					ColaP->Insertar(ColaAux->Quitar());
				}
				while (PilaAux->NElementos != 0)
				{
					PilaP->Apilar(PilaAux->Desapilar());
				}
			}
		}
		else 
		{//Se repite el proceso de insertar, solo que ahora usando la pila
			switch (precio) {
			case 1:
				switch (posicion)
				{
				case 0:
					Precio1->InsertarI(PilaP->Desapilar());
					break;
				case 1:
					Precio1->InsertarP(PilaP->Desapilar(), 2);
						break;
				case 2:
					Precio1->InsertarP(PilaP->Desapilar(), 3);
					break;
				case 3:
					Precio1->InsertarF(PilaP->Desapilar());
					break;
				}
				break;
			case 2:
				switch (posicion)
				{
				case 0:
					Precio2->InsertarI(PilaP->Desapilar());
					break;
				case 1:
					Precio2->InsertarP(PilaP->Desapilar(), 2);
					break;
				case 2:
					Precio2->InsertarP(PilaP->Desapilar(), 3);
					break;
				case 3:
					Precio2->InsertarF(PilaP->Desapilar());
					break;
				}
				break;
			case 3:
				switch (posicion)
				{
				case 0:
					Precio3->InsertarI(PilaP->Desapilar());
					break;
				case 1:
					Precio3->InsertarP(PilaP->Desapilar(), 2);
					break;
				case 2:
					Precio3->InsertarP(PilaP->Desapilar(), 3);
					break;
				case 3:
					Precio3->InsertarF(PilaP->Desapilar());
					break;
				}
				break;
			}
			//Se vuelve a llenar la pila principal
			while (PilaAux->NElementos != 0) 
			{
				PilaP->Apilar(PilaAux->Desapilar());
			}
		}
		
	}
	private: System::Void BtnBorrar_Click(System::Object^  sender, System::EventArgs^  e) {
		int n;
		int nAux;
		BtnBorrar->Enabled = false;
		BtnGuardar->Enabled = true;
		BtnOrdenar->Enabled=true;
		bool Pert = true;
		try {
			//Se revisa la cantidad de precios que hay
			switch (cBCantPrecios->SelectedIndex)
			{
			case 0:
				//Se crea un ciclo que vaya recuperando 1 a 1 los números de la lista e ingresandolos a sus pilas y colas correspondientes
				for (int i = 0; i < 4; i++)
				{
					//Se ingresa el precio mostrado y se multiplica por 100 para obtener un entero
					n = System::Convert::ToInt32(System::Convert::ToDouble(tbPrecio1->Text) * 100);
					//Dependiendo del número de iteración los cambios a realizar con el precio, para obtener el número deseado
					switch (i)
					{
					case 0:
						nAux = n / 1000;
						break;

					case 1:
						n = n % 1000;
						nAux = n / 100;
						break;

					case 2:
						n = n % 100;
						nAux = n / 10;
						break;

					case 3:
						nAux = n % 10;
						break;
					}
					//La variable booleana que nos indica si el dato pertenece a la Pila, se convierte en true y se mantiene así hasta que se encuentra el dato ya ingresado en la pila
					Pert = true;
					while (PilaP->NElementos != 0)
					{
						if (PilaP->Obtenercima() == nAux)
						{
							Pert = false;
						}
						PilaAux->Apilar(PilaP->Desapilar());
					}
					//Si el dato ya existe en la pila se ingresa en la cola, de lo contrario se ingresa en la pila
					if (Pert)
					{
						PilaAux->Apilar(Precio1->Eliminar(1));
					}
					else
					{
						ColaP->Insertar(Precio1->Eliminar(1));
					}
					while (PilaAux->NElementos != 0)
					{
						PilaP->Apilar(PilaAux->Desapilar());
					}

				}
				break;
			case 1:
				//Se repite el mismo proceso pero aumentando la cantidad de precios 
				for (int i = 0; i < 4; i++)
				{
					n = System::Convert::ToInt32(System::Convert::ToDouble(tbPrecio1->Text) * 100);
					switch (i)
					{
					case 0:
						nAux = n / 1000;
						break;

					case 1:
						n = n % 1000;
						nAux = n / 100;
						break;

					case 2:
						n = n % 100;
						nAux = n / 10;
						break;

					case 3:
						nAux = n % 10;
						break;
					}
					Pert = true;
					while (PilaP->NElementos != 0)
					{
						if (PilaP->Obtenercima() == nAux)
						{
							Pert = false;
						}
						PilaAux->Apilar(PilaP->Desapilar());
					}
					if (Pert)
					{
						PilaAux->Apilar(Precio1->Eliminar(1));
					}
					else
					{
						ColaP->Insertar(Precio1->Eliminar(1));
					}
					while (PilaAux->NElementos != 0)
					{
						PilaP->Apilar(PilaAux->Desapilar());
					}

				}
				for (int i = 0; i < 4; i++)
				{
					n = System::Convert::ToInt32(System::Convert::ToDouble(tbPrecio2->Text) * 100);
					switch (i)
					{
					case 0:
						nAux = n / 1000;
						break;

					case 1:
						n = n % 1000;
						nAux = n / 100;
						break;

					case 2:
						n = n % 100;
						nAux = n / 10;
						break;

					case 3:
						nAux = n % 10;
						break;
					}
					Pert = true;
					while (PilaP->NElementos != 0)
					{
						if (PilaP->Obtenercima() == nAux)
						{
							Pert = false;
						}
						PilaAux->Apilar(PilaP->Desapilar());
					}
					if (Pert)
					{
						PilaAux->Apilar(Precio2->Eliminar(1));
					}
					else
					{
						ColaP->Insertar(Precio2->Eliminar(1));
					}
					while (PilaAux->NElementos != 0)
					{
						PilaP->Apilar(PilaAux->Desapilar());
					}

				}
				break;
			case 2:
				for (int i = 0; i < 4; i++)
				{
					n = System::Convert::ToInt32(System::Convert::ToDouble(tbPrecio1->Text) * 100);
					switch (i)
					{
					case 0:
						nAux = n / 1000;
						break;

					case 1:
						n = n % 1000;
						nAux = n / 100;
						break;

					case 2:
						n = n % 100;
						nAux = n / 10;
						break;

					case 3:
						nAux = n % 10;
						break;
					}
					Pert = true;
					while (PilaP->NElementos != 0)
					{
						if (PilaP->Obtenercima() == nAux)
						{
							Pert = false;
						}
						PilaAux->Apilar(PilaP->Desapilar());
					}
					if (Pert)
					{
						PilaAux->Apilar(Precio1->Eliminar(1));
					}
					else
					{
						ColaP->Insertar(Precio1->Eliminar(1));
					}
					while (PilaAux->NElementos != 0)
					{
						PilaP->Apilar(PilaAux->Desapilar());
					}

				}
				for (int i = 0; i < 4; i++)
				{
					n = System::Convert::ToInt32(System::Convert::ToDouble(tbPrecio2->Text) * 100);
					switch (i)
					{
					case 0:
						nAux = n / 1000;
						break;

					case 1:
						n = n % 1000;
						nAux = n / 100;
						break;

					case 2:
						n = n % 100;
						nAux = n / 10;
						break;

					case 3:
						nAux = n % 10;
						break;
					}
					Pert = true;
					while (PilaP->NElementos != 0)
					{
						if (PilaP->Obtenercima() == nAux)
						{
							Pert = false;
						}
						PilaAux->Apilar(PilaP->Desapilar());
					}
					if (Pert)
					{
						PilaAux->Apilar(Precio2->Eliminar(1));
					}
					else
					{
						ColaP->Insertar(Precio2->Eliminar(1));
					}
					while (PilaAux->NElementos != 0)
					{
						PilaP->Apilar(PilaAux->Desapilar());
					}

				}
				for (int i = 0; i < 4; i++)
				{
					n = System::Convert::ToInt32(System::Convert::ToDouble(tbPrecio3->Text) * 100);
					switch (i)
					{
					case 0:
						nAux = n / 1000;
						break;

					case 1:
						n = n % 1000;
						nAux = n / 100;
						break;

					case 2:
						n = n % 100;
						nAux = n / 10;
						break;

					case 3:
						nAux = n % 10;
						break;
					}
					Pert = true;
					while (PilaP->NElementos != 0)
					{
						if (PilaP->Obtenercima() == nAux)
						{
							Pert = false;
						}
						PilaAux->Apilar(PilaP->Desapilar());
					}
					if (Pert)
					{
						PilaAux->Apilar(Precio3->Eliminar(1));
					}
					else
					{
						ColaP->Insertar(Precio3->Eliminar(1));
					}
					while (PilaAux->NElementos != 0)
					{
						PilaP->Apilar(PilaAux->Desapilar());
					}

				}
				break;
			}
		}
		catch (...) 
		{
			System::Windows::Forms::MessageBox::Show("Error, reinicie el programa");
		}
		//Se vacían todos los textbox de los precios
		mTBPrecio1_1->Text = "";
		mTBPrecio1_2->Text = "";
		mTBPrecio1_3->Text = "";
		mTBPrecio1_4->Text = "";
		mTBPrecio2_1->Text = "";
		mTBPrecio2_2->Text = "";
		mTBPrecio2_3->Text = "";
		mTBPrecio2_4->Text = "";
		mTBPrecio3_1->Text = "";
		mTBPrecio3_2->Text = "";
		mTBPrecio3_3->Text = "";
		mTBPrecio3_4->Text = "";
		tbPrecio1->Text = "";
		tbPrecio2->Text = "";
		tbPrecio3->Text = "";
		//Se desactiva borrar para evitar errores
		BtnBorrar->Enabled = false;
		BtnOrdenar->Enabled = true;
		Actualizar();
	}
	private: System::Void OrdenarB() 
	{
		int P[10];
		int C[10];
		//Se ingresan todos los datos de la pila y la cola en vectores
		for  (int i = 0;  i < 10;  i++)
		{
			P[i] = PilaP->Desapilar();
			C[i] = ColaP->Quitar();
		}
		int aux;
		//Se aplica el método de ordenamiento Bubble Sort para ambos vectores
		for (int i = 0; i < 9; i++)
		{
			for (int j = i+1; j < 10; j++)
			{
				if (P[i] > P[j])
				{
					aux = P[i];
					P[i] = P[j];
					P[j] = aux;
				}
			}
		}
		for (int i = 0; i < 9; i++)
		{
			for (int j = i+1; j < 10; j++)
			{
				if (C[i] > C[j])
				{
					aux = C[i];
					C[i] = C[j];
					C[j] = aux;
				}
			}
		}
		//Se ingresan los datos de los vectores de nuevo a la Pila y a la Cola
		for (int i = 0; i < 10; i++) 
		{
			PilaP->Apilar(P[i]);
			ColaP->Insertar(C[i]);
		}
	}
	private: System::Void BtnCambiarCant_Click(System::Object^  sender, System::EventArgs^  e) {
	//Se desactivan todos los precios
	mTBPrecio1_1->Enabled = false;
	mTBPrecio1_2->Enabled = false;
	mTBPrecio1_3->Enabled = false;
	mTBPrecio1_4->Enabled = false;
	mTBPrecio2_1->Enabled = false;
	mTBPrecio2_2->Enabled = false;
	mTBPrecio2_3->Enabled = false;
	mTBPrecio2_4->Enabled = false;
	mTBPrecio3_1->Enabled = false;
	mTBPrecio3_2->Enabled = false;
	mTBPrecio3_3->Enabled = false;
	mTBPrecio3_4->Enabled = false;
	//Se activan los precios, dependiendo de la cantidad deseada
	switch (cBCantPrecios->SelectedIndex)
	{
	case 0:
		mTBPrecio1_1->Enabled = true;
		mTBPrecio1_2->Enabled = true;
		mTBPrecio1_3->Enabled = true;
		mTBPrecio1_4->Enabled = true;
		break;
	case 1:
		mTBPrecio1_1->Enabled = true;
		mTBPrecio1_2->Enabled = true;
		mTBPrecio1_3->Enabled = true;
		mTBPrecio1_4->Enabled = true;
		mTBPrecio2_1->Enabled = true;
		mTBPrecio2_2->Enabled = true;
		mTBPrecio2_3->Enabled = true;
		mTBPrecio2_4->Enabled = true;
		break;

	case 2:
		mTBPrecio1_1->Enabled = true;
		mTBPrecio1_2->Enabled = true;
		mTBPrecio1_3->Enabled = true;
		mTBPrecio1_4->Enabled = true;
		mTBPrecio2_1->Enabled = true;
		mTBPrecio2_2->Enabled = true;
		mTBPrecio2_3->Enabled = true;
		mTBPrecio2_4->Enabled = true;
		mTBPrecio3_1->Enabled = true;
		mTBPrecio3_2->Enabled = true;
		mTBPrecio3_3->Enabled = true;
		mTBPrecio3_4->Enabled = true;
		break;
	default:
		break;
	}
}
}; }



