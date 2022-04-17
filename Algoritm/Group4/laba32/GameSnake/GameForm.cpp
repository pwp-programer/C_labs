#include "GameForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GameSnake::MyForm form;
	Application::Run(% form);
}

struct Vector2 {
	int X, Y;
};

Vector2 direction;
Vector2 positionFruit;
Vector2 gameArea;


GameSnake::MyForm::MyForm(void)
{
	InitializeComponent();

	gameArea.X = 500;
	gameArea.Y = 500;

	firstLaunch = true;
	NewGame();

}


void GameSnake::MyForm::GeneratePositionFruit()
{
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(30, gameArea.X);
	positionFruit.Y = rand->Next(120, gameArea.Y);

	for (int i = 0; i < score; i++) {
		if (positionFruit.X == Serpens[i]->Location.X &&
			positionFruit.Y == Serpens[i]->Location.Y)
			GeneratePositionFruit();
	}

	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	this->Controls->Add(fruit);
}

void GameSnake::MyForm::Eating()
{
	if (Serpens[0]->Location.X == positionFruit.X && Serpens[0]->Location.Y == positionFruit.Y) {
		labelScore->Text = "Счёт: " + ++score;

		Serpens[score] = gcnew PictureBox();
		Serpens[score]->Location = Point(Serpens[score - 1]->Location.X + step * direction.X, Serpens[score - 1]->Location.Y - step * direction.Y);
		Serpens[score]->BackColor = Color::Brown;
		Serpens[score]->Width = step;
		Serpens[score]->Height = step;
		this->Controls->Add(Serpens[score]);

		GeneratePositionFruit();
	}
}

void GameSnake::MyForm::Movement()
{
	for (int i = score; i >= 1; i--) {
		Serpens[i]->Location = Serpens[i - 1]->Location;
	}
	Serpens[0]->Location = Point(Serpens[0]->Location.X + direction.X * step, Serpens[0]->Location.Y + direction.Y * step);
}

void GameSnake::MyForm::EatYourself()
{
	for (int i = 1; i < score; i++) {
		if (Serpens[0]->Location == Serpens[i]->Location) {
			GameOver();
		}
	}
}

void GameSnake::MyForm::GameOver()
{
	play = true;
	die = true;

	labelGameOver->Visible = true;
}

void GameSnake::MyForm::NewGame()
{
	if (!firstLaunch) {
		this->Controls->Remove(fruit);

		for (int i = 0; i <= score; i++)
		{
			this->Controls->Remove(Serpens[i]);
		}

		score = 0;
	}
	else
		firstLaunch = false;

	Serpens = gcnew array <PictureBox^, 1>(400);
	Serpens[0] = gcnew PictureBox();
	Serpens[0]->Location = Point(200, 200);
	Serpens[0]->BackColor = Color::RosyBrown;
	Serpens[0]->Width = step;
	Serpens[0]->Height = step;

	score = 0;
	this->Controls->Add(Serpens[0]);

	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Orange;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	timer->Interval = 100;
	timer->Start();

	direction.X = 1;
	direction.Y = 0;


	play = true;
	die = false;

	labelScore->Text = "Счёт: 0";

	labelGameOver->Visible = false;
	groupBoxSettings->Visible = false;
}

void GameSnake::MyForm::ChackBorders()
{
	if (Serpens[0]->Location.X >= RightBorder->Location.X || Serpens[0]->Location.X <= LeftBorder->Location.X) {
		GameOver();
	}

	if (Serpens[0]->Location.Y <= UpperBorder->Location.Y || Serpens[0]->Location.Y >= LowerBorder->Location.Y) {
		GameOver();
	}
}


System::Void GameSnake::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void GameSnake::MyForm::информацияОИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Правила игры : \n1.Для управления использоватьстрелки\n2.Ешьте фрукты для набора счета и увеличения змейки\n3.Нельзя есть себя и врезаться в стенку\n", "Правила игры!");

	return System::Void();
}

System::Void GameSnake::MyForm::новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();

	return System::Void();
}

System::Void GameSnake::MyForm::паузапродолжитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) {
		play = false;
	}
	else
	{
		play = true;
		timer->Start();
	}

	return System::Void();
}

System::Void GameSnake::MyForm::настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxSettings->Visible == false) {

		play = false;

		buttonApplySpeed->Enabled = true;
		numericUpDownSpeedSnake->Enabled = true;
		groupBoxSettings->Visible = true;
	}
	else {
		play = true;
		timer->Start();

		buttonApplySpeed->Enabled = false;
		numericUpDownSpeedSnake->Enabled = false;
		groupBoxSettings->Visible = false;
	}
}

System::Void GameSnake::MyForm::buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval = Convert::ToSingle(numericUpDownSpeedSnake->Value);
	if (updateInterval == 1)
	{
		timer->Interval = 100;
	}
	else if (updateInterval == 2)
	{
		timer->Interval = 50;
	}
	else if (updateInterval == 3)
	{
		timer->Interval = 35;
	}
	else if (updateInterval == 4)
	{
		timer->Interval = 25;
	}
	else if (updateInterval == 5)
	{
		timer->Interval = 20;
	}


	buttonApplySpeed->Enabled = false;
	numericUpDownSpeedSnake->Enabled = false;
	groupBoxSettings->Visible = false;

	play = true;
	timer->Start();

	return System::Void();
}

bool t = true;

System::Void GameSnake::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{

	if (e->KeyCode.ToString() == "D" || e->KeyCode.ToString() == "Right") {
		direction.X = 1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "A" || e->KeyCode.ToString() == "Left") {
		direction.X = -1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "W" || e->KeyCode.ToString() == "Up") {
		direction.Y = -1;
		direction.X = 0;
	}
	else if (e->KeyCode.ToString() == "S" || e->KeyCode.ToString() == "Down") {
		direction.Y = 1;
		direction.X = 0;
	}
	else if (e->KeyCode.ToString() == "Space" || e->KeyCode.ToString() == "F9")
	{

		if (t == true)
		{
			timer->Stop();
			MessageBox::Show("Game is paused...");
			t = false;
		}
		else
		{
			timer->Start();
			// MessageBox::Show("Continue...");
			t = true;
		}



	}
	if (e->KeyCode.ToString() == "C" || e->KeyCode.ToString() == "F1")
	{
		NewGame();
	}
	if (e->KeyCode.ToString() == "I")
	{
		if (groupBoxSettings->Visible == false) {

			play = false;

			buttonApplySpeed->Enabled = true;
			numericUpDownSpeedSnake->Enabled = true;
			groupBoxSettings->Visible = true;
		}
		else {
			play = true;
			timer->Start();

			buttonApplySpeed->Enabled = false;
			numericUpDownSpeedSnake->Enabled = false;
			groupBoxSettings->Visible = false;
		}

	}


	return System::Void();
}

void GameSnake::MyForm::MyForm_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play) {
		Movement();
		Eating();
		EatYourself();
		ChackBorders();
	}
	else if (die && play) {
		timer->Stop();
		MessageBox::Show("You died");
	}
	else if (!play && !die) {
		timer->Stop();
		MessageBox::Show("Game is paused...");
	}
}