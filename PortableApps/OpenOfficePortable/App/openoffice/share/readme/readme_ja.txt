
======================================================================
OpenOffice 4.1.5 README
======================================================================


最新の README ファイルは、 http://www.openoffice.org/welcome/readme.html を参照してください。

このファイルには、このプログラムに関する重要な情報が記載されています。使用を開始する前に注意深くお読みください。

本製品の開発を行っている Apache OpenOffice コミュニティーは、あなたがコミュニティーのメンバーとして参加することを歓迎します。この製品を初めて使用する方は、ユーザーのための有益な情報が掲載されている次の OpenOffice のサイトをご覧ください。 http://openoffice.apache.org

また、Apache OpenOffice プロジェクトへの参加に関する以下のセクションもお読みください。

OpenOffice は本当にだれでも無料で使用できるのですか?
----------------------------------------------------------------------

OpenOffice は、だれでも無料で使用できます。入手した OpenOffice をインストールできるコンピュータの数に制限はありません。また、商用、政府、行政、教育など、目的を問わず自由に利用できます。詳細については、OpenOffice 付属のライセンス条項または http://www.openoffice.org/license.html を参照してください。

だれでも無料で OpenOffice を使用できるのはなぜですか。
----------------------------------------------------------------------

今日この OpenOffice を無料で使用できるのは、多数のユーザーの貢献とスポンサー企業のおかげです。設計、開発、テスト、翻訳、ドキュメント作成、サポート、マーケティング、ヘルプなどへの人々の尽力によって、世界を代表するオープンソースオフィスソフトウェアである現在の OpenOffice が作られました。

プロジェクトの成果に感謝し、Apache OpenOffice が今後も続くように、プロジェクトへ貢献することを考えてみてください。あなたの時間を使った貢献については http://openoffice.apache.org/get-involved.html を参照してください。また、寄付についての詳細は http://www.apache.org/foundation/contributing.html を参照してください。誰でも貢献できます。

----------------------------------------------------------------------
インストールに関する注記
----------------------------------------------------------------------

OpenOffice のすべての機能を利用するには JAVA の最近のバージョンが必要です。JAVA は http://java.com からダウンロードできます。

システム要件
----------------------------------------------------------------------

* Microsoft Windows XP, Vista, Windows 7 or Windows 8
* Pentium III 以降のプロセッサ
* メモリー 256M バイト (512M バイトを推奨)
* 最大 1.5G バイトのハードディスク空き容量
* グラフィックモニター解像度 1024x768 以上、256 色以上

注: インストールを実行するには、管理者権限が必要です。

Microsoft Office 形式のデフォルトアプリケーションとして OpenOffice を登録するか否かは、次のようにコマンドラインでインストーラのオプションを使用して指定できます。

* /msoreg=1 は、Microsoft Office 形式のデフォルトアプリケーションとして OpenOffice の登録を強制的に行います。
* /msoreg=0 は、Microsoft Office 形式のデフォルトアプリケーションとして OpenOffice の登録を行いません。

setup.exe /a を使用して管理インストールを行う場合、 msvcr100.dll がシステムにインストールされていることを確認する必要があります。このファイルは、管理インストールの後 OpenOffice を使用するのに必要です。次の URL からファイルを入手できます。 http://www.microsoft.com/en-us/download/details.aspx?id=5555

注: インストールを実行するには、管理者権限が必要です。

システムの一時ディレクトリの空き容量が十分であることと、読み取り、書き込み、および実行の権限が与えられていることを確認してください。インストールを開始する前に、ほかのプログラムをすべて終了させてください。

----------------------------------------------------------------------
プログラム起動時の問題
----------------------------------------------------------------------

OpenOffice 起動時の問題 (たとえばアプリケーションがハングする) や、画面表示の問題の多くは、グラフィックスカードドライバが原因です。このような問題が発生した場合は、グラフィックスカードドライバを更新するか、OS 付属のグラフィックスドライバを使用してみてください。3D オブジェクト表示の問題は、「ツール」→「オプション」→「OpenOffice」→「表示」→「3D 表示」の下にある「OpenGL の使用」オプションをオフにすると解決されることがあります。

----------------------------------------------------------------------
Windows上でのALPS/Synaptics製のノートブックPCタッチパッド 
----------------------------------------------------------------------

Windows ドライバに問題があるため、ALPS/Synaptics 製のタッチパッド上で指を動かしても OpenOffice のドキュメントをスクロールすることはできません。

タッチパッドでスクロールできるようにするには、下記の行を C:\Program Files\Synaptics\SynTP\SynTPEnh.ini 設定ファイルに追加して、コンピュータを再起動してください。

[OpenOffice]

FC = "SALFRAME"

SF = 0x10000000

SF |= 0x00004000

注意事項：この設定ファイルの場所は、Windows のバージョンによって異なる場合があります。

----------------------------------------------------------------------
ショートカットキー
----------------------------------------------------------------------

OpenOffice で使用できるショートカット (キーの組み合わせ) は、オペレーティングシステムで使用されていないものだけです。OpenOffice のショートカットキーが OpenOffice ヘルプの記述どおりに動作しない場合は、そのショートカットキーがすでにオペレーティングシステムで使用されているかどうかを確認してください。このような競合を解決するには、オペレーティングシステムによって割り当てられているキーを変更してください。または、OpenOffice 側でキーの割り当てを変更します (ほとんどのキー割り当ては変更が可能です)。詳細については、OpenOffice のヘルプまたはオペレーティングシステムのヘルプを参照してください。

----------------------------------------------------------------------
OpenOffice からドキュメントを E-mail として送信するときの問題
----------------------------------------------------------------------

「ファイル」→「送る」→「E-mail としてのドキュメント」または「PDF 添付としてのドキュメント」を使用してドキュメントを送信するときに、プログラムがクラッシュまたはハングアップすることがあります。これは、Windows システムファイル「Mapi」(Messaging Application Programming Interface) が一部のファイルバージョンで問題を引き起こすことが原因です。どのバージョン番号で問題が発生するかは特定できていません。詳細については、http://www.microsoft.com/japan で「mapi dll」のサポート技術情報を検索してください。

----------------------------------------------------------------------
重要な利用を手助けするためのノート
----------------------------------------------------------------------

OpenOffice アクセシビリティー機能については、 http://www.openoffice.org/access/ を参照してください。

----------------------------------------------------------------------
ユーザーサポート
----------------------------------------------------------------------

サポートメインページ http://support.openoffice.org/ には、 OpenOffice のユーザーを支援するさまざまなコンテンツが掲載されています。質問があるときは、すでにコミュニティーフォーラムに回答が寄せられているかどうかを調べてください(http://forum.openoffice.org)。 または、メーリングリスト users@openoffice.org のアーカイブを検索してください(http://www.openoffice.org/mail_list.html)。あるいは、質問を users@openoffice.apache.org に送信してください。このメーリングリストを購読する(回答をメールで受け取る) 方法については、 http://openoffice.apache.org/mailing-lists.html を参照してください。

また、 http://wiki.openoffice.org/wiki/Documentation/FAQ にある FAQ セクションもチェックしてください。

----------------------------------------------------------------------
バグと問題の報告
----------------------------------------------------------------------

OpenOffice の Web サイトには、バグと問題の報告、追跡、および解決のための BugZilla と呼ばれるメカニズムがあります。ソフトウェアを実際に使っているときに発生した問題をぜひ報告してください。問題の積極的な報告は、ソフトウェアスイートの継続的な開発と品質向上のためにユーザーコミュニティーができる最も重要なことの一つです。

----------------------------------------------------------------------
コミュニティーへの参加
----------------------------------------------------------------------

OpenOffice コミュニティーでは、この重要なオープンソースプロジェクトの発展への積極的な参加をお待ちしています。

ユーザーの皆様はすでに、このスイートの開発プロセスにおける重要な一部分となっています。より積極的な活動と、コミュニティーへの長期的な協力を歓迎します。 http://openoffice.apache.org/get-involved.html のユーザーページをご覧ください。 

始め方
----------------------------------------------------------------------

プロジェクトへ貢献する最良の方法はひとつまたは複数のメーリングリストを購読して、少しの間眺めてみてください。少しずつメールアーカイブを利用して 2000 年 10 月にリリースされた OpenOffice のソースコードをカバーする多くのトピックに慣れてください。慣れ親しんだら、なすべきことはメールで自己紹介をして飛び込んでいくことです。

購読
----------------------------------------------------------------------

http://openoffice.apache.org/mailing-lists.html にあなたが購読できるプロジェクトのメーリングリストがいくつかあります。

* ニュース: announce@openoffice.apache.org *すべてのユーザに推奨* (投稿数: 少) 
* メインユーザーフォーラム: users@openoffice.apache.org *議論の様子を気軽に眺めてください* (投稿数: 多)
* 一般的なプロジェクト開発と議論用メーリングリスト: dev@openoffice.apache.org (投稿数多め)

プロジェクトへ参加
----------------------------------------------------------------------

ソフトウェアの設計やコーディングの経験が少なくても、この重要なオープンソースプロジェクトに貢献する方法はあります。

http://openoffice.apache.org/get-involved.html では、ローカライズ、品質保証、ユーザーサポートからコア部分のコーディングに至るまで、さまざまなプロジェクトが活動しています。開発以外にも、ドキュメント作成やマーケティングのプロジェクトがあります。Apache OpenOffice マーケティングプロジェクトでは、広告宣伝の従来の手法と新しい手法の両方を取り入れて、オープンソースソフトウェアのマーケティングに努めています。この活動は言語や文化の壁を越えて進行しているため、このオフィススイートの良さを周りの人たちに伝えていただくだけでもかまいません。

マーケッティングメーリングリスト marketing@openoffice.apache.org に参加して、あなたの国またはローカルコミュニティの出版物、メディア、政府機関、コンサルタント、学術機関、Linux ユーザーグループや開発者とコミュニケーションを取る接点を提供することで、プロジェクトを手助けできます。

新しい OpenOffice 4.1.5 をどうぞお楽しみください。そして、オンラインコミュニティーに参加していただけることを願っています。

Apache OpenOffice コミュニティ