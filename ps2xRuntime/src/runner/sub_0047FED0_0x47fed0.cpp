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

// Function: sub_0047FED0
// Address: 0x47fed0 - 0x47ff30
void sub_0047FED0_0x47fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FED0_0x47fed0");
#endif

    switch (ctx->pc) {
        case 0x47fed0u: goto label_47fed0;
        case 0x47fed4u: goto label_47fed4;
        case 0x47fed8u: goto label_47fed8;
        case 0x47fedcu: goto label_47fedc;
        case 0x47fee0u: goto label_47fee0;
        case 0x47fee4u: goto label_47fee4;
        case 0x47fee8u: goto label_47fee8;
        case 0x47feecu: goto label_47feec;
        case 0x47fef0u: goto label_47fef0;
        case 0x47fef4u: goto label_47fef4;
        case 0x47fef8u: goto label_47fef8;
        case 0x47fefcu: goto label_47fefc;
        case 0x47ff00u: goto label_47ff00;
        case 0x47ff04u: goto label_47ff04;
        case 0x47ff08u: goto label_47ff08;
        case 0x47ff0cu: goto label_47ff0c;
        case 0x47ff10u: goto label_47ff10;
        case 0x47ff14u: goto label_47ff14;
        case 0x47ff18u: goto label_47ff18;
        case 0x47ff1cu: goto label_47ff1c;
        case 0x47ff20u: goto label_47ff20;
        case 0x47ff24u: goto label_47ff24;
        case 0x47ff28u: goto label_47ff28;
        case 0x47ff2cu: goto label_47ff2c;
        default: break;
    }

    ctx->pc = 0x47fed0u;

label_47fed0:
    // 0x47fed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47fed4:
    // 0x47fed4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47fed8:
    // 0x47fed8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_47fedc:
    // 0x47fedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47fedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47fee0:
    // 0x47fee0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47fee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47fee4:
    // 0x47fee4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47fee8:
    // 0x47fee8: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x47fee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_47feec:
    // 0x47feec: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_47fef0:
    if (ctx->pc == 0x47FEF0u) {
        ctx->pc = 0x47FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FEECu;
        // 0x47fef0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FEF4u;
        goto label_47fef4;
    }
    ctx->pc = 0x47FEECu;
    {
        const bool branch_taken_0x47feec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FEECu;
        // 0x47fef0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47feec) {
            ctx->pc = 0x47FF14u;
            goto label_47ff14;
        }
    }
    ctx->pc = 0x47FEF4u;
label_47fef4:
    // 0x47fef4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x47fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_47fef8:
    // 0x47fef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47fefc:
    // 0x47fefc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47ff00:
    // 0x47ff00: 0x40f809  jalr        $v0
label_47ff04:
    if (ctx->pc == 0x47FF04u) {
        ctx->pc = 0x47FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF00u;
        // 0x47ff04: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FF08u;
        goto label_47ff08;
    }
    ctx->pc = 0x47FF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FF08u);
        ctx->pc = 0x47FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF00u;
        // 0x47ff04: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FF00u, 0x47FF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FF08u;
label_47ff08:
    // 0x47ff08: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x47ff08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_47ff0c:
    // 0x47ff0c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_47ff10:
    if (ctx->pc == 0x47FF10u) {
        ctx->pc = 0x47FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF0Cu;
        // 0x47ff10: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FF14u;
        goto label_47ff14;
    }
    ctx->pc = 0x47FF0Cu;
    {
        const bool branch_taken_0x47ff0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ff0c) {
            ctx->pc = 0x47FF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FF0Cu;
            // 0x47ff10: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fef8;
        }
    }
    ctx->pc = 0x47FF14u;
label_47ff14:
    // 0x47ff14: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x47ff14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47ff18:
    // 0x47ff18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47ff18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47ff1c:
    // 0x47ff1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47ff1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ff20:
    // 0x47ff20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x47ff20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ff24:
    // 0x47ff24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ff24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47ff28:
    // 0x47ff28: 0x3e00008  jr          $ra
label_47ff2c:
    if (ctx->pc == 0x47FF2Cu) {
        ctx->pc = 0x47FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF28u;
        // 0x47ff2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FF30u;
        goto label_fallthrough_0x47ff28;
    }
    ctx->pc = 0x47FF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF28u;
        // 0x47ff2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47ff28:
    ctx->pc = 0x47FF30u;
}
