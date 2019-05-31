//
//  Controller.cpp
//  StructureProject
//
//  Created by Runyan, Jacob on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("full path to file goes here");
    usingNodes();
    testLinear();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
}
/*
void Controller :: testFiles()
{
    for(int index = 234; index <= 255; index++)
    {
        cout << index << ": contents are: " << nameOfVector[index] << endl;
    }
}*/

void Controller :: testLinear()
{
    LinearTester mytest;
}
