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

#Position is given
    def add_element_in_between(self,data,pos):
        temp=self.head

        cnt=1

        while cnt<pos-1:
            temp=temp.next
            cnt+=1

        new_node =Node(data)
        new_node.next=temp.next
        
        temp.next=new_node

# Node Data is given
    def add_element_before_node(self,data,given_node_data):

        if self.head is None:
            print("Linked List is empty")
            return
        if self.head.data==given_node_data:
            new_node=Node(data)
            new_node.next=self.head
            self.head=new_node
            return

        temp=self.head

        while temp is not None:
            if temp.next.data==given_node_data:
                break
            temp=temp.next

        if temp is None:
            print("Given node is not present")
        else:
            new_node=Node(data)
            new_node.next=temp.next
            temp.next=new_node





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

l.add_element_before_node(77,334)
l.print_LL()

l.add_element_before_node(11,2)
l.print_LL()