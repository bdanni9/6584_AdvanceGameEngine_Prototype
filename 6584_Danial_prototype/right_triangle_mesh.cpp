#pragma once
#include "right_triangle_mesh.h"

Right_Triangle_Mesh::Right_Triangle_Mesh()
	: Mesh("Mesh.Right")
{
	_verticies.insert(_verticies.end(), { -0.5f, -0.5f, 0.f }); // v1
	_verticies.insert(_verticies.end(), { 0.5f, -0.5f, 0.f });   // v2
	_verticies.insert(_verticies.end(), { 0.5f, 0.5f, 0.f });  // v3

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 1.0f });
}
Right_Triangle_Mesh::~Right_Triangle_Mesh()
{
}