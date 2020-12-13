# C语言学习代码库
这个库用来存放做题的题目，以及一些相关的学习资料，仅供参考

有一些比赛的题目，可以看看

## 做题OJ
PTA https://pintia.cn/problem-sets?tab=1

学校的OJ https://t.hailay.site/

## 学习书目：
1. 《C语言程序设计》（第五版）——谭浩强
2. 《C程序设计语言》（第二版）——忘记谁写的了

## vscode配置

## github

### 配置
gitbash中运行，或者terminal中运行，管理员权限

ssh-keygen -t rsa -C "hailay@qq.com"

ssh -v git@github.com

ssh-agent -s

ssh-add ~/.ssh/id_rsa (windows下注意观察目录)

//有问题要百度看看，好像一定要git bash搞最好

**上传公钥**

### 测试
ssh -T git@github.com


### 拉取库
git clone git库地址

要在本地建，就要git init


还要初始化


Git 全局设置:

git config --global user.name "HailayLin" 

git config --global user.email "hailay@qq.com"

	• 本地建仓git init；
	• 拉取github :git clone 地址
    
git remote add origin https://git.oschina.net/name/package.git

git push -u origin master（分支名）
                                                                                                                                            
剩下的工作都可以在vscode中完成

