#pragma once

#include "game_object.h"

class CubieCube : public Game_Object
{
public:
	CubieCube(const char* id);
	~CubieCube();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config, const Input* input) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
};