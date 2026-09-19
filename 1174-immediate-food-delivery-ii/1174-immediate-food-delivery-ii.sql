select round((count(case when order_date=customer_pref_delivery_date then 1 end)/count(*))*100,2) as immediate_percentage
from (select customer_id,order_date,customer_pref_delivery_date,ROW_NUMBER() over(partition by customer_id order by order_date) as rownum from Delivery
) q
where rownum=1;

