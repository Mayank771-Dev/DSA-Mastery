select p.product_name,sum(o.unit) as unit from Products as p
right join Orders as o
on p.product_id=o.product_id
WHERE order_date >= '2020-02-01'
  AND order_date < '2020-03-01'
group by p.product_name
having unit>=100
