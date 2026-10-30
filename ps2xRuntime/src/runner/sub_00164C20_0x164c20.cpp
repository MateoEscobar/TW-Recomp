#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164C20
// Address: 0x164c20 - 0x1651b8
void sub_00164C20_0x164c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164C20_0x164c20");
#endif

    switch (ctx->pc) {
        case 0x164c20u: goto label_164c20;
        case 0x164c24u: goto label_164c24;
        case 0x164c28u: goto label_164c28;
        case 0x164c2cu: goto label_164c2c;
        case 0x164c30u: goto label_164c30;
        case 0x164c34u: goto label_164c34;
        case 0x164c38u: goto label_164c38;
        case 0x164c3cu: goto label_164c3c;
        case 0x164c40u: goto label_164c40;
        case 0x164c44u: goto label_164c44;
        case 0x164c48u: goto label_164c48;
        case 0x164c4cu: goto label_164c4c;
        case 0x164c50u: goto label_164c50;
        case 0x164c54u: goto label_164c54;
        case 0x164c58u: goto label_164c58;
        case 0x164c5cu: goto label_164c5c;
        case 0x164c60u: goto label_164c60;
        case 0x164c64u: goto label_164c64;
        case 0x164c68u: goto label_164c68;
        case 0x164c6cu: goto label_164c6c;
        case 0x164c70u: goto label_164c70;
        case 0x164c74u: goto label_164c74;
        case 0x164c78u: goto label_164c78;
        case 0x164c7cu: goto label_164c7c;
        case 0x164c80u: goto label_164c80;
        case 0x164c84u: goto label_164c84;
        case 0x164c88u: goto label_164c88;
        case 0x164c8cu: goto label_164c8c;
        case 0x164c90u: goto label_164c90;
        case 0x164c94u: goto label_164c94;
        case 0x164c98u: goto label_164c98;
        case 0x164c9cu: goto label_164c9c;
        case 0x164ca0u: goto label_164ca0;
        case 0x164ca4u: goto label_164ca4;
        case 0x164ca8u: goto label_164ca8;
        case 0x164cacu: goto label_164cac;
        case 0x164cb0u: goto label_164cb0;
        case 0x164cb4u: goto label_164cb4;
        case 0x164cb8u: goto label_164cb8;
        case 0x164cbcu: goto label_164cbc;
        case 0x164cc0u: goto label_164cc0;
        case 0x164cc4u: goto label_164cc4;
        case 0x164cc8u: goto label_164cc8;
        case 0x164cccu: goto label_164ccc;
        case 0x164cd0u: goto label_164cd0;
        case 0x164cd4u: goto label_164cd4;
        case 0x164cd8u: goto label_164cd8;
        case 0x164cdcu: goto label_164cdc;
        case 0x164ce0u: goto label_164ce0;
        case 0x164ce4u: goto label_164ce4;
        case 0x164ce8u: goto label_164ce8;
        case 0x164cecu: goto label_164cec;
        case 0x164cf0u: goto label_164cf0;
        case 0x164cf4u: goto label_164cf4;
        case 0x164cf8u: goto label_164cf8;
        case 0x164cfcu: goto label_164cfc;
        case 0x164d00u: goto label_164d00;
        case 0x164d04u: goto label_164d04;
        case 0x164d08u: goto label_164d08;
        case 0x164d0cu: goto label_164d0c;
        case 0x164d10u: goto label_164d10;
        case 0x164d14u: goto label_164d14;
        case 0x164d18u: goto label_164d18;
        case 0x164d1cu: goto label_164d1c;
        case 0x164d20u: goto label_164d20;
        case 0x164d24u: goto label_164d24;
        case 0x164d28u: goto label_164d28;
        case 0x164d2cu: goto label_164d2c;
        case 0x164d30u: goto label_164d30;
        case 0x164d34u: goto label_164d34;
        case 0x164d38u: goto label_164d38;
        case 0x164d3cu: goto label_164d3c;
        case 0x164d40u: goto label_164d40;
        case 0x164d44u: goto label_164d44;
        case 0x164d48u: goto label_164d48;
        case 0x164d4cu: goto label_164d4c;
        case 0x164d50u: goto label_164d50;
        case 0x164d54u: goto label_164d54;
        case 0x164d58u: goto label_164d58;
        case 0x164d5cu: goto label_164d5c;
        case 0x164d60u: goto label_164d60;
        case 0x164d64u: goto label_164d64;
        case 0x164d68u: goto label_164d68;
        case 0x164d6cu: goto label_164d6c;
        case 0x164d70u: goto label_164d70;
        case 0x164d74u: goto label_164d74;
        case 0x164d78u: goto label_164d78;
        case 0x164d7cu: goto label_164d7c;
        case 0x164d80u: goto label_164d80;
        case 0x164d84u: goto label_164d84;
        case 0x164d88u: goto label_164d88;
        case 0x164d8cu: goto label_164d8c;
        case 0x164d90u: goto label_164d90;
        case 0x164d94u: goto label_164d94;
        case 0x164d98u: goto label_164d98;
        case 0x164d9cu: goto label_164d9c;
        case 0x164da0u: goto label_164da0;
        case 0x164da4u: goto label_164da4;
        case 0x164da8u: goto label_164da8;
        case 0x164dacu: goto label_164dac;
        case 0x164db0u: goto label_164db0;
        case 0x164db4u: goto label_164db4;
        case 0x164db8u: goto label_164db8;
        case 0x164dbcu: goto label_164dbc;
        case 0x164dc0u: goto label_164dc0;
        case 0x164dc4u: goto label_164dc4;
        case 0x164dc8u: goto label_164dc8;
        case 0x164dccu: goto label_164dcc;
        case 0x164dd0u: goto label_164dd0;
        case 0x164dd4u: goto label_164dd4;
        case 0x164dd8u: goto label_164dd8;
        case 0x164ddcu: goto label_164ddc;
        case 0x164de0u: goto label_164de0;
        case 0x164de4u: goto label_164de4;
        case 0x164de8u: goto label_164de8;
        case 0x164decu: goto label_164dec;
        case 0x164df0u: goto label_164df0;
        case 0x164df4u: goto label_164df4;
        case 0x164df8u: goto label_164df8;
        case 0x164dfcu: goto label_164dfc;
        case 0x164e00u: goto label_164e00;
        case 0x164e04u: goto label_164e04;
        case 0x164e08u: goto label_164e08;
        case 0x164e0cu: goto label_164e0c;
        case 0x164e10u: goto label_164e10;
        case 0x164e14u: goto label_164e14;
        case 0x164e18u: goto label_164e18;
        case 0x164e1cu: goto label_164e1c;
        case 0x164e20u: goto label_164e20;
        case 0x164e24u: goto label_164e24;
        case 0x164e28u: goto label_164e28;
        case 0x164e2cu: goto label_164e2c;
        case 0x164e30u: goto label_164e30;
        case 0x164e34u: goto label_164e34;
        case 0x164e38u: goto label_164e38;
        case 0x164e3cu: goto label_164e3c;
        case 0x164e40u: goto label_164e40;
        case 0x164e44u: goto label_164e44;
        case 0x164e48u: goto label_164e48;
        case 0x164e4cu: goto label_164e4c;
        case 0x164e50u: goto label_164e50;
        case 0x164e54u: goto label_164e54;
        case 0x164e58u: goto label_164e58;
        case 0x164e5cu: goto label_164e5c;
        case 0x164e60u: goto label_164e60;
        case 0x164e64u: goto label_164e64;
        case 0x164e68u: goto label_164e68;
        case 0x164e6cu: goto label_164e6c;
        case 0x164e70u: goto label_164e70;
        case 0x164e74u: goto label_164e74;
        case 0x164e78u: goto label_164e78;
        case 0x164e7cu: goto label_164e7c;
        case 0x164e80u: goto label_164e80;
        case 0x164e84u: goto label_164e84;
        case 0x164e88u: goto label_164e88;
        case 0x164e8cu: goto label_164e8c;
        case 0x164e90u: goto label_164e90;
        case 0x164e94u: goto label_164e94;
        case 0x164e98u: goto label_164e98;
        case 0x164e9cu: goto label_164e9c;
        case 0x164ea0u: goto label_164ea0;
        case 0x164ea4u: goto label_164ea4;
        case 0x164ea8u: goto label_164ea8;
        case 0x164eacu: goto label_164eac;
        case 0x164eb0u: goto label_164eb0;
        case 0x164eb4u: goto label_164eb4;
        case 0x164eb8u: goto label_164eb8;
        case 0x164ebcu: goto label_164ebc;
        case 0x164ec0u: goto label_164ec0;
        case 0x164ec4u: goto label_164ec4;
        case 0x164ec8u: goto label_164ec8;
        case 0x164eccu: goto label_164ecc;
        case 0x164ed0u: goto label_164ed0;
        case 0x164ed4u: goto label_164ed4;
        case 0x164ed8u: goto label_164ed8;
        case 0x164edcu: goto label_164edc;
        case 0x164ee0u: goto label_164ee0;
        case 0x164ee4u: goto label_164ee4;
        case 0x164ee8u: goto label_164ee8;
        case 0x164eecu: goto label_164eec;
        case 0x164ef0u: goto label_164ef0;
        case 0x164ef4u: goto label_164ef4;
        case 0x164ef8u: goto label_164ef8;
        case 0x164efcu: goto label_164efc;
        case 0x164f00u: goto label_164f00;
        case 0x164f04u: goto label_164f04;
        case 0x164f08u: goto label_164f08;
        case 0x164f0cu: goto label_164f0c;
        case 0x164f10u: goto label_164f10;
        case 0x164f14u: goto label_164f14;
        case 0x164f18u: goto label_164f18;
        case 0x164f1cu: goto label_164f1c;
        case 0x164f20u: goto label_164f20;
        case 0x164f24u: goto label_164f24;
        case 0x164f28u: goto label_164f28;
        case 0x164f2cu: goto label_164f2c;
        case 0x164f30u: goto label_164f30;
        case 0x164f34u: goto label_164f34;
        case 0x164f38u: goto label_164f38;
        case 0x164f3cu: goto label_164f3c;
        case 0x164f40u: goto label_164f40;
        case 0x164f44u: goto label_164f44;
        case 0x164f48u: goto label_164f48;
        case 0x164f4cu: goto label_164f4c;
        case 0x164f50u: goto label_164f50;
        case 0x164f54u: goto label_164f54;
        case 0x164f58u: goto label_164f58;
        case 0x164f5cu: goto label_164f5c;
        case 0x164f60u: goto label_164f60;
        case 0x164f64u: goto label_164f64;
        case 0x164f68u: goto label_164f68;
        case 0x164f6cu: goto label_164f6c;
        case 0x164f70u: goto label_164f70;
        case 0x164f74u: goto label_164f74;
        case 0x164f78u: goto label_164f78;
        case 0x164f7cu: goto label_164f7c;
        case 0x164f80u: goto label_164f80;
        case 0x164f84u: goto label_164f84;
        case 0x164f88u: goto label_164f88;
        case 0x164f8cu: goto label_164f8c;
        case 0x164f90u: goto label_164f90;
        case 0x164f94u: goto label_164f94;
        case 0x164f98u: goto label_164f98;
        case 0x164f9cu: goto label_164f9c;
        case 0x164fa0u: goto label_164fa0;
        case 0x164fa4u: goto label_164fa4;
        case 0x164fa8u: goto label_164fa8;
        case 0x164facu: goto label_164fac;
        case 0x164fb0u: goto label_164fb0;
        case 0x164fb4u: goto label_164fb4;
        case 0x164fb8u: goto label_164fb8;
        case 0x164fbcu: goto label_164fbc;
        case 0x164fc0u: goto label_164fc0;
        case 0x164fc4u: goto label_164fc4;
        case 0x164fc8u: goto label_164fc8;
        case 0x164fccu: goto label_164fcc;
        case 0x164fd0u: goto label_164fd0;
        case 0x164fd4u: goto label_164fd4;
        case 0x164fd8u: goto label_164fd8;
        case 0x164fdcu: goto label_164fdc;
        case 0x164fe0u: goto label_164fe0;
        case 0x164fe4u: goto label_164fe4;
        case 0x164fe8u: goto label_164fe8;
        case 0x164fecu: goto label_164fec;
        case 0x164ff0u: goto label_164ff0;
        case 0x164ff4u: goto label_164ff4;
        case 0x164ff8u: goto label_164ff8;
        case 0x164ffcu: goto label_164ffc;
        case 0x165000u: goto label_165000;
        case 0x165004u: goto label_165004;
        case 0x165008u: goto label_165008;
        case 0x16500cu: goto label_16500c;
        case 0x165010u: goto label_165010;
        case 0x165014u: goto label_165014;
        case 0x165018u: goto label_165018;
        case 0x16501cu: goto label_16501c;
        case 0x165020u: goto label_165020;
        case 0x165024u: goto label_165024;
        case 0x165028u: goto label_165028;
        case 0x16502cu: goto label_16502c;
        case 0x165030u: goto label_165030;
        case 0x165034u: goto label_165034;
        case 0x165038u: goto label_165038;
        case 0x16503cu: goto label_16503c;
        case 0x165040u: goto label_165040;
        case 0x165044u: goto label_165044;
        case 0x165048u: goto label_165048;
        case 0x16504cu: goto label_16504c;
        case 0x165050u: goto label_165050;
        case 0x165054u: goto label_165054;
        case 0x165058u: goto label_165058;
        case 0x16505cu: goto label_16505c;
        case 0x165060u: goto label_165060;
        case 0x165064u: goto label_165064;
        case 0x165068u: goto label_165068;
        case 0x16506cu: goto label_16506c;
        case 0x165070u: goto label_165070;
        case 0x165074u: goto label_165074;
        case 0x165078u: goto label_165078;
        case 0x16507cu: goto label_16507c;
        case 0x165080u: goto label_165080;
        case 0x165084u: goto label_165084;
        case 0x165088u: goto label_165088;
        case 0x16508cu: goto label_16508c;
        case 0x165090u: goto label_165090;
        case 0x165094u: goto label_165094;
        case 0x165098u: goto label_165098;
        case 0x16509cu: goto label_16509c;
        case 0x1650a0u: goto label_1650a0;
        case 0x1650a4u: goto label_1650a4;
        case 0x1650a8u: goto label_1650a8;
        case 0x1650acu: goto label_1650ac;
        case 0x1650b0u: goto label_1650b0;
        case 0x1650b4u: goto label_1650b4;
        case 0x1650b8u: goto label_1650b8;
        case 0x1650bcu: goto label_1650bc;
        case 0x1650c0u: goto label_1650c0;
        case 0x1650c4u: goto label_1650c4;
        case 0x1650c8u: goto label_1650c8;
        case 0x1650ccu: goto label_1650cc;
        case 0x1650d0u: goto label_1650d0;
        case 0x1650d4u: goto label_1650d4;
        case 0x1650d8u: goto label_1650d8;
        case 0x1650dcu: goto label_1650dc;
        case 0x1650e0u: goto label_1650e0;
        case 0x1650e4u: goto label_1650e4;
        case 0x1650e8u: goto label_1650e8;
        case 0x1650ecu: goto label_1650ec;
        case 0x1650f0u: goto label_1650f0;
        case 0x1650f4u: goto label_1650f4;
        case 0x1650f8u: goto label_1650f8;
        case 0x1650fcu: goto label_1650fc;
        case 0x165100u: goto label_165100;
        case 0x165104u: goto label_165104;
        case 0x165108u: goto label_165108;
        case 0x16510cu: goto label_16510c;
        case 0x165110u: goto label_165110;
        case 0x165114u: goto label_165114;
        case 0x165118u: goto label_165118;
        case 0x16511cu: goto label_16511c;
        case 0x165120u: goto label_165120;
        case 0x165124u: goto label_165124;
        case 0x165128u: goto label_165128;
        case 0x16512cu: goto label_16512c;
        case 0x165130u: goto label_165130;
        case 0x165134u: goto label_165134;
        case 0x165138u: goto label_165138;
        case 0x16513cu: goto label_16513c;
        case 0x165140u: goto label_165140;
        case 0x165144u: goto label_165144;
        case 0x165148u: goto label_165148;
        case 0x16514cu: goto label_16514c;
        case 0x165150u: goto label_165150;
        case 0x165154u: goto label_165154;
        case 0x165158u: goto label_165158;
        case 0x16515cu: goto label_16515c;
        case 0x165160u: goto label_165160;
        case 0x165164u: goto label_165164;
        case 0x165168u: goto label_165168;
        case 0x16516cu: goto label_16516c;
        case 0x165170u: goto label_165170;
        case 0x165174u: goto label_165174;
        case 0x165178u: goto label_165178;
        case 0x16517cu: goto label_16517c;
        case 0x165180u: goto label_165180;
        case 0x165184u: goto label_165184;
        case 0x165188u: goto label_165188;
        case 0x16518cu: goto label_16518c;
        case 0x165190u: goto label_165190;
        case 0x165194u: goto label_165194;
        case 0x165198u: goto label_165198;
        case 0x16519cu: goto label_16519c;
        case 0x1651a0u: goto label_1651a0;
        case 0x1651a4u: goto label_1651a4;
        case 0x1651a8u: goto label_1651a8;
        case 0x1651acu: goto label_1651ac;
        case 0x1651b0u: goto label_1651b0;
        case 0x1651b4u: goto label_1651b4;
        default: break;
    }

    ctx->pc = 0x164c20u;

label_164c20:
    // 0x164c20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x164c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_164c24:
    // 0x164c24: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x164c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_164c28:
    // 0x164c28: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x164c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_164c2c:
    // 0x164c2c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x164c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_164c30:
    // 0x164c30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x164c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164c34:
    // 0x164c34: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x164c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_164c38:
    // 0x164c38: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x164c38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164c3c:
    // 0x164c3c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x164c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_164c40:
    // 0x164c40: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x164c40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164c44:
    // 0x164c44: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x164c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_164c48:
    // 0x164c48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x164c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_164c4c:
    // 0x164c4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_164c50:
    // 0x164c50: 0xc08a61a  jal         func_229868
label_164c54:
    if (ctx->pc == 0x164C54u) {
        ctx->pc = 0x164C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C50u;
        // 0x164c54: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C58u;
        goto label_164c58;
    }
    ctx->pc = 0x164C50u;
    SET_GPR_U32(ctx, 31, 0x164C58u);
    ctx->pc = 0x164C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C50u;
    // 0x164c54: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x164C50u, 0x164C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C58u;
label_164c58:
    // 0x164c58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x164c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164c5c:
    // 0x164c5c: 0x1240014c  beqz        $s2, . + 4 + (0x14C << 2)
label_164c60:
    if (ctx->pc == 0x164C60u) {
        ctx->pc = 0x164C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C5Cu;
        // 0x164c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C64u;
        goto label_164c64;
    }
    ctx->pc = 0x164C5Cu;
    {
        const bool branch_taken_0x164c5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C5Cu;
        // 0x164c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c5c) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x164C64u;
label_164c64:
    // 0x164c64: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x164c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_164c68:
    // 0x164c68: 0xc059304  jal         func_164C10
label_164c6c:
    if (ctx->pc == 0x164C6Cu) {
        ctx->pc = 0x164C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C68u;
        // 0x164c6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C70u;
        goto label_164c70;
    }
    ctx->pc = 0x164C68u;
    SET_GPR_U32(ctx, 31, 0x164C70u);
    ctx->pc = 0x164C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C68u;
    // 0x164c6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C10u, 0x164C68u, 0x164C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C70u;
label_164c70:
    // 0x164c70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x164c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164c74:
    // 0x164c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164c78:
    // 0x164c78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x164c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_164c7c:
    // 0x164c7c: 0x8c442b28  lw          $a0, 0x2B28($v0)
    ctx->pc = 0x164c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11048)));
label_164c80:
    // 0x164c80: 0x548300cb  bnel        $a0, $v1, . + 4 + (0xCB << 2)
label_164c84:
    if (ctx->pc == 0x164C84u) {
        ctx->pc = 0x164C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C80u;
        // 0x164c84: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C88u;
        goto label_164c88;
    }
    ctx->pc = 0x164C80u;
    {
        const bool branch_taken_0x164c80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x164c80) {
            ctx->pc = 0x164C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164C80u;
            // 0x164c84: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164FB0u;
            goto label_164fb0;
        }
    }
    ctx->pc = 0x164C88u;
label_164c88:
    // 0x164c88: 0x10c000c8  beqz        $a2, . + 4 + (0xC8 << 2)
label_164c8c:
    if (ctx->pc == 0x164C8Cu) {
        ctx->pc = 0x164C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C88u;
        // 0x164c8c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C90u;
        goto label_164c90;
    }
    ctx->pc = 0x164C88u;
    {
        const bool branch_taken_0x164c88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C88u;
        // 0x164c8c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c88) {
            ctx->pc = 0x164FACu;
            goto label_164fac;
        }
    }
    ctx->pc = 0x164C90u;
label_164c90:
    // 0x164c90: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x164c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_164c94:
    // 0x164c94: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
label_164c98:
    if (ctx->pc == 0x164C98u) {
        ctx->pc = 0x164C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C94u;
        // 0x164c98: 0x28620012  slti        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C9Cu;
        goto label_164c9c;
    }
    ctx->pc = 0x164C94u;
    {
        const bool branch_taken_0x164c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C94u;
        // 0x164c98: 0x28620012  slti        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c94) {
            ctx->pc = 0x164E8Cu;
            goto label_164e8c;
        }
    }
    ctx->pc = 0x164C9Cu;
label_164c9c:
    // 0x164c9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_164ca0:
    if (ctx->pc == 0x164CA0u) {
        ctx->pc = 0x164CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C9Cu;
        // 0x164ca0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CA4u;
        goto label_164ca4;
    }
    ctx->pc = 0x164C9Cu;
    {
        const bool branch_taken_0x164c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C9Cu;
        // 0x164ca0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c9c) {
            ctx->pc = 0x164CB4u;
            goto label_164cb4;
        }
    }
    ctx->pc = 0x164CA4u;
label_164ca4:
    // 0x164ca4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_164ca8:
    if (ctx->pc == 0x164CA8u) {
        ctx->pc = 0x164CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CA4u;
        // 0x164ca8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CACu;
        goto label_164cac;
    }
    ctx->pc = 0x164CA4u;
    {
        const bool branch_taken_0x164ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CA4u;
        // 0x164ca8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ca4) {
            ctx->pc = 0x164CC8u;
            goto label_164cc8;
        }
    }
    ctx->pc = 0x164CACu;
label_164cac:
    // 0x164cac: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_164cb0:
    if (ctx->pc == 0x164CB0u) {
        ctx->pc = 0x164CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CACu;
        // 0x164cb0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CB4u;
        goto label_164cb4;
    }
    ctx->pc = 0x164CACu;
    {
        const bool branch_taken_0x164cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CACu;
        // 0x164cb0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cac) {
            ctx->pc = 0x164F8Cu;
            goto label_164f8c;
        }
    }
    ctx->pc = 0x164CB4u;
label_164cb4:
    // 0x164cb4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x164cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_164cb8:
    // 0x164cb8: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_164cbc:
    if (ctx->pc == 0x164CBCu) {
        ctx->pc = 0x164CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CB8u;
        // 0x164cbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CC0u;
        goto label_164cc0;
    }
    ctx->pc = 0x164CB8u;
    {
        const bool branch_taken_0x164cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CB8u;
        // 0x164cbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cb8) {
            ctx->pc = 0x164DACu;
            goto label_164dac;
        }
    }
    ctx->pc = 0x164CC0u;
label_164cc0:
    // 0x164cc0: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_164cc4:
    if (ctx->pc == 0x164CC4u) {
        ctx->pc = 0x164CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CC0u;
        // 0x164cc4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CC8u;
        goto label_164cc8;
    }
    ctx->pc = 0x164CC0u;
    {
        const bool branch_taken_0x164cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CC0u;
        // 0x164cc4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cc0) {
            ctx->pc = 0x164F8Cu;
            goto label_164f8c;
        }
    }
    ctx->pc = 0x164CC8u;
label_164cc8:
    // 0x164cc8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x164cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164ccc:
    // 0x164ccc: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x164cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_164cd0:
    // 0x164cd0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x164cd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164cd4:
    // 0x164cd4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x164cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_164cd8:
    // 0x164cd8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x164cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_164cdc:
    // 0x164cdc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x164cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_164ce0:
    // 0x164ce0: 0x40f809  jalr        $v0
label_164ce4:
    if (ctx->pc == 0x164CE4u) {
        ctx->pc = 0x164CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CE0u;
        // 0x164ce4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CE8u;
        goto label_164ce8;
    }
    ctx->pc = 0x164CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164CE8u);
        ctx->pc = 0x164CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CE0u;
        // 0x164ce4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164CE0u, 0x164CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164CE8u;
label_164ce8:
    // 0x164ce8: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_164cec:
    if (ctx->pc == 0x164CECu) {
        ctx->pc = 0x164CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CE8u;
        // 0x164cec: 0x8e902b04  lw          $s0, 0x2B04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CF0u;
        goto label_164cf0;
    }
    ctx->pc = 0x164CE8u;
    {
        const bool branch_taken_0x164ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CE8u;
        // 0x164cec: 0x8e902b04  lw          $s0, 0x2B04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ce8) {
            ctx->pc = 0x164FACu;
            goto label_164fac;
        }
    }
    ctx->pc = 0x164CF0u;
label_164cf0:
    // 0x164cf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x164cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_164cf4:
    // 0x164cf4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x164cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164cf8:
    // 0x164cf8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x164cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_164cfc:
    // 0x164cfc: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x164cfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_164d00:
    // 0x164d00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x164d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_164d04:
    // 0x164d04: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x164d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_164d08:
    // 0x164d08: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x164d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_164d0c:
    // 0x164d0c: 0x40f809  jalr        $v0
label_164d10:
    if (ctx->pc == 0x164D10u) {
        ctx->pc = 0x164D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D0Cu;
        // 0x164d10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D14u;
        goto label_164d14;
    }
    ctx->pc = 0x164D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164D14u);
        ctx->pc = 0x164D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D0Cu;
        // 0x164d10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164D0Cu, 0x164D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164D14u;
label_164d14:
    // 0x164d14: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x164d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_164d18:
    // 0x164d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164d1c:
    // 0x164d1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164d20:
    // 0x164d20: 0x40f809  jalr        $v0
label_164d24:
    if (ctx->pc == 0x164D24u) {
        ctx->pc = 0x164D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D20u;
        // 0x164d24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D28u;
        goto label_164d28;
    }
    ctx->pc = 0x164D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164D28u);
        ctx->pc = 0x164D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D20u;
        // 0x164d24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164D20u, 0x164D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164D28u;
label_164d28:
    // 0x164d28: 0x8e842b04  lw          $a0, 0x2B04($s4)
    ctx->pc = 0x164d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_164d2c:
    // 0x164d2c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x164d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_164d30:
    // 0x164d30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_164d34:
    // 0x164d34: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x164d34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_164d38:
    // 0x164d38: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x164d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_164d3c:
    // 0x164d3c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_164d40:
    if (ctx->pc == 0x164D40u) {
        ctx->pc = 0x164D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D3Cu;
        // 0x164d40: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D44u;
        goto label_164d44;
    }
    ctx->pc = 0x164D3Cu;
    {
        const bool branch_taken_0x164d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D3Cu;
        // 0x164d40: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d3c) {
            ctx->pc = 0x164D60u;
            goto label_164d60;
        }
    }
    ctx->pc = 0x164D44u;
label_164d44:
    // 0x164d44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_164d48:
    // 0x164d48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x164d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_164d4c:
    // 0x164d4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x164d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_164d50:
    // 0x164d50: 0x40f809  jalr        $v0
label_164d54:
    if (ctx->pc == 0x164D54u) {
        ctx->pc = 0x164D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D50u;
        // 0x164d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D58u;
        goto label_164d58;
    }
    ctx->pc = 0x164D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164D58u);
        ctx->pc = 0x164D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D50u;
        // 0x164d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164D50u, 0x164D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164D58u;
label_164d58:
    // 0x164d58: 0x10000004  b           . + 4 + (0x4 << 2)
label_164d5c:
    if (ctx->pc == 0x164D5Cu) {
        ctx->pc = 0x164D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D58u;
        // 0x164d5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D60u;
        goto label_164d60;
    }
    ctx->pc = 0x164D58u;
    {
        const bool branch_taken_0x164d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D58u;
        // 0x164d5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d58) {
            ctx->pc = 0x164D6Cu;
            goto label_164d6c;
        }
    }
    ctx->pc = 0x164D60u;
label_164d60:
    // 0x164d60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x164d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_164d64:
    // 0x164d64: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x164d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_164d68:
    // 0x164d68: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x164d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_164d6c:
    // 0x164d6c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x164d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_164d70:
    // 0x164d70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164d74:
    // 0x164d74: 0x40f809  jalr        $v0
label_164d78:
    if (ctx->pc == 0x164D78u) {
        ctx->pc = 0x164D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D74u;
        // 0x164d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D7Cu;
        goto label_164d7c;
    }
    ctx->pc = 0x164D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164D7Cu);
        ctx->pc = 0x164D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D74u;
        // 0x164d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164D74u, 0x164D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164D7Cu;
label_164d7c:
    // 0x164d7c: 0x8e912b04  lw          $s1, 0x2B04($s4)
    ctx->pc = 0x164d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_164d80:
    // 0x164d80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x164d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_164d84:
    // 0x164d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164d88:
    // 0x164d88: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x164d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_164d8c:
    // 0x164d8c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x164d8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_164d90:
    // 0x164d90: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x164d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_164d94:
    // 0x164d94: 0xc059856  jal         func_166158
label_164d98:
    if (ctx->pc == 0x164D98u) {
        ctx->pc = 0x164D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D94u;
        // 0x164d98: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D9Cu;
        goto label_164d9c;
    }
    ctx->pc = 0x164D94u;
    SET_GPR_U32(ctx, 31, 0x164D9Cu);
    ctx->pc = 0x164D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D94u;
    // 0x164d98: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x164D94u, 0x164D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D9Cu;
label_164d9c:
    // 0x164d9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x164d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_164da0:
    // 0x164da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164da4:
    // 0x164da4: 0x1000006d  b           . + 4 + (0x6D << 2)
label_164da8:
    if (ctx->pc == 0x164DA8u) {
        ctx->pc = 0x164DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DA4u;
        // 0x164da8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164DACu;
        goto label_164dac;
    }
    ctx->pc = 0x164DA4u;
    {
        const bool branch_taken_0x164da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DA4u;
        // 0x164da8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164da4) {
            ctx->pc = 0x164F5Cu;
            goto label_164f5c;
        }
    }
    ctx->pc = 0x164DACu;
label_164dac:
    // 0x164dac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x164dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164db0:
    // 0x164db0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x164db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_164db4:
    // 0x164db4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x164db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164db8:
    // 0x164db8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x164db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_164dbc:
    // 0x164dbc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x164dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_164dc0:
    // 0x164dc0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x164dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_164dc4:
    // 0x164dc4: 0x40f809  jalr        $v0
label_164dc8:
    if (ctx->pc == 0x164DC8u) {
        ctx->pc = 0x164DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DC4u;
        // 0x164dc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164DCCu;
        goto label_164dcc;
    }
    ctx->pc = 0x164DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164DCCu);
        ctx->pc = 0x164DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DC4u;
        // 0x164dc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164DC4u, 0x164DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164DCCu;
label_164dcc:
    // 0x164dcc: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_164dd0:
    if (ctx->pc == 0x164DD0u) {
        ctx->pc = 0x164DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DCCu;
        // 0x164dd0: 0x8e902b04  lw          $s0, 0x2B04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164DD4u;
        goto label_164dd4;
    }
    ctx->pc = 0x164DCCu;
    {
        const bool branch_taken_0x164dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DCCu;
        // 0x164dd0: 0x8e902b04  lw          $s0, 0x2B04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164dcc) {
            ctx->pc = 0x164FACu;
            goto label_164fac;
        }
    }
    ctx->pc = 0x164DD4u;
label_164dd4:
    // 0x164dd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x164dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_164dd8:
    // 0x164dd8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x164dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164ddc:
    // 0x164ddc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x164ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_164de0:
    // 0x164de0: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x164de0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_164de4:
    // 0x164de4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x164de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_164de8:
    // 0x164de8: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x164de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_164dec:
    // 0x164dec: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x164decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_164df0:
    // 0x164df0: 0x40f809  jalr        $v0
label_164df4:
    if (ctx->pc == 0x164DF4u) {
        ctx->pc = 0x164DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DF0u;
        // 0x164df4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164DF8u;
        goto label_164df8;
    }
    ctx->pc = 0x164DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164DF8u);
        ctx->pc = 0x164DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DF0u;
        // 0x164df4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164DF0u, 0x164DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164DF8u;
label_164df8:
    // 0x164df8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x164df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_164dfc:
    // 0x164dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164e00:
    // 0x164e00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164e04:
    // 0x164e04: 0x40f809  jalr        $v0
label_164e08:
    if (ctx->pc == 0x164E08u) {
        ctx->pc = 0x164E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E04u;
        // 0x164e08: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E0Cu;
        goto label_164e0c;
    }
    ctx->pc = 0x164E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164E0Cu);
        ctx->pc = 0x164E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E04u;
        // 0x164e08: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164E04u, 0x164E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164E0Cu;
label_164e0c:
    // 0x164e0c: 0x8e842b04  lw          $a0, 0x2B04($s4)
    ctx->pc = 0x164e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_164e10:
    // 0x164e10: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x164e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_164e14:
    // 0x164e14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_164e18:
    // 0x164e18: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x164e18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_164e1c:
    // 0x164e1c: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x164e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_164e20:
    // 0x164e20: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_164e24:
    if (ctx->pc == 0x164E24u) {
        ctx->pc = 0x164E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E20u;
        // 0x164e24: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E28u;
        goto label_164e28;
    }
    ctx->pc = 0x164E20u;
    {
        const bool branch_taken_0x164e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E20u;
        // 0x164e24: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e20) {
            ctx->pc = 0x164E44u;
            goto label_164e44;
        }
    }
    ctx->pc = 0x164E28u;
label_164e28:
    // 0x164e28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_164e2c:
    // 0x164e2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x164e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_164e30:
    // 0x164e30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x164e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_164e34:
    // 0x164e34: 0x40f809  jalr        $v0
label_164e38:
    if (ctx->pc == 0x164E38u) {
        ctx->pc = 0x164E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E34u;
        // 0x164e38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E3Cu;
        goto label_164e3c;
    }
    ctx->pc = 0x164E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164E3Cu);
        ctx->pc = 0x164E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E34u;
        // 0x164e38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164E34u, 0x164E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164E3Cu;
label_164e3c:
    // 0x164e3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_164e40:
    if (ctx->pc == 0x164E40u) {
        ctx->pc = 0x164E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E3Cu;
        // 0x164e40: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E44u;
        goto label_164e44;
    }
    ctx->pc = 0x164E3Cu;
    {
        const bool branch_taken_0x164e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E3Cu;
        // 0x164e40: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e3c) {
            ctx->pc = 0x164E50u;
            goto label_164e50;
        }
    }
    ctx->pc = 0x164E44u;
label_164e44:
    // 0x164e44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x164e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_164e48:
    // 0x164e48: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x164e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_164e4c:
    // 0x164e4c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x164e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_164e50:
    // 0x164e50: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x164e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_164e54:
    // 0x164e54: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164e58:
    // 0x164e58: 0x40f809  jalr        $v0
label_164e5c:
    if (ctx->pc == 0x164E5Cu) {
        ctx->pc = 0x164E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E58u;
        // 0x164e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E60u;
        goto label_164e60;
    }
    ctx->pc = 0x164E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164E60u);
        ctx->pc = 0x164E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E58u;
        // 0x164e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164E58u, 0x164E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164E60u;
label_164e60:
    // 0x164e60: 0x8e912b04  lw          $s1, 0x2B04($s4)
    ctx->pc = 0x164e60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_164e64:
    // 0x164e64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x164e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_164e68:
    // 0x164e68: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x164e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_164e6c:
    // 0x164e6c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x164e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_164e70:
    // 0x164e70: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x164e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_164e74:
    // 0x164e74: 0xc059888  jal         func_166220
label_164e78:
    if (ctx->pc == 0x164E78u) {
        ctx->pc = 0x164E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E74u;
        // 0x164e78: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E7Cu;
        goto label_164e7c;
    }
    ctx->pc = 0x164E74u;
    SET_GPR_U32(ctx, 31, 0x164E7Cu);
    ctx->pc = 0x164E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164E74u;
    // 0x164e78: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166220u, 0x164E74u, 0x164E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E7Cu;
label_164e7c:
    // 0x164e7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x164e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_164e80:
    // 0x164e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164e84:
    // 0x164e84: 0x10000035  b           . + 4 + (0x35 << 2)
label_164e88:
    if (ctx->pc == 0x164E88u) {
        ctx->pc = 0x164E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E84u;
        // 0x164e88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E8Cu;
        goto label_164e8c;
    }
    ctx->pc = 0x164E84u;
    {
        const bool branch_taken_0x164e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E84u;
        // 0x164e88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e84) {
            ctx->pc = 0x164F5Cu;
            goto label_164f5c;
        }
    }
    ctx->pc = 0x164E8Cu;
label_164e8c:
    // 0x164e8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x164e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_164e90:
    // 0x164e90: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x164e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164e94:
    // 0x164e94: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x164e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_164e98:
    // 0x164e98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x164e98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164e9c:
    // 0x164e9c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x164e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_164ea0:
    // 0x164ea0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x164ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_164ea4:
    // 0x164ea4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x164ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_164ea8:
    // 0x164ea8: 0x40f809  jalr        $v0
label_164eac:
    if (ctx->pc == 0x164EACu) {
        ctx->pc = 0x164EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EA8u;
        // 0x164eac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EB0u;
        goto label_164eb0;
    }
    ctx->pc = 0x164EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164EB0u);
        ctx->pc = 0x164EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EA8u;
        // 0x164eac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164EA8u, 0x164EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164EB0u;
label_164eb0:
    // 0x164eb0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_164eb4:
    if (ctx->pc == 0x164EB4u) {
        ctx->pc = 0x164EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EB0u;
        // 0x164eb4: 0x8e902b04  lw          $s0, 0x2B04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EB8u;
        goto label_164eb8;
    }
    ctx->pc = 0x164EB0u;
    {
        const bool branch_taken_0x164eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EB0u;
        // 0x164eb4: 0x8e902b04  lw          $s0, 0x2B04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164eb0) {
            ctx->pc = 0x164FACu;
            goto label_164fac;
        }
    }
    ctx->pc = 0x164EB8u;
label_164eb8:
    // 0x164eb8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x164eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_164ebc:
    // 0x164ebc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x164ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164ec0:
    // 0x164ec0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x164ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_164ec4:
    // 0x164ec4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x164ec4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_164ec8:
    // 0x164ec8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_164ecc:
    // 0x164ecc: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x164eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_164ed0:
    // 0x164ed0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x164ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_164ed4:
    // 0x164ed4: 0x40f809  jalr        $v0
label_164ed8:
    if (ctx->pc == 0x164ED8u) {
        ctx->pc = 0x164ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ED4u;
        // 0x164ed8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EDCu;
        goto label_164edc;
    }
    ctx->pc = 0x164ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164EDCu);
        ctx->pc = 0x164ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ED4u;
        // 0x164ed8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164ED4u, 0x164EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164EDCu;
label_164edc:
    // 0x164edc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x164edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_164ee0:
    // 0x164ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164ee4:
    // 0x164ee4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164ee8:
    // 0x164ee8: 0x40f809  jalr        $v0
label_164eec:
    if (ctx->pc == 0x164EECu) {
        ctx->pc = 0x164EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EE8u;
        // 0x164eec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EF0u;
        goto label_164ef0;
    }
    ctx->pc = 0x164EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164EF0u);
        ctx->pc = 0x164EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EE8u;
        // 0x164eec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164EE8u, 0x164EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164EF0u;
label_164ef0:
    // 0x164ef0: 0x8e842b04  lw          $a0, 0x2B04($s4)
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_164ef4:
    // 0x164ef4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x164ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_164ef8:
    // 0x164ef8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_164efc:
    // 0x164efc: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x164efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_164f00:
    // 0x164f00: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_164f04:
    // 0x164f04: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_164f08:
    if (ctx->pc == 0x164F08u) {
        ctx->pc = 0x164F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F04u;
        // 0x164f08: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F0Cu;
        goto label_164f0c;
    }
    ctx->pc = 0x164F04u;
    {
        const bool branch_taken_0x164f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F04u;
        // 0x164f08: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f04) {
            ctx->pc = 0x164F28u;
            goto label_164f28;
        }
    }
    ctx->pc = 0x164F0Cu;
label_164f0c:
    // 0x164f0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_164f10:
    // 0x164f10: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_164f14:
    // 0x164f14: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x164f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_164f18:
    // 0x164f18: 0x40f809  jalr        $v0
label_164f1c:
    if (ctx->pc == 0x164F1Cu) {
        ctx->pc = 0x164F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F18u;
        // 0x164f1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F20u;
        goto label_164f20;
    }
    ctx->pc = 0x164F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164F20u);
        ctx->pc = 0x164F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F18u;
        // 0x164f1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F18u, 0x164F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164F20u;
label_164f20:
    // 0x164f20: 0x10000004  b           . + 4 + (0x4 << 2)
label_164f24:
    if (ctx->pc == 0x164F24u) {
        ctx->pc = 0x164F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F20u;
        // 0x164f24: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F28u;
        goto label_164f28;
    }
    ctx->pc = 0x164F20u;
    {
        const bool branch_taken_0x164f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F20u;
        // 0x164f24: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f20) {
            ctx->pc = 0x164F34u;
            goto label_164f34;
        }
    }
    ctx->pc = 0x164F28u;
label_164f28:
    // 0x164f28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x164f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_164f2c:
    // 0x164f2c: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x164f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_164f30:
    // 0x164f30: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x164f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_164f34:
    // 0x164f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164f38:
    // 0x164f38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164f3c:
    // 0x164f3c: 0x40f809  jalr        $v0
label_164f40:
    if (ctx->pc == 0x164F40u) {
        ctx->pc = 0x164F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F3Cu;
        // 0x164f40: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F44u;
        goto label_164f44;
    }
    ctx->pc = 0x164F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164F44u);
        ctx->pc = 0x164F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F3Cu;
        // 0x164f40: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F3Cu, 0x164F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164F44u;
label_164f44:
    // 0x164f44: 0x8e862b04  lw          $a2, 0x2B04($s4)
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_164f48:
    // 0x164f48: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x164f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_164f4c:
    // 0x164f4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x164f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_164f50:
    // 0x164f50: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x164f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_164f54:
    // 0x164f54: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x164f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_164f58:
    // 0x164f58: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x164f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_164f5c:
    // 0x164f5c: 0x60f809  jalr        $v1
label_164f60:
    if (ctx->pc == 0x164F60u) {
        ctx->pc = 0x164F64u;
        goto label_164f64;
    }
    ctx->pc = 0x164F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164F64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F5Cu, 0x164F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164F64u;
label_164f64:
    // 0x164f64: 0x8e872b04  lw          $a3, 0x2B04($s4)
    ctx->pc = 0x164f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_164f68:
    // 0x164f68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164f6c:
    // 0x164f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164f70:
    // 0x164f70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x164f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_164f74:
    // 0x164f74: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x164f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_164f78:
    // 0x164f78: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x164f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_164f7c:
    // 0x164f7c: 0x60f809  jalr        $v1
label_164f80:
    if (ctx->pc == 0x164F80u) {
        ctx->pc = 0x164F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F7Cu;
        // 0x164f80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F84u;
        goto label_164f84;
    }
    ctx->pc = 0x164F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164F84u);
        ctx->pc = 0x164F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F7Cu;
        // 0x164f80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F7Cu, 0x164F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164F84u;
label_164f84:
    // 0x164f84: 0x1000000a  b           . + 4 + (0xA << 2)
label_164f88:
    if (ctx->pc == 0x164F88u) {
        ctx->pc = 0x164F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F84u;
        // 0x164f88: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F8Cu;
        goto label_164f8c;
    }
    ctx->pc = 0x164F84u;
    {
        const bool branch_taken_0x164f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F84u;
        // 0x164f88: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f84) {
            ctx->pc = 0x164FB0u;
            goto label_164fb0;
        }
    }
    ctx->pc = 0x164F8Cu;
label_164f8c:
    // 0x164f8c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_164f90:
    // 0x164f90: 0xc0e1338  jal         func_384CE0
label_164f94:
    if (ctx->pc == 0x164F94u) {
        ctx->pc = 0x164F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F90u;
        // 0x164f94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F98u;
        goto label_164f98;
    }
    ctx->pc = 0x164F90u;
    SET_GPR_U32(ctx, 31, 0x164F98u);
    ctx->pc = 0x164F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F90u;
    // 0x164f94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384CE0u, 0x164F90u, 0x164F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F98u;
label_164f98:
    // 0x164f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164f9c:
    // 0x164f9c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_164fa0:
    if (ctx->pc == 0x164FA0u) {
        ctx->pc = 0x164FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F9Cu;
        // 0x164fa0: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FA4u;
        goto label_164fa4;
    }
    ctx->pc = 0x164F9Cu;
    {
        const bool branch_taken_0x164f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164f9c) {
            ctx->pc = 0x164FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164F9Cu;
            // 0x164fa0: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164FB0u;
            goto label_164fb0;
        }
    }
    ctx->pc = 0x164FA4u;
label_164fa4:
    // 0x164fa4: 0x1000007a  b           . + 4 + (0x7A << 2)
label_164fa8:
    if (ctx->pc == 0x164FA8u) {
        ctx->pc = 0x164FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FA4u;
        // 0x164fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FACu;
        goto label_164fac;
    }
    ctx->pc = 0x164FA4u;
    {
        const bool branch_taken_0x164fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FA4u;
        // 0x164fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fa4) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x164FACu;
label_164fac:
    // 0x164fac: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x164facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_164fb0:
    // 0x164fb0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x164fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_164fb4:
    // 0x164fb4: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_164fb8:
    if (ctx->pc == 0x164FB8u) {
        ctx->pc = 0x164FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FB4u;
        // 0x164fb8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FBCu;
        goto label_164fbc;
    }
    ctx->pc = 0x164FB4u;
    {
        const bool branch_taken_0x164fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FB4u;
        // 0x164fb8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fb4) {
            ctx->pc = 0x165054u;
            goto label_165054;
        }
    }
    ctx->pc = 0x164FBCu;
label_164fbc:
    // 0x164fbc: 0x54620055  bnel        $v1, $v0, . + 4 + (0x55 << 2)
label_164fc0:
    if (ctx->pc == 0x164FC0u) {
        ctx->pc = 0x164FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FBCu;
        // 0x164fc0: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FC4u;
        goto label_164fc4;
    }
    ctx->pc = 0x164FBCu;
    {
        const bool branch_taken_0x164fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164fbc) {
            ctx->pc = 0x164FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164FBCu;
            // 0x164fc0: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165114u;
            goto label_165114;
        }
    }
    ctx->pc = 0x164FC4u;
label_164fc4:
    // 0x164fc4: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x164fc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_164fc8:
    // 0x164fc8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x164fc8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_164fcc:
    // 0x164fcc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_164fd0:
    if (ctx->pc == 0x164FD0u) {
        ctx->pc = 0x164FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FCCu;
        // 0x164fd0: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FD4u;
        goto label_164fd4;
    }
    ctx->pc = 0x164FCCu;
    {
        const bool branch_taken_0x164fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FCCu;
        // 0x164fd0: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fcc) {
            ctx->pc = 0x165110u;
            goto label_165110;
        }
    }
    ctx->pc = 0x164FD4u;
label_164fd4:
    // 0x164fd4: 0x925403ac  lbu         $s4, 0x3AC($s2)
    ctx->pc = 0x164fd4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
label_164fd8:
    // 0x164fd8: 0x5683004e  bnel        $s4, $v1, . + 4 + (0x4E << 2)
label_164fdc:
    if (ctx->pc == 0x164FDCu) {
        ctx->pc = 0x164FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FD8u;
        // 0x164fdc: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FE0u;
        goto label_164fe0;
    }
    ctx->pc = 0x164FD8u;
    {
        const bool branch_taken_0x164fd8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x164fd8) {
            ctx->pc = 0x164FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164FD8u;
            // 0x164fdc: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165114u;
            goto label_165114;
        }
    }
    ctx->pc = 0x164FE0u;
label_164fe0:
    // 0x164fe0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_164fe4:
    // 0x164fe4: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x164fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_164fe8:
    // 0x164fe8: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_164fec:
    // 0x164fec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x164fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164ff0:
    // 0x164ff0: 0xc107908  jal         func_41E420
label_164ff4:
    if (ctx->pc == 0x164FF4u) {
        ctx->pc = 0x164FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FF0u;
        // 0x164ff4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FF8u;
        goto label_164ff8;
    }
    ctx->pc = 0x164FF0u;
    SET_GPR_U32(ctx, 31, 0x164FF8u);
    ctx->pc = 0x164FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FF0u;
    // 0x164ff4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x164FF0u, 0x164FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FF8u;
label_164ff8:
    // 0x164ff8: 0x18400045  blez        $v0, . + 4 + (0x45 << 2)
label_164ffc:
    if (ctx->pc == 0x164FFCu) {
        ctx->pc = 0x164FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FF8u;
        // 0x164ffc: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165000u;
        goto label_165000;
    }
    ctx->pc = 0x164FF8u;
    {
        const bool branch_taken_0x164ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x164FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FF8u;
        // 0x164ffc: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ff8) {
            ctx->pc = 0x165110u;
            goto label_165110;
        }
    }
    ctx->pc = 0x165000u;
label_165000:
    // 0x165000: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x165000u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_165004:
    // 0x165004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_165008:
    // 0x165008: 0xa040042e  sb          $zero, 0x42E($v0)
    ctx->pc = 0x165008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1070), (uint8_t)GPR_U32(ctx, 0));
label_16500c:
    // 0x16500c: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x16500cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_165010:
    // 0x165010: 0x8e27489c  lw          $a3, 0x489C($s1)
    ctx->pc = 0x165010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_165014:
    // 0x165014: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x165014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_165018:
    // 0x165018: 0x9062041a  lbu         $v0, 0x41A($v1)
    ctx->pc = 0x165018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1050)));
label_16501c:
    // 0x16501c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x16501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_165020:
    // 0x165020: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_165024:
    if (ctx->pc == 0x165024u) {
        ctx->pc = 0x165024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165020u;
        // 0x165024: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165028u;
        goto label_165028;
    }
    ctx->pc = 0x165020u;
    {
        const bool branch_taken_0x165020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165020u;
        // 0x165024: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165020) {
            ctx->pc = 0x165110u;
            goto label_165110;
        }
    }
    ctx->pc = 0x165028u;
label_165028:
    // 0x165028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x165028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16502c:
    // 0x16502c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x16502cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_165030:
    // 0x165030: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165034:
    // 0x165034: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x165034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_165038:
    // 0x165038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x165038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16503c:
    // 0x16503c: 0x24420420  addiu       $v0, $v0, 0x420
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
label_165040:
    // 0x165040: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x165040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165044:
    // 0x165044: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x165044u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_165048:
    // 0x165048: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x165048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16504c:
    // 0x16504c: 0x10000022  b           . + 4 + (0x22 << 2)
label_165050:
    if (ctx->pc == 0x165050u) {
        ctx->pc = 0x165050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16504Cu;
        // 0x165050: 0xa0540000  sb          $s4, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165054u;
        goto label_165054;
    }
    ctx->pc = 0x16504Cu;
    {
        const bool branch_taken_0x16504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16504Cu;
        // 0x165050: 0xa0540000  sb          $s4, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16504c) {
            ctx->pc = 0x1650D8u;
            goto label_1650d8;
        }
    }
    ctx->pc = 0x165054u;
label_165054:
    // 0x165054: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x165054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_165058:
    // 0x165058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16505c:
    // 0x16505c: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
label_165060:
    if (ctx->pc == 0x165060u) {
        ctx->pc = 0x165060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16505Cu;
        // 0x165060: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165064u;
        goto label_165064;
    }
    ctx->pc = 0x16505Cu;
    {
        const bool branch_taken_0x16505c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16505c) {
            ctx->pc = 0x165060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16505Cu;
            // 0x165060: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165114u;
            goto label_165114;
        }
    }
    ctx->pc = 0x165064u;
label_165064:
    // 0x165064: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x165064u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_165068:
    // 0x165068: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x165068u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_16506c:
    // 0x16506c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16506cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_165070:
    // 0x165070: 0x54430028  bnel        $v0, $v1, . + 4 + (0x28 << 2)
label_165074:
    if (ctx->pc == 0x165074u) {
        ctx->pc = 0x165074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165070u;
        // 0x165074: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165078u;
        goto label_165078;
    }
    ctx->pc = 0x165070u;
    {
        const bool branch_taken_0x165070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165070) {
            ctx->pc = 0x165074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165070u;
            // 0x165074: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165114u;
            goto label_165114;
        }
    }
    ctx->pc = 0x165078u;
label_165078:
    // 0x165078: 0x924a03ac  lbu         $t2, 0x3AC($s2)
    ctx->pc = 0x165078u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
label_16507c:
    // 0x16507c: 0x55420025  bnel        $t2, $v0, . + 4 + (0x25 << 2)
label_165080:
    if (ctx->pc == 0x165080u) {
        ctx->pc = 0x165080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16507Cu;
        // 0x165080: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165084u;
        goto label_165084;
    }
    ctx->pc = 0x16507Cu;
    {
        const bool branch_taken_0x16507c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x16507c) {
            ctx->pc = 0x165080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16507Cu;
            // 0x165080: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165114u;
            goto label_165114;
        }
    }
    ctx->pc = 0x165084u;
label_165084:
    // 0x165084: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x165084u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_165088:
    // 0x165088: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x165088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_16508c:
    // 0x16508c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_165090:
    // 0x165090: 0xa040042e  sb          $zero, 0x42E($v0)
    ctx->pc = 0x165090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1070), (uint8_t)GPR_U32(ctx, 0));
label_165094:
    // 0x165094: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_165098:
    // 0x165098: 0x8e27489c  lw          $a3, 0x489C($s1)
    ctx->pc = 0x165098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_16509c:
    // 0x16509c: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x16509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1650a0:
    // 0x1650a0: 0x9062041a  lbu         $v0, 0x41A($v1)
    ctx->pc = 0x1650a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1050)));
label_1650a4:
    // 0x1650a4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1650a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1650a8:
    // 0x1650a8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1650ac:
    if (ctx->pc == 0x1650ACu) {
        ctx->pc = 0x1650ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650A8u;
        // 0x1650ac: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650B0u;
        goto label_1650b0;
    }
    ctx->pc = 0x1650A8u;
    {
        const bool branch_taken_0x1650a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650A8u;
        // 0x1650ac: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650a8) {
            ctx->pc = 0x165110u;
            goto label_165110;
        }
    }
    ctx->pc = 0x1650B0u;
label_1650b0:
    // 0x1650b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1650b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1650b4:
    // 0x1650b4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1650b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1650b8:
    // 0x1650b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1650b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1650bc:
    // 0x1650bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1650bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1650c0:
    // 0x1650c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1650c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1650c4:
    // 0x1650c4: 0x24420420  addiu       $v0, $v0, 0x420
    ctx->pc = 0x1650c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
label_1650c8:
    // 0x1650c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1650c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1650cc:
    // 0x1650cc: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1650ccu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1650d0:
    // 0x1650d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1650d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1650d4:
    // 0x1650d4: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x1650d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
label_1650d8:
    // 0x1650d8: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x1650d8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1650dc:
    // 0x1650dc: 0xc107138  jal         func_41C4E0
label_1650e0:
    if (ctx->pc == 0x1650E0u) {
        ctx->pc = 0x1650E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650DCu;
        // 0x1650e0: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650E4u;
        goto label_1650e4;
    }
    ctx->pc = 0x1650DCu;
    SET_GPR_U32(ctx, 31, 0x1650E4u);
    ctx->pc = 0x1650E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650DCu;
    // 0x1650e0: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x1650DCu, 0x1650E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650E4u;
label_1650e4:
    // 0x1650e4: 0xc087502  jal         func_21D408
label_1650e8:
    if (ctx->pc == 0x1650E8u) {
        ctx->pc = 0x1650E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650E4u;
        // 0x1650e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650ECu;
        goto label_1650ec;
    }
    ctx->pc = 0x1650E4u;
    SET_GPR_U32(ctx, 31, 0x1650ECu);
    ctx->pc = 0x1650E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650E4u;
    // 0x1650e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1650E4u, 0x1650ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650ECu;
label_1650ec:
    // 0x1650ec: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x1650ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1650f0:
    // 0x1650f0: 0xc0599c2  jal         func_166708
label_1650f4:
    if (ctx->pc == 0x1650F4u) {
        ctx->pc = 0x1650F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650F0u;
        // 0x1650f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650F8u;
        goto label_1650f8;
    }
    ctx->pc = 0x1650F0u;
    SET_GPR_U32(ctx, 31, 0x1650F8u);
    ctx->pc = 0x1650F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650F0u;
    // 0x1650f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166708u, 0x1650F0u, 0x1650F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650F8u;
label_1650f8:
    // 0x1650f8: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x1650f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_1650fc:
    // 0x1650fc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1650fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_165100:
    // 0x165100: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x165100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_165104:
    // 0x165104: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x165104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_165108:
    // 0x165108: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x165108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16510c:
    // 0x16510c: 0xa0500420  sb          $s0, 0x420($v0)
    ctx->pc = 0x16510cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1056), (uint8_t)GPR_U32(ctx, 16));
label_165110:
    // 0x165110: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x165110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_165114:
    // 0x165114: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_165118:
    if (ctx->pc == 0x165118u) {
        ctx->pc = 0x165118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165114u;
        // 0x165118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16511Cu;
        goto label_16511c;
    }
    ctx->pc = 0x165114u;
    {
        const bool branch_taken_0x165114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165114u;
        // 0x165118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165114) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x16511Cu;
label_16511c:
    // 0x16511c: 0xc137832  jal         func_4DE0C8
label_165120:
    if (ctx->pc == 0x165120u) {
        ctx->pc = 0x165120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16511Cu;
        // 0x165120: 0x26a40048  addiu       $a0, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165124u;
        goto label_165124;
    }
    ctx->pc = 0x16511Cu;
    SET_GPR_U32(ctx, 31, 0x165124u);
    ctx->pc = 0x165120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16511Cu;
    // 0x165120: 0x26a40048  addiu       $a0, $s5, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x16511Cu, 0x165124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165124u;
label_165124:
    // 0x165124: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_165128:
    if (ctx->pc == 0x165128u) {
        ctx->pc = 0x165128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165124u;
        // 0x165128: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16512Cu;
        goto label_16512c;
    }
    ctx->pc = 0x165124u;
    {
        const bool branch_taken_0x165124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165124u;
        // 0x165128: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165124) {
            ctx->pc = 0x165144u;
            goto label_165144;
        }
    }
    ctx->pc = 0x16512Cu;
label_16512c:
    // 0x16512c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x16512cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_165130:
    // 0x165130: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_165134:
    if (ctx->pc == 0x165134u) {
        ctx->pc = 0x165134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165130u;
        // 0x165134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165138u;
        goto label_165138;
    }
    ctx->pc = 0x165130u;
    {
        const bool branch_taken_0x165130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165130u;
        // 0x165134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165130) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165138u;
label_165138:
    // 0x165138: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x165138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_16513c:
    // 0x16513c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_165140:
    if (ctx->pc == 0x165140u) {
        ctx->pc = 0x165140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16513Cu;
        // 0x165140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165144u;
        goto label_165144;
    }
    ctx->pc = 0x16513Cu;
    {
        const bool branch_taken_0x16513c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16513Cu;
        // 0x165140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16513c) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165144u;
label_165144:
    // 0x165144: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x165144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_165148:
    // 0x165148: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x165148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16514c:
    // 0x16514c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_165150:
    if (ctx->pc == 0x165150u) {
        ctx->pc = 0x165150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16514Cu;
        // 0x165150: 0x8ea70040  lw          $a3, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165154u;
        goto label_165154;
    }
    ctx->pc = 0x16514Cu;
    {
        const bool branch_taken_0x16514c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16514c) {
            ctx->pc = 0x165150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16514Cu;
            // 0x165150: 0x8ea70040  lw          $a3, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165164u;
            goto label_165164;
        }
    }
    ctx->pc = 0x165154u;
label_165154:
    // 0x165154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_165158:
    // 0x165158: 0xc0599c2  jal         func_166708
label_16515c:
    if (ctx->pc == 0x16515Cu) {
        ctx->pc = 0x16515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165158u;
        // 0x16515c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165160u;
        goto label_165160;
    }
    ctx->pc = 0x165158u;
    SET_GPR_U32(ctx, 31, 0x165160u);
    ctx->pc = 0x16515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165158u;
    // 0x16515c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166708u, 0x165158u, 0x165160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165160u;
label_165160:
    // 0x165160: 0x8ea70040  lw          $a3, 0x40($s5)
    ctx->pc = 0x165160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_165164:
    // 0x165164: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_165168:
    if (ctx->pc == 0x165168u) {
        ctx->pc = 0x165168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165164u;
        // 0x165168: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16516Cu;
        goto label_16516c;
    }
    ctx->pc = 0x165164u;
    {
        const bool branch_taken_0x165164 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x165168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165164u;
        // 0x165168: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165164) {
            ctx->pc = 0x16518Cu;
            goto label_16518c;
        }
    }
    ctx->pc = 0x16516Cu;
label_16516c:
    // 0x16516c: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x16516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_165170:
    // 0x165170: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x165170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_165174:
    // 0x165174: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_165178:
    // 0x165178: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x165178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_16517c:
    // 0x16517c: 0x40f809  jalr        $v0
label_165180:
    if (ctx->pc == 0x165180u) {
        ctx->pc = 0x165180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16517Cu;
        // 0x165180: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165184u;
        goto label_165184;
    }
    ctx->pc = 0x16517Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165184u);
        ctx->pc = 0x165180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16517Cu;
        // 0x165180: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16517Cu, 0x165184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165184u;
label_165184:
    // 0x165184: 0x10000003  b           . + 4 + (0x3 << 2)
label_165188:
    if (ctx->pc == 0x165188u) {
        ctx->pc = 0x165188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165184u;
        // 0x165188: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16518Cu;
        goto label_16518c;
    }
    ctx->pc = 0x165184u;
    {
        const bool branch_taken_0x165184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165184u;
        // 0x165188: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165184) {
            ctx->pc = 0x165194u;
            goto label_165194;
        }
    }
    ctx->pc = 0x16518Cu;
label_16518c:
    // 0x16518c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165190:
    // 0x165190: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x165190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_165194:
    // 0x165194: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x165194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_165198:
    // 0x165198: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x165198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16519c:
    // 0x16519c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16519cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1651a0:
    // 0x1651a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1651a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1651a4:
    // 0x1651a4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1651a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1651a8:
    // 0x1651a8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1651a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1651ac:
    // 0x1651ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1651acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1651b0:
    // 0x1651b0: 0x3e00008  jr          $ra
label_1651b4:
    if (ctx->pc == 0x1651B4u) {
        ctx->pc = 0x1651B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651B0u;
        // 0x1651b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1651B8u;
        goto label_fallthrough_0x1651b0;
    }
    ctx->pc = 0x1651B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1651B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651B0u;
        // 0x1651b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1651B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1651b0:
    ctx->pc = 0x1651B8u;
}
