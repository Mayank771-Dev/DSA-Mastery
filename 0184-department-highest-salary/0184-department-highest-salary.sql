SELECT department_name as Department,employee_name as Employee, salary as Salary
FROM (
    SELECT
        e.name AS employee_name,
        d.name AS department_name,
        e.salary,
        DENSE_RANK() OVER (
            PARTITION BY e.departmentId
            ORDER BY e.salary DESC
        ) AS rnk
    FROM Employee e
    JOIN Department d
        ON e.departmentId = d.id
) q
WHERE rnk = 1;
