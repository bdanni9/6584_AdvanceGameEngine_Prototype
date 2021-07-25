#pragma once

#include "pentagon_mesh.h"

Pentagon_Mesh::Pentagon_Mesh()
	: Mesh("Mesh.Pentagon")
{
	_verticies.insert(_verticies.end(), { -0.4f, -0.5f, 0.f });	// v1
	_verticies.insert(_verticies.end(), { 0.4f, -0.5f, 0.f });	// v2
	_verticies.insert(_verticies.end(), { -0.5f, 0.1f, 0.f });	// v3

	_verticies.insert(_verticies.end(), { -0.5f, 0.1f, 0.f });	// v3
	_verticies.insert(_verticies.end(), { 0.4f, -0.5f, 0.f });	// v2
	_verticies.insert(_verticies.end(), { 0.5f, 0.1f, 0.f });	// v4

	_verticies.insert(_verticies.end(), { -0.5f, 0.1f, 0.f });	// v3
	_verticies.insert(_verticies.end(), { 0.5f, 0.1f, 0.f });	// v4
	_verticies.insert(_verticies.end(), { 0.f, 0.5f, 0.f });	// v5

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.5f });
}
Pentagon_Mesh::~Pentagon_Mesh()
{
}