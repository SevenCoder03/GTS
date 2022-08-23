# GTS
Backup Exercise
# Profile
Họ và tên: Hồ Chí Nhân
Biệt danh: Seven
Lớp: CN21CLCA
MSSV: 21H1120013
# Hướng dẫn commit code.
$ git clone {link}
lấy source code trên git về ngồi code
$ git init
tạo 1 repo trên local
$ git status
để xem có thằng nào mới trên máy hông
$ git pull
đồng bộ code trên github về máy tính
$ git add {file}
tên file (nếu file ở thư mục gốc)
F1/F2/f.file (nếu file ở thư mục con)
$ git rm --cached {file}
để hủy bỏ việc add file
$ git add .
add hết cmn lun, dấu . hay * đều được
$ git commit -m "thêm message ở đây"
lệnh commit file và thêm ghi chú
$ git remote add origin https://github.com/SevenCoder3008/GTS.git
$ git push origin master
$ git push -u origin master
$ git push -f origin master
lần lượt chọn 3 thằng trên. cho đến khi thấy ok.
