// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

//
// size
//
template <typename T>
inline
size_t Queue <T>::size (void) const
{
	return queue_array.size();
}

//
// is_empty
//
template <typename T>
inline
bool Queue <T>::is_empty (void) const
{
	if (size() == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
