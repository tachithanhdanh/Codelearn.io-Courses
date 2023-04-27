
bool bishopAndPawn(string bishop, string pawn)
{
    if (bishop==pawn) return false;
    return (bishop[0]+bishop[1]==pawn[0]+pawn[1]) || (bishop[0]+pawn[1]==pawn[0]+bishop[1]);
}
