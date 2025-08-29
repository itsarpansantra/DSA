/*
The school cafeteria offers circular and square sandwiches at lunch break, referred to by numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.

The number of sandwiches in the cafeteria is equal to the number of students. The sandwiches are placed in a stack. At each step:

If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue.
Otherwise, they will leave it and go to the queue's end.
This continues until none of the queue students want to take the top sandwich and are thus unable to eat.

You are given two integer arrays students and sandwiches where sandwiches[i] is the type of the i​​​​​​th sandwich in the stack (i = 0 is the top of the stack) and students[j] is the preference of the j​​​​​​th student in the initial queue (j = 0 is the front of the queue). Return the number of students that are unable to eat.

 

Example 1:

Input: students = [1,1,0,0], sandwiches = [0,1,0,1]
Output: 0 
Explanation:
- Front student leaves the top sandwich and returns to the end of the line making students = [1,0,0,1].
- Front student leaves the top sandwich and returns to the end of the line making students = [0,0,1,1].
- Front student takes the top sandwich and leaves the line making students = [0,1,1] and sandwiches = [1,0,1].
- Front student leaves the top sandwich and returns to the end of the line making students = [1,1,0].
- Front student takes the top sandwich and leaves the line making students = [1,0] and sandwiches = [0,1].
- Front student leaves the top sandwich and returns to the end of the line making students = [0,1].
- Front student takes the top sandwich and leaves the line making students = [1] and sandwiches = [1].
- Front student takes the top sandwich and leaves the line making students = [] and sandwiches = [].
Hence all students are able to eat.
*/
# include<iostream>
# include<vector>
# include<queue>
using namespace std;
int count_students(vector<int>&students,vector<int>sandwitch){
    queue<int>q;
    int n =students.size();
    for(int i=0;i<n;i++){ // push students element in queue
        q.push(students[i]);
    }
    int j = 0; // traverse sandwitch array
    int count =0; // infinite loop count korar janno 
    while(q.size()>0 && count!=q.size()){ // first condition queue te element acha ke na . second infinite loop er janno
        if(q.front()==sandwitch[j]){ // 1 ar 1 same hola pop ar 0 ar 0 same hola pop . nahola student k abar push korbo queue te
            q.pop();
            j++;
            count=0;
        }
        else{
            q.push(q.front());
            q.pop();
            count++;
        }
    }
    return q.size();
}
int main(){
    int arr[]={1,1,1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>students(n);
    for(int i=0;i<n;i++){
        students[i]=arr[i];
    }
    int brr[]={1,0,0,0,1,1};
    int p = sizeof(brr)/sizeof(brr[0]);
    vector<int>sandwitch(p);
    for(int i=0;i<p;i++){
        sandwitch[i]=brr[i];
    }

    cout<<count_students(students,sandwitch);
}