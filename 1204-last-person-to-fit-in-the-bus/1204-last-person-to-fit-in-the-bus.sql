select person_name from (select *, sum(Weight) over (order by turn) as total_weight from Queue ) q
where total_weight <= 1000
order by total_weight desc
limit 1
