#pragma once
#include "layer.h"


namespace vega { namespace graphics {


		class TileLayer : public Layer
		{
		public:
			TileLayer(Shader* shader);
			~TileLayer();
		};


	}
}