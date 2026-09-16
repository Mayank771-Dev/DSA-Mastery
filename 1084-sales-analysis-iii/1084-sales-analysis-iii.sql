select prod.product_id,prod.product_name from Product as prod
left join Sales as sla1
on prod.product_id=sla1.product_id
and sla1.sale_date between '2019-01-01' and '2019-03-31'
left join Sales as sla2
on sla1.product_id=sla2.product_id
and sla2.sale_date not between '2019-01-01' and '2019-03-31'
where sla2.sale_date is null and sla1.sale_date between '2019-01-01' and '2019-03-31'
group by product_id
