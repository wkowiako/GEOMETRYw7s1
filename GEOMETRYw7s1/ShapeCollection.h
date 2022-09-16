#pragma once
#include <vector>
#include "shape.h"
#include "square.h"
#include "rectangle.h"
class ShapeCollection
{
	
	std::vector<shape*> Collection;
	
 public:
	 void addShape();
	 void getShapesTable();
	 shape* getLargestShapeByPerimeter();
	 shape* getLargestShapeByArea();
	 void ShowFormulas();
	 ShapeCollection();
	 ~ShapeCollection();


};

