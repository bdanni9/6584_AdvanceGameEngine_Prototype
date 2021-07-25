#pragma once

#include "game_object.h"

class Square_box : public Game_Object
{
public:
	Square_box(const char* id);
	~Square_box();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config, const Input*) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
};