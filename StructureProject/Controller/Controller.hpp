//
//  Controller.hpp
//  StructureProject
//
//  Created by Runyan, Jacob on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "FileController.hpp"
using namespace std;

class Controller
{
private:
    LinearTester myTest;
public:
    void start();
    void usingNodes();
    void testFiles();
    void testLinear();
};


#endif /* Controller_hpp */
