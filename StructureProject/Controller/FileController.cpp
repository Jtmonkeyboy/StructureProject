//
//  FileController.cpp
//  StructureProject
//
//  Created by Runyan, Jacob on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude reader row
            if(rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened seperately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string filename)
{
    std :: vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude reader row
            if(rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened seperately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicVector;
}

LinkedList<CrimeData> FileController :: readCrimeDataToList(string filename)
{
    LinkedList<CrimeData> crimeList;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude reader row
            if(rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened seperately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeList;
}

LinkedList<Music> FileController :: musicDataToList(string filename)
{
    LinkedList<Music> musicList;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude reader row
            if(rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened seperately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicList;
}
