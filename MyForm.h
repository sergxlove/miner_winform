#pragma once

namespace minerwinform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
    enum level
    {
        easy,
        middle,
        hard
    };
    enum topics
    {
        blue,
        light_green,
        gentle_purple,
        deep_purple
    };
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label101;
    private: System::Windows::Forms::Label^ label102;
    private: System::Windows::Forms::Label^ label103;
    private: System::Windows::Forms::Label^ label104;
    private: System::Windows::Forms::Label^ label105;
    private: System::Windows::Forms::Label^ label106;
    private: System::Windows::Forms::Label^ label107;
    private: System::Windows::Forms::Label^ label108;
    private: System::Windows::Forms::Label^ label109;
    private: System::Windows::Forms::Label^ label110;
    private: System::Windows::Forms::Label^ label111;
    private: System::Windows::Forms::Label^ label112;
    private: System::Windows::Forms::Label^ label113;
    private: System::Windows::Forms::Label^ label114;
    private: System::Windows::Forms::Label^ label115;
    private: System::Windows::Forms::Label^ label116;
    private: System::Windows::Forms::Label^ label117;
    private: System::Windows::Forms::Label^ label118;
    private: System::Windows::Forms::Label^ label119;
    private: System::Windows::Forms::Label^ label120;
    private: System::Windows::Forms::Label^ label121;
    private: System::Windows::Forms::Label^ label122;
    private: System::Windows::Forms::Label^ label123;
    private: System::Windows::Forms::Label^ label124;
    private: System::Windows::Forms::Label^ label125;
    private: System::Windows::Forms::Label^ label126;
    private: System::Windows::Forms::Label^ label127;
    private: System::Windows::Forms::Label^ label128;
    private: System::Windows::Forms::Label^ label129;
    private: System::Windows::Forms::Label^ label130;
    private: System::Windows::Forms::Label^ label131;
    private: System::Windows::Forms::Label^ label132;
    private: System::Windows::Forms::Label^ label133;
    private: System::Windows::Forms::Label^ label134;
    private: System::Windows::Forms::Label^ label135;
    private: System::Windows::Forms::Label^ label136;
    private: System::Windows::Forms::Label^ label137;
    private: System::Windows::Forms::Label^ label138;
    private: System::Windows::Forms::Label^ label139;
    private: System::Windows::Forms::Label^ label140;
    private: System::Windows::Forms::Label^ label141;
    private: System::Windows::Forms::Label^ label142;
    private: System::Windows::Forms::Label^ label143;
    private: System::Windows::Forms::Label^ label144;
    private: System::Windows::Forms::Label^ label145;
    private: System::Windows::Forms::Label^ label146;
    private: System::Windows::Forms::Label^ label147;
    private: System::Windows::Forms::Label^ label148;
    private: System::Windows::Forms::Label^ label149;
    private: System::Windows::Forms::Label^ label150;
    private: System::Windows::Forms::Label^ label151;
    private: System::Windows::Forms::Label^ label152;
    private: System::Windows::Forms::Label^ label153;
    private: System::Windows::Forms::Label^ label154;
    private: System::Windows::Forms::Label^ label155;
    private: System::Windows::Forms::Label^ label156;
    private: System::Windows::Forms::Label^ label157;
    private: System::Windows::Forms::Label^ label158;
    private: System::Windows::Forms::Label^ label159;
    private: System::Windows::Forms::Label^ label160;
    private: System::Windows::Forms::Label^ label161;
    private: System::Windows::Forms::Label^ label162;
    private: System::Windows::Forms::Label^ label163;
    private: System::Windows::Forms::Label^ label164;
    private: System::Windows::Forms::Label^ label165;
    private: System::Windows::Forms::Label^ label166;
    private: System::Windows::Forms::Label^ label167;
    private: System::Windows::Forms::Label^ label168;
    private: System::Windows::Forms::Label^ label169;
    private: System::Windows::Forms::Label^ label170;
    private: System::Windows::Forms::Label^ label171;
    private: System::Windows::Forms::Label^ label172;
    private: System::Windows::Forms::Label^ label173;
    private: System::Windows::Forms::Label^ label174;
    private: System::Windows::Forms::Label^ label175;
    private: System::Windows::Forms::Label^ label176;
    private: System::Windows::Forms::Label^ label177;
    private: System::Windows::Forms::Label^ label178;
    private: System::Windows::Forms::Label^ label179;
    private: System::Windows::Forms::Label^ label180;
    private: System::Windows::Forms::Label^ label181;
    private: System::Windows::Forms::Label^ label182;
    private: System::Windows::Forms::Label^ label183;
    private: System::Windows::Forms::Label^ label184;
    private: System::Windows::Forms::Label^ label185;
    private: System::Windows::Forms::Label^ label186;
    private: System::Windows::Forms::Label^ label187;
    private: System::Windows::Forms::Label^ label188;
    private: System::Windows::Forms::Label^ label189;
    private: System::Windows::Forms::Label^ label190;
    private: System::Windows::Forms::Label^ label191;
    private: System::Windows::Forms::Label^ label192;
    private: System::Windows::Forms::Label^ label193;
    private: System::Windows::Forms::Label^ label194;
    private: System::Windows::Forms::Label^ label195;
    private: System::Windows::Forms::Label^ label196;
    private: System::Windows::Forms::Label^ label197;
    private: System::Windows::Forms::Label^ label198;
    private: System::Windows::Forms::Label^ label199;
    private: System::Windows::Forms::Label^ label200;
    private: array<int, 1>^ arr_bomb;
    private: array<int, 2>^ arr_label;
    private: array<bool, 2>^ arr_poz_bomb;
    private: array<int, 2>^ arr_number;
    private: array<bool, 2>^ arr_poz_bomb_speed;
    private: bool have_bomb = false;
    private: Label^ label_field;
    private: int count = 0;
    private: int label_number = 0;
    private: int poz_x = 99;
    private: int poz_y = 99;
    private: int index = 0;
    private: Label^ label_color;
    private: bool new_game = false;
    private: int size = 0;
    private: int count_f = 0;
    private: int bomb = 0;
    private: bool lose = false;
    private: int total_count_f = 10;
    private: int open_cell = 0;
    private: Label^ label_check;
    private: int size_bomb = 10;
    private: int level_game = level::easy;
    private: int max_open_cells = 90;
    private: int seconds = 0;
    private: int minutes = 0;
    private: int topic = topics::blue;
    private: int color_r = 0;
    private: int color_g = 127;
    private: int color_b = 182;
    protected:
    protected:
    private: System::Windows::Forms::Label^ label201;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Timer^ timer1;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button7;

private: System::ComponentModel::IContainer^ components;

        private:
		    /// <summary>
		    /// Обязательная переменная конструктора.
		    /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label101 = (gcnew System::Windows::Forms::Label());
            this->label102 = (gcnew System::Windows::Forms::Label());
            this->label103 = (gcnew System::Windows::Forms::Label());
            this->label104 = (gcnew System::Windows::Forms::Label());
            this->label105 = (gcnew System::Windows::Forms::Label());
            this->label106 = (gcnew System::Windows::Forms::Label());
            this->label107 = (gcnew System::Windows::Forms::Label());
            this->label108 = (gcnew System::Windows::Forms::Label());
            this->label109 = (gcnew System::Windows::Forms::Label());
            this->label110 = (gcnew System::Windows::Forms::Label());
            this->label111 = (gcnew System::Windows::Forms::Label());
            this->label112 = (gcnew System::Windows::Forms::Label());
            this->label113 = (gcnew System::Windows::Forms::Label());
            this->label114 = (gcnew System::Windows::Forms::Label());
            this->label115 = (gcnew System::Windows::Forms::Label());
            this->label116 = (gcnew System::Windows::Forms::Label());
            this->label117 = (gcnew System::Windows::Forms::Label());
            this->label118 = (gcnew System::Windows::Forms::Label());
            this->label119 = (gcnew System::Windows::Forms::Label());
            this->label120 = (gcnew System::Windows::Forms::Label());
            this->label121 = (gcnew System::Windows::Forms::Label());
            this->label122 = (gcnew System::Windows::Forms::Label());
            this->label123 = (gcnew System::Windows::Forms::Label());
            this->label124 = (gcnew System::Windows::Forms::Label());
            this->label125 = (gcnew System::Windows::Forms::Label());
            this->label126 = (gcnew System::Windows::Forms::Label());
            this->label127 = (gcnew System::Windows::Forms::Label());
            this->label128 = (gcnew System::Windows::Forms::Label());
            this->label129 = (gcnew System::Windows::Forms::Label());
            this->label130 = (gcnew System::Windows::Forms::Label());
            this->label131 = (gcnew System::Windows::Forms::Label());
            this->label132 = (gcnew System::Windows::Forms::Label());
            this->label133 = (gcnew System::Windows::Forms::Label());
            this->label134 = (gcnew System::Windows::Forms::Label());
            this->label135 = (gcnew System::Windows::Forms::Label());
            this->label136 = (gcnew System::Windows::Forms::Label());
            this->label137 = (gcnew System::Windows::Forms::Label());
            this->label138 = (gcnew System::Windows::Forms::Label());
            this->label139 = (gcnew System::Windows::Forms::Label());
            this->label140 = (gcnew System::Windows::Forms::Label());
            this->label141 = (gcnew System::Windows::Forms::Label());
            this->label142 = (gcnew System::Windows::Forms::Label());
            this->label143 = (gcnew System::Windows::Forms::Label());
            this->label144 = (gcnew System::Windows::Forms::Label());
            this->label145 = (gcnew System::Windows::Forms::Label());
            this->label146 = (gcnew System::Windows::Forms::Label());
            this->label147 = (gcnew System::Windows::Forms::Label());
            this->label148 = (gcnew System::Windows::Forms::Label());
            this->label149 = (gcnew System::Windows::Forms::Label());
            this->label150 = (gcnew System::Windows::Forms::Label());
            this->label151 = (gcnew System::Windows::Forms::Label());
            this->label152 = (gcnew System::Windows::Forms::Label());
            this->label153 = (gcnew System::Windows::Forms::Label());
            this->label154 = (gcnew System::Windows::Forms::Label());
            this->label155 = (gcnew System::Windows::Forms::Label());
            this->label156 = (gcnew System::Windows::Forms::Label());
            this->label157 = (gcnew System::Windows::Forms::Label());
            this->label158 = (gcnew System::Windows::Forms::Label());
            this->label159 = (gcnew System::Windows::Forms::Label());
            this->label160 = (gcnew System::Windows::Forms::Label());
            this->label161 = (gcnew System::Windows::Forms::Label());
            this->label162 = (gcnew System::Windows::Forms::Label());
            this->label163 = (gcnew System::Windows::Forms::Label());
            this->label164 = (gcnew System::Windows::Forms::Label());
            this->label165 = (gcnew System::Windows::Forms::Label());
            this->label166 = (gcnew System::Windows::Forms::Label());
            this->label167 = (gcnew System::Windows::Forms::Label());
            this->label168 = (gcnew System::Windows::Forms::Label());
            this->label169 = (gcnew System::Windows::Forms::Label());
            this->label170 = (gcnew System::Windows::Forms::Label());
            this->label171 = (gcnew System::Windows::Forms::Label());
            this->label172 = (gcnew System::Windows::Forms::Label());
            this->label173 = (gcnew System::Windows::Forms::Label());
            this->label174 = (gcnew System::Windows::Forms::Label());
            this->label175 = (gcnew System::Windows::Forms::Label());
            this->label176 = (gcnew System::Windows::Forms::Label());
            this->label177 = (gcnew System::Windows::Forms::Label());
            this->label178 = (gcnew System::Windows::Forms::Label());
            this->label179 = (gcnew System::Windows::Forms::Label());
            this->label180 = (gcnew System::Windows::Forms::Label());
            this->label181 = (gcnew System::Windows::Forms::Label());
            this->label182 = (gcnew System::Windows::Forms::Label());
            this->label183 = (gcnew System::Windows::Forms::Label());
            this->label184 = (gcnew System::Windows::Forms::Label());
            this->label185 = (gcnew System::Windows::Forms::Label());
            this->label186 = (gcnew System::Windows::Forms::Label());
            this->label187 = (gcnew System::Windows::Forms::Label());
            this->label188 = (gcnew System::Windows::Forms::Label());
            this->label189 = (gcnew System::Windows::Forms::Label());
            this->label190 = (gcnew System::Windows::Forms::Label());
            this->label191 = (gcnew System::Windows::Forms::Label());
            this->label192 = (gcnew System::Windows::Forms::Label());
            this->label193 = (gcnew System::Windows::Forms::Label());
            this->label194 = (gcnew System::Windows::Forms::Label());
            this->label195 = (gcnew System::Windows::Forms::Label());
            this->label196 = (gcnew System::Windows::Forms::Label());
            this->label197 = (gcnew System::Windows::Forms::Label());
            this->label198 = (gcnew System::Windows::Forms::Label());
            this->label199 = (gcnew System::Windows::Forms::Label());
            this->label200 = (gcnew System::Windows::Forms::Label());
            this->label201 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->groupBox1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            // 
            // label101
            // 
            this->label101->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label101->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label101->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label101->Location = System::Drawing::Point(12, 9);
            this->label101->Name = L"label101";
            this->label101->Size = System::Drawing::Size(65, 65);
            this->label101->TabIndex = 0;
            this->label101->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label101->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label101->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label102
            // 
            this->label102->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label102->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label102->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label102->Location = System::Drawing::Point(12, 74);
            this->label102->Name = L"label102";
            this->label102->Size = System::Drawing::Size(65, 65);
            this->label102->TabIndex = 1;
            this->label102->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label102->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label102->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label103
            // 
            this->label103->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label103->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label103->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label103->Location = System::Drawing::Point(12, 139);
            this->label103->Name = L"label103";
            this->label103->Size = System::Drawing::Size(65, 65);
            this->label103->TabIndex = 2;
            this->label103->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label103->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label103->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label104
            // 
            this->label104->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label104->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label104->Location = System::Drawing::Point(12, 204);
            this->label104->Name = L"label104";
            this->label104->Size = System::Drawing::Size(65, 65);
            this->label104->TabIndex = 3;
            this->label104->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label104->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label104->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label105
            // 
            this->label105->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label105->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label105->Location = System::Drawing::Point(12, 269);
            this->label105->Name = L"label105";
            this->label105->Size = System::Drawing::Size(65, 65);
            this->label105->TabIndex = 4;
            this->label105->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label105->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label105->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label106
            // 
            this->label106->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label106->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label106->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label106->Location = System::Drawing::Point(12, 334);
            this->label106->Name = L"label106";
            this->label106->Size = System::Drawing::Size(65, 65);
            this->label106->TabIndex = 5;
            this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label106->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label106->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label107
            // 
            this->label107->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label107->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label107->Location = System::Drawing::Point(12, 399);
            this->label107->Name = L"label107";
            this->label107->Size = System::Drawing::Size(65, 65);
            this->label107->TabIndex = 6;
            this->label107->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label107->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label107->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label108
            // 
            this->label108->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label108->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label108->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label108->Location = System::Drawing::Point(12, 464);
            this->label108->Name = L"label108";
            this->label108->Size = System::Drawing::Size(65, 65);
            this->label108->TabIndex = 7;
            this->label108->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label108->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label108->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label109
            // 
            this->label109->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label109->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label109->Location = System::Drawing::Point(12, 529);
            this->label109->Name = L"label109";
            this->label109->Size = System::Drawing::Size(65, 65);
            this->label109->TabIndex = 8;
            this->label109->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label109->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label109->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label110
            // 
            this->label110->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label110->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label110->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label110->Location = System::Drawing::Point(12, 594);
            this->label110->Name = L"label110";
            this->label110->Size = System::Drawing::Size(65, 65);
            this->label110->TabIndex = 9;
            this->label110->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label110->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label110->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label111
            // 
            this->label111->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label111->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label111->Location = System::Drawing::Point(74, 594);
            this->label111->Name = L"label111";
            this->label111->Size = System::Drawing::Size(65, 65);
            this->label111->TabIndex = 19;
            this->label111->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label111->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label111->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label112
            // 
            this->label112->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label112->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label112->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label112->Location = System::Drawing::Point(74, 529);
            this->label112->Name = L"label112";
            this->label112->Size = System::Drawing::Size(65, 65);
            this->label112->TabIndex = 18;
            this->label112->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label112->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label112->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label113
            // 
            this->label113->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label113->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label113->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label113->Location = System::Drawing::Point(74, 464);
            this->label113->Name = L"label113";
            this->label113->Size = System::Drawing::Size(65, 65);
            this->label113->TabIndex = 17;
            this->label113->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label113->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label113->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label114
            // 
            this->label114->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label114->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label114->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label114->Location = System::Drawing::Point(74, 399);
            this->label114->Name = L"label114";
            this->label114->Size = System::Drawing::Size(65, 65);
            this->label114->TabIndex = 16;
            this->label114->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label114->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label114->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label115
            // 
            this->label115->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label115->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label115->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label115->Location = System::Drawing::Point(74, 334);
            this->label115->Name = L"label115";
            this->label115->Size = System::Drawing::Size(65, 65);
            this->label115->TabIndex = 15;
            this->label115->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label115->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label115->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label116
            // 
            this->label116->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label116->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label116->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label116->Location = System::Drawing::Point(74, 269);
            this->label116->Name = L"label116";
            this->label116->Size = System::Drawing::Size(65, 65);
            this->label116->TabIndex = 14;
            this->label116->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label116->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label116->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label117
            // 
            this->label117->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label117->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label117->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label117->Location = System::Drawing::Point(74, 204);
            this->label117->Name = L"label117";
            this->label117->Size = System::Drawing::Size(65, 65);
            this->label117->TabIndex = 13;
            this->label117->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label117->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label117->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label118
            // 
            this->label118->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label118->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label118->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label118->Location = System::Drawing::Point(74, 139);
            this->label118->Name = L"label118";
            this->label118->Size = System::Drawing::Size(65, 65);
            this->label118->TabIndex = 12;
            this->label118->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label118->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label118->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label119
            // 
            this->label119->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label119->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label119->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label119->Location = System::Drawing::Point(74, 74);
            this->label119->Name = L"label119";
            this->label119->Size = System::Drawing::Size(65, 65);
            this->label119->TabIndex = 11;
            this->label119->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label119->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label119->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label120
            // 
            this->label120->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label120->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label120->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label120->Location = System::Drawing::Point(74, 9);
            this->label120->Name = L"label120";
            this->label120->Size = System::Drawing::Size(65, 65);
            this->label120->TabIndex = 10;
            this->label120->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label120->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label120->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label121
            // 
            this->label121->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label121->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label121->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label121->Location = System::Drawing::Point(135, 594);
            this->label121->Name = L"label121";
            this->label121->Size = System::Drawing::Size(65, 65);
            this->label121->TabIndex = 29;
            this->label121->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label121->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label121->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label122
            // 
            this->label122->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label122->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label122->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label122->Location = System::Drawing::Point(135, 529);
            this->label122->Name = L"label122";
            this->label122->Size = System::Drawing::Size(65, 65);
            this->label122->TabIndex = 28;
            this->label122->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label122->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label122->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label123
            // 
            this->label123->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label123->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label123->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label123->Location = System::Drawing::Point(135, 464);
            this->label123->Name = L"label123";
            this->label123->Size = System::Drawing::Size(65, 65);
            this->label123->TabIndex = 27;
            this->label123->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label123->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label123->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label124
            // 
            this->label124->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label124->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label124->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label124->Location = System::Drawing::Point(135, 399);
            this->label124->Name = L"label124";
            this->label124->Size = System::Drawing::Size(65, 65);
            this->label124->TabIndex = 26;
            this->label124->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label124->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label124->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label125
            // 
            this->label125->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label125->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label125->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label125->Location = System::Drawing::Point(135, 334);
            this->label125->Name = L"label125";
            this->label125->Size = System::Drawing::Size(65, 65);
            this->label125->TabIndex = 25;
            this->label125->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label125->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label125->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label126
            // 
            this->label126->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label126->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label126->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label126->Location = System::Drawing::Point(135, 269);
            this->label126->Name = L"label126";
            this->label126->Size = System::Drawing::Size(65, 65);
            this->label126->TabIndex = 24;
            this->label126->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label126->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label126->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label127
            // 
            this->label127->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label127->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label127->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label127->Location = System::Drawing::Point(135, 204);
            this->label127->Name = L"label127";
            this->label127->Size = System::Drawing::Size(65, 65);
            this->label127->TabIndex = 23;
            this->label127->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label127->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label127->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label128
            // 
            this->label128->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label128->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label128->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label128->Location = System::Drawing::Point(135, 139);
            this->label128->Name = L"label128";
            this->label128->Size = System::Drawing::Size(65, 65);
            this->label128->TabIndex = 22;
            this->label128->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label128->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label128->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label129
            // 
            this->label129->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label129->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label129->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label129->Location = System::Drawing::Point(135, 74);
            this->label129->Name = L"label129";
            this->label129->Size = System::Drawing::Size(65, 65);
            this->label129->TabIndex = 21;
            this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label129->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label129->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label130
            // 
            this->label130->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label130->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label130->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label130->Location = System::Drawing::Point(135, 9);
            this->label130->Name = L"label130";
            this->label130->Size = System::Drawing::Size(65, 65);
            this->label130->TabIndex = 20;
            this->label130->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label130->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label130->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label131
            // 
            this->label131->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label131->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label131->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label131->Location = System::Drawing::Point(196, 594);
            this->label131->Name = L"label131";
            this->label131->Size = System::Drawing::Size(65, 65);
            this->label131->TabIndex = 39;
            this->label131->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label131->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label131->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label132
            // 
            this->label132->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label132->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label132->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label132->Location = System::Drawing::Point(196, 529);
            this->label132->Name = L"label132";
            this->label132->Size = System::Drawing::Size(65, 65);
            this->label132->TabIndex = 38;
            this->label132->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label132->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label132->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label133
            // 
            this->label133->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label133->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label133->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label133->Location = System::Drawing::Point(196, 464);
            this->label133->Name = L"label133";
            this->label133->Size = System::Drawing::Size(65, 65);
            this->label133->TabIndex = 37;
            this->label133->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label133->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label133->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label134
            // 
            this->label134->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label134->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label134->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label134->Location = System::Drawing::Point(196, 399);
            this->label134->Name = L"label134";
            this->label134->Size = System::Drawing::Size(65, 65);
            this->label134->TabIndex = 36;
            this->label134->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label134->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label134->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label135
            // 
            this->label135->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label135->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label135->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label135->Location = System::Drawing::Point(196, 334);
            this->label135->Name = L"label135";
            this->label135->Size = System::Drawing::Size(65, 65);
            this->label135->TabIndex = 35;
            this->label135->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label135->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label135->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label136
            // 
            this->label136->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label136->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label136->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label136->Location = System::Drawing::Point(196, 269);
            this->label136->Name = L"label136";
            this->label136->Size = System::Drawing::Size(65, 65);
            this->label136->TabIndex = 34;
            this->label136->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label136->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label136->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label137
            // 
            this->label137->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label137->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label137->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label137->Location = System::Drawing::Point(196, 204);
            this->label137->Name = L"label137";
            this->label137->Size = System::Drawing::Size(65, 65);
            this->label137->TabIndex = 33;
            this->label137->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label137->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label137->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label138
            // 
            this->label138->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label138->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label138->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label138->Location = System::Drawing::Point(196, 139);
            this->label138->Name = L"label138";
            this->label138->Size = System::Drawing::Size(65, 65);
            this->label138->TabIndex = 32;
            this->label138->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label138->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label138->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label139
            // 
            this->label139->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label139->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label139->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label139->Location = System::Drawing::Point(196, 74);
            this->label139->Name = L"label139";
            this->label139->Size = System::Drawing::Size(65, 65);
            this->label139->TabIndex = 31;
            this->label139->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label139->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label139->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label140
            // 
            this->label140->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label140->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label140->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label140->Location = System::Drawing::Point(196, 9);
            this->label140->Name = L"label140";
            this->label140->Size = System::Drawing::Size(65, 65);
            this->label140->TabIndex = 30;
            this->label140->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label140->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label140->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label141
            // 
            this->label141->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label141->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label141->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label141->Location = System::Drawing::Point(258, 594);
            this->label141->Name = L"label141";
            this->label141->Size = System::Drawing::Size(65, 65);
            this->label141->TabIndex = 49;
            this->label141->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label141->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label141->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label142
            // 
            this->label142->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label142->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label142->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label142->Location = System::Drawing::Point(258, 529);
            this->label142->Name = L"label142";
            this->label142->Size = System::Drawing::Size(65, 65);
            this->label142->TabIndex = 48;
            this->label142->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label142->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label142->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label143
            // 
            this->label143->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label143->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label143->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label143->Location = System::Drawing::Point(258, 464);
            this->label143->Name = L"label143";
            this->label143->Size = System::Drawing::Size(65, 65);
            this->label143->TabIndex = 47;
            this->label143->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label143->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label143->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label144
            // 
            this->label144->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label144->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label144->Location = System::Drawing::Point(258, 399);
            this->label144->Name = L"label144";
            this->label144->Size = System::Drawing::Size(65, 65);
            this->label144->TabIndex = 46;
            this->label144->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label144->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label144->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label145
            // 
            this->label145->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label145->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label145->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label145->Location = System::Drawing::Point(258, 334);
            this->label145->Name = L"label145";
            this->label145->Size = System::Drawing::Size(65, 65);
            this->label145->TabIndex = 45;
            this->label145->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label145->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label145->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label146
            // 
            this->label146->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label146->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label146->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label146->Location = System::Drawing::Point(258, 269);
            this->label146->Name = L"label146";
            this->label146->Size = System::Drawing::Size(65, 65);
            this->label146->TabIndex = 44;
            this->label146->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label146->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label146->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label147
            // 
            this->label147->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label147->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label147->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label147->Location = System::Drawing::Point(258, 204);
            this->label147->Name = L"label147";
            this->label147->Size = System::Drawing::Size(65, 65);
            this->label147->TabIndex = 43;
            this->label147->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label147->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label147->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label148
            // 
            this->label148->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label148->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label148->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label148->Location = System::Drawing::Point(258, 139);
            this->label148->Name = L"label148";
            this->label148->Size = System::Drawing::Size(65, 65);
            this->label148->TabIndex = 42;
            this->label148->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label148->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label148->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label149
            // 
            this->label149->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label149->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label149->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label149->Location = System::Drawing::Point(258, 74);
            this->label149->Name = L"label149";
            this->label149->Size = System::Drawing::Size(65, 65);
            this->label149->TabIndex = 41;
            this->label149->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label149->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label149->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label150
            // 
            this->label150->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label150->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label150->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label150->Location = System::Drawing::Point(258, 9);
            this->label150->Name = L"label150";
            this->label150->Size = System::Drawing::Size(65, 65);
            this->label150->TabIndex = 40;
            this->label150->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label150->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label150->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label151
            // 
            this->label151->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label151->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label151->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label151->Location = System::Drawing::Point(320, 594);
            this->label151->Name = L"label151";
            this->label151->Size = System::Drawing::Size(65, 65);
            this->label151->TabIndex = 59;
            this->label151->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label151->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label151->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label152
            // 
            this->label152->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label152->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label152->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label152->Location = System::Drawing::Point(320, 529);
            this->label152->Name = L"label152";
            this->label152->Size = System::Drawing::Size(65, 65);
            this->label152->TabIndex = 58;
            this->label152->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label152->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label152->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label153
            // 
            this->label153->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label153->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label153->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label153->Location = System::Drawing::Point(320, 464);
            this->label153->Name = L"label153";
            this->label153->Size = System::Drawing::Size(65, 65);
            this->label153->TabIndex = 57;
            this->label153->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label153->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label153->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label154
            // 
            this->label154->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label154->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label154->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label154->Location = System::Drawing::Point(320, 399);
            this->label154->Name = L"label154";
            this->label154->Size = System::Drawing::Size(65, 65);
            this->label154->TabIndex = 56;
            this->label154->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label154->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label154->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label155
            // 
            this->label155->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label155->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label155->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label155->Location = System::Drawing::Point(320, 334);
            this->label155->Name = L"label155";
            this->label155->Size = System::Drawing::Size(65, 65);
            this->label155->TabIndex = 55;
            this->label155->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label155->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label155->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label156
            // 
            this->label156->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label156->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label156->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label156->Location = System::Drawing::Point(320, 269);
            this->label156->Name = L"label156";
            this->label156->Size = System::Drawing::Size(65, 65);
            this->label156->TabIndex = 54;
            this->label156->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label156->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label156->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label157
            // 
            this->label157->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label157->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label157->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label157->Location = System::Drawing::Point(320, 204);
            this->label157->Name = L"label157";
            this->label157->Size = System::Drawing::Size(65, 65);
            this->label157->TabIndex = 53;
            this->label157->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label157->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label157->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label158
            // 
            this->label158->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label158->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label158->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label158->Location = System::Drawing::Point(320, 139);
            this->label158->Name = L"label158";
            this->label158->Size = System::Drawing::Size(65, 65);
            this->label158->TabIndex = 52;
            this->label158->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label158->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label158->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label159
            // 
            this->label159->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label159->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label159->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label159->Location = System::Drawing::Point(320, 74);
            this->label159->Name = L"label159";
            this->label159->Size = System::Drawing::Size(65, 65);
            this->label159->TabIndex = 51;
            this->label159->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label159->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label159->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label160
            // 
            this->label160->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label160->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label160->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label160->Location = System::Drawing::Point(320, 9);
            this->label160->Name = L"label160";
            this->label160->Size = System::Drawing::Size(65, 65);
            this->label160->TabIndex = 50;
            this->label160->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label160->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label160->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label161
            // 
            this->label161->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label161->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label161->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label161->Location = System::Drawing::Point(382, 594);
            this->label161->Name = L"label161";
            this->label161->Size = System::Drawing::Size(65, 65);
            this->label161->TabIndex = 69;
            this->label161->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label161->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label161->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label162
            // 
            this->label162->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label162->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label162->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label162->Location = System::Drawing::Point(382, 529);
            this->label162->Name = L"label162";
            this->label162->Size = System::Drawing::Size(65, 65);
            this->label162->TabIndex = 68;
            this->label162->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label162->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label162->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label163
            // 
            this->label163->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label163->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label163->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label163->Location = System::Drawing::Point(382, 464);
            this->label163->Name = L"label163";
            this->label163->Size = System::Drawing::Size(65, 65);
            this->label163->TabIndex = 67;
            this->label163->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label163->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label163->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label164
            // 
            this->label164->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label164->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label164->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label164->Location = System::Drawing::Point(382, 399);
            this->label164->Name = L"label164";
            this->label164->Size = System::Drawing::Size(65, 65);
            this->label164->TabIndex = 66;
            this->label164->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label164->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label164->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label165
            // 
            this->label165->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label165->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label165->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label165->Location = System::Drawing::Point(382, 334);
            this->label165->Name = L"label165";
            this->label165->Size = System::Drawing::Size(65, 65);
            this->label165->TabIndex = 65;
            this->label165->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label165->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label165->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label166
            // 
            this->label166->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label166->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label166->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label166->Location = System::Drawing::Point(382, 269);
            this->label166->Name = L"label166";
            this->label166->Size = System::Drawing::Size(65, 65);
            this->label166->TabIndex = 64;
            this->label166->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label166->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label166->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label167
            // 
            this->label167->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label167->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label167->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label167->Location = System::Drawing::Point(382, 204);
            this->label167->Name = L"label167";
            this->label167->Size = System::Drawing::Size(65, 65);
            this->label167->TabIndex = 63;
            this->label167->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label167->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label167->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label168
            // 
            this->label168->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label168->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label168->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label168->Location = System::Drawing::Point(382, 139);
            this->label168->Name = L"label168";
            this->label168->Size = System::Drawing::Size(65, 65);
            this->label168->TabIndex = 62;
            this->label168->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label168->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label168->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label169
            // 
            this->label169->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label169->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label169->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label169->Location = System::Drawing::Point(382, 74);
            this->label169->Name = L"label169";
            this->label169->Size = System::Drawing::Size(65, 65);
            this->label169->TabIndex = 61;
            this->label169->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label169->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label169->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label170
            // 
            this->label170->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label170->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label170->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label170->Location = System::Drawing::Point(382, 9);
            this->label170->Name = L"label170";
            this->label170->Size = System::Drawing::Size(65, 65);
            this->label170->TabIndex = 60;
            this->label170->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label170->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label170->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label171
            // 
            this->label171->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label171->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label171->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label171->Location = System::Drawing::Point(444, 594);
            this->label171->Name = L"label171";
            this->label171->Size = System::Drawing::Size(65, 65);
            this->label171->TabIndex = 79;
            this->label171->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label171->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label171->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label172
            // 
            this->label172->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label172->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label172->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label172->Location = System::Drawing::Point(444, 529);
            this->label172->Name = L"label172";
            this->label172->Size = System::Drawing::Size(65, 65);
            this->label172->TabIndex = 78;
            this->label172->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label172->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label172->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label173
            // 
            this->label173->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label173->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label173->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label173->Location = System::Drawing::Point(444, 464);
            this->label173->Name = L"label173";
            this->label173->Size = System::Drawing::Size(65, 65);
            this->label173->TabIndex = 77;
            this->label173->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label173->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label173->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label174
            // 
            this->label174->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label174->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label174->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label174->Location = System::Drawing::Point(444, 399);
            this->label174->Name = L"label174";
            this->label174->Size = System::Drawing::Size(65, 65);
            this->label174->TabIndex = 76;
            this->label174->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label174->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label174->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label175
            // 
            this->label175->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label175->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label175->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label175->Location = System::Drawing::Point(444, 334);
            this->label175->Name = L"label175";
            this->label175->Size = System::Drawing::Size(65, 65);
            this->label175->TabIndex = 75;
            this->label175->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label175->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label175->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label176
            // 
            this->label176->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label176->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label176->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label176->Location = System::Drawing::Point(444, 269);
            this->label176->Name = L"label176";
            this->label176->Size = System::Drawing::Size(65, 65);
            this->label176->TabIndex = 74;
            this->label176->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label176->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label176->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label177
            // 
            this->label177->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label177->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label177->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label177->Location = System::Drawing::Point(444, 204);
            this->label177->Name = L"label177";
            this->label177->Size = System::Drawing::Size(65, 65);
            this->label177->TabIndex = 73;
            this->label177->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label177->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label177->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label178
            // 
            this->label178->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label178->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label178->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label178->Location = System::Drawing::Point(444, 139);
            this->label178->Name = L"label178";
            this->label178->Size = System::Drawing::Size(65, 65);
            this->label178->TabIndex = 72;
            this->label178->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label178->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label178->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label179
            // 
            this->label179->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label179->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label179->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label179->Location = System::Drawing::Point(444, 74);
            this->label179->Name = L"label179";
            this->label179->Size = System::Drawing::Size(65, 65);
            this->label179->TabIndex = 71;
            this->label179->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label179->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label179->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label180
            // 
            this->label180->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label180->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label180->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label180->Location = System::Drawing::Point(444, 9);
            this->label180->Name = L"label180";
            this->label180->Size = System::Drawing::Size(65, 65);
            this->label180->TabIndex = 70;
            this->label180->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label180->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label180->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label181
            // 
            this->label181->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label181->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label181->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label181->Location = System::Drawing::Point(506, 594);
            this->label181->Name = L"label181";
            this->label181->Size = System::Drawing::Size(65, 65);
            this->label181->TabIndex = 89;
            this->label181->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label181->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label181->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label182
            // 
            this->label182->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label182->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label182->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label182->Location = System::Drawing::Point(506, 529);
            this->label182->Name = L"label182";
            this->label182->Size = System::Drawing::Size(65, 65);
            this->label182->TabIndex = 88;
            this->label182->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label182->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label182->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label183
            // 
            this->label183->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label183->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label183->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label183->Location = System::Drawing::Point(506, 464);
            this->label183->Name = L"label183";
            this->label183->Size = System::Drawing::Size(65, 65);
            this->label183->TabIndex = 87;
            this->label183->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label183->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label183->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label184
            // 
            this->label184->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label184->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label184->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label184->Location = System::Drawing::Point(506, 399);
            this->label184->Name = L"label184";
            this->label184->Size = System::Drawing::Size(65, 65);
            this->label184->TabIndex = 86;
            this->label184->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label184->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label184->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label185
            // 
            this->label185->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label185->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label185->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label185->Location = System::Drawing::Point(506, 334);
            this->label185->Name = L"label185";
            this->label185->Size = System::Drawing::Size(65, 65);
            this->label185->TabIndex = 85;
            this->label185->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label185->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label185->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label186
            // 
            this->label186->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label186->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label186->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label186->Location = System::Drawing::Point(506, 269);
            this->label186->Name = L"label186";
            this->label186->Size = System::Drawing::Size(65, 65);
            this->label186->TabIndex = 84;
            this->label186->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label186->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label186->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label187
            // 
            this->label187->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label187->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label187->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label187->Location = System::Drawing::Point(506, 204);
            this->label187->Name = L"label187";
            this->label187->Size = System::Drawing::Size(65, 65);
            this->label187->TabIndex = 83;
            this->label187->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label187->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label187->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label188
            // 
            this->label188->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label188->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label188->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label188->Location = System::Drawing::Point(506, 139);
            this->label188->Name = L"label188";
            this->label188->Size = System::Drawing::Size(65, 65);
            this->label188->TabIndex = 82;
            this->label188->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label188->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label188->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label189
            // 
            this->label189->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label189->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label189->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label189->Location = System::Drawing::Point(506, 74);
            this->label189->Name = L"label189";
            this->label189->Size = System::Drawing::Size(65, 65);
            this->label189->TabIndex = 81;
            this->label189->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label189->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label189->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label190
            // 
            this->label190->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label190->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label190->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label190->Location = System::Drawing::Point(506, 9);
            this->label190->Name = L"label190";
            this->label190->Size = System::Drawing::Size(65, 65);
            this->label190->TabIndex = 80;
            this->label190->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label190->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label190->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label191
            // 
            this->label191->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label191->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label191->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label191->Location = System::Drawing::Point(567, 594);
            this->label191->Name = L"label191";
            this->label191->Size = System::Drawing::Size(65, 65);
            this->label191->TabIndex = 99;
            this->label191->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label191->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label191->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label192
            // 
            this->label192->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label192->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label192->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label192->Location = System::Drawing::Point(567, 529);
            this->label192->Name = L"label192";
            this->label192->Size = System::Drawing::Size(65, 65);
            this->label192->TabIndex = 98;
            this->label192->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label192->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label192->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label193
            // 
            this->label193->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label193->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label193->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label193->Location = System::Drawing::Point(567, 464);
            this->label193->Name = L"label193";
            this->label193->Size = System::Drawing::Size(65, 65);
            this->label193->TabIndex = 97;
            this->label193->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label193->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label193->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label194
            // 
            this->label194->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label194->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label194->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label194->Location = System::Drawing::Point(567, 399);
            this->label194->Name = L"label194";
            this->label194->Size = System::Drawing::Size(65, 65);
            this->label194->TabIndex = 96;
            this->label194->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label194->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label194->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label195
            // 
            this->label195->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label195->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label195->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label195->Location = System::Drawing::Point(567, 334);
            this->label195->Name = L"label195";
            this->label195->Size = System::Drawing::Size(65, 65);
            this->label195->TabIndex = 95;
            this->label195->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label195->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label195->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label196
            // 
            this->label196->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label196->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label196->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label196->Location = System::Drawing::Point(567, 269);
            this->label196->Name = L"label196";
            this->label196->Size = System::Drawing::Size(65, 65);
            this->label196->TabIndex = 94;
            this->label196->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label196->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label196->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label197
            // 
            this->label197->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label197->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label197->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label197->Location = System::Drawing::Point(567, 204);
            this->label197->Name = L"label197";
            this->label197->Size = System::Drawing::Size(65, 65);
            this->label197->TabIndex = 93;
            this->label197->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label197->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label197->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label198
            // 
            this->label198->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label198->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label198->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label198->Location = System::Drawing::Point(567, 139);
            this->label198->Name = L"label198";
            this->label198->Size = System::Drawing::Size(65, 65);
            this->label198->TabIndex = 92;
            this->label198->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label198->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label198->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label199
            // 
            this->label199->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label199->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label199->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label199->Location = System::Drawing::Point(567, 74);
            this->label199->Name = L"label199";
            this->label199->Size = System::Drawing::Size(65, 65);
            this->label199->TabIndex = 91;
            this->label199->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label199->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label199->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label200
            // 
            this->label200->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->label200->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label200->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label200->Location = System::Drawing::Point(567, 9);
            this->label200->Name = L"label200";
            this->label200->Size = System::Drawing::Size(65, 65);
            this->label200->TabIndex = 90;
            this->label200->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label200->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
            this->label200->DoubleClick += gcnew System::EventHandler(this, &MyForm::Double_click);
            // 
            // label201
            // 
            this->label201->AutoSize = true;
            this->label201->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label201->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label201->Location = System::Drawing::Point(691, -3);
            this->label201->Name = L"label201";
            this->label201->Size = System::Drawing::Size(238, 91);
            this->label201->TabIndex = 100;
            this->label201->Text = L"miner";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->ForeColor = System::Drawing::SystemColors::Window;
            this->button1->Location = System::Drawing::Point(660, 145);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(297, 83);
            this->button1->TabIndex = 101;
            this->button1->Text = L"открыть";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->ForeColor = System::Drawing::SystemColors::Window;
            this->button2->Location = System::Drawing::Point(660, 234);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(297, 83);
            this->button2->TabIndex = 102;
            this->button2->Text = L"флажок";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->ForeColor = System::Drawing::SystemColors::Window;
            this->label1->Location = System::Drawing::Point(704, 320);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(137, 16);
            this->label1->TabIndex = 103;
            this->label1->Text = L"Осталось флажков :";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->ForeColor = System::Drawing::SystemColors::Window;
            this->label2->Location = System::Drawing::Point(847, 320);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(14, 16);
            this->label2->TabIndex = 104;
            this->label2->Text = L"0";
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->pictureBox3);
            this->groupBox1->Controls->Add(this->pictureBox2);
            this->groupBox1->Controls->Add(this->pictureBox1);
            this->groupBox1->Controls->Add(this->button5);
            this->groupBox1->Controls->Add(this->button4);
            this->groupBox1->Controls->Add(this->button3);
            this->groupBox1->ForeColor = System::Drawing::SystemColors::Window;
            this->groupBox1->Location = System::Drawing::Point(660, 359);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(297, 225);
            this->groupBox1->TabIndex = 105;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Начать новую игру :";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(234, 154);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(57, 57);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 111;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Visible = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(234, 89);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(57, 57);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 110;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Visible = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(234, 24);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(57, 57);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 109;
            this->pictureBox1->TabStop = false;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button5->ForeColor = System::Drawing::SystemColors::Window;
            this->button5->Location = System::Drawing::Point(6, 154);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(213, 54);
            this->button5->TabIndex = 108;
            this->button5->Text = L"Сложный";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button4->ForeColor = System::Drawing::SystemColors::Window;
            this->button4->Location = System::Drawing::Point(6, 89);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(213, 54);
            this->button4->TabIndex = 107;
            this->button4->Text = L"Средний";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(182)));
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button3->ForeColor = System::Drawing::SystemColors::Window;
            this->button3->Location = System::Drawing::Point(6, 24);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(213, 54);
            this->button3->TabIndex = 106;
            this->button3->Text = L"Лёгкий";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->label3->Location = System::Drawing::Point(12, 662);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(131, 16);
            this->label3->TabIndex = 106;
            this->label3->Text = L"developer sergxlove";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label4->Location = System::Drawing::Point(698, 88);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(75, 54);
            this->label4->TabIndex = 107;
            this->label4->Text = L"00";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label5->Location = System::Drawing::Point(854, 88);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(75, 54);
            this->label5->TabIndex = 108;
            this->label5->Text = L"00";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label6->Location = System::Drawing::Point(790, 88);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(36, 54);
            this->label6->TabIndex = 109;
            this->label6->Text = L":";
            // 
            // timer1
            // 
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->button9);
            this->groupBox2->Controls->Add(this->button8);
            this->groupBox2->Controls->Add(this->button7);
            this->groupBox2->Controls->Add(this->button6);
            this->groupBox2->ForeColor = System::Drawing::SystemColors::Window;
            this->groupBox2->Location = System::Drawing::Point(660, 590);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(297, 85);
            this->groupBox2->TabIndex = 110;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Выберите тему :";
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(237)));
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Location = System::Drawing::Point(219, 21);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(50, 48);
            this->button9->TabIndex = 3;
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Location = System::Drawing::Point(151, 21);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(50, 48);
            this->button8->TabIndex = 2;
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
                static_cast<System::Int32>(static_cast<System::Byte>(108)));
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Location = System::Drawing::Point(83, 21);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(50, 48);
            this->button7->TabIndex = 1;
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Location = System::Drawing::Point(16, 21);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(50, 48);
            this->button6->TabIndex = 0;
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->ClientSize = System::Drawing::Size(989, 687);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label201);
            this->Controls->Add(this->label191);
            this->Controls->Add(this->label192);
            this->Controls->Add(this->label193);
            this->Controls->Add(this->label194);
            this->Controls->Add(this->label195);
            this->Controls->Add(this->label196);
            this->Controls->Add(this->label197);
            this->Controls->Add(this->label198);
            this->Controls->Add(this->label199);
            this->Controls->Add(this->label200);
            this->Controls->Add(this->label181);
            this->Controls->Add(this->label182);
            this->Controls->Add(this->label183);
            this->Controls->Add(this->label184);
            this->Controls->Add(this->label185);
            this->Controls->Add(this->label186);
            this->Controls->Add(this->label187);
            this->Controls->Add(this->label188);
            this->Controls->Add(this->label189);
            this->Controls->Add(this->label190);
            this->Controls->Add(this->label171);
            this->Controls->Add(this->label172);
            this->Controls->Add(this->label173);
            this->Controls->Add(this->label174);
            this->Controls->Add(this->label175);
            this->Controls->Add(this->label176);
            this->Controls->Add(this->label177);
            this->Controls->Add(this->label178);
            this->Controls->Add(this->label179);
            this->Controls->Add(this->label180);
            this->Controls->Add(this->label161);
            this->Controls->Add(this->label162);
            this->Controls->Add(this->label163);
            this->Controls->Add(this->label164);
            this->Controls->Add(this->label165);
            this->Controls->Add(this->label166);
            this->Controls->Add(this->label167);
            this->Controls->Add(this->label168);
            this->Controls->Add(this->label169);
            this->Controls->Add(this->label170);
            this->Controls->Add(this->label151);
            this->Controls->Add(this->label152);
            this->Controls->Add(this->label153);
            this->Controls->Add(this->label154);
            this->Controls->Add(this->label155);
            this->Controls->Add(this->label156);
            this->Controls->Add(this->label157);
            this->Controls->Add(this->label158);
            this->Controls->Add(this->label159);
            this->Controls->Add(this->label160);
            this->Controls->Add(this->label141);
            this->Controls->Add(this->label142);
            this->Controls->Add(this->label143);
            this->Controls->Add(this->label144);
            this->Controls->Add(this->label145);
            this->Controls->Add(this->label146);
            this->Controls->Add(this->label147);
            this->Controls->Add(this->label148);
            this->Controls->Add(this->label149);
            this->Controls->Add(this->label150);
            this->Controls->Add(this->label131);
            this->Controls->Add(this->label132);
            this->Controls->Add(this->label133);
            this->Controls->Add(this->label134);
            this->Controls->Add(this->label135);
            this->Controls->Add(this->label136);
            this->Controls->Add(this->label137);
            this->Controls->Add(this->label138);
            this->Controls->Add(this->label139);
            this->Controls->Add(this->label140);
            this->Controls->Add(this->label121);
            this->Controls->Add(this->label122);
            this->Controls->Add(this->label123);
            this->Controls->Add(this->label124);
            this->Controls->Add(this->label125);
            this->Controls->Add(this->label126);
            this->Controls->Add(this->label127);
            this->Controls->Add(this->label128);
            this->Controls->Add(this->label129);
            this->Controls->Add(this->label130);
            this->Controls->Add(this->label111);
            this->Controls->Add(this->label112);
            this->Controls->Add(this->label113);
            this->Controls->Add(this->label114);
            this->Controls->Add(this->label115);
            this->Controls->Add(this->label116);
            this->Controls->Add(this->label117);
            this->Controls->Add(this->label118);
            this->Controls->Add(this->label119);
            this->Controls->Add(this->label120);
            this->Controls->Add(this->label110);
            this->Controls->Add(this->label109);
            this->Controls->Add(this->label108);
            this->Controls->Add(this->label107);
            this->Controls->Add(this->label106);
            this->Controls->Add(this->label105);
            this->Controls->Add(this->label104);
            this->Controls->Add(this->label103);
            this->Controls->Add(this->label102);
            this->Controls->Add(this->label101);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->Text = L"Miner";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->groupBox1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->groupBox2->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        Random^ random = gcnew Random();
        if (new_game == false)
        {
            size = 10;
            size_bomb = 10;
            bomb = 0;
            arr_poz_bomb = gcnew array<bool, 2>(size, size);
            arr_number = gcnew array<int, 2>(size, size);
            arr_poz_bomb_speed = gcnew array<bool, 2>(size + 2, size + 2);
            arr_label = gcnew array<int, 2>(size, size) 
            {
                { 101,120,130,140,150,160,170,180,190,200 },
                { 102,119,129,139,149,159,169,179,189,199 },
                { 103,118,128,138,148,158,168,178,188,198 },
                { 104,117,127,137,147,157,167,177,187,197 },
                { 105,116,126,136,146,156,166,176,186,196 },
                { 106,115,125,135,145,155,165,175,185,195 },
                { 107,114,124,134,144,154,164,174,184,194 },
                { 108,113,123,133,143,153,163,173,183,193 },
                { 109,112,122,132,142,152,162,172,182,192 },
                { 110,111,121,131,141,151,161,171,181,191 },
            };
        }
        if (level_game == level::easy)
        {
            size_bomb = 10;
        }
        if (level_game == level::middle)
        {
            size_bomb = 15;
        }
        if (level_game == level::hard)
        {
            size_bomb = 20;
        }
        arr_bomb = gcnew array<int, 1>(size_bomb);
        for (int i = 0;i < size_bomb;i++)
        {
            arr_bomb[i] = 0;
        }
        total_count_f = size_bomb;
        max_open_cells = 100 - size_bomb;
        label2->Text = Convert::ToString(total_count_f);
        for (int i = 0;i < size;i++)
        {
            for (int j = 0;j < size;j++)
            {
                arr_poz_bomb[i, j] = false;
            }
        }
        bool check_bomb = false;
        for (int i = 0;i < size_bomb;)
        {
            check_bomb = false;
            bomb = random->Next(101, 201);
            for (int j = 0;j < size_bomb;j++)
            {
                if (arr_bomb[j] == bomb)
                {
                    check_bomb = true;
                }
            }
            if (check_bomb == false)
            {
                arr_bomb[i] = bomb;
                i++;
            }
        }
        for (int i = 0;i < size_bomb;i++)
        {
            have_bomb = false;
            for (int j = 0;j < size;j++)
            {
                for (int k = 0;k < size;k++)
                {
                    if (arr_bomb[i] == arr_label[j, k])
                    {
                        have_bomb = true;
                        arr_poz_bomb[j, k] = true;
                        break;
                    }
                }
                if (have_bomb == true)
                {
                    break;
                }
            }
        }
        for (int i = 0;i < size + 2;i++)
        {
            for (int j = 0;j < size + 2;j++)
            {
                arr_poz_bomb_speed[i, j] = false;
            }
        }
        for (int i = 0;i < size;i++)
        {
            for (int j = 0;j < size;j++)
            {
                if (arr_poz_bomb[i, j] == true)
                {
                    arr_poz_bomb_speed[i + 1, j + 1] = true;
                }
                else
                {
                    arr_poz_bomb_speed[i + 1, j + 1] = false;
                }
            }
        }
        for (int i = 1;i < size + 1;i++)
        {
            for (int j = 1;j < size + 1;j++)
            {
                count = 0;
                if (arr_poz_bomb_speed[i, j] == true)
                {
                    arr_number[i - 1, j - 1] = 9;
                }
                else
                {
                    if (arr_poz_bomb_speed[i + 1, j - 1])
                    {
                        count++;
                    }
                    if (arr_poz_bomb_speed[i + 1, j])
                    {
                        count++;
                    }
                    if (arr_poz_bomb_speed[i + 1, j + 1])
                    {
                        count++;
                    }
                    if (arr_poz_bomb_speed[i, j - 1])
                    {
                        count++;
                    }
                    if (arr_poz_bomb_speed[i, j + 1])
                    {
                        count++;
                    }
                    if (arr_poz_bomb_speed[i - 1, j - 1])
                    {
                        count++;
                    }
                    if (arr_poz_bomb_speed[i - 1, j])
                    {
                        count++;
                    }
                    if (arr_poz_bomb_speed[i - 1, j + 1])
                    {
                        count++;
                    }
                    arr_number[i - 1, j - 1] = count;
                }
            }
        }
        if (topic == topics::blue)
        {
            color_r = 0;
            color_g = 127;
            color_b = 182;
        }
        if (topic == topics::light_green)
        {
            color_r = 45;
            color_g = 106;
            color_b = 79;
        }
        if (topic == topics::gentle_purple)
        {
            color_r = 159;
            color_g = 132;
            color_b = 192;
        }
        if (topic == topics::deep_purple)
        {
            color_r = 60;
            color_g = 9;
            color_b = 108;
        }
        for (int i = 0;i < 10;i++)
        {
            for (int j = 0;j < 10;j++)
            {
                index = arr_label[i, j];
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + index, true)[0]);
                label_color->BackColor = Color::FromArgb(color_r, color_g, color_b);
                label_color->Text = "";
            }
        }
        new_game = true;
        timer1->Start();
    }
    private: System::Void Click_field(System::Object^ sender, System::EventArgs^ e)
    {
        label_field = safe_cast<Label^>(sender);
        label_number = (Convert::ToInt32(label_field->Name[5])-48) * 100 + (Convert::ToInt32(label_field->Name[6])-48) * 10 + (Convert::ToInt32(label_field->Name[7])-48);
        poz_x = 99;
        poz_y = 99;
        for (int i = 0;i < 10;i++)
        {
            for (int j = 0;j < 10;j++)
            {
                index = arr_label[i, j];
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + index, true)[0]);
                if (label_color->BackColor != Color::White)
                {
                    label_color->BackColor = Color::FromArgb(color_r, color_g, color_b);
                }
            }
        }
        for (int i = 0;i < 10;i++)
        {
            for (int j = 0;j < 10;j++)
            {
                if (arr_label[i, j] == label_number)
                {
                    poz_x = i;
                    poz_y = j;
                    break;
                }
            }
            if (poz_x != 99 && poz_y != 99)
            {
                break;
            }
        }
        if (label_field->BackColor != Color::White)
        {
            if (topic == topics::blue)
            {
                label_field->BackColor = Color::FromArgb(73, 153, 228);
            }
            if (topic == topics::light_green)
            {
                label_field->BackColor = Color::FromArgb(183, 228, 199);
            }
            if (topic == topics::gentle_purple)
            {
                label_field->BackColor = Color::FromArgb(184, 184, 255);
            }
            if (topic == topics::deep_purple)
            {
                label_field->BackColor = Color::FromArgb(142, 125, 190);
            }
        }
    }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (label_field->Text == "f")
    {
        MessageBox::Show(this, "эта ячейка отмечена флажком", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else
    {
        label_field->BackColor = Color::White;
        if (arr_number[poz_x, poz_y] == 9)
        {
            label_field->Text = "*";
            label_field->BackColor = Color::Red;
            MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            timer1->Stop();
            minutes = 0;
            seconds = 0;
            MyForm_Load(sender, e);
        }
        else
        {
            label_field->Text = Convert::ToString(arr_number[poz_x, poz_y]);
            if (arr_number[poz_x, poz_y] == 0)
            {
                label_field->ForeColor = Color::FromArgb(0, 170, 246);
            }
            if (arr_number[poz_x, poz_y] == 1)
            {
                label_field->ForeColor = Color::DarkBlue;
            }
            if (arr_number[poz_x, poz_y] == 2)
            {
                label_field->ForeColor = Color::Green;
            }
            if (arr_number[poz_x, poz_y] >= 3 && arr_number[poz_x, poz_y] <= 8)
            {
                label_field->ForeColor = Color::Red;
            }
            if (check_open_cell() == max_open_cells)
            {
                MessageBox::Show(this, "Вы выйграли", "Victory", MessageBoxButtons::OK, MessageBoxIcon::Information);
                timer1->Stop();
                minutes = 0;
                seconds = 0;
                MyForm_Load(sender, e);
            }
        }
    }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (label_field->Text != "f")
    {
        label_field->Text = "f";
        label_field->ForeColor = Color::Black;
        total_count_f--;
    }
    else
    {
        label_field->Text = "";
        total_count_f++;
    }
    if (total_count_f < 0)
    {
        label2->Text = "Лимит превышен";
    }
    else
    {
        label2->Text = Convert::ToString(total_count_f);
    }
}
private: System::Void Double_click(System::Object^ sender, System::EventArgs^ e) {
    label_field = safe_cast<Label^>(sender);
    label_number = (Convert::ToInt32(label_field->Name[5]) - 48) * 100 + (Convert::ToInt32(label_field->Name[6]) - 48) * 10 + (Convert::ToInt32(label_field->Name[7]) - 48);
    label_color = dynamic_cast<Label^>(this->Controls->Find("label" + label_number, true)[0]);
    if (label_color->BackColor == Color::White)
    {
        count_f = 0;
        count = Convert::ToInt32(label_field->Text);
        poz_x = 99;
        poz_y = 99;
        for (int i = 0;i < 10;i++)
        {
            for (int j = 0;j < 10;j++)
            {
                if (arr_label[i, j] == label_number)
                {
                    poz_x = i;
                    poz_y = j;
                    break;
                }
            }
            if (poz_x != 99 && poz_y != 99)
            {
                break;
            }
        }
        try
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x-1,poz_y+1], true)[0]);
            if (label_color->Text == "f")
            {
                count_f++;
            }
        }
        catch (...) {}
        try
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x, poz_y + 1], true)[0]);
            if (label_color->Text == "f")
            {
                count_f++;
            }
        }
        catch (...) {}
        try
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x + 1, poz_y + 1], true)[0]);
            if (label_color->Text == "f")
            {
                count_f++;
            }
        }
        catch (...) {}
        try
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x - 1, poz_y], true)[0]);
            if (label_color->Text == "f")
            {
                count_f++;
            }
        }
        catch (...) {}
        try
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x + 1, poz_y], true)[0]);
            if (label_color->Text == "f")
            {
                count_f++;
            }
        }
        catch (...) {}
        try
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x - 1, poz_y - 1], true)[0]);
            if (label_color->Text == "f")
            {
                count_f++;
            }
        }
        catch (...) {}
        try
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x, poz_y - 1], true)[0]);
            if (label_color->Text == "f")
            {
                count_f++;
            }
        }
        catch (...) {}
        try
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x + 1, poz_y - 1], true)[0]);
            if (label_color->Text == "f")
            {
                count_f++;
            }
        }
        catch (...) {}
        if (count == count_f)
        {
            lose = false;
            try
            {
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x - 1, poz_y + 1], true)[0]);
                if (lose!=true&&label_color->Text != "f" && label_color->BackColor != Color::White)
                {
                    label_color->Text = Convert::ToString(arr_number[poz_x - 1, poz_y + 1]);
                    if (label_color->Text == "9")
                    {
                        label_color->Text = "*";
                        label_color->BackColor = Color::Red;
                        lose = true;
                        MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        timer1->Stop();
                        minutes = 0;
                        seconds = 0;
                        MyForm_Load(sender, e);
                    }
                    else
                    {
                        label_color->BackColor = Color::White;
                        if (label_color->Text == "0")
                        {
                            label_field->ForeColor = Color::FromArgb(0, 170, 246);
                        }
                        if (label_color->Text == "1")
                        {
                            label_field->ForeColor = Color::DarkBlue;
                        }
                        if (label_color->Text == "2")
                        {
                            label_field->ForeColor = Color::Green;
                        }
                        if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
                        {
                            label_color->ForeColor = Color::Red;
                        }
                    }
                }
            }
            catch (...) {}
            try
            {
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x, poz_y + 1], true)[0]);
                if (lose != true && label_color->Text != "f" && label_color->BackColor != Color::White)
                {
                    label_color->Text = Convert::ToString(arr_number[poz_x, poz_y + 1]);
                    if (label_color->Text == "9")
                    {
                        label_color->Text = "*";
                        label_color->BackColor = Color::Red;
                        lose = true;
                        MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        timer1->Stop();
                        minutes = 0;
                        seconds = 0;
                        MyForm_Load(sender, e);
                    }
                    else
                    {
                        label_color->BackColor = Color::White;
                        if (label_color->Text == "0")
                        {
                            label_field->ForeColor = Color::FromArgb(0, 170, 246);
                        }
                        if (label_color->Text == "1")
                        {
                            label_field->ForeColor = Color::DarkBlue;
                        }
                        if (label_color->Text == "2")
                        {
                            label_field->ForeColor = Color::Green;
                        }
                        if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
                        {
                            label_color->ForeColor = Color::Red;
                        }
                    }
                }
            }
            catch (...) {}
            try
            {
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x + 1, poz_y + 1], true)[0]);
                if (lose != true && label_color->Text != "f" && label_color->BackColor != Color::White)
                {
                    label_color->Text = Convert::ToString(arr_number[poz_x + 1, poz_y + 1]);
                    if (label_color->Text == "9")
                    {
                        label_color->Text = "*";
                        label_color->BackColor = Color::Red;
                        lose = true;
                        MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        timer1->Stop();
                        minutes = 0;
                        seconds = 0;
                        MyForm_Load(sender, e);
                    }
                    else
                    {
                        label_color->BackColor = Color::White;
                        if (label_color->Text == "0")
                        {
                            label_field->ForeColor = Color::FromArgb(0, 170, 246);
                        }
                        if (label_color->Text == "1")
                        {
                            label_field->ForeColor = Color::DarkBlue;
                        }
                        if (label_color->Text == "2")
                        {
                            label_field->ForeColor = Color::Green;
                        }
                        if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
                        {
                            label_color->ForeColor = Color::Red;
                        }
                    }
                }
            }
            catch (...) {}
            try
            {
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x - 1, poz_y], true)[0]);
                if (lose != true && label_color->Text != "f" && label_color->BackColor != Color::White)
                {
                    label_color->Text = Convert::ToString(arr_number[poz_x - 1, poz_y]);
                    if (label_color->Text == "9")
                    {
                        label_color->Text = "*";
                        label_color->BackColor = Color::Red;
                        lose = true;
                        MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        timer1->Stop();
                        minutes = 0;
                        seconds = 0;
                        MyForm_Load(sender, e);
                    }
                    else
                    {
                        label_color->BackColor = Color::White;
                        if (label_color->Text == "0")
                        {
                            label_field->ForeColor = Color::FromArgb(0, 170, 246);
                        }
                        if (label_color->Text == "1")
                        {
                            label_field->ForeColor = Color::DarkBlue;
                        }
                        if (label_color->Text == "2")
                        {
                            label_field->ForeColor = Color::Green;
                        }
                        if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
                        {
                            label_color->ForeColor = Color::Red;
                        }
                    }
                }
            }
            catch (...) {}
            try
            {
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x + 1, poz_y], true)[0]);
                if (lose != true && label_color->Text != "f" && label_color->BackColor != Color::White)
                {
                    label_color->Text = Convert::ToString(arr_number[poz_x + 1, poz_y]);
                    if (label_color->Text == "9")
                    {
                        label_color->Text = "*";
                        label_color->BackColor = Color::Red;
                        lose = true;
                        MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        timer1->Stop();
                        minutes = 0;
                        seconds = 0;
                        MyForm_Load(sender, e);
                    }
                    else
                    {
                        label_color->BackColor = Color::White;
                        if (label_color->Text == "0")
                        {
                            label_field->ForeColor = Color::FromArgb(0, 170, 246);
                        }
                        if (label_color->Text == "1")
                        {
                            label_field->ForeColor = Color::DarkBlue;
                        }
                        if (label_color->Text == "2")
                        {
                            label_field->ForeColor = Color::Green;
                        }
                        if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
                        {
                            label_color->ForeColor = Color::Red;
                        }
                    }
                }
            }
            catch (...) {}
            try
            {
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x - 1, poz_y - 1], true)[0]);
                if (lose != true && label_color->Text != "f" && label_color->BackColor != Color::White)
                {
                    label_color->Text = Convert::ToString(arr_number[poz_x - 1, poz_y - 1]);
                    if (label_color->Text == "9")
                    {
                        label_color->Text = "*";
                        label_color->BackColor = Color::Red;
                        lose = true;
                        MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        timer1->Stop();
                        minutes = 0;
                        seconds = 0;
                        MyForm_Load(sender, e);
                    }
                    else
                    {
                        label_color->BackColor = Color::White;
                        if (label_color->Text == "0")
                        {
                            label_field->ForeColor = Color::FromArgb(0, 170, 246);
                        }
                        if (label_color->Text == "1")
                        {
                            label_field->ForeColor = Color::DarkBlue;
                        }
                        if (label_color->Text == "2")
                        {
                            label_field->ForeColor = Color::Green;
                        }
                        if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
                        {
                            label_color->ForeColor = Color::Red;
                        }
                    }
                }
            }
            catch (...) {}
            try
            {
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x, poz_y - 1], true)[0]);
                if (lose != true && label_color->Text != "f" && label_color->BackColor != Color::White)
                {
                    label_color->Text = Convert::ToString(arr_number[poz_x, poz_y - 1]);
                    if (label_color->Text == "9")
                    {
                        label_color->Text = "*";
                        label_color->BackColor = Color::Red;
                        lose = true;
                        MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        timer1->Stop();
                        minutes = 0;
                        seconds = 0;
                        MyForm_Load(sender, e);
                    }
                    else
                    {
                        label_color->BackColor = Color::White;
                        if (label_color->Text == "0")
                        {
                            label_field->ForeColor = Color::FromArgb(0, 170, 246);
                        }
                        if (label_color->Text == "1")
                        {
                            label_field->ForeColor = Color::DarkBlue;
                        }
                        if (label_color->Text == "2")
                        {
                            label_field->ForeColor = Color::Green;
                        }
                        if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
                        {
                            label_color->ForeColor = Color::Red;
                        }
                    }
                }
            }
            catch (...) {}
            try
            {
                label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x + 1, poz_y - 1], true)[0]);
                if (lose != true && label_color->Text != "f" && label_color->BackColor != Color::White)
                {
                    label_color->Text = Convert::ToString(arr_number[poz_x + 1, poz_y - 1]);
                    if (label_color->Text == "9")
                    {
                        label_color->Text = "*";
                        label_color->BackColor = Color::Red;
                        lose = true;
                        MessageBox::Show(this, "Вы проиграли", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        timer1->Stop();
                        minutes = 0;
                        seconds = 0;
                        MyForm_Load(sender, e);
                    }
                    else
                    {
                        label_color->BackColor = Color::White;
                        if (label_color->Text == "0")
                        {
                            label_field->ForeColor = Color::FromArgb(0, 170, 246);
                        }
                        if (label_color->Text == "1")
                        {
                            label_field->ForeColor = Color::DarkBlue;
                        }
                        if (label_color->Text == "2")
                        {
                            label_field->ForeColor = Color::Green;
                        }
                        if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
                        {
                            label_color->ForeColor = Color::Red;
                        }
                    }
                }
            }
            catch (...) {}
            if (check_open_cell() == max_open_cells)
            {
                MessageBox::Show(this, "Вы выйграли", "Victory", MessageBoxButtons::OK, MessageBoxIcon::Information);
                timer1->Stop();
                minutes = 0;
                seconds = 0;
                MyForm_Load(sender, e);
            }
        }
        else
        {
            if (count < count_f)
            {
                MessageBox::Show(this, "Превышено количество флажков", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else
            {
                MessageBox::Show(this, "Вблизи этого поля могут быть бомбы", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    }
    else
    {
        MessageBox::Show(this, "Необходимо открыть поле", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: int check_open_cell() {
    int cells = 0;
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            label_check = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i,j], true)[0]);
            if (label_check->BackColor == Color::White)
            {
                cells++;
            }
        }
    }
    return cells;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    pictureBox1->Visible = true;
    pictureBox2->Visible = false;
    pictureBox3->Visible = false;
    level_game = level::easy;
    timer1->Stop();
    minutes = 0;
    seconds = 0;
    MyForm_Load(sender, e);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    pictureBox1->Visible = false;
    pictureBox2->Visible = true;
    pictureBox3->Visible = false;
    level_game = level::middle;
    timer1->Stop();
    minutes = 0;
    seconds = 0;
    MyForm_Load(sender, e);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    pictureBox1->Visible = false;
    pictureBox2->Visible = false;
    pictureBox3->Visible = true;
    level_game = level::hard;
    timer1->Stop();
    minutes = 0;
    seconds = 0;
    MyForm_Load(sender, e);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
    seconds++;
    if (seconds == 60)
    {
        minutes++;
        seconds = 0;
        if (minutes < 10)
        {
            label4->Text = "0" + Convert::ToString(minutes);
        }
        else
        {
            label4->Text = Convert::ToString(minutes);
        }
    }
    if (seconds < 10)
    {
        label5->Text = "0" + Convert::ToString(seconds);
    }
    else
    {
        label5->Text = Convert::ToString(seconds);
    }
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    button6->FlatAppearance->BorderSize = 3;
    button7->FlatAppearance->BorderSize = 0;
    button8->FlatAppearance->BorderSize = 0;
    button9->FlatAppearance->BorderSize = 0;
    topic = topics::blue;
    this->BackColor = Color::FromArgb(0, 170, 246);
    coloring_field(0, 127, 182);
    coloring_button(0, 127, 182);
    color_r = 0;
    color_g = 127;
    color_b = 182;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    button6->FlatAppearance->BorderSize = 0;
    button7->FlatAppearance->BorderSize = 3;
    button8->FlatAppearance->BorderSize = 0;
    button9->FlatAppearance->BorderSize = 0;
    topic = topics::light_green;
    this->BackColor = Color::FromArgb(65, 145, 108);
    coloring_field(45, 106, 79);
    coloring_button(45, 106, 79);
    color_r = 45;
    color_g = 106;
    color_b = 79;
    
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    button6->FlatAppearance->BorderSize = 0;
    button7->FlatAppearance->BorderSize = 0;
    button8->FlatAppearance->BorderSize = 3;
    button9->FlatAppearance->BorderSize = 0;
    topic = topics::gentle_purple;
    this->BackColor = Color::FromArgb(184, 192, 255);
    coloring_field(159, 134, 192);
    coloring_button(159, 134, 192);
    color_r = 159;
    color_g = 132;
    color_b = 192;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    button6->FlatAppearance->BorderSize = 0;
    button7->FlatAppearance->BorderSize = 0;
    button8->FlatAppearance->BorderSize = 0;
    button9->FlatAppearance->BorderSize = 3;
    topic = topics::deep_purple;
    this->BackColor = Color::FromArgb(157, 78, 237);
    coloring_field(60, 9, 108);
    coloring_button(60, 9, 108);
    color_r = 60;
    color_g = 9;
    color_b = 108;
}
private: System::Void coloring_field(int r,int g,int b) {
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i,j], true)[0]);
            label_color->BackColor = Color::FromArgb(r, g, b);
        }
    }
}
private: System::Void coloring_button(int r, int g, int b) {
    button1->BackColor = Color::FromArgb(r, g, b);
    button2->BackColor = Color::FromArgb(r, g, b);
    button3->BackColor = Color::FromArgb(r, g, b);
    button4->BackColor = Color::FromArgb(r, g, b);
    button5->BackColor = Color::FromArgb(r, g, b);
}
private: System::Void coloring_text_label() {
    if (label_color->Text == "0")
    {
        label_field->ForeColor = Color::FromArgb(0, 170, 246);
    }
    if (label_color->Text == "1")
    {
        label_field->ForeColor = Color::DarkBlue;
    }
    if (label_color->Text == "2")
    {
        label_field->ForeColor = Color::Green;
    }
    if (label_color->Text != "0" && label_color->Text != "1" && label_color->Text != "2")
    {
        label_color->ForeColor = Color::Red;
    }
}
};
}

