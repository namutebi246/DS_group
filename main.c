#include <stdio.h>

int physics();
int chemistry();
int math();
int average();



int main()
{
    int n_assigment, n_course_work, n_mid_term, n_endOfTerm;
    int m_assigment, m_course_work, m_mid_term, m_endOfTerm ;
    int x_assigment, x_course_work, x_mid_term, x_endOfTerm;
    
    // Marks for physics
    printf("Enter physics marks\n");
    printf("Enter marks for assigment\n");
    scanf("%d", &n_assigment);
    printf("Enter marks forcourse_work\n");
    scanf("%d",&n_course_work);
    printf("Enter marks for mid_term\n");
    scanf("%d", &n_mid_term);
    printf("Enter marks for end of term\n");
    scanf("%d", &n_endOfTerm);
    // Marks for chemistry
    printf("Enter chemistry marks");
    printf("Enter marks for assigment\n");
    scanf("%d", &m_assigment);
    printf("Enter marks forcourse_work\n");
    scanf("%d",&m_course_work);
    printf("Enter marks for mid_term\n");
    scanf("%d", &m_mid_term);
    printf("Enter marks for end of term\n");
    scanf("%d", &m_endOfTerm);
    // Marks for math
    printf("Enter math marks\n");
    printf("Enter marks for assigment\n");
    scanf("%d", &x_assigment);
    printf("Enter marks forcourse_work\n");
    scanf("%d",&x_course_work);
    printf("Enter marks for mid_term\n");
    scanf("%d", &x_mid_term);
    printf("Enter marks for end of term\n");
    scanf("%d", &x_endOfTerm);


    int sum = physics(n_assigment, n_course_work, n_mid_term, n_endOfTerm); 
    int n = chemistry(m_assigment, m_course_work, m_mid_term,m_endOfTerm);
    int m = math(x_assigment, x_course_work, x_mid_term, x_endOfTerm);
    int marks = average(sum, n, m);
    printf("\nTotal Marks:\nPhysics: %d\nChemistry: %d\nMath: %d\n", sum, n, m);
    printf("Average marks: %d\n",marks);




    return 0;
}
int physics(int assigment, int course_work, int mid_term, int endOfTerm)
{
    int total = assigment + course_work + mid_term + endOfTerm;
    return total;
}
int chemistry(int assigment, int course_work, int mid_term, int endOfTerm){
    int total = assigment + course_work + mid_term + endOfTerm;
    return total;

}
int math(int assigment, int course_work, int mid_term, int endOfTerm){
    int total = assigment + course_work + mid_term + endOfTerm;
    return total;
}
int average(int physics, int chemistry, int math){
    return (physics + chemistry + math)/3;
    
}

