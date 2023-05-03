  
  
 class string
 {
 public:
 #ifndef DOXYGEN_SHOULD_SKIP_THIS
   // Methods
   string& operator=(const string&in);
   string& operator+=(const string&in);
   bool operator==(const string&in) const;
   int operator>(const string&in) const;
   string operator+(const string&in) const;
   uint length() const;
   void resize(uint);
   bool isEmpty() const;
   uint8& operator[](uint);
   const uint8& operator[](uint) const;
   string& operator=(double);
   string& operator+=(double);
   string operator+(double) const;
   string operator+(double) const;
   string& operator=(float);
   string& operator+=(float);
   string operator+(float) const;
   string operator+(float) const;
   string& operator=(int64);
   string& operator+=(int64);
   string operator+(int64) const;
   string operator+(int64) const;
   string& operator=(uint64);
   string& operator+=(uint64);
   string operator+(uint64) const;
   string operator+(uint64) const;
   string& operator=(bool);
   string& operator+=(bool);
   string operator+(bool) const;
   string operator+(bool) const;
   string substr(uint start = 0, int count = - 1) const;
   int findFirst(const string&in, uint start = 0) const;
   int findFirstOf(const string&in, uint start = 0) const;
   int findFirstNotOf(const string&in, uint start = 0) const;
   int findLast(const string&in, int start = - 1) const;
   int findLastOf(const string&in, int start = - 1) const;
   int findLastNotOf(const string&in, int start = - 1) const;
   void insert(uint pos, const string&in other);
   void erase(uint pos, int count = - 1);
   uint size() const;
   bool empty() const;
   int find(const string&in, uint start = 0) const;
   int rfind(const string&in, int start = - 1) const;
   string[]@ split(const string&in) const;
 #endif /* DOXYGEN_SHOULD_SKIP_THIS */
 };
  
  
  
 template<typename T>
 class array
 {
 public:
 #ifndef DOXYGEN_SHOULD_SKIP_THIS
   // Methods
   T& operator[](uint index);
   const T& operator[](uint index) const;
   T[]& operator=(const T[]&in);
   void insertAt(uint index, const T&in value);
   void insertAt(uint index, const T[]&inout arr);
   void insertLast(const T&in value);
   void removeAt(uint index);
   void removeLast();
   void removeRange(uint start, uint count);
   uint length() const;
   void reserve(uint length);
   void resize(uint length);
   void sortAsc();
   void sortAsc(uint startAt, uint count);
   void sortDesc();
   void sortDesc(uint startAt, uint count);
   void reverse();
   int find(const T&in value) const;
   int find(uint startAt, const T&in value) const;
   int findByRef(const T&in value) const;
   int findByRef(uint startAt, const T&in value) const;
   bool operator==(const T[]&in) const;
   bool isEmpty() const;
   void sort(array::less&in, uint startAt = 0, uint count = uint ( - 1 ));
   uint size() const;
   bool empty() const;
   void push_back(const T&in);
   void pop_back();
   void insert(uint index, const T&in value);
   void insert(uint index, const T[]&inout arr);
   void erase(uint);
 #endif /* DOXYGEN_SHOULD_SKIP_THIS */
 };
  
  
  
 class datetime
 {
 public:
 #ifndef DOXYGEN_SHOULD_SKIP_THIS
   // Methods
   datetime& operator=(const datetime&in);
   uint get_year() const;
   uint get_month() const;
   uint get_day() const;
   uint get_hour() const;
   uint get_minute() const;
   uint get_second() const;
   bool setDate(uint year, uint month, uint day);
   bool setTime(uint hour, uint minute, uint second);
   int64 operator-(const datetime&in) const;
   datetime operator+(int64 seconds) const;
   datetime operator+(int64 seconds) const;
   datetime& operator+=(int64 seconds);
   datetime operator-(int64 seconds) const;
   datetime operator-(int64 seconds) const;
   datetime& operator-=(int64 seconds);
   bool operator==(const datetime&in) const;
   int operator>(const datetime&in) const;
 #endif /* DOXYGEN_SHOULD_SKIP_THIS */
 };
  
  
  
 class file
 {
 public:
 #ifndef DOXYGEN_SHOULD_SKIP_THIS
   // Properties
   bool mostSignificantByteFirst;
   // Methods
   int open(const string&in, const string&in);
   int close();
   int getSize() const;
   bool isEndOfFile() const;
   string readString(uint);
   string readLine();
   int64 readInt(uint);
   uint64 readUInt(uint);
   float readFloat();
   double readDouble();
   int writeString(const string&in);
   int writeInt(int64, uint);
   int writeUInt(uint64, uint);
   int writeFloat(float);
   int writeDouble(double);
   int getPos() const;
   int setPos(int);
   int movePos(int);
 #endif /* DOXYGEN_SHOULD_SKIP_THIS */
 };
  
  
  
 class filesystem
 {
 public:
 #ifndef DOXYGEN_SHOULD_SKIP_THIS
   // Methods
   bool changeCurrentPath(const string&in);
   string getCurrentPath() const;
   string[]@ getDirs() const;
   string[]@ getFiles() const;
   bool isDir(const string&in) const;
   bool isLink(const string&in) const;
   int64 getSize(const string&in) const;
   int makeDir(const string&in);
   int removeDir(const string&in);
   int deleteFile(const string&in);
   int copyFile(const string&in, const string&in);
   int move(const string&in, const string&in);
   datetime getCreateDateTime(const string&in) const;
   datetime getModifyDateTime(const string&in) const;
 #endif /* DOXYGEN_SHOULD_SKIP_THIS */
 };
  
  
  
 class any
 {
 public:
 #ifndef DOXYGEN_SHOULD_SKIP_THIS
   // Methods
   any& operator=(any&in);
   void store(?&in);
   void store(const int64&in);
   void store(const double&in);
   bool retrieve(?&out);
   bool retrieve(int64&out);
   bool retrieve(double&out);
 #endif /* DOXYGEN_SHOULD_SKIP_THIS */
 };
  
  
  
 class vec3d
 {
 public:
   // Methods
   
   double& operator[](int) const;
   
   double x() const;
   
   double y() const;
   
   double z() const;
   
   vec3d& set_xyz(double x, double y, double z);
   
   vec3d& set_x(double x);
   
   vec3d& set_y(double y);
   
   vec3d& set_z(double z);
   
   void rotate_x(double cos_alpha, double sin_alpha);
   
   void rotate_y(double cos_alpha, double sin_alpha);
   
   void rotate_z(double cos_alpha, double sin_alpha);
   
   void scale_x(double scale);
   
   void scale_y(double scale);
   
   void scale_z(double scale);
   
   void offset_x(double offset);
   
   void offset_y(double offset);
   
   void offset_z(double offset);
   
   void rotate_z_zero_x(double cos_alpha, double sin_alpha);
   
   void rotate_z_zero_y(double cos_alpha, double sin_alpha);
   
   vec3d reflect_xy();
   
   vec3d reflect_xz();
   
   vec3d reflect_yz();
   
   vec3d operator+(const vec3d&in) const;
   
   vec3d operator-(const vec3d&in) const;
   
   vec3d operator*(double b) const;
   
   vec3d operator*(const vec3d&in) const;
   
   vec3d operator/(double b) const;
   
   double mag() const;
   
   void normalize();
 };
  
  
  
 class Matrix4d
 {
 public:
   // Methods
   
   void loadIdentity();
   
   void translatef(const double&in x, const double&in y, const double&in z);
   
   void rotateX(const double&in ang);
   
   void rotateY(const double&in ang);
   
   void rotateZ(const double&in ang);
   
   void rotate(const double&in ang, const vec3d&in axis);
   
   void scale(const double&in scale);
   
   vec3d xform(const vec3d&in v);
   
   vec3d getAngles();
   
   void loadXZRef();
   
   void loadXYRef();
   
   void loadYZRef();
   
   void affineInverse();
   
   void buildXForm(const vec3d&in pos, const vec3d&in rot, const vec3d&in cent_rot);
 };
  
  
  
 class ErrorObj
 {
 public:
   // Methods
   
   ERROR_CODE GetErrorCode();
   
   string GetErrorString();
 };
  
  
 enum ABS_REL_FLAG
 {
   ABS = 0, 
   REL = 1 
 };
  
 enum AIRFOIL_EXPORT_TYPE
 {
   SELIG_AF_EXPORT = 0, 
   BEZIER_AF_EXPORT = 1 
 };
  
 enum ANG_UNITS
 {
   ANG_RAD = 0, 
   ANG_DEG = 1 
 };
  
 enum ATMOS_TYPE
 {
   ATMOS_TYPE_US_STANDARD_1976 = 0, 
   ATMOS_TYPE_HERRINGTON_1966 = 1, 
   ATMOS_TYPE_MANUAL_P_R = 2, 
   ATMOS_TYPE_MANUAL_P_T = 3, 
   ATMOS_TYPE_MANUAL_R_T = 4, 
   ATMOS_TYPE_MANUAL_RE_L = 5 
 };
  
 enum ATTACH_ROT_TYPE
 {
   ATTACH_ROT_NONE = 0, 
   ATTACH_ROT_COMP = 1, 
   ATTACH_ROT_UV = 2, 
   ATTACH_ROT_RST = 3, 
   ATTACH_ROT_LMN = 4, 
   ATTACH_ROT_NUM_TYPES = 5 
 };
  
 enum ATTACH_TRANS_TYPE
 {
   ATTACH_TRANS_NONE = 0, 
   ATTACH_TRANS_COMP = 1, 
   ATTACH_TRANS_UV = 2, 
   ATTACH_TRANS_RST = 3, 
   ATTACH_TRANS_LMN = 4, 
   ATTACH_TRANS_NUM_TYPES = 5 
 };
  
 enum BOR_MODE
 {
   BOR_FLOWTHROUGH = 0, 
   BOR_UPPER = 1, 
   BOR_LOWER = 2, 
   BOR_NUM_MODES = 3 
 };
  
 enum CAMBER_INPUT_FLAG
 {
   MAX_CAMB = 0, 
   DESIGN_CL = 1 
 };
  
 enum CAP_TYPE
 {
   NO_END_CAP = 0, 
   FLAT_END_CAP = 1, 
   ROUND_END_CAP = 2, 
   EDGE_END_CAP = 3, 
   SHARP_END_CAP = 4, 
   ROUND_EXT_END_CAP_NONE = 6, 
   ROUND_EXT_END_CAP_LE = 7, 
   ROUND_EXT_END_CAP_TE = 8, 
   ROUND_EXT_END_CAP_BOTH = 9, 
   NUM_END_CAP_OPTIONS = 10 
 };
  
 enum CFD_CONTROL_TYPE
 {
   CFD_MIN_EDGE_LEN = 0, 
   CFD_MAX_EDGE_LEN = 1, 
   CFD_MAX_GAP = 2, 
   CFD_NUM_CIRCLE_SEGS = 3, 
   CFD_GROWTH_RATIO = 4, 
   CFD_LIMIT_GROWTH_FLAG = 5, 
   CFD_INTERSECT_SUBSURFACE_FLAG = 6, 
   CFD_HALF_MESH_FLAG = 7, 
   CFD_FAR_FIELD_FLAG = 8, 
   CFD_FAR_MAX_EDGE_LEN = 9, 
   CFD_FAR_MAX_GAP = 10, 
   CFD_FAR_NUM_CIRCLE_SEGS = 11, 
   CFD_FAR_SIZE_ABS_FLAG = 12, 
   CFD_FAR_LENGTH = 13, 
   CFD_FAR_WIDTH = 14, 
   CFD_FAR_HEIGHT = 15, 
   CFD_FAR_X_SCALE = 16, 
   CFD_FAR_Y_SCALE = 17, 
   CFD_FAR_Z_SCALE = 18, 
   CFD_FAR_LOC_MAN_FLAG = 19, 
   CFD_FAR_LOC_X = 20, 
   CFD_FAR_LOC_Y = 21, 
   CFD_FAR_LOC_Z = 22, 
   CFD_SRF_XYZ_FLAG = 23 
 };
  
 enum CFD_MESH_EXPORT_TYPE
 {
   CFD_STL_FILE_NAME = 0, 
   CFD_POLY_FILE_NAME = 1, 
   CFD_TRI_FILE_NAME = 2, 
   CFD_OBJ_FILE_NAME = 3, 
   CFD_DAT_FILE_NAME = 4, 
   CFD_KEY_FILE_NAME = 5, 
   CFD_GMSH_FILE_NAME = 6, 
   CFD_TKEY_FILE_NAME = 7, 
   CFD_FACET_FILE_NAME = 8, 
   CFD_VSPGEOM_FILE_NAME = 9, 
   CFD_NUM_FILE_NAMES = 10 
 };
  
 enum CFD_MESH_SOURCE_TYPE
 {
   POINT_SOURCE = 0, 
   LINE_SOURCE = 1, 
   BOX_SOURCE = 2, 
   ULINE_SOURCE = 3, 
   WLINE_SOURCE = 4, 
   NUM_SOURCE_TYPES = 5 
 };
  
 enum CF_LAM_EQN
 {
   CF_LAM_BLASIUS = 0, 
   CF_LAM_BLASIUS_W_HEAT = 1 
 };
  
 enum CF_TURB_EQN
 {
   CF_TURB_EXPLICIT_FIT_SPALDING = 0, 
   CF_TURB_EXPLICIT_FIT_SPALDING_CHI = 1, 
   CF_TURB_EXPLICIT_FIT_SCHOENHERR = 2, 
   DO_NOT_USE_CF_TURB_IMPLICIT_KARMAN = 3, 
   CF_TURB_IMPLICIT_SCHOENHERR = 4, 
   CF_TURB_IMPLICIT_KARMAN_SCHOENHERR = 5, 
   CF_TURB_POWER_LAW_BLASIUS = 6, 
   CF_TURB_POWER_LAW_PRANDTL_LOW_RE = 7, 
   CF_TURB_POWER_LAW_PRANDTL_MEDIUM_RE = 8, 
   CF_TURB_POWER_LAW_PRANDTL_HIGH_RE = 9, 
   CF_TURB_SCHLICHTING_COMPRESSIBLE = 10, 
   DO_NOT_USE_CF_TURB_SCHLICHTING_INCOMPRESSIBLE = 11, 
   DO_NOT_USE_CF_TURB_SCHLICHTING_PRANDTL = 12, 
   DO_NOT_USE_CF_TURB_SCHULTZ_GRUNOW_HIGH_RE = 13, 
   CF_TURB_SCHULTZ_GRUNOW_SCHOENHERR = 14, 
   DO_NOT_USE_CF_TURB_WHITE_CHRISTOPH_COMPRESSIBLE = 15, 
   CF_TURB_ROUGHNESS_SCHLICHTING_AVG = 16, 
   DO_NOT_USE_CF_TURB_ROUGHNESS_SCHLICHTING_LOCAL = 17, 
   DO_NOT_USE_CF_TURB_ROUGHNESS_WHITE = 18, 
   CF_TURB_ROUGHNESS_SCHLICHTING_AVG_FLOW_CORRECTION = 19, 
   CF_TURB_HEATTRANSFER_WHITE_CHRISTOPH = 20 
 };
  
 enum CHEVRON_TYPE
 {
   CHEVRON_NONE = 0, 
   CHEVRON_PARTIAL = 1, 
   CHEVRON_FULL = 2, 
   CHEVRON_NUM_TYPES = 3 
 };
  
 enum CHEVRON_W01_MODES
 {
   CHEVRON_W01_SE = 0, 
   CHEVRON_W01_CW = 1, 
   CHEVRON_W01_NUM_MODES = 2 
 };
  
 enum COLLISION_ERRORS
 {
   COLLISION_OK = 0, 
   COLLISION_INTERSECT_NO_SOLUTION = 1, 
   COLLISION_CLEAR_NO_SOLUTION = 2 
 };
  
 enum COMPUTATION_FILE_TYPE
 {
   NO_FILE_TYPE = 0, 
   COMP_GEOM_TXT_TYPE = 1, 
   COMP_GEOM_CSV_TYPE = 2, 
   SLICE_TXT_TYPE = 8, 
   MASS_PROP_TXT_TYPE = 16, 
   DEGEN_GEOM_CSV_TYPE = 32, 
   DEGEN_GEOM_M_TYPE = 64, 
   CFD_STL_TYPE = 128, 
   CFD_POLY_TYPE = 256, 
   CFD_TRI_TYPE = 512, 
   CFD_OBJ_TYPE = 1024, 
   CFD_DAT_TYPE = 2048, 
   CFD_KEY_TYPE = 4096, 
   CFD_GMSH_TYPE = 8192, 
   CFD_TKEY_TYPE = 32768, 
   PROJ_AREA_CSV_TYPE = 65536, 
   WAVE_DRAG_TXT_TYPE = 131072, 
   VSPAERO_PANEL_TRI_TYPE = 262144, 
   DRAG_BUILD_CSV_TYPE = 524288, 
   CFD_FACET_TYPE = 1048576, 
   CFD_VSPGEOM_TYPE = 8388608, 
   VSPAERO_VSPGEOM_TYPE = 16777216 
 };
  
 enum DELIM_TYPE
 {
   DELIM_COMMA = 0, 
   DELIM_USCORE = 1, 
   DELIM_SPACE = 2, 
   DELIM_NONE = 3, 
   DELIM_NUM_TYPES = 4 
 };
  
 enum DIMENSION_SET
 {
   SET_3D = 0, 
   SET_2D = 1 
 };
  
 enum DIR_INDEX
 {
   X_DIR = 0, 
   Y_DIR = 1, 
   Z_DIR = 2, 
   ALL_DIR = 3 
 };
  
 enum DISPLAY_TYPE
 {
   DISPLAY_BEZIER = 0, 
   DISPLAY_DEGEN_SURF = 1, 
   DISPLAY_DEGEN_PLATE = 2, 
   DISPLAY_DEGEN_CAMBER = 3 
 };
  
 enum DRAW_TYPE
 {
   GEOM_DRAW_WIRE = 0, 
   GEOM_DRAW_HIDDEN = 1, 
   GEOM_DRAW_SHADE = 2, 
   GEOM_DRAW_TEXTURE = 3, 
   GEOM_DRAW_NONE = 4 
 };
  
 enum ERROR_CODE
 {
   VSP_OK = 0, 
   VSP_INVALID_PTR = 1, 
   VSP_INVALID_TYPE = 2, 
   VSP_CANT_FIND_TYPE = 3, 
   VSP_CANT_FIND_PARM = 4, 
   VSP_CANT_FIND_NAME = 5, 
   VSP_INVALID_GEOM_ID = 6, 
   VSP_FILE_DOES_NOT_EXIST = 7, 
   VSP_FILE_WRITE_FAILURE = 8, 
   VSP_FILE_READ_FAILURE = 9, 
   VSP_WRONG_XSEC_TYPE = 10, 
   VSP_WRONG_FILE_TYPE = 11, 
   VSP_INDEX_OUT_RANGE = 12, 
   VSP_INVALID_XSEC_ID = 13, 
   VSP_INVALID_ID = 14, 
   VSP_CANT_SET_NOT_EQ_PARM = 15, 
   VSP_AMBIGUOUS_SUBSURF = 16, 
   VSP_INVALID_VARPRESET_SETNAME = 17, 
   VSP_INVALID_VARPRESET_GROUPNAME = 18, 
   VSP_CONFORMAL_PARENT_UNSUPPORTED = 19, 
   VSP_UNEXPECTED_RESET_REMAP_ID = 20, 
   VSP_INVALID_INPUT_VAL = 21, 
   VSP_INVALID_CF_EQN = 22, 
   VSP_INVALID_DRIVERS = 23, 
   VSP_ADV_LINK_BUILD_FAIL = 24, 
   VSP_DEPRECATED = 25 
 };
  
 enum EXCRES_TYPE
 {
   EXCRESCENCE_COUNT = 0, 
   EXCRESCENCE_CD = 1, 
   EXCRESCENCE_PERCENT_GEOM = 2, 
   EXCRESCENCE_MARGIN = 3, 
   EXCRESCENCE_DRAGAREA = 4 
 };
  
 enum EXPORT_TYPE
 {
   EXPORT_FELISA = 0, 
   EXPORT_XSEC = 1, 
   EXPORT_STL = 2, 
   EXPORT_AWAVE = 3, 
   EXPORT_NASCART = 4, 
   EXPORT_POVRAY = 5, 
   EXPORT_CART3D = 6, 
   EXPORT_VSPGEOM = 7, 
   EXPORT_VORXSEC = 8, 
   EXPORT_XSECGEOM = 9, 
   EXPORT_GMSH = 10, 
   EXPORT_X3D = 11, 
   EXPORT_STEP = 12, 
   EXPORT_PLOT3D = 13, 
   EXPORT_IGES = 14, 
   EXPORT_BEM = 15, 
   EXPORT_DXF = 16, 
   EXPORT_FACET = 17, 
   EXPORT_SVG = 18, 
   EXPORT_PMARC = 19, 
   EXPORT_OBJ = 20, 
   EXPORT_SELIG_AIRFOIL = 21, 
   EXPORT_BEZIER_AIRFOIL = 22, 
   EXPORT_IGES_STRUCTURE = 23, 
   EXPORT_STEP_STRUCTURE = 24 
 };
  
 enum FEA_CROSS_SECT_TYPE
 {
   FEA_XSEC_GENERAL = 0, 
   FEA_XSEC_CIRC = 1, 
   FEA_XSEC_PIPE = 2, 
   FEA_XSEC_I = 3, 
   FEA_XSEC_RECT = 4, 
   FEA_XSEC_BOX = 5 
 };
  
 enum FEA_EXPORT_TYPE
 {
   FEA_MASS_FILE_NAME = 0, 
   FEA_NASTRAN_FILE_NAME = 1, 
   FEA_NKEY_FILE_NAME = 2, 
   FEA_CALCULIX_FILE_NAME = 3, 
   FEA_STL_FILE_NAME = 4, 
   FEA_GMSH_FILE_NAME = 5, 
   FEA_SRF_FILE_NAME = 6, 
   FEA_CURV_FILE_NAME = 7, 
   FEA_PLOT3D_FILE_NAME = 8, 
   FEA_IGES_FILE_NAME = 9, 
   FEA_STEP_FILE_NAME = 10, 
   FEA_NUM_FILE_NAMES = 11 
 };
  
 enum FEA_MATERIAL_TYPE
 {
   FEA_ISOTROPIC = 0, 
   FEA_ENG_ORTHO = 1, 
   FEA_NUM_MAT_TYPES = 2 
 };
  
 enum FEA_ORIENTATION_TYPE
 {
   FEA_ORIENT_GLOBAL_X = 0, 
   FEA_ORIENT_GLOBAL_Y = 1, 
   FEA_ORIENT_GLOBAL_Z = 2, 
   FEA_ORIENT_COMP_X = 3, 
   FEA_ORIENT_COMP_Y = 4, 
   FEA_ORIENT_COMP_Z = 5, 
   FEA_ORIENT_PART_U = 6, 
   FEA_ORIENT_PART_V = 7, 
   FEA_ORIENT_OML_U = 8, 
   FEA_ORIENT_OML_V = 9, 
   FEA_ORIENT_OML_R = 10, 
   FEA_ORIENT_OML_S = 11, 
   FEA_ORIENT_OML_T = 12, 
   FEA_NUM_ORIENT_TYPES = 13 
 };
  
 enum FEA_PART_ELEMENT_TYPE
 {
   FEA_DEPRECATED = -1, 
   FEA_SHELL = 0, 
   FEA_BEAM = 1, 
   FEA_SHELL_AND_BEAM = 2, 
   FEA_NO_ELEMENTS = 3, 
   FEA_NUM_ELEMENT_TYPES = 4 
 };
  
 enum FEA_PART_TYPE
 {
   FEA_SLICE = 0, 
   FEA_RIB = 1, 
   FEA_SPAR = 2, 
   FEA_FIX_POINT = 3, 
   FEA_DOME = 4, 
   FEA_RIB_ARRAY = 5, 
   FEA_SLICE_ARRAY = 6, 
   FEA_TRIM = 8, 
   FEA_SKIN = 7, 
   FEA_NUM_TYPES = 9 
 };
  
 enum FEA_RIB_NORMAL
 {
   NO_NORMAL = 0, 
   LE_NORMAL = 1, 
   TE_NORMAL = 2, 
   SPAR_NORMAL = 3 
 };
  
 enum FEA_SHELL_TREATMENT_TYPE
 {
   FEA_KEEP = 0, 
   FEA_DELETE = 1, 
   FEA_NUM_SHELL_TREATMENT_TYPES = 2 
 };
  
 enum FEA_SLICE_TYPE
 {
   XY_BODY = 0, 
   YZ_BODY = 1, 
   XZ_BODY = 2, 
   XY_ABS = 3, 
   YZ_ABS = 4, 
   XZ_ABS = 5, 
   SPINE_NORMAL = 6 
 };
  
 enum FEA_UNIT_TYPE
 {
   SI_UNIT = 0, 
   CGS_UNIT = 1, 
   MPA_UNIT = 2, 
   BFT_UNIT = 3, 
   BIN_UNIT = 4 
 };
  
 enum FF_B_EQN
 {
   FF_B_MANUAL = 0, 
   FF_B_SCHEMENSKY_BODY = 1, 
   FF_B_SCHEMENSKY_NACELLE = 2, 
   FF_B_HOERNER_STREAMBODY = 3, 
   FF_B_TORENBEEK = 4, 
   FF_B_SHEVELL = 5, 
   FF_B_COVERT = 6, 
   FF_B_JENKINSON_FUSE = 7, 
   FF_B_JENKINSON_WING_NACELLE = 8, 
   FF_B_JENKINSON_AFT_FUSE_NACELLE = 9 
 };
  
 enum FF_W_EQN
 {
   FF_W_MANUAL = 0, 
   FF_W_EDET_CONV = 1, 
   FF_W_EDET_ADV = 2, 
   FF_W_HOERNER = 3, 
   FF_W_COVERT = 4, 
   FF_W_WILLIAMS = 5, 
   FF_W_KROO = 6, 
   FF_W_TORENBEEK = 7, 
   FF_W_DATCOM = 8, 
   FF_W_SCHEMENSKY_6_SERIES_AF = 9, 
   FF_W_SCHEMENSKY_4_SERIES_AF = 10, 
   FF_W_JENKINSON_WING = 11, 
   FF_W_JENKINSON_TAIL = 12, 
   FF_W_SCHEMENSKY_SUPERCRITICAL_AF = 13 
 };
  
 enum FREESTREAM_PD_UNITS
 {
   PD_UNITS_IMPERIAL = 0, 
   PD_UNITS_METRIC = 1 
 };
  
 enum GDEV
 {
   GDEV_TAB = 0, 
   GDEV_SCROLL_TAB = 1, 
   GDEV_GROUP = 2, 
   GDEV_PARM_BUTTON = 3, 
   GDEV_INPUT = 4, 
   GDEV_OUTPUT = 5, 
   GDEV_SLIDER = 6, 
   GDEV_SLIDER_ADJ_RANGE = 7, 
   GDEV_CHECK_BUTTON = 8, 
   GDEV_RADIO_BUTTON = 10, 
   GDEV_TOGGLE_BUTTON = 11, 
   GDEV_TOGGLE_RADIO_GROUP = 12, 
   GDEV_TRIGGER_BUTTON = 13, 
   GDEV_COUNTER = 14, 
   GDEV_CHOICE = 15, 
   GDEV_ADD_CHOICE_ITEM = 16, 
   GDEV_SLIDER_INPUT = 17, 
   GDEV_SLIDER_ADJ_RANGE_INPUT = 18, 
   GDEV_SLIDER_ADJ_RANGE_TWO_INPUT = 19, 
   GDEV_FRACT_PARM_SLIDER = 20, 
   GDEV_STRING_INPUT = 21, 
   GDEV_INDEX_SELECTOR = 22, 
   GDEV_COLOR_PICKER = 23, 
   GDEV_YGAP = 24, 
   GDEV_DIVIDER_BOX = 25, 
   GDEV_BEGIN_SAME_LINE = 26, 
   GDEV_END_SAME_LINE = 27, 
   GDEV_FORCE_WIDTH = 28, 
   GDEV_SET_FORMAT = 29 
 };
  
 enum GENDER
 {
   MALE = 0, 
   FEMALE = 1 
 };
  
 enum IMPORT_TYPE
 {
   IMPORT_STL = 0, 
   IMPORT_NASCART = 1, 
   IMPORT_CART3D_TRI = 2, 
   IMPORT_XSEC_MESH = 3, 
   IMPORT_PTS = 4, 
   IMPORT_V2 = 5, 
   IMPORT_BEM = 6, 
   IMPORT_XSEC_WIRE = 7, 
   IMPORT_P3D_WIRE = 8 
 };
  
 enum INIT_EDIT_XSEC_TYPE
 {
   EDIT_XSEC_CIRCLE = 0, 
   EDIT_XSEC_ELLIPSE = 1, 
   EDIT_XSEC_RECTANGLE = 2 
 };
  
 enum INTERSECT_EXPORT_TYPE
 {
   INTERSECT_SRF_FILE_NAME = 0, 
   INTERSECT_CURV_FILE_NAME = 1, 
   INTERSECT_PLOT3D_FILE_NAME = 2, 
   INTERSECT_IGES_FILE_NAME = 3, 
   INTERSECT_STEP_FILE_NAME = 4, 
   INTERSECT_NUM_FILE_NAMES = 5 
 };
  
 enum LEN_UNITS
 {
   LEN_MM = 0, 
   LEN_CM = 1, 
   LEN_M = 2, 
   LEN_IN = 3, 
   LEN_FT = 4, 
   LEN_YD = 5, 
   LEN_UNITLESS = 6, 
   NUM_LEN_UNIT = 7 
 };
  
 enum MASS_UNIT
 {
   MASS_UNIT_G = 0, 
   MASS_UNIT_KG = 1, 
   MASS_UNIT_TONNE = 2, 
   MASS_UNIT_LBM = 3, 
   MASS_UNIT_SLUG = 4, 
   MASS_LBFSEC2IN = 5, 
   NUM_MASS_UNIT = 6 
 };
  
 enum PARM_TYPE
 {
   PARM_DOUBLE_TYPE = 0, 
   PARM_INT_TYPE = 1, 
   PARM_BOOL_TYPE = 2, 
   PARM_FRACTION_TYPE = 3, 
   PARM_LIMITED_INT_TYPE = 4, 
   PARM_NOTEQ_TYPE = 5 
 };
  
 enum PATCH_TYPE
 {
   PATCH_NONE = 0, 
   PATCH_POINT = 1, 
   PATCH_LINE = 2, 
   PATCH_COPY = 3, 
   PATCH_HALFWAY = 4, 
   PATCH_NUM_TYPES = 5 
 };
  
 enum PCURV_TYPE
 {
   LINEAR = 0, 
   PCHIP = 1, 
   CEDIT = 2, 
   APPROX_CEDIT = 3, 
   NUM_PCURV_TYPE = 4 
 };
  
 enum PRES_UNITS
 {
   PRES_UNIT_PSF = 0, 
   PRES_UNIT_PSI = 1, 
   PRES_UNIT_BA = 2, 
   PRES_UNIT_PA = 3, 
   PRES_UNIT_KPA = 4, 
   PRES_UNIT_MPA = 5, 
   PRES_UNIT_INCHHG = 6, 
   PRES_UNIT_MMHG = 7, 
   PRES_UNIT_MMH20 = 8, 
   PRES_UNIT_MB = 9, 
   PRES_UNIT_ATM = 10, 
   NUM_PRES_UNIT = 11 
 };
  
 enum PROJ_BNDY_TYPE
 {
   NO_BOUNDARY = 0, 
   SET_BOUNDARY = 1, 
   GEOM_BOUNDARY = 2, 
   NUM_PROJ_BNDY_OPTIONS = 3 
 };
  
 enum PROJ_DIR_TYPE
 {
   X_PROJ = 0, 
   Y_PROJ = 1, 
   Z_PROJ = 2, 
   GEOM_PROJ = 3, 
   VEC_PROJ = 4, 
   NUM_PROJ_DIR_OPTIONS = 5 
 };
  
 enum PROJ_TGT_TYPE
 {
   SET_TARGET = 0, 
   GEOM_TARGET = 1, 
   NUM_PROJ_TGT_OPTIONS = 2 
 };
  
 enum PROP_MODE
 {
   PROP_BLADES = 0, 
   PROP_BOTH = 1, 
   PROP_DISK = 2 
 };
  
 enum PROP_PCURVE
 {
   PROP_CHORD = 0, 
   PROP_TWIST = 1, 
   PROP_RAKE = 2, 
   PROP_SKEW = 3, 
   PROP_SWEEP = 4, 
   PROP_THICK = 5, 
   PROP_CLI = 6, 
   PROP_AXIAL = 7, 
   PROP_TANGENTIAL = 8, 
   NUM_PROP_PCURVE = 9 
 };
  
 enum REF_WING_TYPE
 {
   MANUAL_REF = 0, 
   COMPONENT_REF = 1, 
   NUM_REF_TYPES = 2 
 };
  
 enum RES_DATA_TYPE
 {
   INVALID_TYPE = -1, 
   INT_DATA = 0, 
   DOUBLE_DATA = 1, 
   STRING_DATA = 2, 
   VEC3D_DATA = 3, 
   DOUBLE_MATRIX_DATA = 4 
 };
  
 enum RES_GEOM_TYPE
 {
   MESH_INDEXED_TRI = 0, 
   MESH_SLICE_TRI = 1, 
   GEOM_XSECS = 2, 
   MESH_INDEX_AND_SLICE_TRI = 3 
 };
  
 enum RHO_UNITS
 {
   RHO_UNIT_SLUG_FT3 = 0, 
   RHO_UNIT_G_CM3 = 1, 
   RHO_UNIT_KG_M3 = 2, 
   RHO_UNIT_TONNE_MM3 = 3, 
   RHO_UNIT_LBM_FT3 = 4, 
   RHO_UNIT_LBFSEC2_IN4 = 5, 
   RHO_UNIT_LBM_IN3 = 6, 
   NUM_RHO_UNIT = 7 
 };
  
 enum SET_TYPE
 {
   SET_NONE = -1, 
   SET_ALL = 0, 
   SET_SHOWN = 1, 
   SET_NOT_SHOWN = 2, 
   SET_FIRST_USER = 3 
 };
  
 enum STEP_REPRESENTATION
 {
   STEP_SHELL = 0, 
   STEP_BREP = 1 
 };
  
 enum SUBSURF_INCLUDE
 {
   SS_INC_TREAT_AS_PARENT = 0, 
   SS_INC_SEPARATE_TREATMENT = 1, 
   SS_INC_ZERO_DRAG = 2 
 };
  
 enum SUBSURF_INOUT
 {
   INSIDE = 0, 
   OUTSIDE = 1, 
   NONE = 2 
 };
  
 enum SUBSURF_LINE_TYPE
 {
   CONST_U = 0, 
   CONST_W = 1 
 };
  
 enum SUBSURF_TYPE
 {
   SS_LINE = 0, 
   SS_RECTANGLE = 1, 
   SS_ELLIPSE = 2, 
   SS_CONTROL = 3, 
   SS_LINE_ARRAY = 4, 
   SS_FINITE_LINE = 5, 
   SS_NUM_TYPES = 6 
 };
  
 enum SYM_FLAG
 {
   SYM_XY = 1, 
   SYM_XZ = 2, 
   SYM_YZ = 4, 
   SYM_ROT_X = 8, 
   SYM_ROT_Y = 16, 
   SYM_ROT_Z = 32, 
   SYM_PLANAR_TYPES = 3, 
   SYM_NUM_TYPES = 6 
 };
  
 enum SYM_XSEC_TYPE
 {
   SYM_NONE = 0, 
   SYM_RL = 1, 
   SYM_TB = 2, 
   SYM_ALL = 3 
 };
  
 enum TEMP_UNITS
 {
   TEMP_UNIT_K = 0, 
   TEMP_UNIT_C = 1, 
   TEMP_UNIT_F = 2, 
   TEMP_UNIT_R = 3, 
   NUM_TEMP_UNIT = 4 
 };
  
 enum VEL_UNITS
 {
   V_UNIT_FT_S = 0, 
   V_UNIT_M_S = 1, 
   V_UNIT_MPH = 2, 
   V_UNIT_KM_HR = 3, 
   V_UNIT_KEAS = 4, 
   V_UNIT_KTAS = 5, 
   V_UNIT_MACH = 6 
 };
  
 enum VIEW_NUM
 {
   VIEW_1 = 0, 
   VIEW_2HOR = 1, 
   VIEW_2VER = 2, 
   VIEW_4 = 3 
 };
  
 enum VIEW_ROT
 {
   ROT_0 = 0, 
   ROT_90 = 1, 
   ROT_180 = 2, 
   ROT_270 = 3 
 };
  
 enum VIEW_TYPE
 {
   VIEW_LEFT = 0, 
   VIEW_RIGHT = 1, 
   VIEW_TOP = 2, 
   VIEW_BOTTOM = 3, 
   VIEW_FRONT = 4, 
   VIEW_REAR = 5, 
   VIEW_NONE = 6 
 };
  
 enum VSPAERO_ANALYSIS_METHOD
 {
   VORTEX_LATTICE = 0, 
   PANEL = 1 
 };
  
 enum VSPAERO_CLMAX_TYPE
 {
   CLMAX_OFF = 0, 
   CLMAX_2D = 1, 
   CLMAX_CARLSON = 2 
 };
  
 enum VSPAERO_NOISE_TYPE
 {
   NOISE_FLYBY = 0, 
   NOISE_FOOTPRINT = 1, 
   NOISE_STEADY = 2 
 };
  
 enum VSPAERO_NOISE_UNIT
 {
   NOISE_SI = 0, 
   NOISE_ENGLISH = 1 
 };
  
 enum VSPAERO_PRECONDITION
 {
   PRECON_MATRIX = 0, 
   PRECON_JACOBI = 1, 
   PRECON_SSOR = 2 
 };
  
 enum VSPAERO_STABILITY_TYPE
 {
   STABILITY_OFF = 0, 
   STABILITY_DEFAULT = 1, 
   STABILITY_P_ANALYSIS = 2, 
   STABILITY_Q_ANALYSIS = 3, 
   STABILITY_R_ANALYSIS = 4, 
   STABILITY_PITCH = 5, 
   STABILITY_NUM_TYPES = 6 
 };
  
 enum VSP_SURF_CFD_TYPE
 {
   CFD_NORMAL = 0, 
   CFD_NEGATIVE = 1, 
   CFD_TRANSPARENT = 2, 
   CFD_STRUCTURE = 3, 
   CFD_STIFFENER = 4, 
   CFD_NUM_TYPES = 6 
 };
  
 enum VSP_SURF_TYPE
 {
   NORMAL_SURF = 0, 
   WING_SURF = 1, 
   DISK_SURF = 2, 
   NUM_SURF_TYPES = 3 
 };
  
 enum WING_BLEND
 {
   BLEND_FREE = 0, 
   BLEND_ANGLES = 1, 
   BLEND_MATCH_IN_LE_TRAP = 2, 
   BLEND_MATCH_IN_TE_TRAP = 3, 
   BLEND_MATCH_OUT_LE_TRAP = 4, 
   BLEND_MATCH_OUT_TE_TRAP = 5, 
   BLEND_MATCH_IN_ANGLES = 6, 
   BLEND_MATCH_LE_ANGLES = 7, 
   BLEND_NUM_TYPES = 8 
 };
  
 enum WING_DRIVERS
 {
   AR_WSECT_DRIVER = 0, 
   SPAN_WSECT_DRIVER = 1, 
   AREA_WSECT_DRIVER = 2, 
   TAPER_WSECT_DRIVER = 3, 
   AVEC_WSECT_DRIVER = 4, 
   ROOTC_WSECT_DRIVER = 5, 
   TIPC_WSECT_DRIVER = 6, 
   SECSWEEP_WSECT_DRIVER = 7, 
   NUM_WSECT_DRIVER = 8, 
   SWEEP_WSECT_DRIVER = 8, 
   SWEEPLOC_WSECT_DRIVER = 9, 
   SECSWEEPLOC_WSECT_DRIVER = 10 
 };
  
 enum XDDM_QUANTITY_TYPE
 {
   XDDM_VAR = 0, 
   XDDM_CONST = 1 
 };
  
 enum XSEC_CLOSE_TYPE
 {
   CLOSE_NONE = 0, 
   CLOSE_SKEWLOW = 1, 
   CLOSE_SKEWUP = 2, 
   CLOSE_SKEWBOTH = 3, 
   CLOSE_EXTRAP = 4, 
   CLOSE_NUM_TYPES = 5 
 };
  
 enum XSEC_CRV_TYPE
 {
   XS_UNDEFINED = -1, 
   XS_POINT = 0, 
   XS_CIRCLE = 1, 
   XS_ELLIPSE = 2, 
   XS_SUPER_ELLIPSE = 3, 
   XS_ROUNDED_RECTANGLE = 4, 
   XS_GENERAL_FUSE = 5, 
   XS_FILE_FUSE = 6, 
   XS_FOUR_SERIES = 7, 
   XS_SIX_SERIES = 8, 
   XS_BICONVEX = 9, 
   XS_WEDGE = 10, 
   XS_EDIT_CURVE = 11, 
   XS_FILE_AIRFOIL = 12, 
   XS_CST_AIRFOIL = 13, 
   XS_VKT_AIRFOIL = 14, 
   XS_FOUR_DIGIT_MOD = 15, 
   XS_FIVE_DIGIT = 16, 
   XS_FIVE_DIGIT_MOD = 17, 
   XS_ONE_SIX_SERIES = 18, 
   XS_NUM_TYPES = 19 
 };
  
 enum XSEC_DRIVERS
 {
   WIDTH_XSEC_DRIVER = 0, 
   AREA_XSEC_DRIVER = 1, 
   HEIGHT_XSEC_DRIVER = 2, 
   HWRATIO_XSEC_DRIVER = 3, 
   NUM_XSEC_DRIVER = 4, 
   CIRCLE_NUM_XSEC_DRIVER = 2 
 };
  
 enum XSEC_SIDES_TYPE
 {
   XSEC_BOTH_SIDES = 0, 
   XSEC_LEFT_SIDE = 1, 
   XSEC_RIGHT_SIDE = 2 
 };
  
 enum XSEC_TRIM_TYPE
 {
   TRIM_NONE = 0, 
   TRIM_X = 1, 
   TRIM_THICK = 2, 
   TRIM_NUM_TYPES = 3 
 };
  
 enum XSEC_TYPE
 {
   XSEC_FUSE = 0, 
   XSEC_STACK = 1, 
   XSEC_WING = 2, 
   XSEC_CUSTOM = 3, 
   XSEC_PROP = 4, 
   XSEC_NUM_TYPES = 5 
 };
  
 enum XSEC_WIDTH_SHIFT
 {
   XS_SHIFT_LE = 0, 
   XS_SHIFT_MID = 1, 
   XS_SHIFT_TE = 2 
 };
  
 string formatInt(int64 val, const string&in options = "", uint width = 0);
 string formatUInt(uint64 val, const string&in options = "", uint width = 0);
 string formatFloat(double val, const string&in options = "", uint width = 0, uint precision = 0);
 int64 parseInt(const string&in, uint base = 10, uint&out byteCount = 0);
 uint64 parseUInt(const string&in, uint base = 10, uint&out byteCount = 0);
 double parseFloat(const string&in, uint&out byteCount = 0);
 string join(const string[]&in, const string&in);
 float fpFromIEEE(uint);
 uint fpToIEEE(float);
 double fpFromIEEE(uint64);
 uint64 fpToIEEE(double);
 bool closeTo(float, float, float = 0.00001f);
 bool closeTo(double, double, double = 0.0000000001);
 float cos(float);
 float sin(float);
 float tan(float);
 float acos(float);
 float asin(float);
 float atan(float);
 float atan2(float, float);
 float cosh(float);
 float sinh(float);
 float tanh(float);
 float log(float);
 float log10(float);
 float pow(float, float);
 float sqrt(float);
 float ceil(float);
 float abs(float);
 float floor(float);
 float fraction(float);
  
 double dist(const vec3d&in a, const vec3d&in b);
  
 double dist_squared(const vec3d&in a, const vec3d&in b);
  
 double dot(const vec3d&in a, const vec3d&in b);
  
 vec3d cross(const vec3d&in a, const vec3d&in b);
  
 double angle(const vec3d&in a, const vec3d&in b);
  
 double signed_angle(const vec3d&in a, const vec3d&in b, const vec3d&in ref);
  
 double cos_angle(const vec3d&in a, const vec3d&in b);
  
 vec3d RotateArbAxis(const vec3d&in p, double theta, const vec3d&in axis);
  
 string AddParm(int type, const string&in name, const string&in group);
  
 string GetCurrCustomGeom();
  
 string GetCustomParm(int index);
  
 int AddGui(int type, const string&in label = string ( ), const string&in parm_name = string ( ), const string&in group_name = string ( ), double range = 10.0);
  
 void UpdateGui(int gui_id, const string&in parm_id);
  
 string AddXSecSurf();
  
 void RemoveXSecSurf(const string&in xsec_id);
  
 void ClearXSecSurfs();
  
 void SkinXSecSurf(bool closed_flag = false);
  
 void CloneSurf(int index, Matrix4d&in mat);
  
 void TransformSurf(int index, Matrix4d&in mat);
  
 void SetVspSurfType(int type, int surf_index = - 1);
  
 void SetVspSurfCfdType(int type, int surf_index = - 1);
  
 void SetCustomXSecLoc(const string&in xsec_id, const vec3d&in loc);
  
 vec3d GetCustomXSecLoc(const string&in xsec_id);
  
 void SetCustomXSecRot(const string&in xsec_id, const vec3d&in rot);
  
 vec3d GetCustomXSecRot(const string&in xsec_id);
  
 bool CheckClearTriggerEvent(int gui_id);
  
 void SetupCustomDefaultSource(int type, int surf_index, double l1, double r1, double u1, double w1, double l2 = 0, double r2 = 0, double u2 = 0, double w2 = 0);
  
 void ClearAllCustomDefaultSources();
  
 void SetCustomCenter(double x, double y, double z);
  
 string AppendXSec(const string&in xsec_surf_id, int type);
  
 string AppendCustomXSec(const string&in xsec_surf_id, int type);
  
 void CutCustomXSec(const string&in xsec_surf_id, int index);
  
 void CopyCustomXSec(const string&in xsec_surf_id, int index);
  
 void PasteCustomXSec(const string&in xsec_surf_id, int index);
  
 string InsertCustomXSec(const string&in xsec_surf_id, int type, int index);
  
 void AddInput(const string&in parm_id, const string&in var_name);
  
 void AddOutput(const string&in parm_id, const string&in var_name);
  
 void SetVar(const string&in var_name, double val);
  
 double GetVar(const string&in var_name);
  
 bool GetErrorLastCallFlag();
  
 int GetNumTotalErrors();
  
 ErrorObj PopLastError();
  
 ErrorObj GetLastError();
  
 void SilenceErrors();
  
 void PrintOnErrors();
  
 void ScreenGrab(const string&in file_name, int w, int h, bool transparentBG, bool autocrop = false);
  
 void SetViewAxis(bool vaxis);
  
 void SetShowBorders(bool brdr);
  
 void SetGeomDrawType(const string&in geom_id, int type);
  
 void SetGeomDisplayType(const string&in geom_id, int type);
  
 void SetBackground(double r, double g, double b);
  
 void Update(bool update_managers = true);
  
 void VSPExit(int error_code);
  
 void ClearVSPModel();
  
 string GetVSPFileName();
  
 void ReadVSPFile(const string&in file_name);
  
 void WriteVSPFile(const string&in file_name, int set);
  
 void SetVSP3FileName(const string&in file_name);
  
 void InsertVSPFile(const string&in file_name, const string&in parent);
  
 string ExportFile(const string&in file_name, int thick_set, int file_type, int subsFlag = 1, int thin_set = - 1);
  
 string ImportFile(const string&in file_name, int file_type, const string&in parent);
  
 void SetBEMPropID(const string&in prop_id);
  
 void ReadApplyDESFile(const string&in file_name);
  
 void WriteDESFile(const string&in file_name);
  
 void ReadApplyXDDMFile(const string&in file_name);
  
 void WriteXDDMFile(const string&in file_name);
  
 int GetNumDesignVars();
  
 void AddDesignVar(const string&in parm_id, int type);
  
 void DeleteAllDesignVars();
  
 string GetDesignVar(int index);
  
 int GetDesignVarType(int index);
  
 string ComputeMassProps(int set, int num_slices, int idir = X_DIR);
  
 string ComputeCompGeom(int set, bool half_mesh, int file_export_types);
  
 string ComputePlaneSlice(int set, int num_slices, const vec3d&in norm, bool auto_bnd, double start_bnd = 0, double end_bnd = 0, bool measureduct = false);
  
 void ComputeDegenGeom(int set, int file_type);
  
 void SetComputationFileName(int file_type, const string&in file_name);
  
 void ComputeCFDMesh(int set, int degenset, int file_type);
  
 void SetCFDMeshVal(int type, double val);
  
 void SetCFDWakeFlag(const string&in geom_id, bool flag);
  
 void DeleteAllCFDSources();
  
 void AddDefaultSources();
  
 void AddCFDSource(int type, const string&in geom_id, int surf_index, double l1, double r1, double u1, double w1, double l2 = 0, double r2 = 0, double u2 = 0, double w2 = 0);
  
 int GetNumAnalysis();
  
 string[]@ ListAnalysis();
  
 string[]@ GetAnalysisInputNames(const string&in analysis);
  
 string GetAnalysisDoc(const string&in analysis);
  
 string GetAnalysisInputDoc(const string&in analysis, const string&in name);
  
 string ExecAnalysis(const string&in analysis);
  
 int GetNumAnalysisInputData(const string&in analysis, const string&in name);
  
 int GetAnalysisInputType(const string&in analysis, const string&in name);
  
 int[]@ GetIntAnalysisInput(const string&in analysis, const string&in name, int index = 0);
  
 double[]@ GetDoubleAnalysisInput(const string&in analysis, const string&in name, int index = 0);
  
 string[]@ GetStringAnalysisInput(const string&in analysis, const string&in name, int index = 0);
  
 vec3d[]@ GetVec3dAnalysisInput(const string&in analysis, const string&in name, int index = 0);
  
 void PrintAnalysisInputs(const string&in analysis);
  
 void PrintAnalysisDocs(const string&in analysis);
  
 void SetAnalysisInputDefaults(const string&in analysis);
  
 void SetIntAnalysisInput(const string&in analysis, const string&in name, int[]@ indata_arr, int index = 0);
  
 void SetDoubleAnalysisInput(const string&in analysis, const string&in name, double[]@ indata_arr, int index = 0);
  
 void SetStringAnalysisInput(const string&in analysis, const string&in name, string[]@ indata_arr, int index = 0);
  
 void SetVec3dAnalysisInput(const string&in analysis, const string&in name, vec3d[]@ indata_arr, int index = 0);
  
 int GetNumResults(const string&in name);
  
 string GetResultsName(const string&in results_id);
  
 string GetResultsSetDoc(const string&in results_id);
  
 string GetResultsEntryDoc(const string&in results_id, const string&in data_name);
  
 string FindResultsID(const string&in name, int index = 0);
  
 string FindLatestResultsID(const string&in name);
  
 int GetNumData(const string&in results_id, const string&in data_name);
  
 int GetResultsType(const string&in results_id, const string&in data_name);
  
 string[]@ GetAllResultsNames();
  
 string[]@ GetAllDataNames(const string&in results_id);
  
 int[]@ GetIntResults(const string&in id, const string&in name, int index = 0);
  
 double[]@ GetDoubleResults(const string&in id, const string&in name, int index = 0);
  
 double[]@[]@ GetDoubleMatResults(const string&in id, const string&in name, int index = 0);
  
 string[]@ GetStringResults(const string&in id, const string&in name, int index = 0);
  
 vec3d[]@ GetVec3dResults(const string&in id, const string&in name, int index = 0);
  
 string CreateGeomResults(const string&in geom_id, const string&in name);
  
 void DeleteAllResults();
  
 void DeleteResult(const string&in id);
  
 void WriteResultsCSVFile(const string&in id, const string&in file_name);
  
 void PrintResults(const string&in id);
  
 void PrintResultsDoc(const string&in id);
  
 void WriteTestResults();
  
 string[]@ GetGeomTypes();
  
 string AddGeom(const string&in type, const string&in parent = string ( ));
  
 void UpdateGeom(const string&in geom_id);
  
 void DeleteGeom(const string&in geom_id);
  
 void DeleteGeomVec(string[]@ del_arr);
  
 void CutGeomToClipboard(const string&in geom_id);
  
 void CopyGeomToClipboard(const string&in geom_id);
  
 string[]@ PasteGeomClipboard(const string&in parent_id = "");
  
 string[]@ FindGeoms();
  
 string[]@ FindGeomsWithName(const string&in name);
  
 string FindGeom(const string&in name, int index);
  
 void SetGeomName(const string&in geom_id, const string&in name);
  
 string GetGeomName(const string&in geom_id);
  
 string[]@ GetGeomParmIDs(const string&in geom_id);
  
 int GetGeomVSPSurfCfdType(const string&in geom_id, int main_surf_ind = 0);
  
 int GetGeomVSPSurfType(const string&in geom_id, int main_surf_ind = 0);
  
 string GetGeomTypeName(const string&in geom_id);
  
 int GetNumMainSurfs(const string&in geom_id);
  
 int GetTotalNumSurfs(const string&in geom_id);
  
 vec3d GetGeomBBoxMax(const string&in geom_id, int main_surf_ind = 0, bool ref_frame_is_absolute = true);
  
 vec3d GetGeomBBoxMin(const string&in geom_id, int main_surf_ind = 0, bool ref_frame_is_absolute = true);
  
 string GetGeomParent(const string&in geom_id);
  
 string[]@ GetGeomChildren(const string&in geom_id);
  
 void SetDriverGroup(const string&in geom_id, int section_index, int driver_0, int driver_1 = - 1, int driver_2 = - 1);
  
 string AddSubSurf(const string&in geom_id, int type, int surfindex = 0);
  
 void DeleteSubSurf(const string&in geom_id, const string&in sub_id);
  
 void DeleteSubSurf(const string&in sub_id);
  
 string GetSubSurf(const string&in geom_id, int index);
  
 string[]@ GetSubSurf(const string&in geom_id, const string&in name);
  
 void SetSubSurfName(const string&in geom_id, const string&in sub_id, const string&in name);
  
 void SetSubSurfName(const string&in sub_id, const string&in name);
  
 string GetSubSurfName(const string&in geom_id, const string&in sub_id);
  
 string GetSubSurfName(const string&in sub_id);
  
 int GetSubSurfIndex(const string&in sub_id);
  
 string[]@ GetSubSurfIDVec(const string&in geom_id);
  
 string[]@ GetAllSubSurfIDs();
  
 int GetNumSubSurf(const string&in geom_id);
  
 int GetSubSurfType(const string&in sub_id);
  
 string[]@ GetSubSurfParmIDs(const string&in sub_id);
  
 void AutoGroupVSPAEROControlSurfaces();
  
 int GetNumControlSurfaceGroups();
  
 int CreateVSPAEROControlSurfaceGroup();
  
 void AddAllToVSPAEROControlSurfaceGroup(int CSGroupIndex);
  
 void RemoveAllFromVSPAEROControlSurfaceGroup(int CSGroupIndex);
  
 string[]@ GetActiveCSNameVec(int CSGroupIndex);
  
 string[]@ GetCompleteCSNameVec();
  
 string[]@ GetAvailableCSNameVec(int CSGroupIndex);
  
 void SetVSPAEROControlGroupName(const string&in name, int CSGroupIndex);
  
 string GetVSPAEROControlGroupName(int CSGroupIndex);
  
 void AddSelectedToCSGroup(int[]@ selected, int CSGroupIndex);
  
 void RemoveSelectedFromCSGroup(int[]@ selected, int CSGroupIndex);
  
 string GetVSPAERORefWingID();
  
 string SetVSPAERORefWingID(const string&in geom_id);
  
 string FindActuatorDisk(int disk_index);
  
 int GetNumActuatorDisks();
  
 string FindUnsteadyGroup(int group_index);
  
 string GetUnsteadyGroupName(int group_index);
  
 string[]@ GetUnsteadyGroupCompIDs(int group_index);
  
 int[]@ GetUnsteadyGroupSurfIndexes(int group_index);
  
 int GetNumUnsteadyGroups();
  
 int GetNumUnsteadyRotorGroups();
  
 int GetNumXSecSurfs(const string&in geom_id);
  
 string GetXSecSurf(const string&in geom_id, int index);
  
 int GetNumXSec(const string&in xsec_surf_id);
  
 string GetXSec(const string&in xsec_surf_id, int xsec_index);
  
 void ChangeXSecShape(const string&in xsec_surf_id, int xsec_index, int type);
  
 void SetXSecSurfGlobalXForm(const string&in xsec_surf_id, const Matrix4d&in mat);
  
 Matrix4d GetXSecSurfGlobalXForm(const string&in xsec_surf_id);
  
 void CutXSec(const string&in geom_id, int index);
  
 void CopyXSec(const string&in geom_id, int index);
  
 void PasteXSec(const string&in geom_id, int index);
  
 void InsertXSec(const string&in geom_id, int index, int type);
  
 int GetXSecShape(const string&in xsec_id);
  
 double GetXSecWidth(const string&in xsec_id);
  
 double GetXSecHeight(const string&in xsec_id);
  
 void SetXSecWidth(const string&in xsec_id, double w);
  
 void SetXSecHeight(const string&in xsec_id, double h);
  
 void SetXSecWidthHeight(const string&in xsec_id, double w, double h);
  
 string[]@ GetXSecParmIDs(const string&in xsec_id);
  
 string GetXSecParm(const string&in xsec_id, const string&in name);
  
 vec3d[]@ ReadFileXSec(const string&in xsec_id, const string&in file_name);
  
 void SetXSecPnts(const string&in xsec_id, vec3d[]@ pnt_arr);
  
 vec3d ComputeXSecPnt(const string&in xsec_id, double fract);
  
 vec3d ComputeXSecTan(const string&in xsec_id, double fract);
  
 void ResetXSecSkinParms(const string&in xsec_id);
  
 void SetXSecContinuity(const string&in xsec_id, int cx);
  
 void SetXSecTanAngles(const string&in xsec_id, int side, double top, double right = - 1.0e12, double bottom = - 1.0e12, double left = - 1.0e12);
  
 void SetXSecTanSlews(const string&in xsec_id, int side, double top, double right = - 1.0e12, double bottom = - 1.0e12, double left = - 1.0e12);
  
 void SetXSecTanStrengths(const string&in xsec_id, int side, double top, double right = - 1.0e12, double bottom = - 1.0e12, double left = - 1.0e12);
  
 void SetXSecCurvatures(const string&in xsec_id, int side, double top, double right = - 1.0e12, double bottom = - 1.0e12, double left = - 1.0e12);
  
 void ReadFileAirfoil(const string&in xsec_id, const string&in file_name);
  
 void SetAirfoilUpperPnts(const string&in xsec_id, vec3d[]@ up_pnt_vec);
  
 void SetAirfoilLowerPnts(const string&in xsec_id, vec3d[]@ low_pnt_vec);
  
 void SetAirfoilPnts(const string&in xsec_id, vec3d[]@ up_pnt_vec, vec3d[]@ low_pnt_vec);
  
 vec3d[]@ GetHersheyBarLiftDist(const int&in npts, const double&in alpha, const double&in Vinf, const double&in span, bool full_span_flag = false);
  
 vec3d[]@ GetHersheyBarDragDist(const int&in npts, const double&in alpha, const double&in Vinf, const double&in span, bool full_span_flag = false);
  
 vec3d[]@ GetVKTAirfoilPnts(const int&in npts, const double&in alpha, const double&in epsilon, const double&in kappa, const double&in tau);
  
 double[]@ GetVKTAirfoilCpDist(const double&in alpha, const double&in epsilon, const double&in kappa, const double&in tau, vec3d[]@ xydata);
  
 vec3d[]@ GetEllipsoidSurfPnts(const vec3d&in center, const vec3d&in abc_rad, int u_npts = 20, int w_npts = 20);
  
 vec3d[]@ GetFeatureLinePnts(const string&in geom_id);
  
 double[]@ GetEllipsoidCpDist(vec3d[]@ surf_pnt_arr, const vec3d&in abc_rad, const vec3d&in V_inf);
  
 vec3d[]@ GetAirfoilUpperPnts(const string&in xsec_id);
  
 vec3d[]@ GetAirfoilLowerPnts(const string&in xsec_id);
  
 double[]@ GetUpperCSTCoefs(const string&in xsec_id);
  
 double[]@ GetLowerCSTCoefs(const string&in xsec_id);
  
 int GetUpperCSTDegree(const string&in xsec_id);
  
 int GetLowerCSTDegree(const string&in xsec_id);
  
 void SetUpperCST(const string&in xsec_id, int deg, double[]@ coeff_arr);
  
 void SetLowerCST(const string&in xsec_id, int deg, double[]@ coeff_arr);
  
 void PromoteCSTUpper(const string&in xsec_id);
  
 void PromoteCSTLower(const string&in xsec_id);
  
 void DemoteCSTUpper(const string&in xsec_id);
  
 void DemoteCSTLower(const string&in xsec_id);
  
 void FitAfCST(const string&in xsec_surf_id, int xsec_index, int deg);
  
 void WriteBezierAirfoil(const string&in file_name, const string&in geom_id, const double&in foilsurf_u);
  
 void WriteSeligAirfoil(const string&in file_name, const string&in geom_id, const double&in foilsurf_u);
  
 vec3d[]@ GetAirfoilCoordinates(const string&in geom_id, const double&in foilsurf_u);
  
 void EditXSecInitShape(const string&in xsec_id);
  
 void EditXSecConvertTo(const string&in xsec_id, const int&in newtype);
  
 double[]@ GetEditXSecUVec(const string&in xsec_id);
  
 vec3d[]@ GetEditXSecCtrlVec(const string&in xsec_id, const bool non_dimensional = true);
  
 void SetEditXSecPnts(const string&in xsec_id, double[]@ u_vec, vec3d[]@ control_pts, double[]@ r_vec);
  
 void EditXSecDelPnt(const string&in xsec_id, const int&in indx);
  
 int EditXSecSplit01(const string&in xsec_id, const double&in u);
  
 void MoveEditXSecPnt(const string&in xsec_id, const int&in indx, const vec3d&in new_pnt);
  
 void ConvertXSecToEdit(const string&in geom_id, const int&in indx = 0);
  
 bool[]@ GetEditXSecFixedUVec(const string&in xsec_id);
  
 void SetEditXSecFixedUVec(const string&in xsec_id, bool[]@ fixed_u_vec);
  
 void ReparameterizeEditXSec(const string&in xsec_id);
  
 void ChangeBORXSecShape(const string&in geom_id, int type);
  
 int GetBORXSecShape(const string&in geom_id);
  
 vec3d[]@ ReadBORFileXSec(const string&in bor_id, const string&in file_name);
  
 void SetBORXSecPnts(const string&in bor_id, vec3d[]@ pnt_arr);
  
 vec3d ComputeBORXSecPnt(const string&in bor_id, double fract);
  
 vec3d ComputeBORXSecTan(const string&in bor_id, double fract);
  
 void ReadBORFileAirfoil(const string&in bor_id, const string&in file_name);
  
 void SetBORAirfoilUpperPnts(const string&in bor_id, vec3d[]@ up_pnt_vec);
  
 void SetBORAirfoilLowerPnts(const string&in bor_id, vec3d[]@ low_pnt_vec);
  
 void SetBORAirfoilPnts(const string&in bor_id, vec3d[]@ up_pnt_vec, vec3d[]@ low_pnt_vec);
  
 vec3d[]@ GetBORAirfoilUpperPnts(const string&in bor_id);
  
 vec3d[]@ GetBORAirfoilLowerPnts(const string&in bor_id);
  
 double[]@ GetBORUpperCSTCoefs(const string&in bor_id);
  
 double[]@ GetBORLowerCSTCoefs(const string&in bor_id);
  
 int GetBORUpperCSTDegree(const string&in bor_id);
  
 int GetBORLowerCSTDegree(const string&in bor_id);
  
 void SetBORUpperCST(const string&in bor_id, int deg, double[]@ coeff_arr);
  
 void SetBORLowerCST(const string&in bor_id, int deg, double[]@ coeff_arr);
  
 void PromoteBORCSTUpper(const string&in bor_id);
  
 void PromoteBORCSTLower(const string&in bor_id);
  
 void DemoteBORCSTUpper(const string&in bor_id);
  
 void DemoteBORCSTLower(const string&in bor_id);
  
 void FitBORAfCST(const string&in bor_id, int deg);
  
 int GetNumSets();
  
 void SetSetName(int index, const string&in name);
  
 string GetSetName(int index);
  
 string[]@ GetGeomSetAtIndex(int index);
  
 string[]@ GetGeomSet(const string&in name);
  
 int GetSetIndex(const string&in name);
  
 bool GetSetFlag(const string&in geom_id, int set_index);
  
 void SetSetFlag(const string&in geom_id, int set_index, bool flag);
  
 void CopyPasteSet(int copyIndex, int pasteIndex);
  
 void ScaleSet(int set_index, double scale);
  
 void RotateSet(int set_index, double x_rot_deg, double y_rot_deg, double z_rot_deg);
  
 void TranslateSet(int set_index, const vec3d&in translation_vec);
  
 void TransformSet(int set_index, const vec3d&in translation_vec, double x_rot_deg, double y_rot_deg, double z_rot_deg, double scale, bool scale_translations_flag);
  
 bool ValidParm(const string&in id);
  
 double SetParmVal(const string&in parm_id, double val);
  
 double SetParmValLimits(const string&in parm_id, double val, double lower_limit, double upper_limit);
  
 double SetParmValUpdate(const string&in parm_id, double val);
  
 double SetParmVal(const string&in container_id, const string&in name, const string&in group, double val);
  
 double SetParmValUpdate(const string&in container_id, const string&in parm_name, const string&in parm_group_name, double val);
  
 double GetParmVal(const string&in parm_id);
  
 double GetParmVal(const string&in container_id, const string&in name, const string&in group);
  
 int GetIntParmVal(const string&in parm_id);
  
 bool GetBoolParmVal(const string&in parm_id);
  
 void SetParmUpperLimit(const string&in parm_id, double val);
  
 double GetParmUpperLimit(const string&in parm_id);
  
 void SetParmLowerLimit(const string&in parm_id, double val);
  
 double GetParmLowerLimit(const string&in parm_id);
  
 int GetParmType(const string&in parm_id);
  
 string GetParmName(const string&in parm_id);
  
 string GetParmGroupName(const string&in parm_id);
  
 string GetParmDisplayGroupName(const string&in parm_id);
  
 string GetParmContainer(const string&in parm_id);
  
 void SetParmDescript(const string&in parm_id, const string&in desc);
  
 string FindParm(const string&in parm_container_id, const string&in parm_name, const string&in group_name);
  
 string GetParm(const string&in container_id, const string&in name, const string&in group);
  
 string[]@ FindContainers();
  
 string[]@ FindContainersWithName(const string&in name);
  
 string FindContainer(const string&in name, int index);
  
 string GetContainerName(const string&in parm_container_id);
  
 string[]@ FindContainerGroupNames(const string&in parm_container_id);
  
 string[]@ FindContainerParmIDs(const string&in parm_container_id);
  
 string GetVehicleID();
  
 double ComputeMinClearanceDistance(const string&in geom_id, int set);
  
 double SnapParm(const string&in parm_id, double target_min_dist, bool inc_flag, int set);
  
 void AddVarPresetGroup(const string&in group_name);
  
 void AddVarPresetSetting(const string&in setting_name);
  
 void AddVarPresetParm(const string&in parm_ID);
  
 void AddVarPresetParm(const string&in parm_ID, const string&in group_name);
  
 void EditVarPresetParm(const string&in parm_ID, double parm_val);
  
 void EditVarPresetParm(const string&in parm_ID, double parm_val, const string&in group_name, const string&in setting_name);
  
 void DeleteVarPresetParm(const string&in parm_ID);
  
 void DeleteVarPresetParm(const string&in parm_ID, const string&in group_name);
  
 void SwitchVarPreset(const string&in group_name, const string&in setting_name);
  
 bool DeleteVarPresetSet(const string&in group_name, const string&in setting_name);
  
 string GetCurrentGroupName();
  
 string GetCurrentSettingName();
  
 string[]@ GetVarPresetGroupNames();
  
 string[]@ GetVarPresetSettingNamesWName(const string&in group_name);
  
 string[]@ GetVarPresetSettingNamesWIndex(int group_index);
  
 double[]@ GetVarPresetParmVals();
  
 double[]@ GetVarPresetParmValsWNames(const string&in group_name, const string&in setting_name);
  
 string[]@ GetVarPresetParmIDs();
  
 string[]@ GetVarPresetParmIDsWName(const string&in group_name);
  
 void SetPCurve(const string&in geom_id, const int&in pcurveid, double[]@ tvec, double[]@ valvec, const int&in newtype);
  
 void PCurveConvertTo(const string&in geom_id, const int&in pcurveid, const int&in newtype);
  
 int PCurveGetType(const string&in geom_id, const int&in pcurveid);
  
 double[]@ PCurveGetTVec(const string&in geom_id, const int&in pcurveid);
  
 double[]@ PCurveGetValVec(const string&in geom_id, const int&in pcurveid);
  
 void PCurveDeletePt(const string&in geom_id, const int&in pcurveid, const int&in indx);
  
 int PCurveSplit(const string&in geom_id, const int&in pcurveid, const double&in tsplit);
  
 void ApproximateAllPropellerPCurves(const string&in geom_id);
  
 void ResetPropellerThicknessCurve(const string&in geom_id);
  
 void AddExcrescence(const string&in excresName, const int&in excresType, const double&in excresVal);
  
 void DeleteExcrescence(const int&in excresName);
  
 void UpdateParasiteDrag();
  
 void WriteAtmosphereCSVFile(const string&in file_name, const int&in atmos_type);
  
 void CalcAtmosphere(const double&in alt, const double&in delta_temp, const int&in atmos_type, double&out temp, double&out pres, double&out pres_ratio, double&out rho_ratio);
  
 void WriteBodyFFCSVFile(const string&in file_name);
  
 void WriteWingFFCSVFile(const string&in file_name);
  
 void WriteCfEqnCSVFile(const string&in file_name);
  
 void WritePartialCfMethodCSVFile(const string&in file_name);
  
 vec3d CompPnt01(const string&in geom_id, const int&in surf_indx, const double&in u, const double&in w);
  
 vec3d CompNorm01(const string&in geom_id, const int&in surf_indx, const double&in u, const double&in w);
  
 vec3d CompTanU01(const string&in geom_id, const int&in surf_indx, const double&in u, const double&in w);
  
 vec3d CompTanW01(const string&in geom_id, const int&in surf_indx, const double&in u, const double&in w);
  
 void CompCurvature01(const string&in geom_id, const int&in surf_indx, const double&in u, const double&in w, double&out k1, double&out k2, double&out ka, double&out kg);
  
 double ProjPnt01(const string&in geom_id, const int&in surf_indx, const vec3d&in pt, double&out u, double&out w);
  
 double ProjPnt01I(const string&in geom_id, const vec3d&in pt, int&out surf_indx, double&out u, double&out w);
  
 double ProjPnt01Guess(const string&in geom_id, const int&in surf_indx, const vec3d&in pt, const double&in u0, const double&in w0, double&out u, double&out w);
  
 double AxisProjPnt01(const string&in geom_id, const int&in surf_indx, const int&in iaxis, const vec3d&in pt, double&out u_out, double&out w_out, vec3d&out p_out);
  
 double AxisProjPnt01I(const string&in geom_id, const int&in iaxis, const vec3d&in pt, int&out surf_indx_out, double&out u_out, double&out w_out, vec3d&out p_out);
  
 double AxisProjPnt01Guess(const string&in geom_id, const int&in surf_indx, const int&in iaxis, const vec3d&in pt, const double&in u0, const double&in w0, double&out u_out, double&out w_out, vec3d&out p_out);
  
 bool InsideSurf(const string&in geom_id, const int&in surf_indx, const vec3d&in pt);
  
 double FindRST(const string&in geom_id, const int&in surf_indx, const vec3d&in pt, double&out r, double&out s, double&out t);
  
 double FindRSTGuess(const string&in geom_id, const int&in surf_indx, const vec3d&in pt, const double&in r0, const double&in s0, const double&in t0, double&out r, double&out s, double&out t);
  
 vec3d CompPntRST(const string&in geom_id, const int&in surf_indx, const double&in r, const double&in s, const double&in t);
  
 vec3d[]@ CompVecPntRST(const string&in geom_id, const int&in surf_indx, double[]@ rs, double[]@ ss, double[]@ ts);
  
 vec3d ConvertRSTtoLMN(const string&in geom_id, const int&in surf_indx, const double&in r, const double&in s, const double&in t, double&out l, double&out m, double&out n);
  
 vec3d ConvertLMNtoRST(const string&in geom_id, const int&in surf_indx, const double&in l, const double&in m, const double&in n, double&out r, double&out s, double&out t);
  
 void ConvertRSTtoLMNVec(const string&in geom_id, const int&in surf_indx, double[]@ rs, double[]@ ss, double[]@ ts, double[]@ ls, double[]@ ms, double[]@ ns);
  
 void ConvertLMNtoRSTVec(const string&in geom_id, const int&in surf_indx, double[]@ ls, double[]@ ms, double[]@ ns, double[]@ rs, double[]@ ss, double[]@ ts);
  
 void GetUWTess01(const string&in geom_id, int&in surf_indx, double[]@ us, double[]@ ws);
  
 vec3d[]@ CompVecPnt01(const string&in geom_id, const int&in surf_indx, double[]@ us, double[]@ ws);
  
 vec3d[]@ CompVecNorm01(const string&in geom_id, const int&in surf_indx, double[]@ us, double[]@ ws);
  
 void CompVecCurvature01(const string&in geom_id, const int&in surf_indx, double[]@ us, double[]@ ws, double[]@ k1s, double[]@ k2s, double[]@ kas, double[]@ kgs);
  
 void ProjVecPnt01(const string&in geom_id, const int&in surf_indx, vec3d[]@ pts, double[]@ us, double[]@ ws, double[]@ ds);
  
 void ProjVecPnt01Guess(const string&in geom_id, const int&in surf_indx, vec3d[]@ pts, double[]@ u0s, double[]@ w0s, double[]@ us, double[]@ ws, double[]@ ds);
  
 void AxisProjVecPnt01(const string&in geom_id, const int&in surf_indx, const int&in iaxis, vec3d[]@ pts, double[]@ us, double[]@ ws, vec3d[]@ ps_out, double[]@ ds);
  
 void AxisProjVecPnt01Guess(const string&in geom_id, int&in surf_indx, const int&in iaxis, vec3d[]@ pts, double[]@ u0s, double[]@ w0s, double[]@ us, double[]@ ws, vec3d[]@ ps_out, double[]@ ds);
  
 bool[]@ VecInsideSurf(const string&in geom_id, const int&in surf_indx, vec3d[]@ pts);
  
 void FindRSTVec(const string&in geom_id, const int&in surf_indx, vec3d[]@ pts, double[]@ rs, double[]@ ss, double[]@ ts, double[]@ ds);
  
 void FindRSTVecGuess(const string&in geom_id, const int&in surf_indx, vec3d[]@ pts, double[]@ r0s, double[]@ s0s, double[]@ t0s, double[]@ rs, double[]@ ss, double[]@ ts, double[]@ ds);
  
 string AddRuler(const string&in startgeomid, int startsurfindx, double startu, double startw, const string&in endgeomid, int endsurfindx, double endu, double endw, const string&in name);
  
 string[]@ GetAllRulers();
  
 void DelRuler(const string&in id);
  
 void DeleteAllRulers();
  
 string AddProbe(const string&in geomid, int surfindx, double u, double w, const string&in name);
  
 string[]@ GetAllProbes();
  
 void DelProbe(const string&in id);
  
 void DeleteAllProbes();
  
 int AddFeaStruct(const string&in geom_id, bool init_skin = true, int surfindex = 0);
  
 void DeleteFeaStruct(const string&in geom_id, int fea_struct_ind);
  
 void SetFeaMeshStructIndex(int struct_index);
  
 string GetFeaStructID(const string&in geom_id, int fea_struct_ind);
  
 int GetFeaStructIndex(const string&in struct_id);
  
 string GetFeaStructParentGeomID(const string&in struct_id);
  
 string GetFeaStructName(const string&in geom_id, int fea_struct_ind);
  
 void SetFeaStructName(const string&in geom_id, int fea_struct_ind, const string&in name);
  
 string[]@ GetFeaStructIDVec();
  
 void SetFeaPartName(const string&in part_id, const string&in name);
  
 void SetFeaMeshVal(const string&in geom_id, int fea_struct_ind, int type, double val);
  
 void SetFeaMeshFileName(const string&in geom_id, int fea_struct_ind, int file_type, const string&in file_name);
  
 void ComputeFeaMesh(const string&in geom_id, int fea_struct_ind, int file_type);
  
 void ComputeFeaMesh(const string&in struct_id, int file_type);
  
 string AddFeaPart(const string&in geom_id, int fea_struct_ind, int type);
  
 void DeleteFeaPart(const string&in geom_id, int fea_struct_ind, const string&in part_id);
  
 string GetFeaPartID(const string&in fea_struct_id, int fea_part_index);
  
 string GetFeaPartName(const string&in part_id);
  
 int GetFeaPartType(const string&in part_id);
  
 int GetFeaSubSurfIndex(const string&in ss_id);
  
 int NumFeaStructures();
  
 int NumFeaParts(const string&in fea_struct_id);
  
 int NumFeaSubSurfs(const string&in fea_struct_id);
  
 string[]@ GetFeaPartIDVec(const string&in fea_struct_id);
  
 string[]@ GetFeaSubSurfIDVec(const string&in fea_struct_id);
  
 void SetFeaPartPerpendicularSparID(const string&in part_id, const string&in perpendicular_spar_id);
  
 string GetFeaPartPerpendicularSparID(const string&in part_id);
  
 string AddFeaSubSurf(const string&in geom_id, int fea_struct_ind, int type);
  
 void DeleteFeaSubSurf(const string&in geom_id, int fea_struct_ind, const string&in ss_id);
  
 string AddFeaMaterial();
  
 string AddFeaProperty(int property_type = 0);
  
 void Print(const string&in data, bool new_line = true);
  
 void Print(const vec3d&in data, bool new_line = true);
  
 void Print(double data, bool new_line = true);
  
 void Print(int data, bool new_line = true);
  
 double Min(double x, double y);
  
 double Max(double x, double y);
  
 double Rad2Deg(double r);
  
 double Deg2Rad(double d);
  
 string GetVSPVersion();
  
 string GetVSPExePath();
  
 bool SetVSPAEROPath(const string&in path);
  
 string GetVSPAEROPath();
  
 bool CheckForVSPAERO(const string&in path);
  
 void VSPCheckSetup();
  
 void VSPRenew();
  
 vec3d[]@ GetProxyVec3dArray();
  