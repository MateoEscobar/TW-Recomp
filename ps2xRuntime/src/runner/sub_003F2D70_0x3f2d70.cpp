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

// Function: sub_003F2D70
// Address: 0x3f2d70 - 0x3f2ea0
void sub_003F2D70_0x3f2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2D70_0x3f2d70");
#endif

    switch (ctx->pc) {
        case 0x3f2d70u: goto label_3f2d70;
        case 0x3f2d74u: goto label_3f2d74;
        case 0x3f2d78u: goto label_3f2d78;
        case 0x3f2d7cu: goto label_3f2d7c;
        case 0x3f2d80u: goto label_3f2d80;
        case 0x3f2d84u: goto label_3f2d84;
        case 0x3f2d88u: goto label_3f2d88;
        case 0x3f2d8cu: goto label_3f2d8c;
        case 0x3f2d90u: goto label_3f2d90;
        case 0x3f2d94u: goto label_3f2d94;
        case 0x3f2d98u: goto label_3f2d98;
        case 0x3f2d9cu: goto label_3f2d9c;
        case 0x3f2da0u: goto label_3f2da0;
        case 0x3f2da4u: goto label_3f2da4;
        case 0x3f2da8u: goto label_3f2da8;
        case 0x3f2dacu: goto label_3f2dac;
        case 0x3f2db0u: goto label_3f2db0;
        case 0x3f2db4u: goto label_3f2db4;
        case 0x3f2db8u: goto label_3f2db8;
        case 0x3f2dbcu: goto label_3f2dbc;
        case 0x3f2dc0u: goto label_3f2dc0;
        case 0x3f2dc4u: goto label_3f2dc4;
        case 0x3f2dc8u: goto label_3f2dc8;
        case 0x3f2dccu: goto label_3f2dcc;
        case 0x3f2dd0u: goto label_3f2dd0;
        case 0x3f2dd4u: goto label_3f2dd4;
        case 0x3f2dd8u: goto label_3f2dd8;
        case 0x3f2ddcu: goto label_3f2ddc;
        case 0x3f2de0u: goto label_3f2de0;
        case 0x3f2de4u: goto label_3f2de4;
        case 0x3f2de8u: goto label_3f2de8;
        case 0x3f2decu: goto label_3f2dec;
        case 0x3f2df0u: goto label_3f2df0;
        case 0x3f2df4u: goto label_3f2df4;
        case 0x3f2df8u: goto label_3f2df8;
        case 0x3f2dfcu: goto label_3f2dfc;
        case 0x3f2e00u: goto label_3f2e00;
        case 0x3f2e04u: goto label_3f2e04;
        case 0x3f2e08u: goto label_3f2e08;
        case 0x3f2e0cu: goto label_3f2e0c;
        case 0x3f2e10u: goto label_3f2e10;
        case 0x3f2e14u: goto label_3f2e14;
        case 0x3f2e18u: goto label_3f2e18;
        case 0x3f2e1cu: goto label_3f2e1c;
        case 0x3f2e20u: goto label_3f2e20;
        case 0x3f2e24u: goto label_3f2e24;
        case 0x3f2e28u: goto label_3f2e28;
        case 0x3f2e2cu: goto label_3f2e2c;
        case 0x3f2e30u: goto label_3f2e30;
        case 0x3f2e34u: goto label_3f2e34;
        case 0x3f2e38u: goto label_3f2e38;
        case 0x3f2e3cu: goto label_3f2e3c;
        case 0x3f2e40u: goto label_3f2e40;
        case 0x3f2e44u: goto label_3f2e44;
        case 0x3f2e48u: goto label_3f2e48;
        case 0x3f2e4cu: goto label_3f2e4c;
        case 0x3f2e50u: goto label_3f2e50;
        case 0x3f2e54u: goto label_3f2e54;
        case 0x3f2e58u: goto label_3f2e58;
        case 0x3f2e5cu: goto label_3f2e5c;
        case 0x3f2e60u: goto label_3f2e60;
        case 0x3f2e64u: goto label_3f2e64;
        case 0x3f2e68u: goto label_3f2e68;
        case 0x3f2e6cu: goto label_3f2e6c;
        case 0x3f2e70u: goto label_3f2e70;
        case 0x3f2e74u: goto label_3f2e74;
        case 0x3f2e78u: goto label_3f2e78;
        case 0x3f2e7cu: goto label_3f2e7c;
        case 0x3f2e80u: goto label_3f2e80;
        case 0x3f2e84u: goto label_3f2e84;
        case 0x3f2e88u: goto label_3f2e88;
        case 0x3f2e8cu: goto label_3f2e8c;
        case 0x3f2e90u: goto label_3f2e90;
        case 0x3f2e94u: goto label_3f2e94;
        case 0x3f2e98u: goto label_3f2e98;
        case 0x3f2e9cu: goto label_3f2e9c;
        default: break;
    }

    ctx->pc = 0x3f2d70u;

label_3f2d70:
    // 0x3f2d70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3f2d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3f2d74:
    // 0x3f2d74: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3f2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3f2d78:
    // 0x3f2d78: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3f2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3f2d7c:
    // 0x3f2d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2d80:
    // 0x3f2d80: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3f2d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3f2d84:
    // 0x3f2d84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f2d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f2d88:
    // 0x3f2d88: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3f2d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3f2d8c:
    // 0x3f2d8c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3f2d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3f2d90:
    // 0x3f2d90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f2d94:
    // 0x3f2d94: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x3f2d94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3f2d98:
    // 0x3f2d98: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3f2d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3f2d9c:
    // 0x3f2d9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2da0:
    // 0x3f2da0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f2da0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f2da4:
    // 0x3f2da4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f2da8:
    // 0x3f2da8: 0x40f809  jalr        $v0
label_3f2dac:
    if (ctx->pc == 0x3F2DACu) {
        ctx->pc = 0x3F2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DA8u;
        // 0x3f2dac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2DB0u;
        goto label_3f2db0;
    }
    ctx->pc = 0x3F2DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F2DB0u);
        ctx->pc = 0x3F2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DA8u;
        // 0x3f2dac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2DA8u, 0x3F2DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2DB0u;
label_3f2db0:
    // 0x3f2db0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f2db0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2db4:
    // 0x3f2db4: 0xc0ea13a  jal         func_3A84E8
label_3f2db8:
    if (ctx->pc == 0x3F2DB8u) {
        ctx->pc = 0x3F2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DB4u;
        // 0x3f2db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2DBCu;
        goto label_3f2dbc;
    }
    ctx->pc = 0x3F2DB4u;
    SET_GPR_U32(ctx, 31, 0x3F2DBCu);
    ctx->pc = 0x3F2DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2DB4u;
    // 0x3f2db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3F2DB4u, 0x3F2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2DBCu;
label_3f2dbc:
    // 0x3f2dbc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f2dbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f2dc0:
    // 0x3f2dc0: 0xc0ea146  jal         func_3A8518
label_3f2dc4:
    if (ctx->pc == 0x3F2DC4u) {
        ctx->pc = 0x3F2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DC0u;
        // 0x3f2dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2DC8u;
        goto label_3f2dc8;
    }
    ctx->pc = 0x3F2DC0u;
    SET_GPR_U32(ctx, 31, 0x3F2DC8u);
    ctx->pc = 0x3F2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2DC0u;
    // 0x3f2dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F2DC0u, 0x3F2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2DC8u;
label_3f2dc8:
    // 0x3f2dc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f2dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2dcc:
    // 0x3f2dcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f2dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f2dd0:
    // 0x3f2dd0: 0xc0ea12a  jal         func_3A84A8
label_3f2dd4:
    if (ctx->pc == 0x3F2DD4u) {
        ctx->pc = 0x3F2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DD0u;
        // 0x3f2dd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2DD8u;
        goto label_3f2dd8;
    }
    ctx->pc = 0x3F2DD0u;
    SET_GPR_U32(ctx, 31, 0x3F2DD8u);
    ctx->pc = 0x3F2DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2DD0u;
    // 0x3f2dd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2DD0u, 0x3F2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2DD8u;
label_3f2dd8:
    // 0x3f2dd8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f2dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f2ddc:
    // 0x3f2ddc: 0xc0ea12a  jal         func_3A84A8
label_3f2de0:
    if (ctx->pc == 0x3F2DE0u) {
        ctx->pc = 0x3F2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DDCu;
        // 0x3f2de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2DE4u;
        goto label_3f2de4;
    }
    ctx->pc = 0x3F2DDCu;
    SET_GPR_U32(ctx, 31, 0x3F2DE4u);
    ctx->pc = 0x3F2DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2DDCu;
    // 0x3f2de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2DDCu, 0x3F2DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2DE4u;
label_3f2de4:
    // 0x3f2de4: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x3f2de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_3f2de8:
    // 0x3f2de8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3f2de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3f2dec:
    // 0x3f2dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f2decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f2df0:
    // 0x3f2df0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f2df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f2df4:
    // 0x3f2df4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3f2df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3f2df8:
    // 0x3f2df8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f2df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f2dfc:
    // 0x3f2dfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f2dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f2e00:
    // 0x3f2e00: 0xc0cd508  jal         func_335420
label_3f2e04:
    if (ctx->pc == 0x3F2E04u) {
        ctx->pc = 0x3F2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E00u;
        // 0x3f2e04: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2E08u;
        goto label_3f2e08;
    }
    ctx->pc = 0x3F2E00u;
    SET_GPR_U32(ctx, 31, 0x3F2E08u);
    ctx->pc = 0x3F2E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E00u;
    // 0x3f2e04: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F2E00u, 0x3F2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E08u;
label_3f2e08:
    // 0x3f2e08: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3f2e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f2e0c:
    // 0x3f2e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f2e10:
    // 0x3f2e10: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3f2e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3f2e14:
    // 0x3f2e14: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3f2e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3f2e18:
    // 0x3f2e18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f2e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f2e1c:
    // 0x3f2e1c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x3f2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3f2e20:
    // 0x3f2e20: 0xae1200b4  sw          $s2, 0xB4($s0)
    ctx->pc = 0x3f2e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 18));
label_3f2e24:
    // 0x3f2e24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3f2e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3f2e28:
    // 0x3f2e28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f2e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f2e2c:
    // 0x3f2e2c: 0xae1200b0  sw          $s2, 0xB0($s0)
    ctx->pc = 0x3f2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
label_3f2e30:
    // 0x3f2e30: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3f2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3f2e34:
    // 0x3f2e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2e38:
    // 0x3f2e38: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3f2e3c:
    // 0x3f2e3c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3f2e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3f2e40:
    // 0x3f2e40: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3f2e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3f2e44:
    // 0x3f2e44: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x3f2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_3f2e48:
    // 0x3f2e48: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f2e48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2e4c:
    // 0x3f2e4c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3f2e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3f2e50:
    // 0x3f2e50: 0xc0e858c  jal         func_3A1630
label_3f2e54:
    if (ctx->pc == 0x3F2E54u) {
        ctx->pc = 0x3F2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E50u;
        // 0x3f2e54: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2E58u;
        goto label_3f2e58;
    }
    ctx->pc = 0x3F2E50u;
    SET_GPR_U32(ctx, 31, 0x3F2E58u);
    ctx->pc = 0x3F2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E50u;
    // 0x3f2e54: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F2E50u, 0x3F2E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E58u;
label_3f2e58:
    // 0x3f2e58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3f2e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f2e5c:
    // 0x3f2e5c: 0xc0e9364  jal         func_3A4D90
label_3f2e60:
    if (ctx->pc == 0x3F2E60u) {
        ctx->pc = 0x3F2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E5Cu;
        // 0x3f2e60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2E64u;
        goto label_3f2e64;
    }
    ctx->pc = 0x3F2E5Cu;
    SET_GPR_U32(ctx, 31, 0x3F2E64u);
    ctx->pc = 0x3F2E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2E5Cu;
    // 0x3f2e60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3F2E5Cu, 0x3F2E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2E64u;
label_3f2e64:
    // 0x3f2e64: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3f2e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f2e68:
    // 0x3f2e68: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3f2e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f2e6c:
    // 0x3f2e6c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f2e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f2e70:
    // 0x3f2e70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f2e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f2e74:
    // 0x3f2e74: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3f2e74u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3f2e78:
    // 0x3f2e78: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3f2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3f2e7c:
    // 0x3f2e7c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3f2e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f2e80:
    // 0x3f2e80: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3f2e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f2e84:
    // 0x3f2e84: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3f2e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f2e88:
    // 0x3f2e88: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3f2e88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f2e8c:
    // 0x3f2e8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f2e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f2e90:
    // 0x3f2e90: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3f2e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f2e94:
    // 0x3f2e94: 0x3e00008  jr          $ra
label_3f2e98:
    if (ctx->pc == 0x3F2E98u) {
        ctx->pc = 0x3F2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E94u;
        // 0x3f2e98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2E9Cu;
        goto label_3f2e9c;
    }
    ctx->pc = 0x3F2E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E94u;
        // 0x3f2e98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2E9Cu;
label_3f2e9c:
    // 0x3f2e9c: 0x0  nop
    ctx->pc = 0x3f2e9cu;
    // NOP
    ctx->pc = 0x3f2ea0u;
}
