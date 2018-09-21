# 使用github进行代码管理
首先，要获取git

sudo apt-get install git 

git config --global user.name = "用户名"

git config --global user.email = "邮箱"

ssh-keygen -C "邮箱" -t rsa

vim打开 ```~/.ssh/id_rsa.pub 复制公钥进github.com

测试 ssh -v git@github.com```

git clone git@github/你的地址.git

git commit -m "备注" -a

git push


配置参考[廖雪峰的教程](https://www.cnblogs.com/cocowool/archive/2010/10/19/1855616.html)

