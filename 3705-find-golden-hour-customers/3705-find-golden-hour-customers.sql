select customer_id,count(*) as total_orders, round(((count(case when TIME(order_timestamp)>='11:00:00' and TIME(order_timestamp)<'14:00:00' then 1 end)+count(case when TIME(order_timestamp)>='18:00:00' and TIME(order_timestamp)<'21:00:00' then 1 end))/count(*))*100) as peak_hour_percentage,round(avg(case when order_rating is not null then order_rating end),2) as average_rating
from restaurant_orders 
group by customer_id
having count(*)>=3 and peak_hour_percentage>=60 and average_rating>=4 and round((count(case when order_rating is not null then 1 end)/count(*))*100,2)>=50
order by average_rating desc,customer_id desc

