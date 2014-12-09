<?xml version="1.0" encoding="ISO-8859-1"?>
<?xml-stylesheet type="text/xsl"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="/">
		<html>
			<head>
				<script type="text/vbscript">
			Dim e
			
			Sub OnMouseOverArea()
				On Error Resume Next
				window.event.cancelBubble = true
				Set e = window.event.srcElement
				SetMouseHighlight
			End Sub
			
			Sub RemoveMouseHighlight()
				On Error Resume Next
				document.getElementById("curr_sel1").outerText = ""
				document.getElementById("curr_sel2").outerText = ""
				document.getElementById("curr_sel3").outerText = ""
				document.getElementById("curr_sel4").outerText = ""
			End Sub				
			
			Sub SetMouseHighlight()
				On Error Resume Next
				RemoveMouseHighlight
								
				topalign = 14
				leftalign = 10
				
				e.insertAdjacentHTML "AfterEnd", "&lt;DIV id=curr_sel1 style=""position:absolute; top:" &amp; e.offsetTop + topalign &amp; _
       			";left:" &amp; e.offsetLeft + leftalign &amp; ";width:" &amp; e.offsetWidth+2 &amp; _
       			";height:1; font-size:0; background-color:#9999CC; z-index:20""&gt;&lt;/DIV&gt;"
       			
       			e.insertAdjacentHTML "AfterEnd", "&lt;DIV id=curr_sel2 style=""position:absolute; top:" &amp; _
       			e.offsetTop + e.offsetHeight+1 + topalign &amp; _
       			";left:" &amp; e.offsetLeft + leftalign &amp; ";width:" &amp; e.offsetWidth+1 &amp; _
       			";height:1; font-size:0; background-color:#9999CC; z-index:20""&gt;&lt;/DIV&gt;"
				
				e.insertAdjacentHTML "AfterEnd", "&lt;DIV id=curr_sel3 style=""position:absolute; top:" &amp; e.offsetTop + topalign &amp; _
       			";left:" &amp; e.offsetLeft + leftalign &amp; ";width:1;height:" &amp; e.offsetHeight + 2&amp; _
       			"; font-size:0; background-color:#9999CC; z-index:20""&gt;&lt;/DIV&gt;"
				
				e.insertAdjacentHTML "AfterEnd", "&lt;DIV id=curr_sel4 style=""position:absolute; top:" &amp; e.offsetTop  + topalign &amp; _
       			";left:" &amp; e.offsetLeft + e.offsetWidth+1 + leftalign &amp; ";width:1;height:" &amp; e.offsetHeight + 2 &amp; _
       			"; font-size:0; background-color:#9999CC; z-index:20""&gt;&lt;/DIV&gt;"
			End Sub
					
		Sub OnMouseDownArea
			On Error Resume Next
			If (window.event.button = 2) Then
				RemoveMouseHighlight
			End If
		End Sub
		
		</script>
			</head>
			<body>
				<!-- Construct the image - Take it's source from the XML-->
				<img usemap="#imagemap" BORDER="0" onmousedown="OnMouseDownArea" onmouseover="RemoveMouseHighlight">
					<xsl:attribute name="src"><xsl:value-of select="/ASXMLStore/Step"/>.png</xsl:attribute>
				</img>
				<!-- Construct the map -->
				<MAP name="imagemap">
					<!-- Build an area map according to the coordinates in the XML -->
					<xsl:for-each select="//ASObject/Top">
						<AREA HIDEFOCUS="" shape="rect" onmouseover="OnMouseOverArea" onmousedown="OnMouseDownArea">
							<xsl:attribute name="coords"><xsl:value-of select="../Left"/>,
				<xsl:value-of select="."/>,
				<xsl:value-of select="../Left + ../Width"/>,
				<xsl:value-of select="../Top + ../Height"/></xsl:attribute>
							<xsl:attribute name="id"><xsl:value-of select="../Id"/></xsl:attribute>
						</AREA>
						<!--		<DIV>
			<xsl:attribute name="style">
				<xsl:value-of select="concat('position:absolute;font-size:0; top:' , Top - 1, '; left:', Left - 1, ';width:', Right - Left + 2, ';height:1; background-color:red')"/>
			</xsl:attribute>
		</DIV>-->
					</xsl:for-each>
					<!--</DIV> style="position:absolute; top:200; left:200; width:100; height:2; font-size:1; background-color:red; z-index:20"></DIV>-->
				</MAP>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
