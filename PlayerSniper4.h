#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

class PlayerSniper4{
	Texture texture;
	Sprite sprite;
	Sprite sprite2;
	Sprite sprite3;
	Sprite sprite4;




public:

	PlayerSniper4(){



		texture.loadFromFile("rcircle.png");
		sprite.setScale(1.f, 1.f);
		sprite.setTexture(texture);
		sprite.setPosition(0, 0);
		sprite.getOrigin();
		sprite2.setTexture(texture);
		sprite2.setPosition(680, 0);
		sprite3.setTexture(texture);
		sprite3.setPosition(0, 480);
		sprite4.setTexture(texture);
		sprite4.setPosition(680, 480);
	}

	void Dibujar(RenderWindow *App){
		App->draw(sprite);
		App->draw(sprite2);
		App->draw(sprite3);
		App->draw(sprite4);


	}

	void Posicionar(float x, float y){

		sprite.setOrigin(64, 64);
		sprite.setPosition(x, y);
	}
	void Posicionar1(float x, float y){

		sprite2.setOrigin(64, 64);
		sprite2.setPosition(x, y);
	}
	void Posicionar2(float x, float y){

		sprite3.setOrigin(64, 64);
		sprite3.setPosition(x, y);
	}
	void Posicionar3(float x, float y){

		sprite4.setOrigin(64, 64);
		sprite4.setPosition(x, y);
	}
	Vector2f ObtenerPosicion(){
		return sprite.getPosition();
	}

	void FijarPos(float x, float y){
		
	 sprite.setPosition(x,y);
		
	}


}
	
	

;
