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

// Function: sub_00463DA8
// Address: 0x463da8 - 0x463e50
void sub_00463DA8_0x463da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463DA8_0x463da8");
#endif

    switch (ctx->pc) {
        case 0x463da8u: goto label_463da8;
        case 0x463dacu: goto label_463dac;
        case 0x463db0u: goto label_463db0;
        case 0x463db4u: goto label_463db4;
        case 0x463db8u: goto label_463db8;
        case 0x463dbcu: goto label_463dbc;
        case 0x463dc0u: goto label_463dc0;
        case 0x463dc4u: goto label_463dc4;
        case 0x463dc8u: goto label_463dc8;
        case 0x463dccu: goto label_463dcc;
        case 0x463dd0u: goto label_463dd0;
        case 0x463dd4u: goto label_463dd4;
        case 0x463dd8u: goto label_463dd8;
        case 0x463ddcu: goto label_463ddc;
        case 0x463de0u: goto label_463de0;
        case 0x463de4u: goto label_463de4;
        case 0x463de8u: goto label_463de8;
        case 0x463decu: goto label_463dec;
        case 0x463df0u: goto label_463df0;
        case 0x463df4u: goto label_463df4;
        case 0x463df8u: goto label_463df8;
        case 0x463dfcu: goto label_463dfc;
        case 0x463e00u: goto label_463e00;
        case 0x463e04u: goto label_463e04;
        case 0x463e08u: goto label_463e08;
        case 0x463e0cu: goto label_463e0c;
        case 0x463e10u: goto label_463e10;
        case 0x463e14u: goto label_463e14;
        case 0x463e18u: goto label_463e18;
        case 0x463e1cu: goto label_463e1c;
        case 0x463e20u: goto label_463e20;
        case 0x463e24u: goto label_463e24;
        case 0x463e28u: goto label_463e28;
        case 0x463e2cu: goto label_463e2c;
        case 0x463e30u: goto label_463e30;
        case 0x463e34u: goto label_463e34;
        case 0x463e38u: goto label_463e38;
        case 0x463e3cu: goto label_463e3c;
        case 0x463e40u: goto label_463e40;
        case 0x463e44u: goto label_463e44;
        case 0x463e48u: goto label_463e48;
        case 0x463e4cu: goto label_463e4c;
        default: break;
    }

    ctx->pc = 0x463da8u;

label_463da8:
    // 0x463da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x463da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_463dac:
    // 0x463dac: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x463dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_463db0:
    // 0x463db0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x463db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_463db4:
    // 0x463db4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x463db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_463db8:
    // 0x463db8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x463db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_463dbc:
    // 0x463dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x463dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_463dc0:
    // 0x463dc0: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x463dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_463dc4:
    // 0x463dc4: 0x2302018  mult        $a0, $s1, $s0
    ctx->pc = 0x463dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_463dc8:
    // 0x463dc8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x463dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_463dcc:
    // 0x463dcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x463dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_463dd0:
    // 0x463dd0: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x463dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_463dd4:
    // 0x463dd4: 0x40f809  jalr        $v0
label_463dd8:
    if (ctx->pc == 0x463DD8u) {
        ctx->pc = 0x463DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463DD4u;
        // 0x463dd8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x463DDCu;
        goto label_463ddc;
    }
    ctx->pc = 0x463DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x463DDCu);
        ctx->pc = 0x463DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463DD4u;
        // 0x463dd8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463DD4u, 0x463DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x463DDCu;
label_463ddc:
    // 0x463ddc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x463ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463de0:
    // 0x463de0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x463de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_463de4:
    // 0x463de4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x463de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_463de8:
    // 0x463de8: 0xac71002c  sw          $s1, 0x2C($v1)
    ctx->pc = 0x463de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 17));
label_463dec:
    // 0x463dec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x463decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_463df0:
    // 0x463df0: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x463df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_463df4:
    // 0x463df4: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x463df4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
label_463df8:
    // 0x463df8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x463df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_463dfc:
    // 0x463dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x463dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_463e00:
    // 0x463e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x463e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_463e04:
    // 0x463e04: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x463e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_463e08:
    // 0x463e08: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x463e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_463e0c:
    // 0x463e0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x463e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_463e10:
    // 0x463e10: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x463e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_463e14:
    // 0x463e14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x463e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_463e18:
    // 0x463e18: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x463e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_463e1c:
    // 0x463e1c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x463e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_463e20:
    // 0x463e20: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x463e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_463e24:
    // 0x463e24: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x463e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_463e28:
    // 0x463e28: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x463e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_463e2c:
    // 0x463e2c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x463e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_463e30:
    // 0x463e30: 0xac630038  sw          $v1, 0x38($v1)
    ctx->pc = 0x463e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 3));
label_463e34:
    // 0x463e34: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x463e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_463e38:
    // 0x463e38: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x463e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_463e3c:
    // 0x463e3c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x463e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_463e40:
    // 0x463e40: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x463e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_463e44:
    // 0x463e44: 0x3e00008  jr          $ra
label_463e48:
    if (ctx->pc == 0x463E48u) {
        ctx->pc = 0x463E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463E44u;
        // 0x463e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x463E4Cu;
        goto label_463e4c;
    }
    ctx->pc = 0x463E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463E44u;
        // 0x463e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463E4Cu;
label_463e4c:
    // 0x463e4c: 0x0  nop
    ctx->pc = 0x463e4cu;
    // NOP
    ctx->pc = 0x463e50u;
}
