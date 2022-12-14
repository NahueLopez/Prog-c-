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
	/// Resumen de FormEditarMantenimiento
	/// </summary>
	public ref class FormEditarMantenimiento : public System::Windows::Forms::Form
	{
	public:
		FormEditarMantenimiento(void)
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
		~FormEditarMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private:DB^ data;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	public: System::Windows::Forms::TextBox^ txtEditarNombreDescripcion;
	public: System::Windows::Forms::ComboBox^ comboHabitat;
	public: System::Windows::Forms::ComboBox^ comboArea;
	public: System::Windows::Forms::ComboBox^ comboUsuario;




	private: System::Windows::Forms::Button^ btnEditarMantenimiento;
	private: System::Windows::Forms::Button^ Atras;
	






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditarMantenimiento::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtEditarNombreDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->btnEditarMantenimiento = (gcnew System::Windows::Forms::Button());
			this->Atras = (gcnew System::Windows::Forms::Button());
			this->comboHabitat = (gcnew System::Windows::Forms::ComboBox());
			this->comboArea = (gcnew System::Windows::Forms::ComboBox());
			this->comboUsuario = (gcnew System::Windows::Forms::ComboBox());
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
			this->label1->Size = System::Drawing::Size(172, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Descripcion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(21, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 36);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Habitad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(21, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 36);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Area";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(21, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 36);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Encargado";
			// 
			// txtEditarNombreDescripcion
			// 
			this->txtEditarNombreDescripcion->Location = System::Drawing::Point(190, 30);
			this->txtEditarNombreDescripcion->Multiline = true;
			this->txtEditarNombreDescripcion->Name = L"txtEditarNombreDescripcion";
			this->txtEditarNombreDescripcion->Size = System::Drawing::Size(248, 35);
			this->txtEditarNombreDescripcion->TabIndex = 17;
			// 
			// btnEditarMantenimiento
			// 
			this->btnEditarMantenimiento->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnEditarMantenimiento->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditarMantenimiento->ForeColor = System::Drawing::Color::White;
			this->btnEditarMantenimiento->Location = System::Drawing::Point(492, 352);
			this->btnEditarMantenimiento->Name = L"btnEditarMantenimiento";
			this->btnEditarMantenimiento->Size = System::Drawing::Size(254, 46);
			this->btnEditarMantenimiento->TabIndex = 22;
			this->btnEditarMantenimiento->Text = L"Guardar";
			this->btnEditarMantenimiento->UseVisualStyleBackColor = false;
			this->btnEditarMantenimiento->Click += gcnew System::EventHandler(this, &FormEditarMantenimiento::btnEditarMantenimiento_Click);
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
			this->Atras->Click += gcnew System::EventHandler(this, &FormEditarMantenimiento::Atras_Click);
			// 
			// comboHabitat
			// 
			this->comboHabitat->FormattingEnabled = true;
			this->comboHabitat->Location = System::Drawing::Point(190, 95);
			this->comboHabitat->Name = L"comboHabitat";
			this->comboHabitat->Size = System::Drawing::Size(248, 24);
			this->comboHabitat->TabIndex = 25;
			// 
			// comboArea
			// 
			this->comboArea->FormattingEnabled = true;
			this->comboArea->Location = System::Drawing::Point(190, 150);
			this->comboArea->Name = L"comboArea";
			this->comboArea->Size = System::Drawing::Size(248, 24);
			this->comboArea->TabIndex = 26;
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(190, 200);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(248, 24);
			this->comboUsuario->TabIndex = 27;
			// 
			// FormEditarMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 522);
			this->Controls->Add(this->comboUsuario);
			this->Controls->Add(this->comboArea);
			this->Controls->Add(this->comboHabitat);
			this->Controls->Add(this->Atras);
			this->Controls->Add(this->btnEditarMantenimiento);
			this->Controls->Add(this->txtEditarNombreDescripcion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormEditarMantenimiento";
			this->Text = L"FormEditarMantenimiento";
			this->Load += gcnew System::EventHandler(this, &FormEditarMantenimiento::FormEditarMantenimiento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Atras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btnEditarMantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se Modifico Con Exito!");
		this->Close();
	}

	private: System::Void FormEditarMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}


	public: void Consulta() {

		this->data->AbrirConexion();

		this->comboArea->DataSource = this->data->HabitatNombres();
		this->comboArea->DisplayMember = "Habitat";
		this->comboArea->ValueMember = "id";

		this->comboHabitat->DataSource = this->data->ListadosArea();
		this->comboHabitat->DisplayMember = "Area";
		this->comboHabitat->ValueMember = "id";


		this->comboUsuario->DataSource = this->data->UsuarioNombres();
		this->comboUsuario->DisplayMember = "Nombre";
		this->comboUsuario->ValueMember = "id";


		this->data->CerrarConexion();
	}
};
}
