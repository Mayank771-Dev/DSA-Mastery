select e1.name as Employee from Employee as e1
join Employee e2
on e1.managerId = e2.id
and e1.managerId is not null
where e1.salary>e2.salary
