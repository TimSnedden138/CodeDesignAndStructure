#include"MinMax.h"
#include<iostream>
#include"raylib.h"
#include"gameObject.h"
#include"Soldier.h"
#include<string>
int main() {
	//Min-Max
	/*int Result = 0;
	int val1 = 0;
	int val2 = 0;
	float val3 = 0.0f;
	float val4 = 0.0f;
	std::cout << "Value 1:";
	std::cin >> val1;
	std::cout << "Value 2:";
	std::cin >> val2;
	std::cin >> Result;
	switch (Result)
	case'a':

	case'b':

	case'c':

	case'd':

	case'e':

	default:
		break;

		system("pause");
	*/
	//Game Object
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "Testing Lab V1");
	Texture2D Knightimg = LoadTexture("Resources/Knight/knightIdle.png");
	Soldier soldier;
	gameObject<Soldier> myKnight(soldier);
	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		myKnight.update(GetFrameTime());
		myKnight.render(Knightimg,soldier);
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		DrawText("TestingText", 200, 200, 25, RED);
		ClearBackground(BLACK);
		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
						  //--------------------------------------------------------------------------------------

	return 0;
}