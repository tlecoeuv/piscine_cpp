
#include "Logger.hpp"

int		main(void)
{
	Logger		logger("test.log");

	logger.log("file", "ceci est un log qui s'écrit dans un fichier");
	logger.log("console", "ceci est un log qui s'affiche dans la console");
}
