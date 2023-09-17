/*               <DR.API TIMER STYLES> (c) by De Battista Clint              */
/*                                                                           */
/*                  <DR.API TIMER STYLES> is licensed under a                */
/*                        GNU General Public License                         */
/*																			 */
/*      You should have received a copy of the license along with this       */
/*            work.  If not, see <http://www.gnu.org/licenses/>.             */
//***************************************************************************//
//***************************************************************************//
//****************************DR.API TIMER STYLES****************************//
//***************************************************************************//
//***************************************************************************//

#if defined _APITimer_styles_included
 #endinput
#endif
#define _APITimer_styles_included

//Get client style.
//@param client
//@return	True.
native bool APITimer_GetClientStyle(int client, &id);


public SharedPlugin __pl_APITimer_styles =
{
	name = "APITimer_styles",
	file = "APITimer_styles.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_APITimer_styles_SetNTVOptional()
{
	MarkNativeAsOptional("APITimer_GetClientStyle");
}
#endif