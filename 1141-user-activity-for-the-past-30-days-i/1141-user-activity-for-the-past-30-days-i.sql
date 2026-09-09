select activity_date as day,count(*) as active_users from(select user_id ,activity_date from Activity group by user_id,activity_date) d group by activity_date
having activity_date between '2019-06-28' and '2019-07-27'


