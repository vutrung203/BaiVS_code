#include<stdio.h>
#include<stdlib.h>

 struct LinkedList{
 int data;
 struct LinkedList *next;
 };
  typedef struct LinkedList *node;

 node CreateNode(int value){
 node temp; // declare a node
 temp = (node)malloc(sizeof(struct LinkedList));
 temp->next = NULL;
 temp->data = value;
 return temp;
 }

 node AddTail(node head, int value){
 node temp,p;
 temp = CreateNode(value);
 if(head == NULL){
 head = temp;
 }
 else{
 p = head;
 while(p->next != NULL){
 p = p->next;
 }
 p->next = temp;

 }
 return head;
 }

 node AddHead(node head, int value)
 {
 node temp = CreateNode(value);
 if(head == NULL){
 head = temp;
 }else{
 temp->next = head;
 head = temp;
 }
 return head;
 }
 node AddAt(node head, int value, int position){
 if(position == 0 || head == NULL){
 head = AddHead(head, value); // N?u v? trí chèn là 0, t?c là thêm vào d?u
 }else{
 int k = 1;
 node p = head;
 while(p != NULL && k != position){
 p = p->next;
 ++k;
 }
 if(k != position){
 head = AddTail(head, value);
 }else{
 node temp = CreateNode(value);
 temp->next = p->next;
 p->next = temp;
 }
 }
 return head;
 }

 node DelHead(node head){
 if(head == NULL){
 printf("\nCha co gi de xoa het!");
 }else{
 head = head->next;
 }
 return head;
}

 node DelTail(node head){
 if (head == NULL || head->next == NULL){
 return DelHead(head);
 }
 node p = head;
 while(p->next->next != NULL){
 p = p->next;
 }
 p->next = NULL;
 return head;
 }

 node DelAt(node head, int position){
 if(position == 0 || head == NULL || head->next == NULL){
 head = DelHead(head); // N?u v? trí xóa là 0, t?c là xóa d?u
}else{

int k = 1;
 node p = head;
 while(p->next->next != NULL && k != position){
 p = p->next;
 ++k;
 }
 if(k != position){

 head = DelTail(head);
}else{
 p->next = p->next->next;
 }
 }
 return head;
 }
 // Hàm luy giá tri cua mot nút bat ki
 int Get(node head, int index){
 int k = 0;
 node p = head;
 while(p != NULL && k != index){
 p = p->next;
 k++;
 }
 return p->data;
 }
 // Hàm tìm kiem , neu có tri v? v? trí tìm th?y, n?u không th?y tr? v? -1
 int Search(node head, int value){
 int position = 0;
 for(node p = head; p != NULL; p = p->next){
 if(p->data == value){
 return position;
 }
 ++position;
 }
 return -1;
 }
 // Hàm duyet danh sách, in ra giá tri cua danh sách
 void Traverser(node head){
 printf("\n Danh sach:\n");
 for(node p = head; p != NULL; p = p->next){
 printf("%5d", p->data);
 }
 }
 // Hàm khoi tao mot danh sách
 node InitHead(){
 node head;
 head = NULL;
 return head;
 }
 // Hàm cho chieu dài là so luong các phan tu cua danh sách
 int Length(node head)
 {
 int length = 0;1;
  for(node p = head; p != NULL; p = p->next)
 {
 ++length;
 }
 return length;
 }
 // Hàm nhap giá tri cho danh sách
 node Input(){
 node head = InitHead(); // Khoi tao danh sách dau tiên
 int n, value;
 do{
 printf("\nNhap so luong phan tu n = ");
 scanf("%d", &n);
 }while(n <= 0);
 // Nhap n phan tu vào cuoi danh sách
 for(int i = 0; i < n; ++i){
 printf("\nNhap gia tri can them: ");
 scanf("%d", &value);
 head = AddTail(head, value);
 }
 return head;
 }
 //--------------------------------------------------------------------
 int main(){
 printf(" DANH SÁCH LIÊN KẾT ÐON\n");
 printf(" ---------------------\n");
 int chon=0, value, position;
while (chon!=9)
 {
 printf("\n MENU ");
 printf("\n-----------------------------------------\n");
 printf(" 1. Tao danh sach\n");
 printf(" 2. Them 1 phan tu bat ky\n");
 printf(" 3. Them 1 phan tu vao cuoi danh sach\n");
 printf(" 4. Xoa 1 phan tu bat ky\n");
 printf(" 5. Xoa 1 phan tu o cuoi danh sach\n");
 printf(" 6. Tim kiem \n");
 printf(" 7. Lay gia tri cua 1 phan tu\n");
 printf(" 8. So luong phan tu cua danh sach\n");
 printf(" 9. exit \n");
printf("--------------------------------------\n");
 printf("Chon:"); scanf("%d",&chon);
 switch(chon)
 {
 case 1:
 printf("\n==Tao 1 danh sach lien ket==\n");
 node head = Input();
 Traverser(head);
 break;
 case 2:
 printf("\n==Them 1 phan tu bat ky==\n");
 printf("Gia tri ="); scanf("%d",&value);
 printf("Vi tri=");scanf("%d",&position);
 head = AddAt(head, value, position);
 Traverser(head);
 break;
 case 3:
 printf("\n==Them 1 phan tu vao cuoi danh sach==\n");
 printf("Gia tri ="); scanf("%d",&value);
 head = AddTail(head, value);
 Traverser(head);
 break;
 case 4:
 printf("\n==Xoa 1 phan tu khoi danh sach==\n");
 printf("Xoa phan tu o vi tri:");scanf("%d",&position);
 head = DelAt(head, position);
 Traverser(head);
 break;
 case 5:
 printf("\n==Xoa 1 phan tu cuoi cung khoi danh sach==\n");
 head = DelTail(head);
 Traverser(head);
 break;
 case 6:
 printf("\n==Tim kiem 1 phan tu trong linked list==\n");
 printf("Tim phan tu co gia tri ="); scanf("%d",&value);
 position= Search(head, value);
 printf("\nTim thay tai chi so %d", position);
 break;
 case 7:
 printf("\n==Lay gia tri cua 1 phan tu==\n");
 printf("Phan tu o vi tri:");scanf("%d",&position);
 value = Get(head, position);
 printf("\nGia tri= %d", value);
 break;
 case 8:
 printf("\n==So luong phan tu cau danh sach==\n");
 printf("n=:%d", Length(head));
 break;// Không làm gì c?
 case 9:
 break;// Không làm gì c?
 }
 }
 }
