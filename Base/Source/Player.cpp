#include "Player.h"
#include "Input_PI.h"

PlayerClass::PlayerClass() 
	:movementSpeed(0)
	, PlayerPos(0, 0, 0)
	, PokeballPos(0, 0, 0)
{
}

PlayerClass::~PlayerClass()
{
}

void PlayerClass::Init()
{
	movementSpeed = 10;
	PlayerPos = Render_PI::Window_Scale();
	PokeballPos = PlayerPos;
}

void PlayerClass::Update(double dt)
{
	if (Input_PI::pointer()->HaveBeenPressed[Input_PI::All_Control])
	{
		if (Input_PI::pointer()->IsBeingPressed[Input_PI::Forward] == true)
		{
			PlayerPos.y += movementSpeed * dt;
		}
		if (Input_PI::pointer()->IsBeingPressed[Input_PI::Backward] == true)
		{
			PlayerPos.y -= movementSpeed * dt;
		}
		if (Input_PI::pointer()->IsBeingPressed[Input_PI::Leftward] == true)
		{
			PlayerPos.x -= movementSpeed * dt;
		}
		if (Input_PI::pointer()->IsBeingPressed[Input_PI::Rightward] == true)
		{
			PlayerPos.x += movementSpeed * dt;
		}
		if (Input_PI::pointer()->IsBeingPressed[Input_PI::Gun_Shoot] == true)
		{
			
		}
	}
}