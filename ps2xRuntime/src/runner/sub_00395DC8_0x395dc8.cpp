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

// Function: sub_00395DC8
// Address: 0x395dc8 - 0x395e40
void sub_00395DC8_0x395dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395DC8_0x395dc8");
#endif

    switch (ctx->pc) {
        case 0x395dc8u: goto label_395dc8;
        case 0x395dccu: goto label_395dcc;
        case 0x395dd0u: goto label_395dd0;
        case 0x395dd4u: goto label_395dd4;
        case 0x395dd8u: goto label_395dd8;
        case 0x395ddcu: goto label_395ddc;
        case 0x395de0u: goto label_395de0;
        case 0x395de4u: goto label_395de4;
        case 0x395de8u: goto label_395de8;
        case 0x395decu: goto label_395dec;
        case 0x395df0u: goto label_395df0;
        case 0x395df4u: goto label_395df4;
        case 0x395df8u: goto label_395df8;
        case 0x395dfcu: goto label_395dfc;
        case 0x395e00u: goto label_395e00;
        case 0x395e04u: goto label_395e04;
        case 0x395e08u: goto label_395e08;
        case 0x395e0cu: goto label_395e0c;
        case 0x395e10u: goto label_395e10;
        case 0x395e14u: goto label_395e14;
        case 0x395e18u: goto label_395e18;
        case 0x395e1cu: goto label_395e1c;
        case 0x395e20u: goto label_395e20;
        case 0x395e24u: goto label_395e24;
        case 0x395e28u: goto label_395e28;
        case 0x395e2cu: goto label_395e2c;
        case 0x395e30u: goto label_395e30;
        case 0x395e34u: goto label_395e34;
        case 0x395e38u: goto label_395e38;
        case 0x395e3cu: goto label_395e3c;
        default: break;
    }

    ctx->pc = 0x395dc8u;

label_395dc8:
    // 0x395dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x395dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_395dcc:
    // 0x395dcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x395dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_395dd0:
    // 0x395dd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x395dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_395dd4:
    // 0x395dd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x395dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_395dd8:
    // 0x395dd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x395dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_395ddc:
    // 0x395ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395de0:
    // 0x395de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_395de4:
    // 0x395de4: 0x2e220080  sltiu       $v0, $s1, 0x80
    ctx->pc = 0x395de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_395de8:
    // 0x395de8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_395dec:
    if (ctx->pc == 0x395DECu) {
        ctx->pc = 0x395DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DE8u;
        // 0x395dec: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395DF0u;
        goto label_395df0;
    }
    ctx->pc = 0x395DE8u;
    {
        const bool branch_taken_0x395de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DE8u;
        // 0x395dec: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395de8) {
            ctx->pc = 0x395E28u;
            goto label_395e28;
        }
    }
    ctx->pc = 0x395DF0u;
label_395df0:
    // 0x395df0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x395df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_395df4:
    // 0x395df4: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_395df8:
    if (ctx->pc == 0x395DF8u) {
        ctx->pc = 0x395DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DF4u;
        // 0x395df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395DFCu;
        goto label_395dfc;
    }
    ctx->pc = 0x395DF4u;
    {
        const bool branch_taken_0x395df4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x395DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DF4u;
        // 0x395df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395df4) {
            ctx->pc = 0x395E08u;
            goto label_395e08;
        }
    }
    ctx->pc = 0x395DFCu;
label_395dfc:
    // 0x395dfc: 0xc0e4752  jal         func_391D48
label_395e00:
    if (ctx->pc == 0x395E00u) {
        ctx->pc = 0x395E04u;
        goto label_395e04;
    }
    ctx->pc = 0x395DFCu;
    SET_GPR_U32(ctx, 31, 0x395E04u);
    ctx->pc = 0x391D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391D48u, 0x395DFCu, 0x395E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395E04u;
label_395e04:
    // 0x395e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x395e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395e08:
    // 0x395e08: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x395e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_395e0c:
    // 0x395e0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_395e10:
    if (ctx->pc == 0x395E10u) {
        ctx->pc = 0x395E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E0Cu;
        // 0x395e10: 0xa2020108  sb          $v0, 0x108($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395E14u;
        goto label_395e14;
    }
    ctx->pc = 0x395E0Cu;
    {
        const bool branch_taken_0x395e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E0Cu;
        // 0x395e10: 0xa2020108  sb          $v0, 0x108($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e0c) {
            ctx->pc = 0x395E28u;
            goto label_395e28;
        }
    }
    ctx->pc = 0x395E14u;
label_395e14:
    // 0x395e14: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x395e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_395e18:
    // 0x395e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x395e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395e1c:
    // 0x395e1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x395e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_395e20:
    // 0x395e20: 0x40f809  jalr        $v0
label_395e24:
    if (ctx->pc == 0x395E24u) {
        ctx->pc = 0x395E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E20u;
        // 0x395e24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395E28u;
        goto label_395e28;
    }
    ctx->pc = 0x395E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395E28u);
        ctx->pc = 0x395E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E20u;
        // 0x395e24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395E20u, 0x395E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395E28u;
label_395e28:
    // 0x395e28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x395e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_395e2c:
    // 0x395e2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x395e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_395e30:
    // 0x395e30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x395e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_395e34:
    // 0x395e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395e38:
    // 0x395e38: 0x3e00008  jr          $ra
label_395e3c:
    if (ctx->pc == 0x395E3Cu) {
        ctx->pc = 0x395E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E38u;
        // 0x395e3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395E40u;
        goto label_fallthrough_0x395e38;
    }
    ctx->pc = 0x395E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E38u;
        // 0x395e3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x395e38:
    ctx->pc = 0x395E40u;
}
