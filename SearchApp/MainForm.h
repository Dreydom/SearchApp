#pragma once
namespace SearchApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::TabPage^  tabPage5;




	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  Desc;

	private: System::Windows::Forms::RadioButton^  Asc;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  SortColumn;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelSearch;
	private: System::Windows::Forms::TextBox^  SearchValue2;
	private: System::Windows::Forms::Label^  labelSearchTo;
	private: System::Windows::Forms::Label^  labelSearchFrom;
	private: System::Windows::Forms::ComboBox^  comboBoxOperator;
	private: System::Windows::Forms::Label^  labelOperator;
	private: System::Windows::Forms::NumericUpDown^  SearchNumeric;
	private: System::Windows::Forms::ListView^  Data;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::ListView^  listView4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader15;
	private: System::Windows::Forms::ColumnHeader^  columnHeader16;
	private: System::Windows::Forms::ColumnHeader^  columnHeader17;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;

	private: System::Windows::Forms::ComboBox^  SearchNumericColumn;


	public:	MainForm(void)
	{
		InitializeComponent();
		AllColumns = gcnew array<String^>
		{
			"Город издательства",			//0
				"Издательство",				//1
				"Книга",					//2
				"Страниц",					//3
				"Автор",					//4
				"Количество в заказе",		//5
				"Стоимость заказа",			//6
				"Дата заказа",				//7
				"Фирма доставки",			//8
				"ФИО ответственного лица",	//9
				"Адрес фирмы",				//10
				"Телефон фирмы",			//11
				"ИНН фирмы"					//12
		};
		SQLColumns = gcnew array<String^>
		{
			"P.City",				//0
				"P.Publish",		//1
				"B.Title_book",		//2
				"B.Pages",			//3
				"A.Name_Author",	//4
				"PP.Amount",		//5
				"PP.Cost",			//6
				"PP.Date_order",	//7
				"D.Name_company",	//8
				"D.Name_delivery",	//9
				"D.Address",		//10
				"D.Phone",			//11
				"D.INN"				//12
		};
	}
	public:
		SqlConnection ^ sqlConnection;
		array<String^>^ AllColumns;
		array<String^>^ SQLColumns;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;


			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  SearchButton;
	private: System::Windows::Forms::TextBox^  SearchValue;

	private: System::Windows::Forms::ComboBox^  SearchColumn;
	private: System::Windows::Forms::Label^  label1;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Data = (gcnew System::Windows::Forms::ListView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Desc = (gcnew System::Windows::Forms::RadioButton());
			this->Asc = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SortColumn = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SearchNumericColumn = (gcnew System::Windows::Forms::ComboBox());
			this->SearchNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBoxOperator = (gcnew System::Windows::Forms::ComboBox());
			this->labelOperator = (gcnew System::Windows::Forms::Label());
			this->labelSearchTo = (gcnew System::Windows::Forms::Label());
			this->labelSearchFrom = (gcnew System::Windows::Forms::Label());
			this->labelSearch = (gcnew System::Windows::Forms::Label());
			this->SearchValue2 = (gcnew System::Windows::Forms::TextBox());
			this->SearchValue = (gcnew System::Windows::Forms::TextBox());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SearchColumn = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchNumeric))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1013, 509);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Data);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1005, 483);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Поиск значения";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// Data
			// 
			this->Data->Location = System::Drawing::Point(8, 122);
			this->Data->Name = L"Data";
			this->Data->Size = System::Drawing::Size(989, 361);
			this->Data->TabIndex = 2;
			this->Data->UseCompatibleStateImageBehavior = false;
			this->Data->View = System::Windows::Forms::View::Details;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Location = System::Drawing::Point(8, 7);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(186, 112);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры поиска";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(18, 52);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(153, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Поиск между значениями";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(18, 75);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(105, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Числовой поиск";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(18, 29);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(105, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Поиск значения";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Desc);
			this->groupBox2->Controls->Add(this->Asc);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->SortColumn);
			this->groupBox2->Location = System::Drawing::Point(711, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(286, 112);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Сортировка";
			// 
			// Desc
			// 
			this->Desc->AutoSize = true;
			this->Desc->Location = System::Drawing::Point(18, 75);
			this->Desc->Name = L"Desc";
			this->Desc->Size = System::Drawing::Size(157, 17);
			this->Desc->TabIndex = 2;
			this->Desc->TabStop = true;
			this->Desc->Text = L"Сортировка по убыванию";
			this->Desc->UseVisualStyleBackColor = true;
			// 
			// Asc
			// 
			this->Asc->AutoSize = true;
			this->Asc->Location = System::Drawing::Point(18, 52);
			this->Asc->Name = L"Asc";
			this->Asc->Size = System::Drawing::Size(171, 17);
			this->Asc->TabIndex = 1;
			this->Asc->TabStop = true;
			this->Asc->Text = L"Сортировка по возрастанию";
			this->Asc->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Выберите столбец";
			// 
			// SortColumn
			// 
			this->SortColumn->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SortColumn->FormattingEnabled = true;
			this->SortColumn->Location = System::Drawing::Point(122, 21);
			this->SortColumn->Name = L"SortColumn";
			this->SortColumn->Size = System::Drawing::Size(158, 21);
			this->SortColumn->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->SearchNumericColumn);
			this->groupBox1->Controls->Add(this->SearchNumeric);
			this->groupBox1->Controls->Add(this->comboBoxOperator);
			this->groupBox1->Controls->Add(this->labelOperator);
			this->groupBox1->Controls->Add(this->labelSearchTo);
			this->groupBox1->Controls->Add(this->labelSearchFrom);
			this->groupBox1->Controls->Add(this->labelSearch);
			this->groupBox1->Controls->Add(this->SearchValue2);
			this->groupBox1->Controls->Add(this->SearchValue);
			this->groupBox1->Controls->Add(this->SearchButton);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->SearchColumn);
			this->groupBox1->Location = System::Drawing::Point(200, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(505, 112);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Поиск";
			// 
			// SearchNumericColumn
			// 
			this->SearchNumericColumn->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SearchNumericColumn->FormattingEnabled = true;
			this->SearchNumericColumn->Location = System::Drawing::Point(135, 18);
			this->SearchNumericColumn->Name = L"SearchNumericColumn";
			this->SearchNumericColumn->Size = System::Drawing::Size(364, 21);
			this->SearchNumericColumn->TabIndex = 15;
			// 
			// SearchNumeric
			// 
			this->SearchNumeric->DecimalPlaces = 2;
			this->SearchNumeric->Location = System::Drawing::Point(135, 51);
			this->SearchNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->SearchNumeric->Name = L"SearchNumeric";
			this->SearchNumeric->Size = System::Drawing::Size(307, 21);
			this->SearchNumeric->TabIndex = 14;
			this->SearchNumeric->ThousandsSeparator = true;
			// 
			// comboBoxOperator
			// 
			this->comboBoxOperator->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxOperator->FormattingEnabled = true;
			this->comboBoxOperator->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L">", L"<", L"=", L"<=", L">=", L"<>" });
			this->comboBoxOperator->Location = System::Drawing::Point(135, 78);
			this->comboBoxOperator->Name = L"comboBoxOperator";
			this->comboBoxOperator->Size = System::Drawing::Size(307, 21);
			this->comboBoxOperator->TabIndex = 13;
			// 
			// labelOperator
			// 
			this->labelOperator->AutoSize = true;
			this->labelOperator->Location = System::Drawing::Point(68, 81);
			this->labelOperator->Name = L"labelOperator";
			this->labelOperator->Size = System::Drawing::Size(57, 13);
			this->labelOperator->TabIndex = 12;
			this->labelOperator->Text = L"Оператор";
			// 
			// labelSearchTo
			// 
			this->labelSearchTo->AutoSize = true;
			this->labelSearchTo->Location = System::Drawing::Point(109, 81);
			this->labelSearchTo->Name = L"labelSearchTo";
			this->labelSearchTo->Size = System::Drawing::Size(20, 13);
			this->labelSearchTo->TabIndex = 11;
			this->labelSearchTo->Text = L"до";
			// 
			// labelSearchFrom
			// 
			this->labelSearchFrom->AutoSize = true;
			this->labelSearchFrom->Location = System::Drawing::Point(71, 54);
			this->labelSearchFrom->Name = L"labelSearchFrom";
			this->labelSearchFrom->Size = System::Drawing::Size(58, 13);
			this->labelSearchFrom->TabIndex = 10;
			this->labelSearchFrom->Text = L"Искать от";
			// 
			// labelSearch
			// 
			this->labelSearch->AutoSize = true;
			this->labelSearch->Location = System::Drawing::Point(86, 54);
			this->labelSearch->Name = L"labelSearch";
			this->labelSearch->Size = System::Drawing::Size(43, 13);
			this->labelSearch->TabIndex = 9;
			this->labelSearch->Text = L"Искать";
			// 
			// SearchValue2
			// 
			this->SearchValue2->Location = System::Drawing::Point(135, 78);
			this->SearchValue2->Name = L"SearchValue2";
			this->SearchValue2->Size = System::Drawing::Size(307, 21);
			this->SearchValue2->TabIndex = 8;
			// 
			// SearchValue
			// 
			this->SearchValue->Location = System::Drawing::Point(135, 51);
			this->SearchValue->Name = L"SearchValue";
			this->SearchValue->Size = System::Drawing::Size(307, 21);
			this->SearchValue->TabIndex = 3;
			// 
			// SearchButton
			// 
			this->SearchButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchButton.BackgroundImage")));
			this->SearchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->SearchButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchButton->Location = System::Drawing::Point(448, 51);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(51, 48);
			this->SearchButton->TabIndex = 0;
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MainForm::SearchButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите столбец";
			// 
			// SearchColumn
			// 
			this->SearchColumn->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SearchColumn->FormattingEnabled = true;
			this->SearchColumn->Location = System::Drawing::Point(135, 18);
			this->SearchColumn->Name = L"SearchColumn";
			this->SearchColumn->Size = System::Drawing::Size(364, 21);
			this->SearchColumn->TabIndex = 1;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->groupBox7);
			this->tabPage5->Controls->Add(this->groupBox6);
			this->tabPage5->Controls->Add(this->groupBox5);
			this->tabPage5->Controls->Add(this->groupBox4);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1005, 483);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Группировка по столбцу";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->listView4);
			this->groupBox7->Location = System::Drawing::Point(8, 239);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(991, 236);
			this->groupBox7->TabIndex = 3;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Группировка по городу издательства, издательству, названии книги, страницам, авто"
				L"ру, фирме доставки и по ответственному лицу";
			// 
			// listView4
			// 
			this->listView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9
			});
			this->listView4->Location = System::Drawing::Point(7, 20);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(978, 210);
			this->listView4->TabIndex = 3;
			this->listView4->UseCompatibleStateImageBehavior = false;
			this->listView4->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Город издательства";
			this->columnHeader1->Width = 125;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Издательство";
			this->columnHeader2->Width = 101;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Книга";
			this->columnHeader3->Width = 98;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Страниц";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Автор";
			this->columnHeader5->Width = 119;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Книг заказано";
			this->columnHeader6->Width = 94;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Суммарная стоимость";
			this->columnHeader7->Width = 127;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Фирма доставки";
			this->columnHeader8->Width = 105;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Ответственное лицо";
			this->columnHeader9->Width = 145;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->listView3);
			this->groupBox6->Location = System::Drawing::Point(630, 6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(369, 227);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Группировка по названии книги и компании доставки";
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader15, this->columnHeader16,
					this->columnHeader17
			});
			this->listView3->Location = System::Drawing::Point(6, 20);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(357, 201);
			this->listView3->TabIndex = 2;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Книга";
			this->columnHeader15->Width = 124;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Фирма доставки";
			this->columnHeader16->Width = 136;
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"Книг заказано";
			this->columnHeader17->Width = 93;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->listView2);
			this->groupBox5->Location = System::Drawing::Point(387, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(237, 227);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Группировка по фирме доставки";
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader13, this->columnHeader14 });
			this->listView2->Location = System::Drawing::Point(6, 20);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(225, 201);
			this->listView2->TabIndex = 1;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Фирма доставки";
			this->columnHeader13->Width = 124;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Книг заказано";
			this->columnHeader14->Width = 97;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->listView1);
			this->groupBox4->Location = System::Drawing::Point(8, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(373, 227);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Группировка по названию книги";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader10, this->columnHeader11,
					this->columnHeader12
			});
			this->listView1->Location = System::Drawing::Point(7, 21);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(360, 201);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Книга";
			this->columnHeader10->Width = 132;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Книг заказано";
			this->columnHeader11->Width = 94;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Суммарная стоимость";
			this->columnHeader12->Width = 129;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 509);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MainForm";
			this->Text = L"Работа с базой данных";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchNumeric))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		String ^ Escape(String^ input) { return input->Replace("'", "''"); }

		Void LoadGroupData(ListView^ listview, String^ commandstring, int width) {
			SqlDataReader^ sqlDataReader = nullptr;
			SqlCommand^ command = gcnew SqlCommand(commandstring, sqlConnection);
			try {
				sqlDataReader = command->ExecuteReader();
				if (sqlDataReader->HasRows) {
					while (sqlDataReader->Read()) {
						array<String^>^ arr = gcnew array<String^>(width);
						for (int i = 0; i < width; i++) {
							arr[i] = sqlDataReader->GetValue(i)->ToString()->TrimEnd();
						}
						listview->Items->Add(gcnew ListViewItem(arr));
					}
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message->ToString(), ex->Source->ToString(), MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (sqlDataReader != nullptr) sqlDataReader->Close();
			}
		}

		Void LoadData(int colindex, String^ query1, String^ query2, int mode, int colsortindex, String^ type) {
			Data->Items->Clear();
			query1 = Escape(query1);
			String^ filter = "";
			if (!String::IsNullOrEmpty(query1) 
				&& !(String::IsNullOrEmpty(query2) && mode == 2))
			{
				if (mode == 1) {
					if (colindex == 0)
						filter = "AND ( " + String::Join(String::Format(" LIKE '%{0}%' OR ", query1), SQLColumns) + String::Format(" LIKE '%{0}%') ", query1);
					else
						filter = String::Format("AND {0} LIKE '%{1}%' ", SQLColumns[colindex - 1], query1);
				}
				else if (mode == 2) {
					if (colindex == 0)
						filter = "AND ( " + String::Join(String::Format(" BETWEEN '{0}' AND '{1}' OR ", query1, query2), SQLColumns) + String::Format(" BETWEEN '{0}' AND '{1}') ", query1, query2);
					else
						filter = String::Format("AND {0} BETWEEN '{1}' AND '{2}' ", SQLColumns[colindex - 1], query1, query2);
				}
				else if (mode == 3) {
					filter = String::Format("AND {0} {2} '{1}' ", SQLColumns[colindex - 1], query1, query2);
				}
			}
			String^ sort = "";
			if (colsortindex != 0) {
				sort = String::Format(" ORDER BY {0} {1}; ", SQLColumns[colsortindex - 1], type);
			}
			SqlDataReader^ sqlDataReader = nullptr;
			String^ commandstring =
				"SELECT P.City, P.Publish, "
				+ "B.Title_book, B.Pages, "
				+ "A.Name_Author, "
				+ "PP.Amount, PP.Cost, PP.Date_order, "
				+ "D.Name_company, D.Name_delivery, D.Address, D.Phone, D.INN "
				+ "FROM Publishing_house P, Books B, Authors A, Purchases PP, Deliveries D "
				+ "WHERE P.Code_publish = B.Code_publish "
				+ "AND A.Code_Author = B.Code_author "
				+ "AND PP.Code_book = B.Code_book "
				+ "AND PP.Code_delivery = D.Code_delivery "
				+ filter 
				+ sort;
			SqlCommand^ command = gcnew SqlCommand(commandstring, sqlConnection);
			try {
				sqlDataReader = command->ExecuteReader();
				if (sqlDataReader->HasRows) {
					Data->Items->Clear();
					while (sqlDataReader->Read()) {
						array<String^>^ arr = gcnew array<String^>(13);
						for (int i = 0; i < 13; i++) {
							if (i == 6) {
								Double^ d = Convert::ToDouble(sqlDataReader->GetValue(i));
								arr[i] = d->ToString("0.00р")->TrimEnd();
								i++;
								DateTime^ datetime = Convert::ToDateTime(sqlDataReader->GetValue(i));
								arr[i] = datetime->ToString("dd\/MM\/yyyy")->TrimEnd();
								/*i++;
								int type = Convert::ToInt32(sqlDataReader->GetValue(i));
								if (type == 0) arr[i] = "Оптом";
								else arr[i] = "В розницу";*/
							}
							else arr[i] = sqlDataReader->GetValue(i)->ToString()->TrimEnd();
						}
						Data->Items->Add(gcnew ListViewItem(arr));
					}
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message->ToString(), ex->Source->ToString(), MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (sqlDataReader != nullptr) sqlDataReader->Close();
			}
		}

		System::Void  MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			String^ connectionString = "Data Source = ANDREY-ПК; Initial Catalog = Book_stuff; Integrated Security = True; MultipleActiveResultSets = True";
			sqlConnection = gcnew SqlConnection(connectionString);
			try {
				sqlConnection->Open();
				SearchColumn->Items->Add("Все");
				SortColumn->Items->Add("Нет");
				radioButton1->Checked = true;
				Asc->Checked = true;
				for (int i = 0; i < 13; i++) {
					Data->Columns->Add(AllColumns[i], 100);
					SearchColumn->Items->Add(AllColumns[i]);
					SortColumn->Items->Add(AllColumns[i]);
					if (i==3||i==5||i==6) SearchNumericColumn->Items->Add(AllColumns[i]);
				}
				SearchColumn->SelectedIndex = 0;
				SearchNumericColumn->SelectedIndex = 0;
				SortColumn->SelectedIndex = 0;
				comboBoxOperator->SelectedIndex = 0;
				LoadData(SearchColumn->SelectedIndex, SearchValue->Text, "", 1, 0, "ASC");
				LoadGroupData(listView1, "SELECT Title_book, Sum(Amount) as 'Books ordered', Sum(Cost) as 'Cost' FROM Purchases, Books WHERE Purchases.Code_book = Books.Code_book GROUP BY Title_book; ", 3);
				LoadGroupData(listView2, "SELECT Name_company, Sum(Amount) as 'Books ordered'	FROM Purchases, Books, Deliveries WHERE Purchases.Code_book = Books.Code_book AND Purchases.Code_delivery = Deliveries.Code_delivery GROUP BY Name_company; ", 2);
				LoadGroupData(listView3, "SELECT Title_book, Name_company, Sum(Amount) as 'Books ordered'	FROM Purchases, Books, Deliveries WHERE Purchases.Code_book = Books.Code_book AND Purchases.Code_delivery = Deliveries.Code_delivery GROUP BY Title_book, Name_company; ", 3);
				LoadGroupData(listView4, "SELECT P.City, P.Publish, B.Title_book, B.Pages, A.Name_Author, SUM(PP.Amount) as 'Books Ordered', SUM(PP.Cost) as 'Cost', D.Name_company, D.Name_delivery FROM Publishing_house P, Books B, Authors A, Purchases PP, Deliveries D WHERE P.Code_publish = B.Code_publish AND A.Code_Author = B.Code_author AND PP.Code_book = B.Code_book AND PP.Code_delivery = D.Code_delivery GROUP BY P.City, P.Publish, B.Title_book, B.Pages, A.Name_Author, D.Name_company, D.Name_delivery SELECT Title_book, Name_company, Sum(Amount) as 'Books ordered'	FROM Purchases, Books, Deliveries WHERE Purchases.Code_book = Books.Code_book AND Purchases.Code_delivery = Deliveries.Code_delivery GROUP BY Title_book, Name_company;", 9);
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message->ToString(), ex->Source->ToString(), MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ sortType;
			if (Asc->Checked) sortType = "ASC";
			else if (Desc->Checked) sortType = "DESC";
			int colSortIndex = SortColumn->SelectedIndex;
			if (radioButton1->Checked == true)
				LoadData(SearchColumn->SelectedIndex, SearchValue->Text, "", 1, colSortIndex, sortType); //LIKE '%{0}%'
			else if (radioButton2->Checked == true)
				LoadData(SearchColumn->SelectedIndex, SearchValue->Text, SearchValue2->Text, 2, colSortIndex, sortType); //BETWEEN '{0}' AND '{1}'
			else if (radioButton3->Checked == true) {
				int i = SearchNumericColumn->SelectedIndex;
				int j;
				String^ query = Convert::ToString(Convert::ToDouble(SearchNumeric->Text))->Replace(',', '.');
				if (i == 0) j = 4;
				else if (i == 1) j = 6;
				else if (i == 2) j = 7;
				LoadData(j, query, comboBoxOperator->Text, 3, colSortIndex, sortType); //numeric search
			}
		}

		System::Void radioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (radioButton1->Checked == true) {
				SearchColumn->Show();
				SearchNumericColumn->Hide();
				SearchValue->Show();
				SearchValue2->Hide();
				labelSearch->Show();
				labelSearchFrom->Hide();
				labelSearchTo->Hide();
				SearchNumeric->Hide();
				labelOperator->Hide();
				comboBoxOperator->Hide();
			}
			else if (radioButton2->Checked == true) {
				SearchColumn->Show();
				SearchNumericColumn->Hide();
				SearchValue->Show();
				SearchValue2->Show();
				labelSearch->Hide();
				labelSearchFrom->Show();
				labelSearchTo->Show();
				SearchNumeric->Hide();
				labelOperator->Hide();
				comboBoxOperator->Hide();
			}
			else if (radioButton3->Checked == true) {
				SearchColumn->Hide();
				SearchNumericColumn->Show();
				SearchValue->Hide();
				SearchValue2->Hide();
				labelSearch->Show();
				labelSearchFrom->Hide();
				labelSearchTo->Hide();
				SearchNumeric->Show();
				labelOperator->Show();
				comboBoxOperator->Show();
			}
		}
	};
}
