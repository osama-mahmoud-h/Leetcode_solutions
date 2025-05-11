-- Write your PostgreSQL query statement below
SELECT
    activity_date AS day,
    COUNT(DISTINCT user_id) AS active_users

FROM Activity

WHERE --(('2019-07-27')::DATE - INTERVAL '30 DAY') < activity_date
      activity_date BETWEEN  ('2019-06-28')::DATE AND ('2019-07-27')::DATE 

GROUP BY activity_date