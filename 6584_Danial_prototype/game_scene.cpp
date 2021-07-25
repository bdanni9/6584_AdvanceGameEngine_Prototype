#include "game_scene.h"
#include "pointy_head.h"
#include "blocky_boy.h"
#include "airplane.h"
#include "Cubie.h"
#include "input.h"
#include "right_head.h"
#include "Pantagon.h"
#include "CubieCube.h"
#include "Crate.h"
#include "Square_box.h"
#include "Pyramid.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{

	//Pointy_Head* pointy_head = new Pointy_Head("Game_Object.Pointy_Head");
	//_game_objects[pointy_head->id()] = pointy_head;
	
	//Airplane* airplane = new Airplane("Game_Object.Airplane");
	//_game_objects[airplane->id()] = airplane;
	
	//Cubie* Cubie = new Cubie("Game_Object.Crate");
	//_game_objects[Cubie->id()] = Cubie;

	//Blocky_Boy* blocky_boy = new Blocky_Boy("Game_Object.Blocky_Boy");
	//_game_objects[blocky_boy->id()] = blocky_boy;

	Square_box* square_box = new Square_box("Game_Object.Square_box");
	_game_objects[square_box->id()] = square_box;

	Right_Head* right_head = new Right_Head("Game_Object.Right");
	_game_objects[right_head->id()] = right_head;

	Pantagon* pantagon = new Pantagon("Game_Object.Pantagon");
	_game_objects[pantagon->id()] = pantagon;

	CubieCube* cubieCube = new CubieCube("Game_Object.CubieCube");
	_game_objects[cubieCube->id()] = cubieCube;
	
	Crate* crate = new Crate("Game_Object.Crate");
	_game_objects[crate->id()] = crate;

	Pyramid* pyramid = new Pyramid("Game_Object.Pyramid");
	_game_objects[pyramid->id()] = pyramid;
}

Game_Scene::~Game_Scene()
{

}

void Game_Scene::update(const double seconds_to_simulate, Input* input)
{
	if(input->is_button_state(Input::Button::FORWARD, Input::Button_State::DOWN))
	{
		_camera_position += _camera_forward * (float)seconds_to_simulate;
	}
	if(input->is_button_state(Input::Button::LEFT, Input::Button_State::DOWN))
	{
		_camera_position -= glm::cross(_camera_forward, _camera_up) * (float)seconds_to_simulate;
	}
	if(input->is_button_state(Input::Button::BACKWARD, Input::Button_State::DOWN))
	{
		_camera_position -= _camera_forward * (float)seconds_to_simulate;
	}
	if(input->is_button_state(Input::Button::RIGHT, Input::Button_State::DOWN))
	{
		_camera_position += glm::cross(_camera_forward, _camera_up) * (float)seconds_to_simulate;
	}
	if (input->is_button_state(Input::Button::ONE, Input::Button_State::PRESSED))
	{
		clear();
		_game_objects["Game_Object.Square_box"]->should_render();
	}
	if (input->is_button_state(Input::Button::TWO, Input::Button_State::PRESSED))
	{
		clear();
		_game_objects["Game_Object.Right"]->should_render();
	}
	if (input->is_button_state(Input::Button::THREE, Input::Button_State::PRESSED))
	{
		clear();
		_game_objects["Game_Object.Pantagon"]->should_render();
	}
	if (input->is_button_state(Input::Button::FOUR, Input::Button_State::PRESSED))
	{
		clear();
		_game_objects["Game_Object.CubieCube"]->should_render();
	}
	if (input->is_button_state(Input::Button::FIVE, Input::Button_State::PRESSED))
	{
		clear();
		_game_objects["Game_Object.Crate"]->should_render();
	}
	if (input->is_button_state(Input::Button::SIX, Input::Button_State::PRESSED))
	{
		clear();
		_game_objects["Game_Object.Pyramid"]->should_render();
	}
}

void Game_Scene::clear()
{
	_game_objects["Game_Object.Square_box"]->shouldnt_render();
	_game_objects["Game_Object.Right"]->shouldnt_render();
	_game_objects["Game_Object.Pantagon"]->shouldnt_render();
	_game_objects["Game_Object.CubieCube"]->shouldnt_render();
	_game_objects["Game_Object.Crate"]->shouldnt_render();
	_game_objects["Game_Object.Pyramid"]->shouldnt_render();
}
