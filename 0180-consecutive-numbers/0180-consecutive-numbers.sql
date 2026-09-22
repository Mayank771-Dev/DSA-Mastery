SELECT distinct num as ConsecutiveNums

FROM (

    SELECT

        num,

        id - ROW_NUMBER() OVER(PARTITION BY num ORDER BY id) AS grp

    FROM Logs

) t

GROUP BY num, grp

HAVING COUNT(*) >= 3;
