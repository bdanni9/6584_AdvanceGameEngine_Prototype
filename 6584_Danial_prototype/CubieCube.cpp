#include "CubieCube.h"
#include "colored_3D_shader_program.h"
#include "textured_3D_shader_program.h"
#include "assets.h"
#include "mesh.h"
#include "input.h"

#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtx/transform.hpp>

#define GLEW_STATIC
#include <glew.h>

#include <vector>
#include <math.h>

CubieCube::CubieCube(const char* id)
	: Game_Object(id)
{
	_scale.x = 1.0f;
	_scale.y = 1.0f;
	_scale.z = 1.0f;
}
CubieCube::~CubieCube()
{
}


void CubieCube::simulate_AI(const double, const Assets*, const Scene*, const Configuration*, const Input*)
{
}
void CubieCube::render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config)
{
	static double total_time = 0;
	total_time += seconds_to_simulate;



	_rotation.x = (float)total_time;
	//_rotation.y = (float)total_time;

	const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Cube");
	glm::mat4 trans = transformation(scene, config);

	
	const Textured_3D_Shader_Program* program = (Textured_3D_Shader_Program*)assets->get_asset("Shader_Program.3D.Textured");
	const Texture* texture = (Texture*)assets->get_asset("Texture.CubieCube");
	if (rendering)
	{
		program->render(config, mesh, texture, &trans);
	}
}