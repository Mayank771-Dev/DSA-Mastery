select teacher_id,count(*) as cnt from (select teacher_id,subject_id,count(*) from Teacher
group by teacher_id,subject_id) d group by teacher_id
