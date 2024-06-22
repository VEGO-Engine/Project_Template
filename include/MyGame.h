#pragma once

#include <Game.h>

namespace MyGameNamespace {
	class MyGame : public Game {
		public:
			void init() override;
			void update() override;
	};
}