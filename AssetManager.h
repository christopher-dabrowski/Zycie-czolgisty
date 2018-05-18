#pragma once

#include <map>
#include <string>
#include <SFML/Graphics.hpp>

/**
 * \brief Klasa do zarzadania zasobami takimi jak tekstury i czcionki. 
 */
//ToDo Wzorzec projektowy Singleton
class AssetManager
{
private:
	std::map<std::string, sf::Font> fonts;
	std::map<std::string, sf::Texture> textures;

public:
	AssetManager();

	void loadFont(const std::string& name, const std::string& fileName);
	const sf::Font& getFont(const std::string& name) const;

	void loadTexture(const std::string& name, const std::string& fileName);
	const sf::Texture& getTexture(const std::string& name) const;
};

