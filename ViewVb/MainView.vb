Public Class MainView

Private m_manNes As New NesDbgWrap.NesMan.NesManager
Private m_manPpu As New NesDbgWrap.NesMan.BasePpuCore(Me.m_manNes)

Private Function initializeScreen(
        ByVal w As Integer, ByVal h As Integer) As Boolean
''--------------------------------------------------------------------
''    画面を初期化する
''--------------------------------------------------------------------
    Me.wfcGameView.initializeScreenImage(w, h)
    Me.wfcGameView.setupPpuManager(Me.m_manPpu)
    showGraphics()
    Return True
End Function

Private Sub showGraphics()
''--------------------------------------------------------------------
''    画像を表示する
''--------------------------------------------------------------------
    Me.wfcGameView.drawGraphics()
End Sub

Private Sub MainView_Load(sender As Object, e As EventArgs) Handles _
            MyBase.Load
''--------------------------------------------------------------------
''    フォームのロードイベントハンドラ
''--------------------------------------------------------------------
    initializeScreen(256, 240)
End Sub

Private Sub mnuFileExit_Click(sender As Object, e As EventArgs) Handles _
            mnuFileExit.Click
''--------------------------------------------------------------------
''    メニュー「ファイル」－「終了」
''--------------------------------------------------------------------
    Application.Exit()
End Sub

Private Sub mnuRunCount_Click(sender As Object, e As EventArgs) Handles _
            mnuRunCount.Click
''--------------------------------------------------------------------
''    メニュー「実行」－「カウント」
''--------------------------------------------------------------------
    System.Threading.Thread.Sleep(100)
    showGraphics()
End Sub

End Class
