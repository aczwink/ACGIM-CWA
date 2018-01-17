class CfgMaterials
{
	class Water
	{
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={0.4,0.4,0.45,0};
		specularPower=6;
		emmisive[]={0,0,0,0};
	};
	
	class Terrain
	{
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={0.03,0.03,0.03,0};
		specularPower=3;
		emmisive[]={0,0,0,0};
	};

	class SpecularGlass
	{
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0,0,0,0};
		//specular[]={0.8,0.8,0.8,0};
		//specularPower=5;
		specular[] = {8,8,8,0};
		specularPower = 28;
		emmisive[]={0,0,0,0};
	};

	class Metal
	{
		ambient[] = {1, 1, 1, 1};
		diffuse[] = {1, 1, 1, 1};
		forcedDiffuse[] = {0, 0, 0, 0};
		specular[] = {0.2, 0.2, 0.3, 0};
		specularPower = 5;
		emmisive[]={0,0,0,0};
	};

	class RifleMetal
	{
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0, 0, 0, 0};
		specular[]={0.2,0.2,0.2,0};
		specularPower=5;
		emmisive[]={0,0,0,0};
	};
};