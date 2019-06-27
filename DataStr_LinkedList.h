//
// Created by paris Walters on 2019-06-26.
//

#ifndef DATASTR_LINKEDLIST_DATASTR_LINKEDLIST_H
#define DATASTR_LINKEDLIST_DATASTR_LINKEDLIST_H

#include <cstdlib>

namespace DS_LinkedList
{
    class node
    {
    public:
        //TypeDef
        typedef double value_type;
        //CONSTRUCTOR
        node(const value_type& init_data=value_type() , node* init_link=NULL){data_field=init_data; link_field=init_link;}
        //Modification member function
        node* link(){return link_field;}
        void set_data(const value_type& new_data){data_field=new_data;}
        void set_link(node *new_link){link_field=new_link;}
        //Const Member Function
        value_type data() const{return data_field;}
        const node *link()const{return link_field;}
    private:
        value_type  data_field;
        node *link_field;
    };

    //Function linked-listed toolkit
    std::size_t  list_length(const node *head_ptr);
    void list_head_instert(node *&head_ptr,const node::value_type &entry);
    node *list_search(node *head_ptr, const node::value_type &target);
    const node *list_search( const node *head_ptr, const node::value_type &target);
    const node *list_locate(const node *head_ptr, std::size_t position);
    void list_head_remove(node *&head_ptr);
    void list_remove(node *previous_ptr);
    void list_clear(node *&head_ptr);
    void list_copy(const node *source_ptr, node *&head_ptr, node *&tail_ptr);
    node::value_type TotalSum(node *head_ptr);
}

#endif //DATASTR_LINKEDLIST_DATASTR_LINKEDLIST_H
