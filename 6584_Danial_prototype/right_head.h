#pragma once

#include "game_object.h"

class Right_Head : public Game_Object
{
public:
	Right_Head(const char* id);
	~Right_Head();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config, const Input* input) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;

private:
	double _total_time;
};