//
//  LinearNode.hpp
//  StructureProject
//
//  Created by Runyan, Jacob on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
    //This section is available to the subclasses of LinearNode
protected:
    LinearNode<Type> * next;
public:
    //Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

//Constructors

/**
 This contructor is used for building the raw structure before values are known.
 */
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this-> next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

template<class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

//Accessor methods

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}

#endif /* LinearNode_hpp */
