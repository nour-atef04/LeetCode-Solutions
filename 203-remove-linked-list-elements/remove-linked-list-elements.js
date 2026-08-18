/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function(head, val) {
    let dummy = new ListNode();
    dummy.next = head;
    let prev = dummy;
    let temp = head;

    while(temp !== null){
        if(temp.val === val) prev.next = temp.next;
        else prev = temp;
        temp = temp.next;
    }

    return dummy.next;
};