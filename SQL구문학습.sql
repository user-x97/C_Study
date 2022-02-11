-- 데이터 개수
SELECT COUNT(*) FROM hrinfo;

-- 데이터 모두 가져오기
SELECT * FROM hrinfo;

-- 데이터 입력
INSERT INTO test.hrinfo (name, reg_data) VALUES('홍길동', '2022-01-31 12:10:20');

-- 데이터 수정
UPDATE hrinfo SET name = '애누리', reg_data = '2021-12-30' WHERE id = 2;

-- 데이터 삭제reg_data
DELETE FROM hrinfo WHERE id = 3;