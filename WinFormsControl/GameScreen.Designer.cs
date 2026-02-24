namespace WinFormsControl
{
    partial class GameScreen
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Component Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources =
                new System.ComponentModel.ComponentResourceManager(typeof(GameScreen));
            picView = new PictureBox();
            ((System.ComponentModel.ISupportInitialize)picView).BeginInit();
            this.SuspendLayout();
            //
            // picView
            //
            resources.ApplyResources(picView, "picView");
            picView.Name = "picView";
            picView.TabStop = false;
            //
            // GameScreen
            //
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.None;
            this.Controls.Add(picView);
            resources.ApplyResources(this, "$this");
            this.Name = "GameScreen";
            ((System.ComponentModel.ISupportInitialize)picView).EndInit();
            this.PerformLayout();
        }

        #endregion

        private PictureBox picView;
    }
}
