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

// Function: sub_001DED68
// Address: 0x1ded68 - 0x1dee00
void sub_001DED68_0x1ded68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DED68_0x1ded68");
#endif

    switch (ctx->pc) {
        case 0x1dedb0u: goto label_1dedb0;
        case 0x1dedc4u: goto label_1dedc4;
        case 0x1dedd0u: goto label_1dedd0;
        case 0x1dede4u: goto label_1dede4;
        default: break;
    }

    ctx->pc = 0x1ded68u;

    // 0x1ded68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ded68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ded6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ded6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ded70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ded70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ded74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ded74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ded78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ded7c: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x1ded7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ded80: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DED80u;
    {
        const bool branch_taken_0x1ded80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED80u;
        // 0x1ded84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded80) {
            ctx->pc = 0x1DEDE4u;
            goto label_1dede4;
        }
    }
    ctx->pc = 0x1DED88u;
    // 0x1ded88: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1ded88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1ded8c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ded8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ded90: 0x244264d0  addiu       $v0, $v0, 0x64D0
    ctx->pc = 0x1ded90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25808));
    // 0x1ded94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ded94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ded98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ded98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ded9c: 0x800008  jr          $a0
    ctx->pc = 0x1DED9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEDA4u: goto label_1deda4;
            case 0x1DEDB8u: goto label_1dedb8;
            case 0x1DEDC4u: goto label_1dedc4;
            case 0x1DEDD8u: goto label_1dedd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DEDA4u;
label_1deda4:
    // 0x1deda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1deda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deda8: 0xc077b40  jal         func_1DED00
    ctx->pc = 0x1DEDA8u;
    SET_GPR_U32(ctx, 31, 0x1DEDB0u);
    ctx->pc = 0x1DEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDA8u;
    // 0x1dedac: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DEDA8u, 0x1DEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDB0u;
label_1dedb0:
    // 0x1dedb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DEDB0u;
    {
        const bool branch_taken_0x1dedb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDB0u;
        // 0x1dedb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedb0) {
            ctx->pc = 0x1DEDE8u;
            goto label_1dede8;
        }
    }
    ctx->pc = 0x1DEDB8u;
label_1dedb8:
    // 0x1dedb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dedb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dedbc: 0xc077b40  jal         func_1DED00
    ctx->pc = 0x1DEDBCu;
    SET_GPR_U32(ctx, 31, 0x1DEDC4u);
    ctx->pc = 0x1DEDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDBCu;
    // 0x1dedc0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED00u, 0x1DEDBCu, 0x1DEDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDC4u;
label_1dedc4:
    // 0x1dedc4: 0x26041bd0  addiu       $a0, $s0, 0x1BD0
    ctx->pc = 0x1dedc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7120));
    // 0x1dedc8: 0xc075b04  jal         func_1D6C10
    ctx->pc = 0x1DEDC8u;
    SET_GPR_U32(ctx, 31, 0x1DEDD0u);
    ctx->pc = 0x1DEDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDC8u;
    // 0x1dedcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C10u, 0x1DEDC8u, 0x1DEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDD0u;
label_1dedd0:
    // 0x1dedd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEDD0u;
    {
        const bool branch_taken_0x1dedd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDD0u;
        // 0x1dedd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedd0) {
            ctx->pc = 0x1DEDE8u;
            goto label_1dede8;
        }
    }
    ctx->pc = 0x1DEDD8u;
label_1dedd8:
    // 0x1dedd8: 0x26041bd0  addiu       $a0, $s0, 0x1BD0
    ctx->pc = 0x1dedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7120));
    // 0x1deddc: 0xc075b04  jal         func_1D6C10
    ctx->pc = 0x1DEDDCu;
    SET_GPR_U32(ctx, 31, 0x1DEDE4u);
    ctx->pc = 0x1DEDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDDCu;
    // 0x1dede0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C10u, 0x1DEDDCu, 0x1DEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDE4u;
label_1dede4:
    // 0x1dede4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dede4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dede8:
    // 0x1dede8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dedec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dedecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dedf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dedf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dedf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDF4u;
        // 0x1dedf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEDFCu;
    // 0x1dedfc: 0x0  nop
    ctx->pc = 0x1dedfcu;
    // NOP
    ctx->pc = 0x1dee00u;
}
