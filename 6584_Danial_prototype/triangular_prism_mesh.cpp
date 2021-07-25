#pragma once

#include "triangular_prism_mesh.h"


Triangular_Prism_Mesh::Triangular_Prism_Mesh()
	: Mesh("Mesh.Triangular_Prism")
{
	auto v1 = { -0.5f,  0.0f,  0.5f };
	auto v2 = {  0.5f,  0.0f,  0.5f };
	auto v3 = {  0.5f,  0.0f, -0.5f };
	auto v4 = { -0.5f,  0.0f, -0.5f };
	auto v5 = {  0.0f,  0.5f,  0.0f };

	/*
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 1.0f });	//v1
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 1.0f });	//v2
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 0.0f });	//v3
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 0.0f });	//v4
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 1.0f, 0.5f });	//v5
	*/

	//Base
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v1);


	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 0.0f });	//v3
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 1.0f });	//v2
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 1.0f });	//v1
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 0.0f });	//v4
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 0.0f });	//v3
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 1.0f });	//v1


	//Front triangle
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 1.0f });	//v1
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 1.0f });	//v2
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 1.0f, 0.5f });	//v5


	//Right triangle
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 1.0f });	//v2
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 0.0f });	//v3
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 1.0f, 0.5f });	//v5


	//Back triangle
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f, 0.0f });	//v3
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 0.0f });	//v4
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 1.0f, 0.5f });	//v5


	//Left Triangle
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 0.0f });	//v4
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f, 1.0f });	//v1
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 1.0f, 0.5f });	//v5


}

Triangular_Prism_Mesh::~Triangular_Prism_Mesh()
{
}
