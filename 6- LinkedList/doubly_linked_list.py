class Node:
    def __init__(self,data):
        self.data=data
        self.prev=None
        self.next=None

class DoublyLinkedList:
    def __init__(self):
        self.head=None

    def print_dll_fwd(self):
        if self.head is None:
            print("Double Linked list is empty")
            return
        temp=self.head

        while temp is not None:
            print(temp.data," --->",end=" ")
            temp=temp.next

        print()

    def print_dll_backward(self):
        if self.head is None:
            print("Double Linked list is empty")
            return
        temp=self.head

        while temp.next is not None:
            temp=temp.next

        while temp is not None:
             print(temp.data," --->",end=" ")
             temp=temp.prev

        print()

# add element at start
    def add_element_at_start(self,data):
        if self.head is None:
            self.head=Node(data)
        else:
            temp=self.head

            new_node=Node(data)
            new_node.next=self.head
            self.head.prev=new_node
            self.head=new_node

# add element at end
    def add_element_at_end(self,data):
        if self.head is None:
            self.head=Node(data)
        else:
            temp=self.head
            new_node=Node(data)

            while temp.next is not None:     
                temp=temp.next

            temp.next =new_node
            new_node.prev=temp


           
# add element in between anywhere
    def add_element_in_between(self,data,pos):
        if self.head is None:
            self.head=Node(data)
        else:
            temp=self.head
            cnt=1
            while cnt<pos-1:
                # We are at end of Double LL
                if temp.next is None:
                    break
                temp=temp.next
                cnt+=1

            new_node=Node(data)

            if temp.next is None:
                temp.next =new_node
                new_node.prev=temp
            else:         
                new_node.prev=temp
                new_node.next=temp.next
                
                temp.next.prev=new_node
                temp.next=new_node

            

dl =DoublyLinkedList()

# add element at start
dl.add_element_at_start(12)
dl.add_element_at_start(4)
dl.add_element_at_start(8)

dl.print_dll_fwd()
dl.print_dll_backward()
print("***********************************************")

# add element at end
dl.add_element_at_end(33)
dl.add_element_at_end(44)
dl.add_element_at_end(55)

dl.print_dll_fwd()
dl.print_dll_backward()
print("***********************************************")

# add element in between anywhere
dl.add_element_in_between(40,14) #This will be added to last
dl.add_element_in_between(30,2)
dl.add_element_in_between(56,8)


dl.print_dll_fwd()
dl.print_dll_backward()
print("***********************************************")


