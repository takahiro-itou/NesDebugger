Public Class MainView

Private m_manNes As NesDbgWrap.NesMan.NesManager
Private m_manPpu As NesDbgWrap.NesMan.BasePpuCore

Private Function isInitialized() As Boolean
''--------------------------------------------------------------------
''    初期化が完了しているか否かを返す。
''--------------------------------------------------------------------
    If (Me.m_manPpu Is Nothing) Then Return False
    Return True
End Function

Private Function initializeScreen(
        ByVal w As Integer, ByVal h As Integer) As Boolean
''--------------------------------------------------------------------
''    画面を初期化する
''--------------------------------------------------------------------
    Me.wfcGameView.initializeScreenImage(w, h)
    Me.wfcGameView.setupPpuManager(Me.m_manPpu)
    showGameScreen()
    Return True
End Function

Private Sub showGameScreen()
''--------------------------------------------------------------------
''    画像を表示する
''--------------------------------------------------------------------
    If Not isInitialized() Then Exit Sub
    Me.wfcGameView.drawScreen()
    Me.wfcGameView.showScreen()
End Sub

Private Sub MainView_Load(sender As Object, e As EventArgs) Handles _
            MyBase.Load
''--------------------------------------------------------------------
''    フォームのロードイベントハンドラ
''--------------------------------------------------------------------
    Me.m_manNes = New NesDbgWrap.NesMan.NesManager
    Me.m_manNes.openRomFile("hello.nes")
    Me.m_manPpu = New NesDbgWrap.NesMan.BasePpuCore(Me.m_manNes)

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
    showGameScreen()
End Sub

End Class
