#ifndef INCLUDED_COM_SUN_STAR_AWT_XFILEDIALOG_HPP
#define INCLUDED_COM_SUN_STAR_AWT_XFILEDIALOG_HPP

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


namespace com { namespace sun { namespace star { namespace awt {
inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::awt::XFileDialog const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_type_init( &the_type, typelib_TypeClass_INTERFACE, "com.sun.star.awt.XFileDialog" );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}
} } } }
inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::awt::XFileDialog > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::awt::XFileDialog > >::get();
}
::css::uno::Type const & ::css::awt::XFileDialog::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::getCppuType(static_cast< ::css::uno::Reference< ::css::awt::XFileDialog > * >(0));
}
#endif // INCLUDED_COM_SUN_STAR_AWT_XFILEDIALOG_HPP

