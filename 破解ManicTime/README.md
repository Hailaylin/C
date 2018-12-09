# 电脑时间记录/管理软件ManicTime

## 查壳

* 安装目录的文件查
* 应用程序查 ManicTime.exe
* ManicTimeClient.exe
 ![ManicTimeClient.exe](https://i.loli.net/2018/12/09/5c0ca8b995c3f.png)
 ![ManicTime.exe](https://i.loli.net/2018/12/09/5c0ca8237d82d.png)
 ![PEiD破解图片](https://i.loli.net/2018/12/09/5c0ca778665f5.png)

* 结果，都是 **c#**

## 查专业版注册时的字符
* 查找`无效的用户名或许可证`，在`\ManicTime\Translations\zh-chs.txt`找到`InvalidLicenseDescription`
  ![](https://i.loli.net/2018/12/09/5c0ca9f576fb6.png)
* 在程序`.NET Reflector`中搜索`InvalidLicenseTitle`，得到下面的方法`OnOkCommand()`

```c#
private void OnOkCommand()
{
   ......
 

        ApplicationLog.WriteError(exception1);
        ViewHelper.ShowMessage(base.WindowHost, Translation.Current["Error"], Translation.Current["ErrorCheckingLicense"], MessageButtons.Ok);
    }
}

 

```

## 反编译

* 打开dnSpy，搜索`OnOkCommand`

  ![](https://i.loli.net/2018/12/09/5c0cb2d583665.png)

  ![](https://i.loli.net/2018/12/09/5c0cb3e663722.png)

  ![](https://i.loli.net/2018/12/09/5c0cb48dac3cb.png)

然后与运行不了了？

发现有手机版的app，不过要连接服务器。

破解不如自己做一个