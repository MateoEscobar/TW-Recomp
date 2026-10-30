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

// Function: sub_00307D40
// Address: 0x307d40 - 0x307fe0
void sub_00307D40_0x307d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307D40_0x307d40");
#endif

    switch (ctx->pc) {
        case 0x307d40u: goto label_307d40;
        case 0x307d44u: goto label_307d44;
        case 0x307d48u: goto label_307d48;
        case 0x307d4cu: goto label_307d4c;
        case 0x307d50u: goto label_307d50;
        case 0x307d54u: goto label_307d54;
        case 0x307d58u: goto label_307d58;
        case 0x307d5cu: goto label_307d5c;
        case 0x307d60u: goto label_307d60;
        case 0x307d64u: goto label_307d64;
        case 0x307d68u: goto label_307d68;
        case 0x307d6cu: goto label_307d6c;
        case 0x307d70u: goto label_307d70;
        case 0x307d74u: goto label_307d74;
        case 0x307d78u: goto label_307d78;
        case 0x307d7cu: goto label_307d7c;
        case 0x307d80u: goto label_307d80;
        case 0x307d84u: goto label_307d84;
        case 0x307d88u: goto label_307d88;
        case 0x307d8cu: goto label_307d8c;
        case 0x307d90u: goto label_307d90;
        case 0x307d94u: goto label_307d94;
        case 0x307d98u: goto label_307d98;
        case 0x307d9cu: goto label_307d9c;
        case 0x307da0u: goto label_307da0;
        case 0x307da4u: goto label_307da4;
        case 0x307da8u: goto label_307da8;
        case 0x307dacu: goto label_307dac;
        case 0x307db0u: goto label_307db0;
        case 0x307db4u: goto label_307db4;
        case 0x307db8u: goto label_307db8;
        case 0x307dbcu: goto label_307dbc;
        case 0x307dc0u: goto label_307dc0;
        case 0x307dc4u: goto label_307dc4;
        case 0x307dc8u: goto label_307dc8;
        case 0x307dccu: goto label_307dcc;
        case 0x307dd0u: goto label_307dd0;
        case 0x307dd4u: goto label_307dd4;
        case 0x307dd8u: goto label_307dd8;
        case 0x307ddcu: goto label_307ddc;
        case 0x307de0u: goto label_307de0;
        case 0x307de4u: goto label_307de4;
        case 0x307de8u: goto label_307de8;
        case 0x307decu: goto label_307dec;
        case 0x307df0u: goto label_307df0;
        case 0x307df4u: goto label_307df4;
        case 0x307df8u: goto label_307df8;
        case 0x307dfcu: goto label_307dfc;
        case 0x307e00u: goto label_307e00;
        case 0x307e04u: goto label_307e04;
        case 0x307e08u: goto label_307e08;
        case 0x307e0cu: goto label_307e0c;
        case 0x307e10u: goto label_307e10;
        case 0x307e14u: goto label_307e14;
        case 0x307e18u: goto label_307e18;
        case 0x307e1cu: goto label_307e1c;
        case 0x307e20u: goto label_307e20;
        case 0x307e24u: goto label_307e24;
        case 0x307e28u: goto label_307e28;
        case 0x307e2cu: goto label_307e2c;
        case 0x307e30u: goto label_307e30;
        case 0x307e34u: goto label_307e34;
        case 0x307e38u: goto label_307e38;
        case 0x307e3cu: goto label_307e3c;
        case 0x307e40u: goto label_307e40;
        case 0x307e44u: goto label_307e44;
        case 0x307e48u: goto label_307e48;
        case 0x307e4cu: goto label_307e4c;
        case 0x307e50u: goto label_307e50;
        case 0x307e54u: goto label_307e54;
        case 0x307e58u: goto label_307e58;
        case 0x307e5cu: goto label_307e5c;
        case 0x307e60u: goto label_307e60;
        case 0x307e64u: goto label_307e64;
        case 0x307e68u: goto label_307e68;
        case 0x307e6cu: goto label_307e6c;
        case 0x307e70u: goto label_307e70;
        case 0x307e74u: goto label_307e74;
        case 0x307e78u: goto label_307e78;
        case 0x307e7cu: goto label_307e7c;
        case 0x307e80u: goto label_307e80;
        case 0x307e84u: goto label_307e84;
        case 0x307e88u: goto label_307e88;
        case 0x307e8cu: goto label_307e8c;
        case 0x307e90u: goto label_307e90;
        case 0x307e94u: goto label_307e94;
        case 0x307e98u: goto label_307e98;
        case 0x307e9cu: goto label_307e9c;
        case 0x307ea0u: goto label_307ea0;
        case 0x307ea4u: goto label_307ea4;
        case 0x307ea8u: goto label_307ea8;
        case 0x307eacu: goto label_307eac;
        case 0x307eb0u: goto label_307eb0;
        case 0x307eb4u: goto label_307eb4;
        case 0x307eb8u: goto label_307eb8;
        case 0x307ebcu: goto label_307ebc;
        case 0x307ec0u: goto label_307ec0;
        case 0x307ec4u: goto label_307ec4;
        case 0x307ec8u: goto label_307ec8;
        case 0x307eccu: goto label_307ecc;
        case 0x307ed0u: goto label_307ed0;
        case 0x307ed4u: goto label_307ed4;
        case 0x307ed8u: goto label_307ed8;
        case 0x307edcu: goto label_307edc;
        case 0x307ee0u: goto label_307ee0;
        case 0x307ee4u: goto label_307ee4;
        case 0x307ee8u: goto label_307ee8;
        case 0x307eecu: goto label_307eec;
        case 0x307ef0u: goto label_307ef0;
        case 0x307ef4u: goto label_307ef4;
        case 0x307ef8u: goto label_307ef8;
        case 0x307efcu: goto label_307efc;
        case 0x307f00u: goto label_307f00;
        case 0x307f04u: goto label_307f04;
        case 0x307f08u: goto label_307f08;
        case 0x307f0cu: goto label_307f0c;
        case 0x307f10u: goto label_307f10;
        case 0x307f14u: goto label_307f14;
        case 0x307f18u: goto label_307f18;
        case 0x307f1cu: goto label_307f1c;
        case 0x307f20u: goto label_307f20;
        case 0x307f24u: goto label_307f24;
        case 0x307f28u: goto label_307f28;
        case 0x307f2cu: goto label_307f2c;
        case 0x307f30u: goto label_307f30;
        case 0x307f34u: goto label_307f34;
        case 0x307f38u: goto label_307f38;
        case 0x307f3cu: goto label_307f3c;
        case 0x307f40u: goto label_307f40;
        case 0x307f44u: goto label_307f44;
        case 0x307f48u: goto label_307f48;
        case 0x307f4cu: goto label_307f4c;
        case 0x307f50u: goto label_307f50;
        case 0x307f54u: goto label_307f54;
        case 0x307f58u: goto label_307f58;
        case 0x307f5cu: goto label_307f5c;
        case 0x307f60u: goto label_307f60;
        case 0x307f64u: goto label_307f64;
        case 0x307f68u: goto label_307f68;
        case 0x307f6cu: goto label_307f6c;
        case 0x307f70u: goto label_307f70;
        case 0x307f74u: goto label_307f74;
        case 0x307f78u: goto label_307f78;
        case 0x307f7cu: goto label_307f7c;
        case 0x307f80u: goto label_307f80;
        case 0x307f84u: goto label_307f84;
        case 0x307f88u: goto label_307f88;
        case 0x307f8cu: goto label_307f8c;
        case 0x307f90u: goto label_307f90;
        case 0x307f94u: goto label_307f94;
        case 0x307f98u: goto label_307f98;
        case 0x307f9cu: goto label_307f9c;
        case 0x307fa0u: goto label_307fa0;
        case 0x307fa4u: goto label_307fa4;
        case 0x307fa8u: goto label_307fa8;
        case 0x307facu: goto label_307fac;
        case 0x307fb0u: goto label_307fb0;
        case 0x307fb4u: goto label_307fb4;
        case 0x307fb8u: goto label_307fb8;
        case 0x307fbcu: goto label_307fbc;
        case 0x307fc0u: goto label_307fc0;
        case 0x307fc4u: goto label_307fc4;
        case 0x307fc8u: goto label_307fc8;
        case 0x307fccu: goto label_307fcc;
        case 0x307fd0u: goto label_307fd0;
        case 0x307fd4u: goto label_307fd4;
        case 0x307fd8u: goto label_307fd8;
        case 0x307fdcu: goto label_307fdc;
        default: break;
    }

    ctx->pc = 0x307d40u;

label_307d40:
    // 0x307d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x307d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_307d44:
    // 0x307d44: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x307d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_307d48:
    // 0x307d48: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x307d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_307d4c:
    // 0x307d4c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x307d4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_307d50:
    // 0x307d50: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x307d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_307d54:
    // 0x307d54: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x307d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_307d58:
    // 0x307d58: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x307d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_307d5c:
    // 0x307d5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x307d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_307d60:
    // 0x307d60: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x307d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_307d64:
    // 0x307d64: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x307d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_307d68:
    // 0x307d68: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x307d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_307d6c:
    // 0x307d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_307d70:
    // 0x307d70: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x307d70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_307d74:
    // 0x307d74: 0xc08a61a  jal         func_229868
label_307d78:
    if (ctx->pc == 0x307D78u) {
        ctx->pc = 0x307D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D74u;
        // 0x307d78: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307D7Cu;
        goto label_307d7c;
    }
    ctx->pc = 0x307D74u;
    SET_GPR_U32(ctx, 31, 0x307D7Cu);
    ctx->pc = 0x307D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307D74u;
    // 0x307d78: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x307D74u, 0x307D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D7Cu;
label_307d7c:
    // 0x307d7c: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
label_307d80:
    if (ctx->pc == 0x307D80u) {
        ctx->pc = 0x307D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D7Cu;
        // 0x307d80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307D84u;
        goto label_307d84;
    }
    ctx->pc = 0x307D7Cu;
    {
        const bool branch_taken_0x307d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D7Cu;
        // 0x307d80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d7c) {
            ctx->pc = 0x307FA8u;
            goto label_307fa8;
        }
    }
    ctx->pc = 0x307D84u;
label_307d84:
    // 0x307d84: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x307d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_307d88:
    // 0x307d88: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x307d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_307d8c:
    // 0x307d8c: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
label_307d90:
    if (ctx->pc == 0x307D90u) {
        ctx->pc = 0x307D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D8Cu;
        // 0x307d90: 0x807000e0  lb          $s0, 0xE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307D94u;
        goto label_307d94;
    }
    ctx->pc = 0x307D8Cu;
    {
        const bool branch_taken_0x307d8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x307d8c) {
            ctx->pc = 0x307D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D8Cu;
            // 0x307d90: 0x807000e0  lb          $s0, 0xE0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307DA4u;
            goto label_307da4;
        }
    }
    ctx->pc = 0x307D94u;
label_307d94:
    // 0x307d94: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x307d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
label_307d98:
    // 0x307d98: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
label_307d9c:
    if (ctx->pc == 0x307D9Cu) {
        ctx->pc = 0x307D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D98u;
        // 0x307d9c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307DA0u;
        goto label_307da0;
    }
    ctx->pc = 0x307D98u;
    {
        const bool branch_taken_0x307d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D98u;
        // 0x307d9c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d98) {
            ctx->pc = 0x307FACu;
            goto label_307fac;
        }
    }
    ctx->pc = 0x307DA0u;
label_307da0:
    // 0x307da0: 0x807000e0  lb          $s0, 0xE0($v1)
    ctx->pc = 0x307da0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 224)));
label_307da4:
    // 0x307da4: 0x5a000081  blezl       $s0, . + 4 + (0x81 << 2)
label_307da8:
    if (ctx->pc == 0x307DA8u) {
        ctx->pc = 0x307DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DA4u;
        // 0x307da8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307DACu;
        goto label_307dac;
    }
    ctx->pc = 0x307DA4u;
    {
        const bool branch_taken_0x307da4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x307da4) {
            ctx->pc = 0x307DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307DA4u;
            // 0x307da8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307FACu;
            goto label_307fac;
        }
    }
    ctx->pc = 0x307DACu;
label_307dac:
    // 0x307dac: 0x906200df  lbu         $v0, 0xDF($v1)
    ctx->pc = 0x307dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 223)));
label_307db0:
    // 0x307db0: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_307db4:
    if (ctx->pc == 0x307DB4u) {
        ctx->pc = 0x307DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DB0u;
        // 0x307db4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307DB8u;
        goto label_307db8;
    }
    ctx->pc = 0x307DB0u;
    {
        const bool branch_taken_0x307db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DB0u;
        // 0x307db4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307db0) {
            ctx->pc = 0x307FA8u;
            goto label_307fa8;
        }
    }
    ctx->pc = 0x307DB8u;
label_307db8:
    // 0x307db8: 0xc05916e  jal         func_1645B8
label_307dbc:
    if (ctx->pc == 0x307DBCu) {
        ctx->pc = 0x307DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DB8u;
        // 0x307dbc: 0x8c44caa8  lw          $a0, -0x3558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307DC0u;
        goto label_307dc0;
    }
    ctx->pc = 0x307DB8u;
    SET_GPR_U32(ctx, 31, 0x307DC0u);
    ctx->pc = 0x307DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DB8u;
    // 0x307dbc: 0x8c44caa8  lw          $a0, -0x3558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1645B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1645B8u, 0x307DB8u, 0x307DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DC0u;
label_307dc0:
    // 0x307dc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x307dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307dc4:
    // 0x307dc4: 0x12400078  beqz        $s2, . + 4 + (0x78 << 2)
label_307dc8:
    if (ctx->pc == 0x307DC8u) {
        ctx->pc = 0x307DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DC4u;
        // 0x307dc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307DCCu;
        goto label_307dcc;
    }
    ctx->pc = 0x307DC4u;
    {
        const bool branch_taken_0x307dc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DC4u;
        // 0x307dc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307dc4) {
            ctx->pc = 0x307FA8u;
            goto label_307fa8;
        }
    }
    ctx->pc = 0x307DCCu;
label_307dcc:
    // 0x307dcc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_307dd0:
    // 0x307dd0: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x307dd0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_307dd4:
    // 0x307dd4: 0x0  nop
    ctx->pc = 0x307dd4u;
    // NOP
label_307dd8:
    // 0x307dd8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x307dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_307ddc:
    // 0x307ddc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307de0:
    // 0x307de0: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x307de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_307de4:
    // 0x307de4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x307de4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307de8:
    // 0x307de8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x307de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_307dec:
    // 0x307dec: 0x0  nop
    ctx->pc = 0x307decu;
    // NOP
label_307df0:
    // 0x307df0: 0xc137826  jal         func_4DE098
label_307df4:
    if (ctx->pc == 0x307DF4u) {
        ctx->pc = 0x307DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DF0u;
        // 0x307df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307DF8u;
        goto label_307df8;
    }
    ctx->pc = 0x307DF0u;
    SET_GPR_U32(ctx, 31, 0x307DF8u);
    ctx->pc = 0x307DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DF0u;
    // 0x307df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x307DF0u, 0x307DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DF8u;
label_307df8:
    // 0x307df8: 0xc0e409a  jal         func_390268
label_307dfc:
    if (ctx->pc == 0x307DFCu) {
        ctx->pc = 0x307DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DF8u;
        // 0x307dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307E00u;
        goto label_307e00;
    }
    ctx->pc = 0x307DF8u;
    SET_GPR_U32(ctx, 31, 0x307E00u);
    ctx->pc = 0x307DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DF8u;
    // 0x307dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x307DF8u, 0x307E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E00u;
label_307e00:
    // 0x307e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307e04:
    // 0x307e04: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_307e08:
    if (ctx->pc == 0x307E08u) {
        ctx->pc = 0x307E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E04u;
        // 0x307e08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307E0Cu;
        goto label_307e0c;
    }
    ctx->pc = 0x307E04u;
    {
        const bool branch_taken_0x307e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e04) {
            ctx->pc = 0x307E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E04u;
            // 0x307e08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E34u;
            goto label_307e34;
        }
    }
    ctx->pc = 0x307E0Cu;
label_307e0c:
    // 0x307e0c: 0xc089f98  jal         func_227E60
label_307e10:
    if (ctx->pc == 0x307E10u) {
        ctx->pc = 0x307E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E0Cu;
        // 0x307e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307E14u;
        goto label_307e14;
    }
    ctx->pc = 0x307E0Cu;
    SET_GPR_U32(ctx, 31, 0x307E14u);
    ctx->pc = 0x307E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E0Cu;
    // 0x307e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x307E0Cu, 0x307E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E14u;
label_307e14:
    // 0x307e14: 0x50540007  beql        $v0, $s4, . + 4 + (0x7 << 2)
label_307e18:
    if (ctx->pc == 0x307E18u) {
        ctx->pc = 0x307E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E14u;
        // 0x307e18: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307E1Cu;
        goto label_307e1c;
    }
    ctx->pc = 0x307E14u;
    {
        const bool branch_taken_0x307e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x307e14) {
            ctx->pc = 0x307E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E14u;
            // 0x307e18: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E34u;
            goto label_307e34;
        }
    }
    ctx->pc = 0x307E1Cu;
label_307e1c:
    // 0x307e1c: 0xc088edc  jal         func_223B70
label_307e20:
    if (ctx->pc == 0x307E20u) {
        ctx->pc = 0x307E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E1Cu;
        // 0x307e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307E24u;
        goto label_307e24;
    }
    ctx->pc = 0x307E1Cu;
    SET_GPR_U32(ctx, 31, 0x307E24u);
    ctx->pc = 0x307E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E1Cu;
    // 0x307e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x307E1Cu, 0x307E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E24u;
label_307e24:
    // 0x307e24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x307e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_307e28:
    // 0x307e28: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x307e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_307e2c:
    // 0x307e2c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x307e2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_307e30:
    // 0x307e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_307e34:
    // 0x307e34: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x307e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_307e38:
    // 0x307e38: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_307e3c:
    if (ctx->pc == 0x307E3Cu) {
        ctx->pc = 0x307E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E38u;
        // 0x307e3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307E40u;
        goto label_307e40;
    }
    ctx->pc = 0x307E38u;
    {
        const bool branch_taken_0x307e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E38u;
        // 0x307e3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e38) {
            ctx->pc = 0x307DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307df0;
        }
    }
    ctx->pc = 0x307E40u;
label_307e40:
    // 0x307e40: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_307e44:
    if (ctx->pc == 0x307E44u) {
        ctx->pc = 0x307E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E40u;
        // 0x307e44: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307E48u;
        goto label_307e48;
    }
    ctx->pc = 0x307E40u;
    {
        const bool branch_taken_0x307e40 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x307E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E40u;
        // 0x307e44: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e40) {
            ctx->pc = 0x307E5Cu;
            goto label_307e5c;
        }
    }
    ctx->pc = 0x307E48u;
label_307e48:
    // 0x307e48: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x307e48u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_307e4c:
    // 0x307e4c: 0x0  nop
    ctx->pc = 0x307e4cu;
    // NOP
label_307e50:
    // 0x307e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x307e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_307e54:
    // 0x307e54: 0x10000007  b           . + 4 + (0x7 << 2)
label_307e58:
    if (ctx->pc == 0x307E58u) {
        ctx->pc = 0x307E5Cu;
        goto label_307e5c;
    }
    ctx->pc = 0x307E54u;
    {
        const bool branch_taken_0x307e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e54) {
            ctx->pc = 0x307E74u;
            goto label_307e74;
        }
    }
    ctx->pc = 0x307E5Cu;
label_307e5c:
    // 0x307e5c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x307e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_307e60:
    // 0x307e60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x307e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_307e64:
    // 0x307e64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x307e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_307e68:
    // 0x307e68: 0x0  nop
    ctx->pc = 0x307e68u;
    // NOP
label_307e6c:
    // 0x307e6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x307e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_307e70:
    // 0x307e70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x307e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_307e74:
    // 0x307e74: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x307e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_307e78:
    // 0x307e78: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x307e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_307e7c:
    // 0x307e7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x307e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_307e80:
    // 0x307e80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x307e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_307e84:
    // 0x307e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x307e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_307e88:
    // 0x307e88: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x307e88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_307e8c:
    // 0x307e8c: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x307e8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_307e90:
    // 0x307e90: 0xc10b1c6  jal         func_42C718
label_307e94:
    if (ctx->pc == 0x307E94u) {
        ctx->pc = 0x307E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E90u;
        // 0x307e94: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307E98u;
        goto label_307e98;
    }
    ctx->pc = 0x307E90u;
    SET_GPR_U32(ctx, 31, 0x307E98u);
    ctx->pc = 0x307E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E90u;
    // 0x307e94: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x307E90u, 0x307E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E98u;
label_307e98:
    // 0x307e98: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_307e9c:
    if (ctx->pc == 0x307E9Cu) {
        ctx->pc = 0x307E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E98u;
        // 0x307e9c: 0x53102b  sltu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EA0u;
        goto label_307ea0;
    }
    ctx->pc = 0x307E98u;
    {
        const bool branch_taken_0x307e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E98u;
        // 0x307e9c: 0x53102b  sltu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e98) {
            ctx->pc = 0x307FA8u;
            goto label_307fa8;
        }
    }
    ctx->pc = 0x307EA0u;
label_307ea0:
    // 0x307ea0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_307ea4:
    if (ctx->pc == 0x307EA4u) {
        ctx->pc = 0x307EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EA0u;
        // 0x307ea4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EA8u;
        goto label_307ea8;
    }
    ctx->pc = 0x307EA0u;
    {
        const bool branch_taken_0x307ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EA0u;
        // 0x307ea4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ea0) {
            ctx->pc = 0x307FACu;
            goto label_307fac;
        }
    }
    ctx->pc = 0x307EA8u;
label_307ea8:
    // 0x307ea8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x307ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_307eac:
    // 0x307eac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x307eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307eb0:
    // 0x307eb0: 0x245e4b00  addiu       $fp, $v0, 0x4B00
    ctx->pc = 0x307eb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_307eb4:
    // 0x307eb4: 0x2417000b  addiu       $s7, $zero, 0xB
    ctx->pc = 0x307eb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_307eb8:
    // 0x307eb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x307eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_307ebc:
    // 0x307ebc: 0x0  nop
    ctx->pc = 0x307ebcu;
    // NOP
label_307ec0:
    // 0x307ec0: 0xc137826  jal         func_4DE098
label_307ec4:
    if (ctx->pc == 0x307EC4u) {
        ctx->pc = 0x307EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EC0u;
        // 0x307ec4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EC8u;
        goto label_307ec8;
    }
    ctx->pc = 0x307EC0u;
    SET_GPR_U32(ctx, 31, 0x307EC8u);
    ctx->pc = 0x307EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EC0u;
    // 0x307ec4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x307EC0u, 0x307EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EC8u;
label_307ec8:
    // 0x307ec8: 0xc0e409a  jal         func_390268
label_307ecc:
    if (ctx->pc == 0x307ECCu) {
        ctx->pc = 0x307ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EC8u;
        // 0x307ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307ED0u;
        goto label_307ed0;
    }
    ctx->pc = 0x307EC8u;
    SET_GPR_U32(ctx, 31, 0x307ED0u);
    ctx->pc = 0x307ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EC8u;
    // 0x307ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x307EC8u, 0x307ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307ED0u;
label_307ed0:
    // 0x307ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307ed4:
    // 0x307ed4: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_307ed8:
    if (ctx->pc == 0x307ED8u) {
        ctx->pc = 0x307ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307ED4u;
        // 0x307ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EDCu;
        goto label_307edc;
    }
    ctx->pc = 0x307ED4u;
    {
        const bool branch_taken_0x307ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307ED4u;
        // 0x307ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ed4) {
            ctx->pc = 0x307F98u;
            goto label_307f98;
        }
    }
    ctx->pc = 0x307EDCu;
label_307edc:
    // 0x307edc: 0xc089f98  jal         func_227E60
label_307ee0:
    if (ctx->pc == 0x307EE0u) {
        ctx->pc = 0x307EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EDCu;
        // 0x307ee0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EE4u;
        goto label_307ee4;
    }
    ctx->pc = 0x307EDCu;
    SET_GPR_U32(ctx, 31, 0x307EE4u);
    ctx->pc = 0x307EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EDCu;
    // 0x307ee0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x307EDCu, 0x307EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EE4u;
label_307ee4:
    // 0x307ee4: 0x5053002d  beql        $v0, $s3, . + 4 + (0x2D << 2)
label_307ee8:
    if (ctx->pc == 0x307EE8u) {
        ctx->pc = 0x307EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EE4u;
        // 0x307ee8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EECu;
        goto label_307eec;
    }
    ctx->pc = 0x307EE4u;
    {
        const bool branch_taken_0x307ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x307ee4) {
            ctx->pc = 0x307EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307EE4u;
            // 0x307ee8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F9Cu;
            goto label_307f9c;
        }
    }
    ctx->pc = 0x307EECu;
label_307eec:
    // 0x307eec: 0xc088edc  jal         func_223B70
label_307ef0:
    if (ctx->pc == 0x307EF0u) {
        ctx->pc = 0x307EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EECu;
        // 0x307ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EF4u;
        goto label_307ef4;
    }
    ctx->pc = 0x307EECu;
    SET_GPR_U32(ctx, 31, 0x307EF4u);
    ctx->pc = 0x307EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EECu;
    // 0x307ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x307EECu, 0x307EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EF4u;
label_307ef4:
    // 0x307ef4: 0x50530029  beql        $v0, $s3, . + 4 + (0x29 << 2)
label_307ef8:
    if (ctx->pc == 0x307EF8u) {
        ctx->pc = 0x307EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EF4u;
        // 0x307ef8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EFCu;
        goto label_307efc;
    }
    ctx->pc = 0x307EF4u;
    {
        const bool branch_taken_0x307ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x307ef4) {
            ctx->pc = 0x307EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307EF4u;
            // 0x307ef8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F9Cu;
            goto label_307f9c;
        }
    }
    ctx->pc = 0x307EFCu;
label_307efc:
    // 0x307efc: 0xc08a200  jal         func_228800
label_307f00:
    if (ctx->pc == 0x307F00u) {
        ctx->pc = 0x307F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EFCu;
        // 0x307f00: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F04u;
        goto label_307f04;
    }
    ctx->pc = 0x307EFCu;
    SET_GPR_U32(ctx, 31, 0x307F04u);
    ctx->pc = 0x307F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EFCu;
    // 0x307f00: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x307EFCu, 0x307F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F04u;
label_307f04:
    // 0x307f04: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x307f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_307f08:
    // 0x307f08: 0x54770024  bnel        $v1, $s7, . + 4 + (0x24 << 2)
label_307f0c:
    if (ctx->pc == 0x307F0Cu) {
        ctx->pc = 0x307F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F08u;
        // 0x307f0c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F10u;
        goto label_307f10;
    }
    ctx->pc = 0x307F08u;
    {
        const bool branch_taken_0x307f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x307f08) {
            ctx->pc = 0x307F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F08u;
            // 0x307f0c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F9Cu;
            goto label_307f9c;
        }
    }
    ctx->pc = 0x307F10u;
label_307f10:
    // 0x307f10: 0xc087502  jal         func_21D408
label_307f14:
    if (ctx->pc == 0x307F14u) {
        ctx->pc = 0x307F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F10u;
        // 0x307f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F18u;
        goto label_307f18;
    }
    ctx->pc = 0x307F10u;
    SET_GPR_U32(ctx, 31, 0x307F18u);
    ctx->pc = 0x307F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F10u;
    // 0x307f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x307F10u, 0x307F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F18u;
label_307f18:
    // 0x307f18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x307f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307f1c:
    // 0x307f1c: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x307f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_307f20:
    // 0x307f20: 0xc0a3658  jal         func_28D960
label_307f24:
    if (ctx->pc == 0x307F24u) {
        ctx->pc = 0x307F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F20u;
        // 0x307f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F28u;
        goto label_307f28;
    }
    ctx->pc = 0x307F20u;
    SET_GPR_U32(ctx, 31, 0x307F28u);
    ctx->pc = 0x307F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F20u;
    // 0x307f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x307F20u, 0x307F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F28u;
label_307f28:
    // 0x307f28: 0x443001c  bgezl       $v0, . + 4 + (0x1C << 2)
label_307f2c:
    if (ctx->pc == 0x307F2Cu) {
        ctx->pc = 0x307F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F28u;
        // 0x307f2c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F30u;
        goto label_307f30;
    }
    ctx->pc = 0x307F28u;
    {
        const bool branch_taken_0x307f28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x307f28) {
            ctx->pc = 0x307F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F28u;
            // 0x307f2c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F9Cu;
            goto label_307f9c;
        }
    }
    ctx->pc = 0x307F30u;
label_307f30:
    // 0x307f30: 0xae40021c  sw          $zero, 0x21C($s2)
    ctx->pc = 0x307f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 0));
label_307f34:
    // 0x307f34: 0xc0a3630  jal         func_28D8C0
label_307f38:
    if (ctx->pc == 0x307F38u) {
        ctx->pc = 0x307F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F34u;
        // 0x307f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F3Cu;
        goto label_307f3c;
    }
    ctx->pc = 0x307F34u;
    SET_GPR_U32(ctx, 31, 0x307F3Cu);
    ctx->pc = 0x307F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F34u;
    // 0x307f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x307F34u, 0x307F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F3Cu;
label_307f3c:
    // 0x307f3c: 0xc0a3628  jal         func_28D8A0
label_307f40:
    if (ctx->pc == 0x307F40u) {
        ctx->pc = 0x307F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F3Cu;
        // 0x307f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F44u;
        goto label_307f44;
    }
    ctx->pc = 0x307F3Cu;
    SET_GPR_U32(ctx, 31, 0x307F44u);
    ctx->pc = 0x307F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F3Cu;
    // 0x307f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x307F3Cu, 0x307F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F44u;
label_307f44:
    // 0x307f44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x307f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_307f48:
    // 0x307f48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x307f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_307f4c:
    // 0x307f4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x307f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_307f50:
    // 0x307f50: 0x40f809  jalr        $v0
label_307f54:
    if (ctx->pc == 0x307F54u) {
        ctx->pc = 0x307F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F50u;
        // 0x307f54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F58u;
        goto label_307f58;
    }
    ctx->pc = 0x307F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x307F58u);
        ctx->pc = 0x307F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F50u;
        // 0x307f54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307F50u, 0x307F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307F58u;
label_307f58:
    // 0x307f58: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x307f58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_307f5c:
    // 0x307f5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307f60:
    // 0x307f60: 0x26440164  addiu       $a0, $s2, 0x164
    ctx->pc = 0x307f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
label_307f64:
    // 0x307f64: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_307f68:
    // 0x307f68: 0xc13b782  jal         func_4EDE08
label_307f6c:
    if (ctx->pc == 0x307F6Cu) {
        ctx->pc = 0x307F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F68u;
        // 0x307f6c: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F70u;
        goto label_307f70;
    }
    ctx->pc = 0x307F68u;
    SET_GPR_U32(ctx, 31, 0x307F70u);
    ctx->pc = 0x307F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F68u;
    // 0x307f6c: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x307F68u, 0x307F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F70u;
label_307f70:
    // 0x307f70: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x307f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_307f74:
    // 0x307f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307f78:
    // 0x307f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_307f7c:
    // 0x307f7c: 0xc0ab742  jal         func_2ADD08
label_307f80:
    if (ctx->pc == 0x307F80u) {
        ctx->pc = 0x307F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F7Cu;
        // 0x307f80: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F84u;
        goto label_307f84;
    }
    ctx->pc = 0x307F7Cu;
    SET_GPR_U32(ctx, 31, 0x307F84u);
    ctx->pc = 0x307F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F7Cu;
    // 0x307f80: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x307F7Cu, 0x307F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F84u;
label_307f84:
    // 0x307f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_307f88:
    // 0x307f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x307f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_307f8c:
    // 0x307f8c: 0xc0aa924  jal         func_2AA490
label_307f90:
    if (ctx->pc == 0x307F90u) {
        ctx->pc = 0x307F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F8Cu;
        // 0x307f90: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F94u;
        goto label_307f94;
    }
    ctx->pc = 0x307F8Cu;
    SET_GPR_U32(ctx, 31, 0x307F94u);
    ctx->pc = 0x307F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F8Cu;
    // 0x307f90: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA490u, 0x307F8Cu, 0x307F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F94u;
label_307f94:
    // 0x307f94: 0xa2d30032  sb          $s3, 0x32($s6)
    ctx->pc = 0x307f94u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 50), (uint8_t)GPR_U32(ctx, 19));
label_307f98:
    // 0x307f98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x307f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_307f9c:
    // 0x307f9c: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x307f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_307fa0:
    // 0x307fa0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_307fa4:
    if (ctx->pc == 0x307FA4u) {
        ctx->pc = 0x307FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FA0u;
        // 0x307fa4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307FA8u;
        goto label_307fa8;
    }
    ctx->pc = 0x307FA0u;
    {
        const bool branch_taken_0x307fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FA0u;
        // 0x307fa4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fa0) {
            ctx->pc = 0x307EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307ec0;
        }
    }
    ctx->pc = 0x307FA8u;
label_307fa8:
    // 0x307fa8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x307fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_307fac:
    // 0x307fac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x307facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_307fb0:
    // 0x307fb0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x307fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_307fb4:
    // 0x307fb4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x307fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_307fb8:
    // 0x307fb8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x307fb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_307fbc:
    // 0x307fbc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x307fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_307fc0:
    // 0x307fc0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x307fc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307fc4:
    // 0x307fc4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x307fc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307fc8:
    // 0x307fc8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x307fc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307fcc:
    // 0x307fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307fd0:
    // 0x307fd0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x307fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_307fd4:
    // 0x307fd4: 0x3e00008  jr          $ra
label_307fd8:
    if (ctx->pc == 0x307FD8u) {
        ctx->pc = 0x307FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FD4u;
        // 0x307fd8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307FDCu;
        goto label_307fdc;
    }
    ctx->pc = 0x307FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FD4u;
        // 0x307fd8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307FDCu;
label_307fdc:
    // 0x307fdc: 0x0  nop
    ctx->pc = 0x307fdcu;
    // NOP
    ctx->pc = 0x307fe0u;
}
