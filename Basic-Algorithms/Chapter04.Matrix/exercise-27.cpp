bool chessBoardCellColor(string cell1, string cell2)
{
    return (!(((int)cell1[0]+cell1[1]+cell2[0]+cell2[1])&1));
}
