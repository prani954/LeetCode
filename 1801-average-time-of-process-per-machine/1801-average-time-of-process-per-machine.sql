# Write your MySQL query statement below
SELECT a.machine_id, round(
    (SELECT AVG(a1.timestamp) FROM Activity a1 WHERE a1.activity_type = 'end' and a1.machine_id = a.machine_id) -
    (SELECT AVG(a1.timestamp) FROM Activity a1 WHERE a1.activity_type = 'start' and a1.machine_id = a.machine_id), 3
) as processing_time
FROM Activity a
GROUP BY a.machine_id;