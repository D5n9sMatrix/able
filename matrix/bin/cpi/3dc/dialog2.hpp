#ifndef INCLUDED_COM_SUN_STAR_AWT_XDIALOG2_HPP
#define INCLUDED_COM_SUN_STAR_AWT_XDIALOG2_HPP

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string>

namespace com { namespace sun { namespace star { namespace awt {
inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::awt::XDialog2 const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_type_init( &the_type, typelib_TypeClass_INTERFACE, "com.sun.star.awt.XDialog2" );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}
} } } }
inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::awt::XDialog2 > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::awt::XDialog2 > >::get();
}
::css::uno::Type const & ::css::awt::XDialog2::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::getCppuType(static_cast< ::css::uno::Reference< ::css::awt::XDialog2 > * >(0));
}
#endif // INCLUDED_COM_SUN_STAR_AWT_XDIALOG2_HPP
