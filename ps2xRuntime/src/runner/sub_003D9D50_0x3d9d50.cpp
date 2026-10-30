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

// Function: sub_003D9D50
// Address: 0x3d9d50 - 0x3d9fc8
void sub_003D9D50_0x3d9d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9D50_0x3d9d50");
#endif

    switch (ctx->pc) {
        case 0x3d9d50u: goto label_3d9d50;
        case 0x3d9d54u: goto label_3d9d54;
        case 0x3d9d58u: goto label_3d9d58;
        case 0x3d9d5cu: goto label_3d9d5c;
        case 0x3d9d60u: goto label_3d9d60;
        case 0x3d9d64u: goto label_3d9d64;
        case 0x3d9d68u: goto label_3d9d68;
        case 0x3d9d6cu: goto label_3d9d6c;
        case 0x3d9d70u: goto label_3d9d70;
        case 0x3d9d74u: goto label_3d9d74;
        case 0x3d9d78u: goto label_3d9d78;
        case 0x3d9d7cu: goto label_3d9d7c;
        case 0x3d9d80u: goto label_3d9d80;
        case 0x3d9d84u: goto label_3d9d84;
        case 0x3d9d88u: goto label_3d9d88;
        case 0x3d9d8cu: goto label_3d9d8c;
        case 0x3d9d90u: goto label_3d9d90;
        case 0x3d9d94u: goto label_3d9d94;
        case 0x3d9d98u: goto label_3d9d98;
        case 0x3d9d9cu: goto label_3d9d9c;
        case 0x3d9da0u: goto label_3d9da0;
        case 0x3d9da4u: goto label_3d9da4;
        case 0x3d9da8u: goto label_3d9da8;
        case 0x3d9dacu: goto label_3d9dac;
        case 0x3d9db0u: goto label_3d9db0;
        case 0x3d9db4u: goto label_3d9db4;
        case 0x3d9db8u: goto label_3d9db8;
        case 0x3d9dbcu: goto label_3d9dbc;
        case 0x3d9dc0u: goto label_3d9dc0;
        case 0x3d9dc4u: goto label_3d9dc4;
        case 0x3d9dc8u: goto label_3d9dc8;
        case 0x3d9dccu: goto label_3d9dcc;
        case 0x3d9dd0u: goto label_3d9dd0;
        case 0x3d9dd4u: goto label_3d9dd4;
        case 0x3d9dd8u: goto label_3d9dd8;
        case 0x3d9ddcu: goto label_3d9ddc;
        case 0x3d9de0u: goto label_3d9de0;
        case 0x3d9de4u: goto label_3d9de4;
        case 0x3d9de8u: goto label_3d9de8;
        case 0x3d9decu: goto label_3d9dec;
        case 0x3d9df0u: goto label_3d9df0;
        case 0x3d9df4u: goto label_3d9df4;
        case 0x3d9df8u: goto label_3d9df8;
        case 0x3d9dfcu: goto label_3d9dfc;
        case 0x3d9e00u: goto label_3d9e00;
        case 0x3d9e04u: goto label_3d9e04;
        case 0x3d9e08u: goto label_3d9e08;
        case 0x3d9e0cu: goto label_3d9e0c;
        case 0x3d9e10u: goto label_3d9e10;
        case 0x3d9e14u: goto label_3d9e14;
        case 0x3d9e18u: goto label_3d9e18;
        case 0x3d9e1cu: goto label_3d9e1c;
        case 0x3d9e20u: goto label_3d9e20;
        case 0x3d9e24u: goto label_3d9e24;
        case 0x3d9e28u: goto label_3d9e28;
        case 0x3d9e2cu: goto label_3d9e2c;
        case 0x3d9e30u: goto label_3d9e30;
        case 0x3d9e34u: goto label_3d9e34;
        case 0x3d9e38u: goto label_3d9e38;
        case 0x3d9e3cu: goto label_3d9e3c;
        case 0x3d9e40u: goto label_3d9e40;
        case 0x3d9e44u: goto label_3d9e44;
        case 0x3d9e48u: goto label_3d9e48;
        case 0x3d9e4cu: goto label_3d9e4c;
        case 0x3d9e50u: goto label_3d9e50;
        case 0x3d9e54u: goto label_3d9e54;
        case 0x3d9e58u: goto label_3d9e58;
        case 0x3d9e5cu: goto label_3d9e5c;
        case 0x3d9e60u: goto label_3d9e60;
        case 0x3d9e64u: goto label_3d9e64;
        case 0x3d9e68u: goto label_3d9e68;
        case 0x3d9e6cu: goto label_3d9e6c;
        case 0x3d9e70u: goto label_3d9e70;
        case 0x3d9e74u: goto label_3d9e74;
        case 0x3d9e78u: goto label_3d9e78;
        case 0x3d9e7cu: goto label_3d9e7c;
        case 0x3d9e80u: goto label_3d9e80;
        case 0x3d9e84u: goto label_3d9e84;
        case 0x3d9e88u: goto label_3d9e88;
        case 0x3d9e8cu: goto label_3d9e8c;
        case 0x3d9e90u: goto label_3d9e90;
        case 0x3d9e94u: goto label_3d9e94;
        case 0x3d9e98u: goto label_3d9e98;
        case 0x3d9e9cu: goto label_3d9e9c;
        case 0x3d9ea0u: goto label_3d9ea0;
        case 0x3d9ea4u: goto label_3d9ea4;
        case 0x3d9ea8u: goto label_3d9ea8;
        case 0x3d9eacu: goto label_3d9eac;
        case 0x3d9eb0u: goto label_3d9eb0;
        case 0x3d9eb4u: goto label_3d9eb4;
        case 0x3d9eb8u: goto label_3d9eb8;
        case 0x3d9ebcu: goto label_3d9ebc;
        case 0x3d9ec0u: goto label_3d9ec0;
        case 0x3d9ec4u: goto label_3d9ec4;
        case 0x3d9ec8u: goto label_3d9ec8;
        case 0x3d9eccu: goto label_3d9ecc;
        case 0x3d9ed0u: goto label_3d9ed0;
        case 0x3d9ed4u: goto label_3d9ed4;
        case 0x3d9ed8u: goto label_3d9ed8;
        case 0x3d9edcu: goto label_3d9edc;
        case 0x3d9ee0u: goto label_3d9ee0;
        case 0x3d9ee4u: goto label_3d9ee4;
        case 0x3d9ee8u: goto label_3d9ee8;
        case 0x3d9eecu: goto label_3d9eec;
        case 0x3d9ef0u: goto label_3d9ef0;
        case 0x3d9ef4u: goto label_3d9ef4;
        case 0x3d9ef8u: goto label_3d9ef8;
        case 0x3d9efcu: goto label_3d9efc;
        case 0x3d9f00u: goto label_3d9f00;
        case 0x3d9f04u: goto label_3d9f04;
        case 0x3d9f08u: goto label_3d9f08;
        case 0x3d9f0cu: goto label_3d9f0c;
        case 0x3d9f10u: goto label_3d9f10;
        case 0x3d9f14u: goto label_3d9f14;
        case 0x3d9f18u: goto label_3d9f18;
        case 0x3d9f1cu: goto label_3d9f1c;
        case 0x3d9f20u: goto label_3d9f20;
        case 0x3d9f24u: goto label_3d9f24;
        case 0x3d9f28u: goto label_3d9f28;
        case 0x3d9f2cu: goto label_3d9f2c;
        case 0x3d9f30u: goto label_3d9f30;
        case 0x3d9f34u: goto label_3d9f34;
        case 0x3d9f38u: goto label_3d9f38;
        case 0x3d9f3cu: goto label_3d9f3c;
        case 0x3d9f40u: goto label_3d9f40;
        case 0x3d9f44u: goto label_3d9f44;
        case 0x3d9f48u: goto label_3d9f48;
        case 0x3d9f4cu: goto label_3d9f4c;
        case 0x3d9f50u: goto label_3d9f50;
        case 0x3d9f54u: goto label_3d9f54;
        case 0x3d9f58u: goto label_3d9f58;
        case 0x3d9f5cu: goto label_3d9f5c;
        case 0x3d9f60u: goto label_3d9f60;
        case 0x3d9f64u: goto label_3d9f64;
        case 0x3d9f68u: goto label_3d9f68;
        case 0x3d9f6cu: goto label_3d9f6c;
        case 0x3d9f70u: goto label_3d9f70;
        case 0x3d9f74u: goto label_3d9f74;
        case 0x3d9f78u: goto label_3d9f78;
        case 0x3d9f7cu: goto label_3d9f7c;
        case 0x3d9f80u: goto label_3d9f80;
        case 0x3d9f84u: goto label_3d9f84;
        case 0x3d9f88u: goto label_3d9f88;
        case 0x3d9f8cu: goto label_3d9f8c;
        case 0x3d9f90u: goto label_3d9f90;
        case 0x3d9f94u: goto label_3d9f94;
        case 0x3d9f98u: goto label_3d9f98;
        case 0x3d9f9cu: goto label_3d9f9c;
        case 0x3d9fa0u: goto label_3d9fa0;
        case 0x3d9fa4u: goto label_3d9fa4;
        case 0x3d9fa8u: goto label_3d9fa8;
        case 0x3d9facu: goto label_3d9fac;
        case 0x3d9fb0u: goto label_3d9fb0;
        case 0x3d9fb4u: goto label_3d9fb4;
        case 0x3d9fb8u: goto label_3d9fb8;
        case 0x3d9fbcu: goto label_3d9fbc;
        case 0x3d9fc0u: goto label_3d9fc0;
        case 0x3d9fc4u: goto label_3d9fc4;
        default: break;
    }

    ctx->pc = 0x3d9d50u;

label_3d9d50:
    // 0x3d9d50: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x3d9d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_3d9d54:
    // 0x3d9d54: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x3d9d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
label_3d9d58:
    // 0x3d9d58: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x3d9d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
label_3d9d5c:
    // 0x3d9d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9d60:
    // 0x3d9d60: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x3d9d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
label_3d9d64:
    // 0x3d9d64: 0xffbf0870  sd          $ra, 0x870($sp)
    ctx->pc = 0x3d9d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 31));
label_3d9d68:
    // 0x3d9d68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9d6c:
    // 0x3d9d6c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d9d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d9d70:
    // 0x3d9d70: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d9d74:
    // 0x3d9d74: 0x40f809  jalr        $v0
label_3d9d78:
    if (ctx->pc == 0x3D9D78u) {
        ctx->pc = 0x3D9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D74u;
        // 0x3d9d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9D7Cu;
        goto label_3d9d7c;
    }
    ctx->pc = 0x3D9D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9D7Cu);
        ctx->pc = 0x3D9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D74u;
        // 0x3d9d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9D74u, 0x3D9D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9D7Cu;
label_3d9d7c:
    // 0x3d9d7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d9d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9d80:
    // 0x3d9d80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d9d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d9d84:
    // 0x3d9d84: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3d9d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d9d88:
    // 0x3d9d88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d9d8c:
    // 0x3d9d8c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d9d90:
    // 0x3d9d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d9d94:
    // 0x3d9d94: 0x0  nop
    ctx->pc = 0x3d9d94u;
    // NOP
label_3d9d98:
    // 0x3d9d98: 0x0  nop
    ctx->pc = 0x3d9d98u;
    // NOP
label_3d9d9c:
    // 0x3d9d9c: 0x0  nop
    ctx->pc = 0x3d9d9cu;
    // NOP
label_3d9da0:
    // 0x3d9da0: 0x0  nop
    ctx->pc = 0x3d9da0u;
    // NOP
label_3d9da4:
    // 0x3d9da4: 0x0  nop
    ctx->pc = 0x3d9da4u;
    // NOP
label_3d9da8:
    // 0x3d9da8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d9dac:
    if (ctx->pc == 0x3D9DACu) {
        ctx->pc = 0x3D9DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DA8u;
        // 0x3d9dac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9DB0u;
        goto label_3d9db0;
    }
    ctx->pc = 0x3D9DA8u;
    {
        const bool branch_taken_0x3d9da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D9DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DA8u;
        // 0x3d9dac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9da8) {
            ctx->pc = 0x3D9D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9d98;
        }
    }
    ctx->pc = 0x3D9DB0u;
label_3d9db0:
    // 0x3d9db0: 0xc138ddc  jal         func_4E3770
label_3d9db4:
    if (ctx->pc == 0x3D9DB4u) {
        ctx->pc = 0x3D9DB8u;
        goto label_3d9db8;
    }
    ctx->pc = 0x3D9DB0u;
    SET_GPR_U32(ctx, 31, 0x3D9DB8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D9DB0u, 0x3D9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9DB8u;
label_3d9db8:
    // 0x3d9db8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3d9db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3d9dbc:
    // 0x3d9dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9dc0:
    // 0x3d9dc0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x3d9dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_3d9dc4:
    // 0x3d9dc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d9dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d9dc8:
    // 0x3d9dc8: 0xc0e947e  jal         func_3A51F8
label_3d9dcc:
    if (ctx->pc == 0x3D9DCCu) {
        ctx->pc = 0x3D9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DC8u;
        // 0x3d9dcc: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9DD0u;
        goto label_3d9dd0;
    }
    ctx->pc = 0x3D9DC8u;
    SET_GPR_U32(ctx, 31, 0x3D9DD0u);
    ctx->pc = 0x3D9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9DC8u;
    // 0x3d9dcc: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3D9DC8u, 0x3D9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9DD0u;
label_3d9dd0:
    // 0x3d9dd0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_3d9dd4:
    if (ctx->pc == 0x3D9DD4u) {
        ctx->pc = 0x3D9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DD0u;
        // 0x3d9dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9DD8u;
        goto label_3d9dd8;
    }
    ctx->pc = 0x3D9DD0u;
    {
        const bool branch_taken_0x3d9dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DD0u;
        // 0x3d9dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9dd0) {
            ctx->pc = 0x3D9F28u;
            goto label_3d9f28;
        }
    }
    ctx->pc = 0x3D9DD8u;
label_3d9dd8:
    // 0x3d9dd8: 0xc0e858c  jal         func_3A1630
label_3d9ddc:
    if (ctx->pc == 0x3D9DDCu) {
        ctx->pc = 0x3D9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DD8u;
        // 0x3d9ddc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9DE0u;
        goto label_3d9de0;
    }
    ctx->pc = 0x3D9DD8u;
    SET_GPR_U32(ctx, 31, 0x3D9DE0u);
    ctx->pc = 0x3D9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9DD8u;
    // 0x3d9ddc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9DD8u, 0x3D9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9DE0u;
label_3d9de0:
    // 0x3d9de0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d9de4:
    // 0x3d9de4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_3d9de8:
    if (ctx->pc == 0x3D9DE8u) {
        ctx->pc = 0x3D9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DE4u;
        // 0x3d9de8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9DECu;
        goto label_3d9dec;
    }
    ctx->pc = 0x3D9DE4u;
    {
        const bool branch_taken_0x3d9de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9de4) {
            ctx->pc = 0x3D9DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9DE4u;
            // 0x3d9de8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9E50u;
            goto label_3d9e50;
        }
    }
    ctx->pc = 0x3D9DECu;
label_3d9dec:
    // 0x3d9dec: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3d9decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9df0:
    // 0x3d9df0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d9df4:
    // 0x3d9df4: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3d9df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3d9df8:
    // 0x3d9df8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3d9df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3d9dfc:
    // 0x3d9dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d9dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d9e00:
    // 0x3d9e00: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3d9e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d9e04:
    // 0x3d9e04: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3d9e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3d9e08:
    // 0x3d9e08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d9e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d9e0c:
    // 0x3d9e0c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d9e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d9e10:
    // 0x3d9e10: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3d9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d9e14:
    // 0x3d9e14: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d9e18:
    // 0x3d9e18: 0x261050a8  addiu       $s0, $s0, 0x50A8
    ctx->pc = 0x3d9e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20648));
label_3d9e1c:
    // 0x3d9e1c: 0xafa30850  sw          $v1, 0x850($sp)
    ctx->pc = 0x3d9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
label_3d9e20:
    // 0x3d9e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9e24:
    // 0x3d9e24: 0xafa20840  sw          $v0, 0x840($sp)
    ctx->pc = 0x3d9e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2112), GPR_U32(ctx, 2));
label_3d9e28:
    // 0x3d9e28: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3d9e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3d9e2c:
    // 0x3d9e2c: 0xe7a00860  swc1        $f0, 0x860($sp)
    ctx->pc = 0x3d9e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2144), bits); }
label_3d9e30:
    // 0x3d9e30: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3d9e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d9e34:
    // 0x3d9e34: 0xc0e9fd0  jal         func_3A7F40
label_3d9e38:
    if (ctx->pc == 0x3D9E38u) {
        ctx->pc = 0x3D9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E34u;
        // 0x3d9e38: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9E3Cu;
        goto label_3d9e3c;
    }
    ctx->pc = 0x3D9E34u;
    SET_GPR_U32(ctx, 31, 0x3D9E3Cu);
    ctx->pc = 0x3D9E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9E34u;
    // 0x3d9e38: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3D9E34u, 0x3D9E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9E3Cu;
label_3d9e3c:
    // 0x3d9e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9e40:
    // 0x3d9e40: 0xc0f15bc  jal         func_3C56F0
label_3d9e44:
    if (ctx->pc == 0x3D9E44u) {
        ctx->pc = 0x3D9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E40u;
        // 0x3d9e44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9E48u;
        goto label_3d9e48;
    }
    ctx->pc = 0x3D9E40u;
    SET_GPR_U32(ctx, 31, 0x3D9E48u);
    ctx->pc = 0x3D9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9E40u;
    // 0x3d9e44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D9E40u, 0x3D9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9E48u;
label_3d9e48:
    // 0x3d9e48: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3d9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3d9e4c:
    // 0x3d9e4c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3d9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3d9e50:
    // 0x3d9e50: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_3d9e54:
    if (ctx->pc == 0x3D9E54u) {
        ctx->pc = 0x3D9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E50u;
        // 0x3d9e54: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9E58u;
        goto label_3d9e58;
    }
    ctx->pc = 0x3D9E50u;
    {
        const bool branch_taken_0x3d9e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9e50) {
            ctx->pc = 0x3D9E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9E50u;
            // 0x3d9e54: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9EBCu;
            goto label_3d9ebc;
        }
    }
    ctx->pc = 0x3D9E58u;
label_3d9e58:
    // 0x3d9e58: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3d9e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9e5c:
    // 0x3d9e5c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d9e60:
    // 0x3d9e60: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3d9e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3d9e64:
    // 0x3d9e64: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3d9e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3d9e68:
    // 0x3d9e68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d9e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d9e6c:
    // 0x3d9e6c: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3d9e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d9e70:
    // 0x3d9e70: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3d9e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3d9e74:
    // 0x3d9e74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d9e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d9e78:
    // 0x3d9e78: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d9e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d9e7c:
    // 0x3d9e7c: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3d9e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d9e80:
    // 0x3d9e80: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d9e84:
    // 0x3d9e84: 0x261050a8  addiu       $s0, $s0, 0x50A8
    ctx->pc = 0x3d9e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20648));
label_3d9e88:
    // 0x3d9e88: 0xafa30850  sw          $v1, 0x850($sp)
    ctx->pc = 0x3d9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
label_3d9e8c:
    // 0x3d9e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9e90:
    // 0x3d9e90: 0xafa20840  sw          $v0, 0x840($sp)
    ctx->pc = 0x3d9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2112), GPR_U32(ctx, 2));
label_3d9e94:
    // 0x3d9e94: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3d9e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3d9e98:
    // 0x3d9e98: 0xe7a00860  swc1        $f0, 0x860($sp)
    ctx->pc = 0x3d9e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2144), bits); }
label_3d9e9c:
    // 0x3d9e9c: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3d9e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d9ea0:
    // 0x3d9ea0: 0xc0e9fd0  jal         func_3A7F40
label_3d9ea4:
    if (ctx->pc == 0x3D9EA4u) {
        ctx->pc = 0x3D9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9EA0u;
        // 0x3d9ea4: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9EA8u;
        goto label_3d9ea8;
    }
    ctx->pc = 0x3D9EA0u;
    SET_GPR_U32(ctx, 31, 0x3D9EA8u);
    ctx->pc = 0x3D9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9EA0u;
    // 0x3d9ea4: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3D9EA0u, 0x3D9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9EA8u;
label_3d9ea8:
    // 0x3d9ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9eac:
    // 0x3d9eac: 0xc0f15bc  jal         func_3C56F0
label_3d9eb0:
    if (ctx->pc == 0x3D9EB0u) {
        ctx->pc = 0x3D9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9EACu;
        // 0x3d9eb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9EB4u;
        goto label_3d9eb4;
    }
    ctx->pc = 0x3D9EACu;
    SET_GPR_U32(ctx, 31, 0x3D9EB4u);
    ctx->pc = 0x3D9EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9EACu;
    // 0x3d9eb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D9EACu, 0x3D9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9EB4u;
label_3d9eb4:
    // 0x3d9eb4: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3d9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_3d9eb8:
    // 0x3d9eb8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3d9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d9ebc:
    // 0x3d9ebc: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_3d9ec0:
    if (ctx->pc == 0x3D9EC0u) {
        ctx->pc = 0x3D9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9EBCu;
        // 0x3d9ec0: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9EC4u;
        goto label_3d9ec4;
    }
    ctx->pc = 0x3D9EBCu;
    {
        const bool branch_taken_0x3d9ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9EBCu;
        // 0x3d9ec0: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ebc) {
            ctx->pc = 0x3D9FB0u;
            goto label_3d9fb0;
        }
    }
    ctx->pc = 0x3D9EC4u;
label_3d9ec4:
    // 0x3d9ec4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3d9ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9ec8:
    // 0x3d9ec8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d9ecc:
    // 0x3d9ecc: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3d9eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3d9ed0:
    // 0x3d9ed0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3d9ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3d9ed4:
    // 0x3d9ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d9ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d9ed8:
    // 0x3d9ed8: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3d9ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d9edc:
    // 0x3d9edc: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3d9edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3d9ee0:
    // 0x3d9ee0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d9ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d9ee4:
    // 0x3d9ee4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d9ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d9ee8:
    // 0x3d9ee8: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3d9ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d9eec:
    // 0x3d9eec: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d9ef0:
    // 0x3d9ef0: 0x261050a8  addiu       $s0, $s0, 0x50A8
    ctx->pc = 0x3d9ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20648));
label_3d9ef4:
    // 0x3d9ef4: 0xafa30850  sw          $v1, 0x850($sp)
    ctx->pc = 0x3d9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
label_3d9ef8:
    // 0x3d9ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9efc:
    // 0x3d9efc: 0xafa20840  sw          $v0, 0x840($sp)
    ctx->pc = 0x3d9efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2112), GPR_U32(ctx, 2));
label_3d9f00:
    // 0x3d9f00: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3d9f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3d9f04:
    // 0x3d9f04: 0xe7a00860  swc1        $f0, 0x860($sp)
    ctx->pc = 0x3d9f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2144), bits); }
label_3d9f08:
    // 0x3d9f08: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3d9f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d9f0c:
    // 0x3d9f0c: 0xc0e9fd0  jal         func_3A7F40
label_3d9f10:
    if (ctx->pc == 0x3D9F10u) {
        ctx->pc = 0x3D9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F0Cu;
        // 0x3d9f10: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F14u;
        goto label_3d9f14;
    }
    ctx->pc = 0x3D9F0Cu;
    SET_GPR_U32(ctx, 31, 0x3D9F14u);
    ctx->pc = 0x3D9F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9F0Cu;
    // 0x3d9f10: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3D9F0Cu, 0x3D9F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9F14u;
label_3d9f14:
    // 0x3d9f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f18:
    // 0x3d9f18: 0xc0f15bc  jal         func_3C56F0
label_3d9f1c:
    if (ctx->pc == 0x3D9F1Cu) {
        ctx->pc = 0x3D9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F18u;
        // 0x3d9f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F20u;
        goto label_3d9f20;
    }
    ctx->pc = 0x3D9F18u;
    SET_GPR_U32(ctx, 31, 0x3D9F20u);
    ctx->pc = 0x3D9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9F18u;
    // 0x3d9f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D9F18u, 0x3D9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9F20u;
label_3d9f20:
    // 0x3d9f20: 0x10000022  b           . + 4 + (0x22 << 2)
label_3d9f24:
    if (ctx->pc == 0x3D9F24u) {
        ctx->pc = 0x3D9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F20u;
        // 0x3d9f24: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F28u;
        goto label_3d9f28;
    }
    ctx->pc = 0x3D9F20u;
    {
        const bool branch_taken_0x3d9f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F20u;
        // 0x3d9f24: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f20) {
            ctx->pc = 0x3D9FACu;
            goto label_3d9fac;
        }
    }
    ctx->pc = 0x3D9F28u;
label_3d9f28:
    // 0x3d9f28: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x3d9f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d9f2c:
    // 0x3d9f2c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3d9f30:
    if (ctx->pc == 0x3D9F30u) {
        ctx->pc = 0x3D9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F2Cu;
        // 0x3d9f30: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F34u;
        goto label_3d9f34;
    }
    ctx->pc = 0x3D9F2Cu;
    {
        const bool branch_taken_0x3d9f2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F2Cu;
        // 0x3d9f30: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f2c) {
            ctx->pc = 0x3D9F4Cu;
            goto label_3d9f4c;
        }
    }
    ctx->pc = 0x3D9F34u;
label_3d9f34:
    // 0x3d9f34: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d9f38:
    // 0x3d9f38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d9f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f3c:
    // 0x3d9f3c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d9f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d9f40:
    // 0x3d9f40: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d9f44:
    // 0x3d9f44: 0x60f809  jalr        $v1
label_3d9f48:
    if (ctx->pc == 0x3D9F48u) {
        ctx->pc = 0x3D9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F44u;
        // 0x3d9f48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F4Cu;
        goto label_3d9f4c;
    }
    ctx->pc = 0x3D9F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D9F4Cu);
        ctx->pc = 0x3D9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F44u;
        // 0x3d9f48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9F44u, 0x3D9F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9F4Cu;
label_3d9f4c:
    // 0x3d9f4c: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x3d9f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3d9f50:
    // 0x3d9f50: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3d9f54:
    if (ctx->pc == 0x3D9F54u) {
        ctx->pc = 0x3D9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F50u;
        // 0x3d9f54: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F58u;
        goto label_3d9f58;
    }
    ctx->pc = 0x3D9F50u;
    {
        const bool branch_taken_0x3d9f50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F50u;
        // 0x3d9f54: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f50) {
            ctx->pc = 0x3D9F70u;
            goto label_3d9f70;
        }
    }
    ctx->pc = 0x3D9F58u;
label_3d9f58:
    // 0x3d9f58: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d9f5c:
    // 0x3d9f5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d9f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f60:
    // 0x3d9f60: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d9f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d9f64:
    // 0x3d9f64: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d9f68:
    // 0x3d9f68: 0x60f809  jalr        $v1
label_3d9f6c:
    if (ctx->pc == 0x3D9F6Cu) {
        ctx->pc = 0x3D9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F68u;
        // 0x3d9f6c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F70u;
        goto label_3d9f70;
    }
    ctx->pc = 0x3D9F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D9F70u);
        ctx->pc = 0x3D9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F68u;
        // 0x3d9f6c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9F68u, 0x3D9F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9F70u;
label_3d9f70:
    // 0x3d9f70: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x3d9f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d9f74:
    // 0x3d9f74: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3d9f78:
    if (ctx->pc == 0x3D9F78u) {
        ctx->pc = 0x3D9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F74u;
        // 0x3d9f78: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F7Cu;
        goto label_3d9f7c;
    }
    ctx->pc = 0x3D9F74u;
    {
        const bool branch_taken_0x3d9f74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F74u;
        // 0x3d9f78: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f74) {
            ctx->pc = 0x3D9F94u;
            goto label_3d9f94;
        }
    }
    ctx->pc = 0x3D9F7Cu;
label_3d9f7c:
    // 0x3d9f7c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d9f80:
    // 0x3d9f80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d9f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f84:
    // 0x3d9f84: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d9f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d9f88:
    // 0x3d9f88: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d9f8c:
    // 0x3d9f8c: 0x60f809  jalr        $v1
label_3d9f90:
    if (ctx->pc == 0x3D9F90u) {
        ctx->pc = 0x3D9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F8Cu;
        // 0x3d9f90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9F94u;
        goto label_3d9f94;
    }
    ctx->pc = 0x3D9F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D9F94u);
        ctx->pc = 0x3D9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F8Cu;
        // 0x3d9f90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9F8Cu, 0x3D9F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9F94u;
label_3d9f94:
    // 0x3d9f94: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3d9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_3d9f98:
    // 0x3d9f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f9c:
    // 0x3d9f9c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3d9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3d9fa0:
    // 0x3d9fa0: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x3d9fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3d9fa4:
    // 0x3d9fa4: 0xc0e858c  jal         func_3A1630
label_3d9fa8:
    if (ctx->pc == 0x3D9FA8u) {
        ctx->pc = 0x3D9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FA4u;
        // 0x3d9fa8: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9FACu;
        goto label_3d9fac;
    }
    ctx->pc = 0x3D9FA4u;
    SET_GPR_U32(ctx, 31, 0x3D9FACu);
    ctx->pc = 0x3D9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9FA4u;
    // 0x3d9fa8: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9FA4u, 0x3D9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9FACu;
label_3d9fac:
    // 0x3d9fac: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x3d9facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3d9fb0:
    // 0x3d9fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9fb4:
    // 0x3d9fb4: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x3d9fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3d9fb8:
    // 0x3d9fb8: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x3d9fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3d9fbc:
    // 0x3d9fbc: 0xdfbf0870  ld          $ra, 0x870($sp)
    ctx->pc = 0x3d9fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2160)));
label_3d9fc0:
    // 0x3d9fc0: 0x3e00008  jr          $ra
label_3d9fc4:
    if (ctx->pc == 0x3D9FC4u) {
        ctx->pc = 0x3D9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FC0u;
        // 0x3d9fc4: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9FC8u;
        goto label_fallthrough_0x3d9fc0;
    }
    ctx->pc = 0x3D9FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FC0u;
        // 0x3d9fc4: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d9fc0:
    ctx->pc = 0x3D9FC8u;
}
