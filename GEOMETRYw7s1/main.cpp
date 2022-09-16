#include <iostream>
#include "shape.h"
#include "square.h"
#include "rectangle.h"
#include "ShapeCollection.h"


int main()
{   
    
    bool end = false;
    ShapeCollection shapcoll;
  while (end != true)
  {
    //ShapeCollection shapcoll;
    int zmi = 0;
    std::cout << "1) Add new shape" << std::endl ;
    std::cout << "2) Show all shapes" << std::endl;
    std::cout << "3) Show shape with the largest perimeter" << std::endl;
    std::cout << "4) Show shape with the largest area" << std::endl;
    std::cout << "5) Show formulas" << std::endl;
    std::cout << "6) exit" << std::endl;
    std::cin >> zmi;
    switch (zmi)
    {
    case 1:
        shapcoll.addShape();
        break;
    case 2:
        shapcoll.getShapesTable();
        break;    
    case 3:
        shapcoll.getLargestShapeByPerimeter();
        break;
    case 4:
        shapcoll.getLargestShapeByArea();
        break;
    case 5:
        shapcoll.ShowFormulas();
        break;
    case 6:
        end = true;
        break;
    default:
        //jakiś kod
        break;
    }
    
  }
  
   // rectangle a;
   // a.getterAllPrint();
        
     

    return 0;
}