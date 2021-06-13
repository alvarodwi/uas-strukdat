#pragma once

#include <cstdio>
#include <functional>
#include <assert.h>

namespace util
{
    template <typename T>
    struct Node
    {
        T data;
        Node *next;
    };

    template <typename T>
    Node<T> *create_node(T data)
    {
        Node<T> *node = new Node<T>;
        node->data = data;
        node->next = nullptr;
        return node;
    }

    template <typename T>
    class LinkedList
    {
    private:
        Node<T> *head;
        int size;

        void sort_asc(Node<T> *p1, Node<T> *p2, Node<T> *p3)
        {
            if (p3 == nullptr)
            {
                return;
            }

            Node<T> *p4 = p2->next;
            while (p4 != nullptr)
            {
                if (p2->data > p4->data)
                {
                    std::swap(p2->data, p4->data);
                }
                p4 = p4->next;
            }

            sort_asc(p1, p3, p3->next);
        };

    public:
        LinkedList()
        {
            head = nullptr;
            size = 0;
        }

        int get_size() { return size; }

        bool is_empty()
        {
            return head == nullptr && size == 0;
        }

        void push_back(T data)
        {
            Node<T> *newNode = util::create_node(data);
            if (is_empty())
            {
                head = newNode;
            }
            else
            {
                Node<T> *pHelp = head;
                while (pHelp->next != nullptr)
                {
                    pHelp = pHelp->next;
                }

                pHelp->next = newNode;
            }
            size++;
        }

        void clear_list()
        {
            Node<T> *temp = nullptr;
            while (head != nullptr)
            {
                temp = head->next;
                free(head);
                head = temp;
            }

            head = nullptr;
        }

        void sort_asc()
        {
            sort_asc(head, head, head->next);
        }

        void print(std::function<void(const T &)> func)
        {
            Node<T> *pHelp = head;
            while (pHelp != nullptr)
            {
                func(pHelp->data);
                pHelp = pHelp->next;
            }
        }

        T at(int index)
        {
            Node<T> *pHelp = head;
            int count = 0;
            while (pHelp != nullptr)
            {
                if (count == index)
                    return pHelp->data;
                count++;
                pHelp = pHelp->next;
            }

            assert(0);
            exit(1);
        }
    };
}