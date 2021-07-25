#include "right_head.h"
#include "colored_3D_shader_program.h"
#include "assets.h"

#define GLEW_STATIC
#include <glew.h>

#include <vector>
#include <math.h>

Right_Head::Right_Head(const char* id)
	: Game_Object(id)
{
	_total_time = 0;

	_translation.x -= 0.0f;
	_translation.y += 0.0f;

	_scale.x = 1.0f;
	_scale.y = 1.0f;
	_scale.z = 1.0f;
}
Right_Head::~Right_Head()
{
}


void Right_Head::simulate_AI(const double, const Assets*, const Scene*, const Configuration*, const Input*)
{

}
void Right_Head::render(const double s, const Assets* assets, const Scene* scene, const Configuration* config)
{
	static double time = 0;
	time += s;

	std::vector<GLfloat> colors =
	{
		1.0f, 0.0f, 0.0f, 1.0f,
		0.0f, 1.0f, 0.0f, 1.0f,
		0.0f, 0.0f, 1.0f, 1.0f,
	};

	const Colored_3D_Shader_Program* program = (Colored_3D_Shader_Program*)assets->get_asset("Shader_Program.3D.Colored");
	const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Right");

	glm::mat4 trans = transformation(scene, config);

	if (rendering)
	{
		program->render(config, mesh, &colors, &trans);
	}
}