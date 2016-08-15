#ifndef PLAYER_H
#define PLAYER_H
#include "Support_Codes.h"
#include "Render_PI.h"

class PlayerClass
{
public:
	static PlayerClass* Pointer() { return pointer; };
	virtual void Init();
	virtual void Update(double dt);
private:
	PlayerClass();
	~PlayerClass();
	static PlayerClass *pointer;
	Vector3 PlayerPos, PokeballPos;
	int movementSpeed;
};

#endif