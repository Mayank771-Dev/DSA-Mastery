select q.student_id,q.student_name,q.subject_name,count(exm.student_id) as attended_exams
FROM (
    SELECT 
        stu.student_id,
        stu.student_name,
        sub.subject_name
    FROM Students stu
    CROSS JOIN Subjects sub
) q
left join Examinations as exm
on q.student_id=exm.student_id
AND q.subject_name = exm.subject_name
group by q.student_id,q.subject_name
order by q.student_id,q.subject_name