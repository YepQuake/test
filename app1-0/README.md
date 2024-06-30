# 开发日志

Paragraph.

## 基本

Paragraph.1 by Zhiyuan Wei  
**写在开始的备注：注意！我使用的是macOS来进行的开发，希望程序中使用的编码方法应该是utf-8，但是我在使用预处理命令 #pragma execution_character_set时出现了异常**

- 为了简化初始开发过程，我选择采用的是TreeView的视图方法，这种方法好处在于能够自动组织好物品的归属路径，也基本符合我们一开始的设想。

- 在开发过程当中，很重要的一点就是弄清楚QStandardItemModel类的相关用法，鉴于时间有限，我也并未完全弄清楚了这些类&数据结构的使用方法，只是在网上的教程中拼凑出能够使程序运行的方法，但是我猜测对于后期改进来说，也许弄清楚这其中的基本逻辑是有必要的吧。
- 这是csdn上一个讲[Qt中treeview](https://blog.csdn.net/qq_37529913/article/details/131261347)的，靠你们了。
- 只是初代版本，目前只能实现根节点和一层子节点，望两位队友多多改进😅

- 随时可以微信联系！不过我期末周考试相当密集，可能要到6.21号之后时间才会宽裕，抱歉了😭

Paragraph.2 by zxh

为了添加物品我新建立了一个名为AdditemsDlg的类，之后实现查询物品位置等功能时可以类推

关于多窗口的实现可以参考：

https://blog.csdn.net/hw5230/article/details/128151577

https://blog.csdn.net/m0_54847660/article/details/129578912

现在最大的问题是怎么把子窗口的参数传到主窗口上。。。

关于互传部分或许可以参考：https://blog.csdn.net/feengg/article/details/105932699

下面是markdown基本语法介绍,Creator自动生成
=================
- bullet
+ other bullet
* another bullet
    * child bullet

1. ordered
2. next ordered

### Third Level Heading

Some *italic* and **bold** text and `inline code`.

An empty line starts a new paragraph.

Use two spaces at the end  
to force a line break.

A horizontal ruler follows:

---

Add links inline like [this link to the Qt homepage](https://www.qt.io),
or with a reference like [this other link to the Qt homepage][1].

    Add code blocks with
    four spaces at the front.

 A blockquote
> starts with >
>
> and has the same paragraph rules as normal text.

First Level Heading in Alternate Style
====================================

Paragraph.

Second Level Heading in Alternate Style
-----------------------------


Paragraph.

[1]: https://www.qt.io
