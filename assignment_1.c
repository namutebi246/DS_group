#include <stdio.h>

int physics();
int chemistry();
int math();
int average();



int main()
{
    int n_assignment, n_course_work, n_mid_term, n_endOfTerm;
    int m_assignment, m_course_work, m_mid_term, m_endOfTerm ;
    int x_assignment, x_course_work, x_mid_term, x_endOfTerm;
    
    // Marks for physics
    printf("Enter physics marks\n");
    printf("Enter marks for assignment\n");
    scanf("%d", &n_assignment);
    printf("Enter marks for course_work\n");
    scanf("%d",&n_course_work);
    printf("Enter marks for mid_term\n");
    scanf("%d", &n_mid_term);
    printf("Enter marks for end of term\n");
    scanf("%d", &n_endOfTerm);
    // Marks for chemistry
    printf("Enter chemistry marks\n");
    printf("Enter marks for assignment\n");
    scanf("%d", &m_assignment);
    printf("Enter marks for course_work\n");
    scanf("%d",&m_course_work);
    printf("Enter marks for mid_term\n");
    scanf("%d", &m_mid_term);
    printf("Enter marks for end of term\n");
    scanf("%d", &m_endOfTerm);
    // Marks for math
    printf("Enter math marks\n");
    printf("Enter marks for assignment\n");
    scanf("%d", &x_assignment);
    printf("Enter marks for course_work\n");
    scanf("%d",&x_course_work);
    printf("Enter marks for mid_term\n");
    scanf("%d", &x_mid_term);
    printf("Enter marks for end of term\n");
    scanf("%d", &x_endOfTerm);


    int sum = physics(n_assignment, n_course_work, n_mid_term, n_endOfTerm); 
    int n = chemistry(m_assignment, m_course_work, m_mid_term,m_endOfTerm);
    int m = math(x_assignment, x_course_work, x_mid_term, x_endOfTerm);
    int marks = average(sum, n, m);
    printf("\nTotal Marks:\nPhysics: %d\nChemistry: %d\nMath: %d\n", sum, n, m);
    printf("Average marks: %d\n",marks);




    return 0;
}
int physics(int assignment, int course_work, int mid_term, int endOfTerm)
{
    int total = assignment + course_work + mid_term + endOfTerm;
    return total;
}
int chemistry(int assignment, int course_work, int mid_term, int endOfTerm){
    int total = assignment + course_work + mid_term + endOfTerm;
    return total;

}
int math(int assignment, int course_work, int mid_term, int endOfTerm){
    int total = assignment + course_work + mid_term + endOfTerm;
    return total;
}
int average(int physics, int chemistry, int math){
    return (physics + chemistry + math)/3;
    
}

