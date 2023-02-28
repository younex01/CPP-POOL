#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

namespace ft{

    template <class T>
    class iter{
        public:
            typedef T   value_type;
            typedef T*  pointer;
            typedef T&  refference;

        private:
            pointer ptr;

        public:
            iter(pointer ptr){
                this->ptr = ptr;
            }
            ~iter(){}
            refference operator*(){
                return (*ptr);
            }
            refference operator++(int){
                ptr++;
                return (*ptr);
            }
            refference operator++(){
                pointer tmp;
                ptr++;
                return (*tmp);
            }
            bool    operator==(const iter &it){
                return (this->ptr == it.ptr);
            }
            bool    operator!=(const iter &it){
                return (!(*this == it));
            }
    };


    template <class T>
    class vector{
        public:
            typedef T                               value_type;
            typedef T*                              pointer;
            typedef T&                              refference;
            typedef iter<value_type>                iterator;
            typedef iter<const value_type>          const_itertor;

        private:
            pointer _arr;
            size_t  _size;
            size_t  _cap;

        public:
            vector(){
                _arr = new value_type[20];
                _size = 0;
                _cap = 20;
            }
            ~vector(){
                delete _arr;
            }
            void    push_back(const value_type &val){
                if (_size == _cap)
                    throw std::exception();
                _arr[_size] = val;
                _size++;
            }
            iterator begin(){
                return (iterator(_arr));
            }
            iterator end(){
                return (iterator(_arr + _size));
            }
    };

    template <class T, class Container = std::vector<int> >
    class stack{
        public:
            typedef Container                                container_type;
            typedef typename container_type::value_type      value_type;
            typedef typename container_type::reference       reference;
            typedef size_t                                   size_type;

        protected:
            container_type c;
        
        public:
            stack(){}
            ~stack(){}
            void    push(const value_type &val){
                c.push_back(val);
            }
            size_type   size(){
                return (c.size());
            }
    };

    template <class T>
    class iterStack : public std::stack<int>{
        public:
            typedef typename container_type::iterator   iterator;
            typedef typename container_type::const_iterator const_iterator;
            typedef typename container_type::reverse_iterator   reverse_iterator;
            typedef typename container_type::const_reverse_iterator const_reverse_iterator;

            iterator begin(){
                return (this->c.begin());
            }
            iterator end(){
                return (this->c.end());
            }
            const_iterator begin() const{
                return (this->c.begin());
            }
            const_iterator end() const{
                return (this->c.end());
            }

            reverse_iterator rbegin(){
                return (this->c.rbegin());
            }
            reverse_iterator rend(){
                return (this->c.rend());
            }
            const_reverse_iterator rbegin()const{
                return (this->c.rbegin());
            }
            const_reverse_iterator rend()const{
                return (this->c.rend());
            }
    };

    template <class iter, class t>
    iter find(iter begin, iter end, const t &val){
        iter it = begin;
        for (; it != end; it++)
        {
            if (*it == val)
                return (it);
        }
        return (end);
    }
}


int main()
{
    // std::stack<int, ft::vector<int> > s;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(33);
    std::vector<int>iterator iter = std::find();
    if (iter == v.end()) std::cout << "value coulnd't be found" << std::endl;
    else std::cout << *(iter) << std::endl;
    return (0);
}