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

// Function: sub_0016AC98
// Address: 0x16ac98 - 0x16acf0
void sub_0016AC98_0x16ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AC98_0x16ac98");
#endif

    switch (ctx->pc) {
        case 0x16acbcu: goto label_16acbc;
        case 0x16acccu: goto label_16accc;
        case 0x16acd8u: goto label_16acd8;
        default: break;
    }

    ctx->pc = 0x16ac98u;

    // 0x16ac98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ac9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16aca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16aca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16aca8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16ACA8u;
    {
        const bool branch_taken_0x16aca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACA8u;
        // 0x16acac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aca8) {
            ctx->pc = 0x16ACD8u;
            goto label_16acd8;
        }
    }
    ctx->pc = 0x16ACB0u;
    // 0x16acb0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16acb4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16ACB4u;
    SET_GPR_U32(ctx, 31, 0x16ACBCu);
    ctx->pc = 0x16ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ACB4u;
    // 0x16acb8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16ACB4u, 0x16ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ACBCu;
label_16acbc:
    // 0x16acbc: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x16acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16acc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16acc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acc4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16ACC4u;
    SET_GPR_U32(ctx, 31, 0x16ACCCu);
    ctx->pc = 0x16ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ACC4u;
    // 0x16acc8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16ACC4u, 0x16ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ACCCu;
label_16accc:
    // 0x16accc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16acccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acd0: 0xc05a432  jal         func_1690C8
    ctx->pc = 0x16ACD0u;
    SET_GPR_U32(ctx, 31, 0x16ACD8u);
    ctx->pc = 0x16ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ACD0u;
    // 0x16acd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1690C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690C8u, 0x16ACD0u, 0x16ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ACD8u;
label_16acd8:
    // 0x16acd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16acd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16acdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16acdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ace0: 0x3e00008  jr          $ra
    ctx->pc = 0x16ACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACE0u;
        // 0x16ace4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ACE8u;
    // 0x16ace8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16acec: 0x0  nop
    ctx->pc = 0x16acecu;
    // NOP
    ctx->pc = 0x16acf0u;
}
