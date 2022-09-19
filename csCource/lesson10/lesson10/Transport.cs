namespace lesson10
{
    public class Transport : ITrans
    {
        string ITrans.CarType { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
        int ITrans.CarWeight { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
        int ITrans.MaxWeight { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }

        void ITrans.GetTransInfo()
        {
            throw new NotImplementedException();
        }
    }
}

