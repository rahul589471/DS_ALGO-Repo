class Node:
    def __init__(self,data):
            self.data =data
            self.next =None


class LinkedList:
    def __init__(self):
        self.head=None

    def print_LL(self):
        if self.head is None:
            print("Linkedlist is empty")
        else:
            temp =self.head
            while temp is not None:
                print(temp.data, end= "--->")
                temp=temp.next
            
            print()

    def add_element_in_beginning(self,data):
        if self.head is None:
            self.head=Node(data)
        else:
            temp =Node(data)
            temp.next=self.head
            self.head=temp

    def add_element_at_end(self,data):
        if self.head is None:
            self.head=Node(data)
        else:
            temp=self.head
            while temp.next is not None:
                temp =temp.next
            
            temp.next=Node(data)

    def add_element_in_between(self,data,pos):
        temp=self.head

        cnt=1

        while cnt<pos-1:
            temp=temp.next
            cnt+=1

        new_node =Node(data)
        new_node.next=temp.next
        
        temp.next=new_node


    def remove_element(self,data)



l =LinkedList()
l.print_LL()

l.add_element_in_beginning(5)
l.add_element_in_beginning(100)
l.add_element_in_beginning(2)
l.print_LL()

l.add_element_at_end(99)
l.add_element_at_end(334)
l.print_LL()

l.add_element_in_between(22,4)
l.print_LL()
