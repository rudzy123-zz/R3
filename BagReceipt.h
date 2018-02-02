/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BagReceipt.h
 * Author: RudyM
 *
 * Created on February 2, 2018, 12:46 AM
 */

#ifndef BAG_RECEIPT_
#define BAG_RECEIPT_

#include <vector>

#include "BagTemplate.h"

/** @class ArrayBag ArrayBag.h "ArrayBag.h"
 *
 *  Specification of an array-based ADT bag. */
template <typename ItemType>
class BagReceipt : public BagTemplate<ItemType> {
  private:
   /** Maximum capacity of this bag. */
   static const int DEFAULT_CAPACITY = 6;

   /** Data storage. */
   ItemType *items =new ItemType[DEFAULT_CAPACITY];

   /** Parallel Array to items array  */
   bool *inuse= new bool[DEFAULT_CAPACITY];
   
   /** Number of items in this bag. */
   int itemCount = 0;

   /** Maximum capacity of this bag. */
   int maxItems = DEFAULT_CAPACITY;

   /** Gets the index of target in the array 'items' in this bag.
    *
    * @param target The ItemType value to retrieve the index of.
    *
    * @return The index of the element in the array 'items' that
    *         contains 'target' or -1 if the array does not contain
    *         'target'. */
   int getIndexOf(const ItemType& target) const;

  public:
   /** Default constructor. */
   BagReceipt();

   /** Virtual destructor. */
   virtual ~BagReceipt() = default;

   virtual int getCurrentSize() const;

   virtual bool isEmpty() const;

   virtual int add(const ItemType& newEntry);

   virtual ItemType remove(const ItemType& anEntry);

   virtual void clear();

   virtual int getFrequencyOf(const ItemType& anEntry) const;

   virtual bool contains(const ItemType& anEntry) const;

   virtual std::vector<ItemType> toVector() const;
};

#include "BagReceipt.cpp"

#endif

