select pr.project_id,round(sum(emp.experience_years)/count(emp.employee_id),2) as average_years
from Employee as emp
join Project as pr
on pr.employee_id=emp.employee_id
group by project_id 
