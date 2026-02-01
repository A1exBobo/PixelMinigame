using System;
using System.Runtime.InteropServices;
using Avalonia.Controls;
using Avalonia.Media;



namespace MinigameUI;



public class Map
{
    public int DesignWidth=800;
    public int DesignHeight=450;
    
     [DllImport("/home/alex/Workspace/Minigame/gui/MinigameUI/linkers/libtiles.so", CallingConvention = CallingConvention.Cdecl)]
     private static extern int tile_tp(int tx, int ty);										//tyle tipe function-populates the map   
	
	private TileType GetTileType(int tx,int ty)
		{
			int tileCenter = tile_tp(tx,ty);
			return (TileType)tileCenter;
		}
		
	public void RenderTiles(Grid grid)
        {
            for (int y = 0; y < DesignHeight; y += 100)  // Assuming tile height and width are 100px
            {
                for (int x = 0; x < DesignWidth; x += 100)
                {
                    TileType tile = GetTileType(x / 100, y / 100);  // Get the tile type based on coordinates

                    // Create a new square (100x100) for each tile
                    var tileControl = new Border
                    {
                        Width = 100,
                        Height = 100,
                        Background = GetTileColor(tile)  // Set the color based on tile type
                    };

                    // Add the tile to the grid at the appropriate position
                    grid.Children.Add(tileControl);
                    Grid.SetColumn(tileControl, x / 100);
                    Grid.SetRow(tileControl, y / 100);
                }
            }
        }
	
	private IBrush GetTileColor(TileType tile)
			{
				return tile switch
				{
					TileType.Water => Brushes.Blue,
					TileType.Snow => Brushes.White,
					TileType.Stone => Brushes.Gray,
					TileType.Dirt => Brushes.Brown,
					TileType.Grass => Brushes.Green,
					_ => Brushes.Transparent
				};
			}
	
}

