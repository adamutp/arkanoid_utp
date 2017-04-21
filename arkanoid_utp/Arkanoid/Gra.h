#pragma once

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
	public:
		Gra(void)
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
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  speedBox2;


	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::PictureBox^  pictureBox66;
	private: System::Windows::Forms::PictureBox^  longBox1;





	private: System::Windows::Forms::PictureBox^  pictureBox68;
	private: System::Windows::Forms::PictureBox^  pictureBox69;
	private: System::Windows::Forms::PictureBox^  pictureBox70;
	private: System::Windows::Forms::PictureBox^  pictureBox71;
	private: System::Windows::Forms::PictureBox^  pictureBox72;
	private: System::Windows::Forms::PictureBox^  pictureBox73;
	private: System::Windows::Forms::PictureBox^  pictureBox74;
	private: System::Windows::Forms::PictureBox^  pictureBox75;
	private: System::Windows::Forms::PictureBox^  pictureBox76;
	private: System::Windows::Forms::PictureBox^  pictureBox77;
	private: System::Windows::Forms::PictureBox^  pictureBox78;
	private: System::Windows::Forms::PictureBox^  pictureBox79;
	private: System::Windows::Forms::PictureBox^  pictureBox80;
	private: System::Windows::Forms::PictureBox^  pictureBox81;
	private: System::Windows::Forms::PictureBox^  pictureBox82;
private: System::Windows::Forms::PictureBox^  speedBox1;




	private: System::Windows::Forms::PictureBox^  pictureBox84;
	private: System::Windows::Forms::PictureBox^  pictureBox85;
	private: System::Windows::Forms::PictureBox^  pictureBox86;
	private: System::Windows::Forms::PictureBox^  pictureBox87;
	private: System::Windows::Forms::PictureBox^  pictureBox88;
	private: System::Windows::Forms::PictureBox^  pictureBox89;
	private: System::Windows::Forms::PictureBox^  pictureBox90;
	private: System::Windows::Forms::PictureBox^  pictureBox91;
	private: System::Windows::Forms::PictureBox^  pictureBox92;
	private: System::Windows::Forms::PictureBox^  pictureBox93;
	private: System::Windows::Forms::PictureBox^  pictureBox94;
	private: System::Windows::Forms::PictureBox^  pictureBox95;
	private: System::Windows::Forms::PictureBox^  pictureBox96;
	private: System::Windows::Forms::PictureBox^  pictureBox97;
	private: System::Windows::Forms::PictureBox^  pictureBox98;
	private: System::Windows::Forms::PictureBox^  pictureBox99;
	private: System::Windows::Forms::PictureBox^  pictureBox100;
private: System::Windows::Forms::PictureBox^  ball;
private: System::Windows::Forms::PictureBox^  paletka;


	private: System::Windows::Forms::Label^  hp;
	private: System::Windows::Forms::Label^  pkt;
private: System::Windows::Forms::Timer^  timer_pilka;
private: System::Windows::Forms::PictureBox^  exit;

private: System::Windows::Forms::PictureBox^  again;
private: System::Windows::Forms::PictureBox^  speed1;

private: System::Windows::Forms::PictureBox^  speed2;
private: System::Windows::Forms::Timer^  timerBonuses;
private: System::Windows::Forms::PictureBox^  long1;
private: System::Windows::Forms::PictureBox^  pictureBox30;
private: System::Windows::Forms::PictureBox^  immortal;
private: System::Windows::Forms::PictureBox^  immortalBon;
private: System::Windows::Forms::PictureBox^  fastBall;









	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->speedBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->longBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->speedBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->ball = (gcnew System::Windows::Forms::PictureBox());
			this->paletka = (gcnew System::Windows::Forms::PictureBox());
			this->hp = (gcnew System::Windows::Forms::Label());
			this->pkt = (gcnew System::Windows::Forms::Label());
			this->timer_pilka = (gcnew System::Windows::Forms::Timer(this->components));
			this->exit = (gcnew System::Windows::Forms::PictureBox());
			this->again = (gcnew System::Windows::Forms::PictureBox());
			this->speed1 = (gcnew System::Windows::Forms::PictureBox());
			this->speed2 = (gcnew System::Windows::Forms::PictureBox());
			this->timerBonuses = (gcnew System::Windows::Forms::Timer(this->components));
			this->long1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->immortal = (gcnew System::Windows::Forms::PictureBox());
			this->immortalBon = (gcnew System::Windows::Forms::PictureBox());
			this->fastBall = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->longBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paletka))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->again))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speed1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speed2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->long1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->immortal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->immortalBon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fastBall))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(320, 186);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 20);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"brick";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(320, 163);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(40, 20);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"brick";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(320, 141);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 20);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"brick";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(320, 118);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 20);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"brick";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(320, 96);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(40, 20);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"brick";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(366, 186);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(40, 20);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"brick";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(366, 163);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 20);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"brick";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(365, 141);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(40, 20);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"brick";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(365, 118);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 20);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"brick";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(365, 96);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 20);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"brick";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(411, 163);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(40, 20);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"brick";
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(453, 141);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(40, 20);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"brick";
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Gra::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(411, 141);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(40, 20);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"brick";
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(411, 188);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(40, 20);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 13;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"brick";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(453, 164);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(40, 20);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"brick";
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(411, 118);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(40, 20);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 15;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"brick";
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Gra::pictureBox16_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(453, 118);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(40, 20);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 16;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"brick";
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(453, 188);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(40, 20);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 17;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"brick";
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(411, 96);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(40, 20);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 18;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"brick";
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(453, 96);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(40, 20);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 19;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"brick";
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(728, 188);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(40, 20);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 20;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"brick";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(728, 164);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(40, 20);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 21;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"brick";
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(728, 118);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(40, 20);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 22;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"brick";
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(728, 142);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(40, 20);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 23;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"brick";
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(682, 188);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(40, 20);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 24;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"brick";
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(682, 164);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(40, 20);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 25;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"brick";
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(682, 96);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(40, 20);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 26;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"brick";
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(728, 96);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(40, 20);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 27;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"brick";
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(682, 142);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(40, 20);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 28;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"brick";
			// 
			// speedBox2
			// 
			this->speedBox2->BackColor = System::Drawing::Color::Transparent;
			this->speedBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"speedBox2.Image")));
			this->speedBox2->Location = System::Drawing::Point(682, 118);
			this->speedBox2->Name = L"speedBox2";
			this->speedBox2->Size = System::Drawing::Size(40, 20);
			this->speedBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->speedBox2->TabIndex = 29;
			this->speedBox2->TabStop = false;
			this->speedBox2->Tag = L"brick";
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(636, 96);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(40, 20);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 30;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"brick";
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(590, 164);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(40, 20);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 31;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"brick";
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(636, 164);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(40, 20);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 32;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"brick";
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(636, 142);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(40, 20);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 33;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Tag = L"brick";
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(636, 188);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(40, 20);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox35->TabIndex = 34;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Tag = L"brick";
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(590, 188);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(40, 20);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 35;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Tag = L"brick";
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(636, 118);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(40, 20);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox37->TabIndex = 36;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Tag = L"brick";
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(590, 142);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(40, 20);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox38->TabIndex = 37;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Tag = L"brick";
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(590, 118);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(40, 20);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox39->TabIndex = 38;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Tag = L"brick";
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(590, 96);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(40, 20);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox40->TabIndex = 39;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Tag = L"brick";
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(499, 188);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(40, 20);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox41->TabIndex = 40;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Tag = L"brick";
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(544, 188);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(40, 20);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox42->TabIndex = 41;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Tag = L"brick";
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(499, 163);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(40, 20);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox43->TabIndex = 42;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Tag = L"brick";
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(544, 164);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(40, 20);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox44->TabIndex = 43;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Tag = L"brick";
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(499, 141);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(40, 20);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox45->TabIndex = 44;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Tag = L"brick";
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(499, 118);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(40, 20);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox46->TabIndex = 45;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Tag = L"brick";
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(543, 96);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(40, 20);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox47->TabIndex = 46;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Tag = L"brick";
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(544, 142);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(40, 20);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox48->TabIndex = 47;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Tag = L"brick";
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(543, 119);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(40, 20);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox49->TabIndex = 48;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Tag = L"brick";
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(499, 96);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(40, 20);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox50->TabIndex = 49;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Tag = L"brick";
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(750, 214);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(40, 20);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox51->TabIndex = 50;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Tag = L"brick";
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(402, 236);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(40, 20);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox52->TabIndex = 51;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Tag = L"brick";
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(480, 236);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(40, 20);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox53->TabIndex = 52;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Tag = L"brick";
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(440, 212);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(40, 20);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox54->TabIndex = 53;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Tag = L"brick";
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(711, 237);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(40, 20);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox55->TabIndex = 54;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Tag = L"brick";
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(672, 213);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(40, 20);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox56->TabIndex = 55;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Tag = L"brick";
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(634, 238);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(40, 20);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox57->TabIndex = 56;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Tag = L"brick";
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(595, 214);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(40, 20);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox58->TabIndex = 57;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Tag = L"brick";
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(557, 237);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(40, 20);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox59->TabIndex = 58;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->Tag = L"brick";
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(518, 212);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(40, 20);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox60->TabIndex = 59;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Tag = L"brick";
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(86, 236);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(40, 20);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox61->TabIndex = 60;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Tag = L"brick";
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(46, 214);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(40, 20);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox62->TabIndex = 61;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Tag = L"brick";
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(12, 236);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(40, 20);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox63->TabIndex = 62;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Tag = L"brick";
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(363, 212);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(40, 20);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox64->TabIndex = 63;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Tag = L"brick";
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(324, 238);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(40, 20);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox65->TabIndex = 64;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Tag = L"brick";
			// 
			// pictureBox66
			// 
			this->pictureBox66->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(285, 213);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(40, 20);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox66->TabIndex = 65;
			this->pictureBox66->TabStop = false;
			this->pictureBox66->Tag = L"brick";
			// 
			// longBox1
			// 
			this->longBox1->BackColor = System::Drawing::Color::Transparent;
			this->longBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"longBox1.Image")));
			this->longBox1->Location = System::Drawing::Point(245, 238);
			this->longBox1->Name = L"longBox1";
			this->longBox1->Size = System::Drawing::Size(40, 20);
			this->longBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->longBox1->TabIndex = 66;
			this->longBox1->TabStop = false;
			this->longBox1->Tag = L"brick";
			// 
			// pictureBox68
			// 
			this->pictureBox68->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(205, 214);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(40, 20);
			this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox68->TabIndex = 67;
			this->pictureBox68->TabStop = false;
			this->pictureBox68->Tag = L"brick";
			// 
			// pictureBox69
			// 
			this->pictureBox69->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(165, 238);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(40, 20);
			this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox69->TabIndex = 68;
			this->pictureBox69->TabStop = false;
			this->pictureBox69->Tag = L"brick";
			// 
			// pictureBox70
			// 
			this->pictureBox70->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(125, 214);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(40, 20);
			this->pictureBox70->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox70->TabIndex = 69;
			this->pictureBox70->TabStop = false;
			this->pictureBox70->Tag = L"brick";
			// 
			// pictureBox71
			// 
			this->pictureBox71->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(45, 187);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(40, 20);
			this->pictureBox71->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox71->TabIndex = 70;
			this->pictureBox71->TabStop = false;
			this->pictureBox71->Tag = L"brick";
			// 
			// pictureBox72
			// 
			this->pictureBox72->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(91, 187);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(40, 20);
			this->pictureBox72->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox72->TabIndex = 71;
			this->pictureBox72->TabStop = false;
			this->pictureBox72->Tag = L"brick";
			// 
			// pictureBox73
			// 
			this->pictureBox73->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
			this->pictureBox73->Location = System::Drawing::Point(45, 163);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(40, 20);
			this->pictureBox73->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox73->TabIndex = 72;
			this->pictureBox73->TabStop = false;
			this->pictureBox73->Tag = L"brick";
			// 
			// pictureBox74
			// 
			this->pictureBox74->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(90, 163);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(40, 20);
			this->pictureBox74->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox74->TabIndex = 73;
			this->pictureBox74->TabStop = false;
			this->pictureBox74->Tag = L"brick";
			// 
			// pictureBox75
			// 
			this->pictureBox75->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(45, 139);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(40, 20);
			this->pictureBox75->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox75->TabIndex = 74;
			this->pictureBox75->TabStop = false;
			this->pictureBox75->Tag = L"brick";
			// 
			// pictureBox76
			// 
			this->pictureBox76->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
			this->pictureBox76->Location = System::Drawing::Point(90, 140);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(40, 20);
			this->pictureBox76->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox76->TabIndex = 75;
			this->pictureBox76->TabStop = false;
			this->pictureBox76->Tag = L"brick";
			// 
			// pictureBox77
			// 
			this->pictureBox77->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.Image")));
			this->pictureBox77->Location = System::Drawing::Point(45, 117);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(40, 20);
			this->pictureBox77->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox77->TabIndex = 76;
			this->pictureBox77->TabStop = false;
			this->pictureBox77->Tag = L"brick";
			// 
			// pictureBox78
			// 
			this->pictureBox78->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.Image")));
			this->pictureBox78->Location = System::Drawing::Point(90, 118);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(40, 20);
			this->pictureBox78->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox78->TabIndex = 77;
			this->pictureBox78->TabStop = false;
			this->pictureBox78->Tag = L"brick";
			// 
			// pictureBox79
			// 
			this->pictureBox79->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.Image")));
			this->pictureBox79->Location = System::Drawing::Point(90, 96);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(40, 20);
			this->pictureBox79->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox79->TabIndex = 78;
			this->pictureBox79->TabStop = false;
			this->pictureBox79->Tag = L"brick";
			// 
			// pictureBox80
			// 
			this->pictureBox80->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.Image")));
			this->pictureBox80->Location = System::Drawing::Point(45, 96);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(40, 20);
			this->pictureBox80->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox80->TabIndex = 79;
			this->pictureBox80->TabStop = false;
			this->pictureBox80->Tag = L"brick";
			// 
			// pictureBox81
			// 
			this->pictureBox81->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox81->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.Image")));
			this->pictureBox81->Location = System::Drawing::Point(136, 164);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(40, 20);
			this->pictureBox81->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox81->TabIndex = 80;
			this->pictureBox81->TabStop = false;
			this->pictureBox81->Tag = L"brick";
			// 
			// pictureBox82
			// 
			this->pictureBox82->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox82->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox82.Image")));
			this->pictureBox82->Location = System::Drawing::Point(182, 164);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(40, 20);
			this->pictureBox82->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox82->TabIndex = 81;
			this->pictureBox82->TabStop = false;
			this->pictureBox82->Tag = L"brick";
			// 
			// speedBox1
			// 
			this->speedBox1->BackColor = System::Drawing::Color::Transparent;
			this->speedBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"speedBox1.Image")));
			this->speedBox1->Location = System::Drawing::Point(136, 141);
			this->speedBox1->Name = L"speedBox1";
			this->speedBox1->Size = System::Drawing::Size(40, 20);
			this->speedBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->speedBox1->TabIndex = 82;
			this->speedBox1->TabStop = false;
			this->speedBox1->Tag = L"brick";
			// 
			// pictureBox84
			// 
			this->pictureBox84->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox84->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox84.Image")));
			this->pictureBox84->Location = System::Drawing::Point(182, 141);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(40, 20);
			this->pictureBox84->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox84->TabIndex = 83;
			this->pictureBox84->TabStop = false;
			this->pictureBox84->Tag = L"brick";
			// 
			// pictureBox85
			// 
			this->pictureBox85->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox85->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.Image")));
			this->pictureBox85->Location = System::Drawing::Point(136, 118);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(40, 20);
			this->pictureBox85->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox85->TabIndex = 84;
			this->pictureBox85->TabStop = false;
			this->pictureBox85->Tag = L"brick";
			// 
			// pictureBox86
			// 
			this->pictureBox86->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox86->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.Image")));
			this->pictureBox86->Location = System::Drawing::Point(182, 119);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(40, 20);
			this->pictureBox86->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox86->TabIndex = 85;
			this->pictureBox86->TabStop = false;
			this->pictureBox86->Tag = L"brick";
			// 
			// pictureBox87
			// 
			this->pictureBox87->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox87->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox87.Image")));
			this->pictureBox87->Location = System::Drawing::Point(136, 96);
			this->pictureBox87->Name = L"pictureBox87";
			this->pictureBox87->Size = System::Drawing::Size(40, 20);
			this->pictureBox87->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox87->TabIndex = 86;
			this->pictureBox87->TabStop = false;
			this->pictureBox87->Tag = L"brick";
			// 
			// pictureBox88
			// 
			this->pictureBox88->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox88->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox88.Image")));
			this->pictureBox88->Location = System::Drawing::Point(136, 187);
			this->pictureBox88->Name = L"pictureBox88";
			this->pictureBox88->Size = System::Drawing::Size(40, 20);
			this->pictureBox88->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox88->TabIndex = 87;
			this->pictureBox88->TabStop = false;
			this->pictureBox88->Tag = L"brick";
			// 
			// pictureBox89
			// 
			this->pictureBox89->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox89->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox89.Image")));
			this->pictureBox89->Location = System::Drawing::Point(182, 97);
			this->pictureBox89->Name = L"pictureBox89";
			this->pictureBox89->Size = System::Drawing::Size(40, 20);
			this->pictureBox89->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox89->TabIndex = 88;
			this->pictureBox89->TabStop = false;
			this->pictureBox89->Tag = L"brick";
			// 
			// pictureBox90
			// 
			this->pictureBox90->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox90->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox90.Image")));
			this->pictureBox90->Location = System::Drawing::Point(182, 187);
			this->pictureBox90->Name = L"pictureBox90";
			this->pictureBox90->Size = System::Drawing::Size(40, 20);
			this->pictureBox90->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox90->TabIndex = 89;
			this->pictureBox90->TabStop = false;
			this->pictureBox90->Tag = L"brick";
			// 
			// pictureBox91
			// 
			this->pictureBox91->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox91->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox91.Image")));
			this->pictureBox91->Location = System::Drawing::Point(228, 186);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(40, 20);
			this->pictureBox91->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox91->TabIndex = 90;
			this->pictureBox91->TabStop = false;
			this->pictureBox91->Tag = L"brick";
			// 
			// pictureBox92
			// 
			this->pictureBox92->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox92->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox92.Image")));
			this->pictureBox92->Location = System::Drawing::Point(228, 163);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(40, 20);
			this->pictureBox92->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox92->TabIndex = 91;
			this->pictureBox92->TabStop = false;
			this->pictureBox92->Tag = L"brick";
			// 
			// pictureBox93
			// 
			this->pictureBox93->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox93->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox93.Image")));
			this->pictureBox93->Location = System::Drawing::Point(228, 141);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(40, 20);
			this->pictureBox93->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox93->TabIndex = 92;
			this->pictureBox93->TabStop = false;
			this->pictureBox93->Tag = L"brick";
			// 
			// pictureBox94
			// 
			this->pictureBox94->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox94->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox94.Image")));
			this->pictureBox94->Location = System::Drawing::Point(228, 118);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(40, 20);
			this->pictureBox94->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox94->TabIndex = 93;
			this->pictureBox94->TabStop = false;
			this->pictureBox94->Tag = L"brick";
			// 
			// pictureBox95
			// 
			this->pictureBox95->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox95->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox95.Image")));
			this->pictureBox95->Location = System::Drawing::Point(228, 96);
			this->pictureBox95->Name = L"pictureBox95";
			this->pictureBox95->Size = System::Drawing::Size(40, 20);
			this->pictureBox95->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox95->TabIndex = 94;
			this->pictureBox95->TabStop = false;
			this->pictureBox95->Tag = L"brick";
			// 
			// pictureBox96
			// 
			this->pictureBox96->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox96->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox96.Image")));
			this->pictureBox96->Location = System::Drawing::Point(272, 186);
			this->pictureBox96->Name = L"pictureBox96";
			this->pictureBox96->Size = System::Drawing::Size(40, 20);
			this->pictureBox96->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox96->TabIndex = 95;
			this->pictureBox96->TabStop = false;
			this->pictureBox96->Tag = L"brick";
			// 
			// pictureBox97
			// 
			this->pictureBox97->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox97->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox97.Image")));
			this->pictureBox97->Location = System::Drawing::Point(272, 163);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(40, 20);
			this->pictureBox97->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox97->TabIndex = 96;
			this->pictureBox97->TabStop = false;
			this->pictureBox97->Tag = L"brick";
			// 
			// pictureBox98
			// 
			this->pictureBox98->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox98->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox98.Image")));
			this->pictureBox98->Location = System::Drawing::Point(272, 141);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(40, 20);
			this->pictureBox98->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox98->TabIndex = 97;
			this->pictureBox98->TabStop = false;
			this->pictureBox98->Tag = L"brick";
			// 
			// pictureBox99
			// 
			this->pictureBox99->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox99->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox99.Image")));
			this->pictureBox99->Location = System::Drawing::Point(272, 118);
			this->pictureBox99->Name = L"pictureBox99";
			this->pictureBox99->Size = System::Drawing::Size(40, 20);
			this->pictureBox99->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox99->TabIndex = 98;
			this->pictureBox99->TabStop = false;
			this->pictureBox99->Tag = L"brick";
			// 
			// pictureBox100
			// 
			this->pictureBox100->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox100.Image")));
			this->pictureBox100->Location = System::Drawing::Point(272, 96);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(40, 20);
			this->pictureBox100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox100->TabIndex = 99;
			this->pictureBox100->TabStop = false;
			this->pictureBox100->Tag = L"brick";
			// 
			// ball
			// 
			this->ball->BackColor = System::Drawing::Color::Transparent;
			this->ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ball.Image")));
			this->ball->Location = System::Drawing::Point(378, 449);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(25, 25);
			this->ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->ball->TabIndex = 100;
			this->ball->TabStop = false;
			// 
			// paletka
			// 
			this->paletka->BackColor = System::Drawing::Color::Transparent;
			this->paletka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"paletka.Image")));
			this->paletka->Location = System::Drawing::Point(331, 473);
			this->paletka->Name = L"paletka";
			this->paletka->Size = System::Drawing::Size(120, 20);
			this->paletka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->paletka->TabIndex = 101;
			this->paletka->TabStop = false;
			// 
			// hp
			// 
			this->hp->AutoSize = true;
			this->hp->BackColor = System::Drawing::Color::Transparent;
			this->hp->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hp->ForeColor = System::Drawing::Color::Yellow;
			this->hp->Location = System::Drawing::Point(698, 2);
			this->hp->Name = L"hp";
			this->hp->Size = System::Drawing::Size(61, 75);
			this->hp->TabIndex = 102;
			this->hp->Text = L"3";
			// 
			// pkt
			// 
			this->pkt->AutoSize = true;
			this->pkt->BackColor = System::Drawing::Color::Transparent;
			this->pkt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pkt->ForeColor = System::Drawing::Color::Yellow;
			this->pkt->Location = System::Drawing::Point(251, 3);
			this->pkt->Name = L"pkt";
			this->pkt->Size = System::Drawing::Size(61, 75);
			this->pkt->TabIndex = 103;
			this->pkt->Text = L"0";
			// 
			// timer_pilka
			// 
			this->timer_pilka->Interval = 1;
			this->timer_pilka->Tick += gcnew System::EventHandler(this, &Gra::timer_pilka_Tick);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::Transparent;
			this->exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit.Image")));
			this->exit->Location = System::Drawing::Point(411, 319);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(171, 83);
			this->exit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->exit->TabIndex = 104;
			this->exit->TabStop = false;
			this->exit->Visible = false;
			this->exit->Click += gcnew System::EventHandler(this, &Gra::finish_Click);
			// 
			// again
			// 
			this->again->BackColor = System::Drawing::Color::Transparent;
			this->again->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"again.Image")));
			this->again->Location = System::Drawing::Point(154, 320);
			this->again->Name = L"again";
			this->again->Size = System::Drawing::Size(171, 83);
			this->again->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->again->TabIndex = 105;
			this->again->TabStop = false;
			this->again->Visible = false;
			this->again->Click += gcnew System::EventHandler(this, &Gra::again_Click);
			// 
			// speed1
			// 
			this->speed1->BackColor = System::Drawing::Color::Transparent;
			this->speed1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"speed1.Image")));
			this->speed1->Location = System::Drawing::Point(136, 139);
			this->speed1->Name = L"speed1";
			this->speed1->Size = System::Drawing::Size(40, 23);
			this->speed1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->speed1->TabIndex = 106;
			this->speed1->TabStop = false;
			this->speed1->Visible = false;
			// 
			// speed2
			// 
			this->speed2->BackColor = System::Drawing::Color::Transparent;
			this->speed2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"speed2.Image")));
			this->speed2->Location = System::Drawing::Point(682, 117);
			this->speed2->Name = L"speed2";
			this->speed2->Size = System::Drawing::Size(40, 23);
			this->speed2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->speed2->TabIndex = 107;
			this->speed2->TabStop = false;
			this->speed2->Visible = false;
			// 
			// timerBonuses
			// 
			this->timerBonuses->Enabled = true;
			this->timerBonuses->Tick += gcnew System::EventHandler(this, &Gra::timerBonuses_Tick);
			// 
			// long1
			// 
			this->long1->BackColor = System::Drawing::Color::Transparent;
			this->long1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"long1.Image")));
			this->long1->Location = System::Drawing::Point(244, 238);
			this->long1->Name = L"long1";
			this->long1->Size = System::Drawing::Size(41, 23);
			this->long1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->long1->TabIndex = 108;
			this->long1->TabStop = false;
			this->long1->Visible = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(402, 237);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(40, 23);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 109;
			this->pictureBox30->TabStop = false;
			// 
			// immortal
			// 
			this->immortal->BackColor = System::Drawing::Color::Transparent;
			this->immortal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"immortal.Image")));
			this->immortal->Location = System::Drawing::Point(11, 508);
			this->immortal->Name = L"immortal";
			this->immortal->Size = System::Drawing::Size(775, 9);
			this->immortal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->immortal->TabIndex = 110;
			this->immortal->TabStop = false;
			this->immortal->Visible = false;
			// 
			// immortalBon
			// 
			this->immortalBon->BackColor = System::Drawing::Color::Transparent;
			this->immortalBon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"immortalBon.Image")));
			this->immortalBon->Location = System::Drawing::Point(557, 236);
			this->immortalBon->Name = L"immortalBon";
			this->immortalBon->Size = System::Drawing::Size(40, 23);
			this->immortalBon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->immortalBon->TabIndex = 111;
			this->immortalBon->TabStop = false;
			// 
			// fastBall
			// 
			this->fastBall->BackColor = System::Drawing::Color::Transparent;
			this->fastBall->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fastBall.Image")));
			this->fastBall->Location = System::Drawing::Point(479, 233);
			this->fastBall->Name = L"fastBall";
			this->fastBall->Size = System::Drawing::Size(41, 23);
			this->fastBall->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->fastBall->TabIndex = 112;
			this->fastBall->TabStop = false;
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(794, 550);
			this->Controls->Add(this->fastBall);
			this->Controls->Add(this->immortalBon);
			this->Controls->Add(this->immortal);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->long1);
			this->Controls->Add(this->speed2);
			this->Controls->Add(this->speed1);
			this->Controls->Add(this->again);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->pkt);
			this->Controls->Add(this->hp);
			this->Controls->Add(this->paletka);
			this->Controls->Add(this->ball);
			this->Controls->Add(this->pictureBox100);
			this->Controls->Add(this->pictureBox99);
			this->Controls->Add(this->pictureBox98);
			this->Controls->Add(this->pictureBox97);
			this->Controls->Add(this->pictureBox96);
			this->Controls->Add(this->pictureBox95);
			this->Controls->Add(this->pictureBox94);
			this->Controls->Add(this->pictureBox93);
			this->Controls->Add(this->pictureBox92);
			this->Controls->Add(this->pictureBox91);
			this->Controls->Add(this->pictureBox90);
			this->Controls->Add(this->pictureBox89);
			this->Controls->Add(this->pictureBox88);
			this->Controls->Add(this->pictureBox87);
			this->Controls->Add(this->pictureBox86);
			this->Controls->Add(this->pictureBox85);
			this->Controls->Add(this->pictureBox84);
			this->Controls->Add(this->speedBox1);
			this->Controls->Add(this->pictureBox82);
			this->Controls->Add(this->pictureBox81);
			this->Controls->Add(this->pictureBox80);
			this->Controls->Add(this->pictureBox79);
			this->Controls->Add(this->pictureBox78);
			this->Controls->Add(this->pictureBox77);
			this->Controls->Add(this->pictureBox76);
			this->Controls->Add(this->pictureBox75);
			this->Controls->Add(this->pictureBox74);
			this->Controls->Add(this->pictureBox73);
			this->Controls->Add(this->pictureBox72);
			this->Controls->Add(this->pictureBox71);
			this->Controls->Add(this->pictureBox70);
			this->Controls->Add(this->pictureBox69);
			this->Controls->Add(this->pictureBox68);
			this->Controls->Add(this->longBox1);
			this->Controls->Add(this->pictureBox66);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->speedBox2);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Gra";
			this->Text = L"Gra";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::ruch_paletka);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::stop_paletka);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->longBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paletka))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->again))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speed1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speed2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->long1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->immortal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->immortalBon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fastBall))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int x = 4, y = 7, i_hp = 3, point = 0;
		char kierunek;
		bool blokada = false;
#pragma endregion
		private: Void destroy(System::Windows::Forms::Control^ cegla)
		{
			if ((ball->Top + ball->Height >= cegla->Top) && (ball->Left <= cegla->Left + cegla->Width) &&
				(ball->Top <= cegla->Top + cegla->Height) && (ball->Left + ball->Width >= cegla->Left) &&
				(cegla->Visible == true))
			{
				x = -x;
				y = -y;
				cegla->Visible = false;
				point += 10;
				pkt->Text = Convert::ToString(point);
			}
		}
	private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer_pilka_Tick(System::Object^  sender, System::EventArgs^  e) {

	for each(Control^ cegla in this->Controls)
	{
		if (cegla->Tag == "brick")
		{
			destroy(cegla);
		}
	}
	 ball->Left -= x;
	 ball->Top -= y;
	 // odbicie od scianki prawej:
	 if (ball->Left >= Gra::Width - ball->Width - 27) x = -x;

	 // odbicie od scianki górnej
	 if (ball->Top <= 75) y = -y;

	 // odbicie od scianki lewej:
	 if (ball->Left <= 5) x = -x;
	 //paletka w prawo
	 if ((kierunek == 'R') && (paletka->Left <= Gra::Width - paletka->Width - 35))
	 {
		 paletka->Left += 20;
		 if (x == 0 && y == 0)ball->Left += 20;
	 }
	 if ((kierunek == 'L') && (paletka->Left >= 12))
	 {
		 paletka->Left -= 20;
		 if (x == 0 && y == 0)ball->Left -= 20;
	 }
	 //odbicie od paletki
	 if ((ball->Left > paletka->Left) && (ball->Left < paletka->Left + paletka->Width) &&
		 (ball->Top + ball->Height > paletka->Top))
	 {
		 y = -y;
	 }
	 else if (ball->Top + ball->Height > paletka->Top + 75)//skucha
	 {
		 timer_pilka->Enabled = false;
		 ball->Visible = false;
		 i_hp--;
		 hp->Text = Convert::ToString(i_hp);
		 point -= 10;
		 pkt->Text = Convert::ToString(point);
		 MessageBox::Show("         Skucha!!! \n   Stracono 1 zycie.\n   Pozostalo zyc: " + i_hp, "Arkanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		 
		 if (i_hp > 0)
		 {
			 paletka->Left = 331;
			 paletka->Top = 473;
			 ball->Top = paletka->Top - ball->Height;
			 ball->Left = paletka->Left + paletka->Width / 2;
			 x = 6;
			 y = 6;
			 timer_pilka->Enabled = true;
			 ball->Visible = true;
		 }
		 else
		 {
			 again->Visible = true;
			 exit->Visible = true;
			 x = 0;
			 y = 0;
			 timer_pilka->Enabled = false;
			 ball->Visible = false;
			 paletka->Visible = false;
		 }
		
	 }
}
private: System::Void ruch_paletka(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Left)kierunek = 'L';
	if (e->KeyCode == Keys::Right)kierunek = 'R';
	if (e->KeyCode == Keys::Space)
	{
		timer_pilka->Enabled = true;
	}
	
}
private: System::Void stop_paletka(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	kierunek = 'S';
}
private: System::Void finish_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void again_Click(System::Object^  sender, System::EventArgs^  e) {
	i_hp = 3, point = 0;
	paletka->Left = 331;
	paletka->Top = 473;
	ball->Top = paletka->Top - ball->Height;
	ball->Left = paletka->Left + paletka->Width / 2;
	x = 6;
	y = 6;
	hp->Text = Convert::ToString(i_hp);
	pkt->Text = Convert::ToString(point);
	paletka->Visible = true;
	timer_pilka->Enabled = true;
	ball->Visible = true;
	again->Visible = false;
	exit->Visible = false;
}
private: System::Void timerBonuses_Tick(System::Object^  sender, System::EventArgs^  e) {
	int move = 5;
	if (speedBox1->Visible == false)
	{
		speed1->Visible = true;
		speed1->Top += move;
	}
	if (speedBox2->Visible == false)
	{
		speed2->Visible = true;
		speed2->Top += move;
	}
	if (longBox1->Visible == false)
	{
		long1->Visible = true;
		long1->Top += move;
	}
	if (smallBox1->Visibla == false)
	{
		small1->Visible = true;
		small1->Top += move;
	}
	if (immortalBox->Visible == false)
	{
		immortalBon->Vsible = true;
		immortal->Visible = true;
	}
}
};
}
