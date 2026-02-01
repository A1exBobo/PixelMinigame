using System;
using Avalonia.Controls;
using Avalonia.Interactivity;
using Avalonia.Media;

namespace MinigameUI
{
    public partial class MainWindow : Window
    {
        private Grid _grid;
        private Map _map;

        public MainWindow()
        {
            InitializeComponent(); // Make sure this is inside the constructor

            // Find the Grid with the name "TileGrid" from the XAML
            _grid = this.FindControl<Grid>("TileGrid")!;
            if (_grid == null)
            {
                throw new InvalidOperationException("TileGrid not found in XAML.");
            }

            // Initialize the Map object
            _map = new Map();
        }

        public void ClickHandler(object sender, RoutedEventArgs args)
        {
            // Change the message to let the user know the game has started
            message.Text = "Ai inceput...";

            // Hide the "Start" button after clicking it
            var button = sender as Button;
            if (button != null)
            {
                button.IsVisible = false;
            }

            // Render the tiles on the grid
            _map.RenderTiles(_grid);
        }
    }
}
