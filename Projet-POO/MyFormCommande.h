#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyFormCommande
	/// </summary>
	public ref class MyFormCommande : public System::Windows::Forms::Form
	{
	public:
		MyFormCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyFormCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ retourMenu;
	protected:
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ infoComp_facturation;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ numRue_facturation;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ CP_facturation;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ ville_facturation;
	private: System::Windows::Forms::TextBox^ nomRue_facturation;
	private: System::Windows::Forms::TextBox^ pays_facturation;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ infoComp_livraison;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ numRue_livraison;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ CP_livraison;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ville_livraison;
	private: System::Windows::Forms::TextBox^ nomRue_livraison;
	private: System::Windows::Forms::TextBox^ pays_livraison;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateCommande_Commande;

	private: System::Windows::Forms::Button^ act_client;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ID_Client;
	private: System::Windows::Forms::TextBox^ Prenom_Client;
	private: System::Windows::Forms::TextBox^ Nom_Client;
	private: System::Windows::Forms::Button^ mod_client;
	private: System::Windows::Forms::Button^ ins_client;
	private: System::Windows::Forms::Button^ sup_client;
	private: System::Windows::Forms::Button^ sel_client;
	private: System::Windows::Forms::DataGridView^ dataBaseClient;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::DateTimePicker^ dateLivraison_Commande;


	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormCommande::typeid));
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->infoComp_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numRue_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->CP_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->ville_facturation = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_facturation = (gcnew System::Windows::Forms::TextBox());
			this->pays_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->infoComp_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numRue_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CP_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ville_livraison = (gcnew System::Windows::Forms::TextBox());
			this->nomRue_livraison = (gcnew System::Windows::Forms::TextBox());
			this->pays_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateCommande_Commande = (gcnew System::Windows::Forms::DateTimePicker());
			this->act_client = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ID_Client = (gcnew System::Windows::Forms::TextBox());
			this->Prenom_Client = (gcnew System::Windows::Forms::TextBox());
			this->Nom_Client = (gcnew System::Windows::Forms::TextBox());
			this->mod_client = (gcnew System::Windows::Forms::Button());
			this->ins_client = (gcnew System::Windows::Forms::Button());
			this->sup_client = (gcnew System::Windows::Forms::Button());
			this->sel_client = (gcnew System::Windows::Forms::Button());
			this->dataBaseClient = (gcnew System::Windows::Forms::DataGridView());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->dateLivraison_Commande = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseClient))->BeginInit();
			this->SuspendLayout();
			// 
			// retourMenu
			// 
			this->retourMenu->Location = System::Drawing::Point(41, 719);
			this->retourMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(277, 69);
			this->retourMenu->TabIndex = 123;
			this->retourMenu->Text = L"Retour au menu";
			this->retourMenu->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label13->Location = System::Drawing::Point(684, 600);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(204, 17);
			this->label13->TabIndex = 122;
			this->label13->Text = L"Informations compl�mentaires :";
			// 
			// infoComp_facturation
			// 
			this->infoComp_facturation->Location = System::Drawing::Point(686, 622);
			this->infoComp_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->infoComp_facturation->Name = L"infoComp_facturation";
			this->infoComp_facturation->Size = System::Drawing::Size(375, 22);
			this->infoComp_facturation->TabIndex = 121;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label14->Location = System::Drawing::Point(1081, 527);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 17);
			this->label14->TabIndex = 120;
			this->label14->Text = L"Num�ro de rue :";
			// 
			// numRue_facturation
			// 
			this->numRue_facturation->Location = System::Drawing::Point(1084, 551);
			this->numRue_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numRue_facturation->Name = L"numRue_facturation";
			this->numRue_facturation->Size = System::Drawing::Size(195, 22);
			this->numRue_facturation->TabIndex = 119;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label15->Location = System::Drawing::Point(1081, 468);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 17);
			this->label15->TabIndex = 118;
			this->label15->Text = L"Code postal : ";
			// 
			// CP_facturation
			// 
			this->CP_facturation->Location = System::Drawing::Point(1084, 492);
			this->CP_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CP_facturation->Name = L"CP_facturation";
			this->CP_facturation->Size = System::Drawing::Size(195, 22);
			this->CP_facturation->TabIndex = 117;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label16->Location = System::Drawing::Point(684, 529);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(105, 17);
			this->label16->TabIndex = 116;
			this->label16->Text = L"Nom de la rue :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label17->Location = System::Drawing::Point(861, 468);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(42, 17);
			this->label17->TabIndex = 115;
			this->label17->Text = L"Ville :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label18->Location = System::Drawing::Point(684, 468);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 17);
			this->label18->TabIndex = 114;
			this->label18->Text = L"Pays : ";
			// 
			// ville_facturation
			// 
			this->ville_facturation->Location = System::Drawing::Point(868, 492);
			this->ville_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ville_facturation->Name = L"ville_facturation";
			this->ville_facturation->Size = System::Drawing::Size(195, 22);
			this->ville_facturation->TabIndex = 113;
			// 
			// nomRue_facturation
			// 
			this->nomRue_facturation->Location = System::Drawing::Point(686, 551);
			this->nomRue_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nomRue_facturation->Name = L"nomRue_facturation";
			this->nomRue_facturation->Size = System::Drawing::Size(375, 22);
			this->nomRue_facturation->TabIndex = 112;
			// 
			// pays_facturation
			// 
			this->pays_facturation->Location = System::Drawing::Point(686, 492);
			this->pays_facturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pays_facturation->Name = L"pays_facturation";
			this->pays_facturation->Size = System::Drawing::Size(159, 22);
			this->pays_facturation->TabIndex = 111;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label12->Location = System::Drawing::Point(38, 600);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(204, 17);
			this->label12->TabIndex = 110;
			this->label12->Text = L"Informations compl�mentaires :";
			// 
			// infoComp_livraison
			// 
			this->infoComp_livraison->Location = System::Drawing::Point(44, 622);
			this->infoComp_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->infoComp_livraison->Name = L"infoComp_livraison";
			this->infoComp_livraison->Size = System::Drawing::Size(375, 22);
			this->infoComp_livraison->TabIndex = 109;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label11->Location = System::Drawing::Point(436, 527);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 17);
			this->label11->TabIndex = 108;
			this->label11->Text = L"Num�ro de rue :";
			// 
			// numRue_livraison
			// 
			this->numRue_livraison->Location = System::Drawing::Point(440, 551);
			this->numRue_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numRue_livraison->Name = L"numRue_livraison";
			this->numRue_livraison->Size = System::Drawing::Size(195, 22);
			this->numRue_livraison->TabIndex = 107;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label10->Location = System::Drawing::Point(436, 468);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 17);
			this->label10->TabIndex = 106;
			this->label10->Text = L"Code postal : ";
			// 
			// CP_livraison
			// 
			this->CP_livraison->Location = System::Drawing::Point(440, 492);
			this->CP_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CP_livraison->Name = L"CP_livraison";
			this->CP_livraison->Size = System::Drawing::Size(195, 22);
			this->CP_livraison->TabIndex = 105;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label9->Location = System::Drawing::Point(38, 529);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 17);
			this->label9->TabIndex = 104;
			this->label9->Text = L"Nom de la rue :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(220, 468);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 17);
			this->label8->TabIndex = 103;
			this->label8->Text = L"Ville :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(38, 468);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 17);
			this->label7->TabIndex = 102;
			this->label7->Text = L"Pays : ";
			// 
			// ville_livraison
			// 
			this->ville_livraison->Location = System::Drawing::Point(221, 492);
			this->ville_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ville_livraison->Name = L"ville_livraison";
			this->ville_livraison->Size = System::Drawing::Size(195, 22);
			this->ville_livraison->TabIndex = 101;
			// 
			// nomRue_livraison
			// 
			this->nomRue_livraison->Location = System::Drawing::Point(44, 551);
			this->nomRue_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nomRue_livraison->Name = L"nomRue_livraison";
			this->nomRue_livraison->Size = System::Drawing::Size(375, 22);
			this->nomRue_livraison->TabIndex = 100;
			// 
			// pays_livraison
			// 
			this->pays_livraison->Location = System::Drawing::Point(44, 492);
			this->pays_livraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pays_livraison->Name = L"pays_livraison";
			this->pays_livraison->Size = System::Drawing::Size(159, 22);
			this->pays_livraison->TabIndex = 99;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(966, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 17);
			this->label6->TabIndex = 98;
			this->label6->Text = L"Date de commande :";
			// 
			// dateCommande_Commande
			// 
			this->dateCommande_Commande->CustomFormat = L"dd/MM/yyyy";
			this->dateCommande_Commande->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateCommande_Commande->Location = System::Drawing::Point(966, 297);
			this->dateCommande_Commande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateCommande_Commande->Name = L"dateCommande_Commande";
			this->dateCommande_Commande->Size = System::Drawing::Size(134, 22);
			this->dateCommande_Commande->TabIndex = 97;
			// 
			// act_client
			// 
			this->act_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->act_client->Location = System::Drawing::Point(625, 73);
			this->act_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->act_client->Name = L"act_client";
			this->act_client->Size = System::Drawing::Size(264, 70);
			this->act_client->TabIndex = 96;
			this->act_client->Text = L"Actualiser";
			this->act_client->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(680, 431);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 24);
			this->label5->TabIndex = 95;
			this->label5->Text = L"Adresse Facturation :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(37, 431);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 24);
			this->label4->TabIndex = 94;
			this->label4->Text = L"Adresse Livraison :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(966, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 17);
			this->label3->TabIndex = 93;
			this->label3->Text = L"Pr�nom Client :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(966, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 17);
			this->label2->TabIndex = 92;
			this->label2->Text = L"Nom Client :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(966, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 17);
			this->label1->TabIndex = 91;
			this->label1->Text = L"ID Commande :";
			// 
			// ID_Client
			// 
			this->ID_Client->Location = System::Drawing::Point(966, 73);
			this->ID_Client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ID_Client->Name = L"ID_Client";
			this->ID_Client->Size = System::Drawing::Size(403, 22);
			this->ID_Client->TabIndex = 90;
			// 
			// Prenom_Client
			// 
			this->Prenom_Client->Location = System::Drawing::Point(966, 212);
			this->Prenom_Client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Prenom_Client->Name = L"Prenom_Client";
			this->Prenom_Client->Size = System::Drawing::Size(403, 22);
			this->Prenom_Client->TabIndex = 89;
			// 
			// Nom_Client
			// 
			this->Nom_Client->Location = System::Drawing::Point(966, 142);
			this->Nom_Client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Nom_Client->Name = L"Nom_Client";
			this->Nom_Client->Size = System::Drawing::Size(403, 22);
			this->Nom_Client->TabIndex = 88;
			// 
			// mod_client
			// 
			this->mod_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->mod_client->Location = System::Drawing::Point(625, 253);
			this->mod_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mod_client->Name = L"mod_client";
			this->mod_client->Size = System::Drawing::Size(120, 69);
			this->mod_client->TabIndex = 87;
			this->mod_client->Text = L"Modification";
			this->mod_client->UseVisualStyleBackColor = true;
			// 
			// ins_client
			// 
			this->ins_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ins_client->Location = System::Drawing::Point(769, 167);
			this->ins_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ins_client->Name = L"ins_client";
			this->ins_client->Size = System::Drawing::Size(120, 69);
			this->ins_client->TabIndex = 86;
			this->ins_client->Text = L"Insertion";
			this->ins_client->UseVisualStyleBackColor = true;
			// 
			// sup_client
			// 
			this->sup_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sup_client->Location = System::Drawing::Point(769, 253);
			this->sup_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sup_client->Name = L"sup_client";
			this->sup_client->Size = System::Drawing::Size(120, 69);
			this->sup_client->TabIndex = 85;
			this->sup_client->Text = L"Suppression";
			this->sup_client->UseVisualStyleBackColor = true;
			// 
			// sel_client
			// 
			this->sel_client->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sel_client->Location = System::Drawing::Point(625, 167);
			this->sel_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sel_client->Name = L"sel_client";
			this->sel_client->Size = System::Drawing::Size(120, 69);
			this->sel_client->TabIndex = 84;
			this->sel_client->Text = L"S�lection";
			this->sel_client->UseVisualStyleBackColor = true;
			// 
			// dataBaseClient
			// 
			this->dataBaseClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBaseClient->Location = System::Drawing::Point(21, 8);
			this->dataBaseClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataBaseClient->Name = L"dataBaseClient";
			this->dataBaseClient->RowHeadersWidth = 51;
			this->dataBaseClient->RowTemplate->Height = 24;
			this->dataBaseClient->Size = System::Drawing::Size(531, 395);
			this->dataBaseClient->TabIndex = 83;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label19->Location = System::Drawing::Point(1145, 262);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(170, 17);
			this->label19->TabIndex = 125;
			this->label19->Text = L"Date de livraison pr�vue :";
			this->label19->Click += gcnew System::EventHandler(this, &MyFormCommande::label19_Click);
			// 
			// dateLivraison_Commande
			// 
			this->dateLivraison_Commande->CustomFormat = L"dd/MM/yyyy";
			this->dateLivraison_Commande->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateLivraison_Commande->Location = System::Drawing::Point(1145, 297);
			this->dateLivraison_Commande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateLivraison_Commande->Name = L"dateLivraison_Commande";
			this->dateLivraison_Commande->Size = System::Drawing::Size(134, 22);
			this->dateLivraison_Commande->TabIndex = 124;
			// 
			// MyFormCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1390, 797);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->dateLivraison_Commande);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->infoComp_facturation);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->numRue_facturation);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->CP_facturation);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->ville_facturation);
			this->Controls->Add(this->nomRue_facturation);
			this->Controls->Add(this->pays_facturation);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->infoComp_livraison);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->numRue_livraison);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->CP_livraison);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ville_livraison);
			this->Controls->Add(this->nomRue_livraison);
			this->Controls->Add(this->pays_livraison);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateCommande_Commande);
			this->Controls->Add(this->act_client);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ID_Client);
			this->Controls->Add(this->Prenom_Client);
			this->Controls->Add(this->Nom_Client);
			this->Controls->Add(this->mod_client);
			this->Controls->Add(this->ins_client);
			this->Controls->Add(this->sup_client);
			this->Controls->Add(this->sel_client);
			this->Controls->Add(this->dataBaseClient);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormCommande";
			this->Text = L"MyFormCommande";
			this->Load += gcnew System::EventHandler(this, &MyFormCommande::MyFormCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBaseClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormCommande_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}