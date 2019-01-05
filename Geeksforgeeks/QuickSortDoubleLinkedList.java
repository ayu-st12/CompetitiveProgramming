 import java.util.*;
import java.lang.*;
class Node
{
    int data;
	Node next;
	Node prev;
	
	Node(int val)
	{
		data = val;
		next = prev = null;
	} 
}
public class QsortDLL
{
    static Node head;
    
    
    public static void addToTheLast(Node node)
	{
		if(head == null)
			head = node;
		else
		{
			Node temp = head;
			while(temp.next != null)
				temp = temp.next;
			
			temp.next = node;
			node.prev = temp;
			
		}
	}
	
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    
	    while(t-- > 0)
	    {
	        int n = sc.nextInt();
	        int a1 = sc.nextInt();
			Node head = new Node(a1);
			addToTheLast(head);
			for(int i = 1; i < n; i++)
			{
			    int a = sc.nextInt();
			    addToTheLast(new Node(a));
			}
			
			quickSort(head);
			printList(head);
			System.out.println();
	    }
	}
	
	public static void quickSort(Node head)
	{
	    Node h = lastNode(head);
	    _quickSort(head, h);
	}
	
	public static Node lastNode(Node node)
	{
	    while(node != null && node.next != null)
	      node = node.next;
	      
	      return node;
	}
	
	public static void _quickSort(Node l, Node h)
	{
	    if (h != null && l != h && l != h.next)
    {
        Node p = partition(l, h);
        _quickSort(l, p.prev);
        _quickSort(p.next, h);
    }
	}
	
	
	
	public static void printList(Node node)
	{
	    while(node != null)
	    {
	        System.out.print(node.data + "  ");
	        node = node.next;
	    }
	}

    public static Node partition(Node l, Node h)
    {
        int x  = h.data;
 
    
    Node i = l.prev;
 
   
    for (Node j = l; j != h; j = j.next)
    {
        if (j.data <= x)
        {
            
            i = (i == null)? l : i.next;
 
            int t = i.data;
            i.data = j.data;
            j.data = t;
        }
    }
    i = (i == null)? l : i.next; 
    int t = i.data;
    i.data = h.data;
    h.data = t;
    return i;
    }    
    
}
