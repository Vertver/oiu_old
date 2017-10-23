/* "oiu" Version GPL Source Code
/
/ (c) Anton Vertver, Main coder, 2017
/ (c) Hpl1nk, Support coder, 2017
/
/ "oiu" Source Code is free software: you can redistribute it and/or modify for your apps and other projects
/
/ The code can contain comments in different languages (like a Russia, English, Deutsh)
/
/ Non-copyright source code
*/

#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Заголовок для класса Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Исходный код добавлять сюда.
			//
		}

	protected:
		/// <summary>
		/// Очищаем ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ContextMenuStrip^  File;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  clearToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  abouyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addNewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem2;

	private: System::Windows::Forms::TabControl^  tabControl1;

	private: System::Windows::Forms::TabPage^  tabPage2;


	private: System::Windows::Forms::ToolStripMenuItem^  resetsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  favoritesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  makeMoreLoudToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dBLevelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  voiceCompressorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vocalEnhancerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vSTPluginsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  warpingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addMoreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  languagesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  englishToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAndExitToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckedListBox^  Normalize;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::IO::FileSystemWatcher^  fileSystemWatcher1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Diagnostics::Process^  process1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  clearToolStripMenuItem1;




















	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Требуемая переменная конструрктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Необходимы метод для конструктора форм.
		/// Содержание метода не может быть изменено с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->File = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAndExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vSTPluginsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->favoritesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->makeMoreLoudToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dBLevelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voiceCompressorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vocalEnhancerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warpingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addMoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->languagesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abouyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->Normalize = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->process1 = (gcnew System::Diagnostics::Process());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->File->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(717, 421);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 1;
			// 
			// File
			// 
			this->File->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newToolStripMenuItem, this->openToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->File->Name = L"File";
			this->File->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->File->Size = System::Drawing::Size(104, 70);
			this->File->UseWaitCursor = true;
			this->File->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::File_Opening);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem1, this->viewToolStripMenuItem, this->favoritesToolStripMenuItem, this->languagesToolStripMenuItem,
					this->abouyToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(804, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem1,
					this->openToolStripMenuItem1, this->saveToolStripMenuItem, this->saveAndExitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fileToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem1
			// 
			this->newToolStripMenuItem1->Name = L"newToolStripMenuItem1";
			this->newToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->newToolStripMenuItem1->Text = L"New";
			this->newToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::SaveFileDialog1);
			// 
			// openToolStripMenuItem1
			// 
			this->openToolStripMenuItem1->Name = L"openToolStripMenuItem1";
			this->openToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->openToolStripMenuItem1->Text = L"Open";
			this->openToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::openFileDialog);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::SaveFileDialog1);
			// 
			// saveAndExitToolStripMenuItem
			// 
			this->saveAndExitToolStripMenuItem->Name = L"saveAndExitToolStripMenuItem";
			this->saveAndExitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveAndExitToolStripMenuItem->Text = L"Save and exit";
			this->saveAndExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openFileDialog2);
			// 
			// editToolStripMenuItem1
			// 
			this->editToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->clearToolStripMenuItem,
					this->resetsToolStripMenuItem, this->vSTPluginsToolStripMenuItem, this->clearToolStripMenuItem1
			});
			this->editToolStripMenuItem1->Name = L"editToolStripMenuItem1";
			this->editToolStripMenuItem1->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem1->Text = L"Edit";
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->clearToolStripMenuItem->Text = L"Options";
			// 
			// resetsToolStripMenuItem
			// 
			this->resetsToolStripMenuItem->Name = L"resetsToolStripMenuItem";
			this->resetsToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->resetsToolStripMenuItem->Text = L"Resets";
			// 
			// vSTPluginsToolStripMenuItem
			// 
			this->vSTPluginsToolStripMenuItem->Name = L"vSTPluginsToolStripMenuItem";
			this->vSTPluginsToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->vSTPluginsToolStripMenuItem->Text = L"Search";
			// 
			// clearToolStripMenuItem1
			// 
			this->clearToolStripMenuItem1->Name = L"clearToolStripMenuItem1";
			this->clearToolStripMenuItem1->Size = System::Drawing::Size(116, 22);
			this->clearToolStripMenuItem1->Text = L"Clear";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addNewToolStripMenuItem,
					this->editToolStripMenuItem2
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			this->viewToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::viewToolStripMenuItem_Click);
			// 
			// addNewToolStripMenuItem
			// 
			this->addNewToolStripMenuItem->Name = L"addNewToolStripMenuItem";
			this->addNewToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->addNewToolStripMenuItem->Text = L"Add new";
			// 
			// editToolStripMenuItem2
			// 
			this->editToolStripMenuItem2->Name = L"editToolStripMenuItem2";
			this->editToolStripMenuItem2->Size = System::Drawing::Size(121, 22);
			this->editToolStripMenuItem2->Text = L"Edit";
			// 
			// favoritesToolStripMenuItem
			// 
			this->favoritesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->makeMoreLoudToolStripMenuItem,
					this->dBLevelToolStripMenuItem, this->voiceCompressorToolStripMenuItem, this->vocalEnhancerToolStripMenuItem, this->warpingToolStripMenuItem,
					this->addMoreToolStripMenuItem
			});
			this->favoritesToolStripMenuItem->Name = L"favoritesToolStripMenuItem";
			this->favoritesToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->favoritesToolStripMenuItem->Text = L"Favourites";
			this->favoritesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::favoritesToolStripMenuItem_Click);
			// 
			// makeMoreLoudToolStripMenuItem
			// 
			this->makeMoreLoudToolStripMenuItem->Name = L"makeMoreLoudToolStripMenuItem";
			this->makeMoreLoudToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->makeMoreLoudToolStripMenuItem->Text = L"+6 dB Level";
			// 
			// dBLevelToolStripMenuItem
			// 
			this->dBLevelToolStripMenuItem->Name = L"dBLevelToolStripMenuItem";
			this->dBLevelToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->dBLevelToolStripMenuItem->Text = L"-6 dB Level";
			// 
			// voiceCompressorToolStripMenuItem
			// 
			this->voiceCompressorToolStripMenuItem->Name = L"voiceCompressorToolStripMenuItem";
			this->voiceCompressorToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->voiceCompressorToolStripMenuItem->Text = L"Voice Compressor";
			// 
			// vocalEnhancerToolStripMenuItem
			// 
			this->vocalEnhancerToolStripMenuItem->Name = L"vocalEnhancerToolStripMenuItem";
			this->vocalEnhancerToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->vocalEnhancerToolStripMenuItem->Text = L"Vocal Enhancer";
			// 
			// warpingToolStripMenuItem
			// 
			this->warpingToolStripMenuItem->Name = L"warpingToolStripMenuItem";
			this->warpingToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->warpingToolStripMenuItem->Text = L"Warping";
			// 
			// addMoreToolStripMenuItem
			// 
			this->addMoreToolStripMenuItem->Name = L"addMoreToolStripMenuItem";
			this->addMoreToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->addMoreToolStripMenuItem->Text = L"Add more...";
			// 
			// languagesToolStripMenuItem
			// 
			this->languagesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->englishToolStripMenuItem });
			this->languagesToolStripMenuItem->Name = L"languagesToolStripMenuItem";
			this->languagesToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->languagesToolStripMenuItem->Text = L"Languages";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Checked = true;
			this->englishToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// abouyToolStripMenuItem
			// 
			this->abouyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->abouyToolStripMenuItem->Name = L"abouyToolStripMenuItem";
			this->abouyToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->abouyToolStripMenuItem->Text = L"About";
			this->abouyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::abouyToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(216, 381);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->checkedListBox2);
			this->tabPage2->Controls->Add(this->checkedListBox1);
			this->tabPage2->Controls->Add(this->Normalize);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(208, 355);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Presets";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->CheckOnClick = true;
			this->checkedListBox2->ContextMenuStrip = this->File;
			this->checkedListBox2->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Vocal Compressor" });
			this->checkedListBox2->Location = System::Drawing::Point(3, 41);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(202, 19);
			this->checkedListBox2->TabIndex = 2;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->ContextMenuStrip = this->File;
			this->checkedListBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Vocal Enhancer" });
			this->checkedListBox1->Location = System::Drawing::Point(3, 22);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(202, 19);
			this->checkedListBox1->TabIndex = 1;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::checkedListBox1_SelectedIndexChanged);
			// 
			// Normalize
			// 
			this->Normalize->CheckOnClick = true;
			this->Normalize->ContextMenuStrip = this->File;
			this->Normalize->Dock = System::Windows::Forms::DockStyle::Top;
			this->Normalize->FormattingEnabled = true;
			this->Normalize->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Normalize" });
			this->Normalize->Location = System::Drawing::Point(3, 3);
			this->Normalize->Name = L"Normalize";
			this->Normalize->Size = System::Drawing::Size(202, 19);
			this->Normalize->TabIndex = 0;
			this->Normalize->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Normalize_SelectedIndexChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(200, 27);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Effects";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Form1::toolTip1_Popup);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"All Files|*.*";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			this->fileSystemWatcher1->Changed += gcnew System::IO::FileSystemEventHandler(this, &Form1::fileSystemWatcher1_Changed);
			// 
			// process1
			// 
			this->process1->StartInfo->Domain = L"";
			this->process1->StartInfo->LoadUserProfile = false;
			this->process1->StartInfo->Password = nullptr;
			this->process1->StartInfo->StandardErrorEncoding = nullptr;
			this->process1->StartInfo->StandardOutputEncoding = nullptr;
			this->process1->StartInfo->UserName = L"";
			this->process1->SynchronizingObject = this;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(13, 420);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(698, 23);
			this->progressBar1->TabIndex = 4;
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 2048;
			this->trackBar1->Location = System::Drawing::Point(235, 363);
			this->trackBar1->Maximum = 2048;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(557, 45);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// Form1
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(804, 456);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(820, 495);
			this->MinimumSize = System::Drawing::Size(820, 495);
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"OIU alpha";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->File->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void сосиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void editToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// Функция закрытие программы для кнопки
		Close();

	

	}
		// Остальное - тулбоксы
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}			
private: System::Void saveToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void saveEsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void sdToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void abouyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void viewToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void favoritesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Normalize_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void File_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void openFileDialog(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
}
private: System::Void openFileDialog2(System::Object^  sender, System::EventArgs^  e) {
	Close();
		 }
private: System::Void openFileDialogProcess_Click(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void SaveFileDialog1(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->ShowDialog();

	}
private: System::Void Option_Dialog1(System::Object^  sender, System::EventArgs^  e) {
	


	}
private: System::Void fileSystemWatcher1_Changed(System::Object^  sender, System::IO::FileSystemEventArgs^  e) {

		 }
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void notifyIcon1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
}

	; }
		// Сорян, пока не чистил эту помойку, потом займусь