//
// Created by paris Walters on 2019-06-26.
//

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <mach/time_value.h>
#include "DataStr_LinkedList.h"

namespace DS_LinkedList
{
    std::size_t  list_length(const node *head_ptr)
    {
         const node *cursor;
         size_t answer;
         answer = 0;

         for(cursor = head_ptr; cursor != NULL; cursor = cursor->link() )
         {
             ++answer;
         }
         return answer;
    }

    void list_head_insert(node *&head_ptr,const node::value_type &entry)
    {
        head_ptr = new DS_LinkedList::node(entry,head_ptr);
    }

    void list_insert(node *previous_ptr, const node::value_type entry)
    {
        node *insert_ptr;
        insert_ptr = new node;

        insert_ptr->set_data(entry);
        insert_ptr->set_link(previous_ptr->link());
        previous_ptr->set_link(insert_ptr);
    }

    std::size_t TotalSum(node *head_ptr)
    {
        node *cursor;
        size_t total =head_ptr->data();

        for(cursor = head_ptr ; cursor!=NULL ; cursor= cursor->link())
        {
            total = total + cursor->data();
        }
    }

    void print_list(const node *head_ptr)
    {
        const node *cursor;
        std::cout<<"HEAD ->";
        for(cursor = head_ptr; cursor != NULL; cursor = cursor->link() )
        {
            std::cout<< cursor->data();
            std::cout<< "->";
        }
        std::cout <<"NULL" <<std::endl;
    }
}
