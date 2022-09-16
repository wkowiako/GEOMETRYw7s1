#include "ShapeCollection.h"

    void ShapeCollection::addShape()
    {
        int addD = 0;
        std::cout << "what shape you want to add  ??" << std::endl;
        std::cout << "1) square " << std::endl;
        std::cout << "2) rectangle " << std::endl;
        std::cin >> addD;
     
        if(addD == 1){
           // shape* ptr = new square; down casting ? 
            shape* ptr = new square;
            Collection.push_back(ptr);
            //Collection.push_back( &ptr);
            
        }
        else if (addD == 2) {
            shape* ptr2 = new rectangle;
            this->Collection.push_back(ptr2);
        }
    }

    void ShapeCollection::getShapesTable()
    {
        for (int i = 0 ;i < Collection.size(); i++) {
             Collection[i]->getterAllPrint();
        }       
    }

    shape* ShapeCollection::getLargestShapeByPerimeter()
    {
        int big = 0;
        shape* ptr = Collection[0]; //? ?
            for(int i = 0; i < Collection.size(); i++) {
                if (Collection[i]->getterCircuit() > big) {
                    big = Collection[i]->getterCircuit();
                    ptr = Collection[i];
                }
            }          
             ptr->getterAllPrint();
            return ptr ;
    }

    shape* ShapeCollection::getLargestShapeByArea()
    {
        int big = 0;
        shape* ptr = Collection[0];
        for (int i = 0; i < Collection.size(); i++) {
            if (Collection[i]->getterField() > big) {
                big += Collection[i]->getterField();
                ptr = Collection[i];
            }
        }
        std::cout << " biggest  Field" << ptr->getterField() << std::endl;
        return ptr;
    }

    void ShapeCollection::ShowFormulas()
    {
        int addD = 0;
        std::cout << "what formulas you want  ??" << std::endl;
        for (int i = 0; i < Collection.size(); i++) {
            std::cout << i +1 << " )";
            Collection[i]->getterAllPrint();
        }
        std::cin >> addD;
        Collection[addD-1]->ShowFormulas();
       
    }

    ShapeCollection::ShapeCollection() {}

    ShapeCollection::~ShapeCollection()
    {
        for (int i = 0; i < Collection.size(); i++) {
            Collection[i] = nullptr;
            delete Collection[i];
        }
    }
    

    
