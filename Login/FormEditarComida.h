#pragma once
#include "DB.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormEditarComida
	/// </summary>
	public ref class FormEditarComida : public System::Windows::Forms::Form
	{
	public:
		FormEditarComida(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
			this->data = gcnew DB();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~FormEditarComida()
		{
			if (components)
			{
				delete components;
			}
		}
	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;

	public: System::Windows::Forms::TextBox^ txtNombreComida;

	private: System::Windows::Forms::Button^ btnGuardarRol;
	private: System::Windows::Forms::Button^ Atras;
	protected:

	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarComida::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombreComida = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardarRol = (gcnew System::Windows::Forms::Button());
			this->Atras = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(21, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Comida";
			// 
			// txtNombreComida
			// 
			this->txtNombreComida->Location = System::Drawing::Point(190, 30);
			this->txtNombreComida->Multiline = true;
			this->txtNombreComida->Name = L"txtNombreComida";
			this->txtNombreComida->Size = System::Drawing::Size(248, 35);
			this->txtNombreComida->TabIndex = 11;
			// 
			// btnGuardarRol
			// 
			this->btnGuardarRol->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnGuardarRol->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarRol->ForeColor = System::Drawing::Color::White;
			this->btnGuardarRol->Location = System::Drawing::Point(492, 352);
			this->btnGuardarRol->Name = L"btnGuardarRol";
			this->btnGuardarRol->Size = System::Drawing::Size(254, 46);
			this->btnGuardarRol->TabIndex = 12;
			this->btnGuardarRol->Text = L"Guardar";
			this->btnGuardarRol->UseVisualStyleBackColor = false;
			this->btnGuardarRol->Click += gcnew System::EventHandler(this, &FormEditarComida::btnGuardarRol_Click);
			// 
			// Atras
			// 
			this->Atras->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Atras->ForeColor = System::Drawing::Color::White;
			this->Atras->Location = System::Drawing::Point(40, 352);
			this->Atras->Name = L"Atras";
			this->Atras->Size = System::Drawing::Size(254, 44);
			this->Atras->TabIndex = 24;
			this->Atras->Text = L"Atras";
			this->Atras->UseVisualStyleBackColor = false;
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarComida::Atras_Click);
			// 
			// FormEditarComida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->btnGuardarRol);
			this->Controls->Add(this->txtNombreComida);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarComida";
			this->Text = L"FormEditarComida";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardarRol_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}

	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
