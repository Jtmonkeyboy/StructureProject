//
//  List.h
//  StructureProject
//
//  Created by Runyan, Jacob on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "../Nodes/LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
public:
    //List operations
    virtual void add(Type item) = 0;
    virtual coid addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper accessor methods
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_hpp */