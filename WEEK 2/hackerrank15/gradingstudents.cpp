vector<int> gradingStudents(vector<int> grades) {
    for(int i=0;i<grades.size();i++)
{
    (grades[i]<38)?(grades[i]=grades[i]):(((grades[i]%5)<3)?grades[i]=grades[i]:grades[i]=(grades[i]+5-(grades[i]%5)));
}
return grades;
}
