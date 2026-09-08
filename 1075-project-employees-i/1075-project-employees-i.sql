SELECT pr.project_id,
       ROUND(AVG(emp.experience_years), 2) AS average_years
FROM Employee AS emp
JOIN Project AS pr
ON pr.employee_id = emp.employee_id
GROUP BY pr.project_id;
