# sort-a-list

给一个链表从小到大排排序。

设一个header永远指向链表头，令pre=header;给定一个cur=head。
如果有逆序，就令pre指向最后一个小于cur的数，进行排序。
具体：ListNode*tmp=pre->next;
     pre->next=cur->next;即pre指向后面的较小数
     cur->next=cur->next->next;//cur向后移
     pre->next->next=tmp;//链接原本的数，即加入了一个较小数，不能与上一行交换，若交换，pre->next->next是cur->next->next
     pre=header;
没有逆序，cur向后走。
总而言之，思想就是若发现一个小数，插入到比它小的最后一个数后面，保持cur之前是正序的。
     
