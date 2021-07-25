#pragma once

#include "game_object.h"

class Meme_Crate : public Game_Object
{
public:
	Meme_Crate(const char* id);
	~Meme_Crate();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config, const Input* input) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
};