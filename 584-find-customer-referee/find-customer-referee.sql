# Write your MySQL query statement below
# Write your MySQL query statement below
select name from customer  WHERE
    COALESCE(referee_id, 0) <> 2;