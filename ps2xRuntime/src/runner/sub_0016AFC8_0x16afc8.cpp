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

// Function: sub_0016AFC8
// Address: 0x16afc8 - 0x16b018
void sub_0016AFC8_0x16afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AFC8_0x16afc8");
#endif

    switch (ctx->pc) {
        case 0x16b008u: goto label_16b008;
        default: break;
    }

    ctx->pc = 0x16afc8u;

    // 0x16afc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16afcc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16afccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16afd0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x16afd4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x16afd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16afdc: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x16afdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16afe0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x16afe0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x16afe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16afe8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AFE8u;
    {
        const bool branch_taken_0x16afe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFE8u;
        // 0x16afec: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afe8) {
            ctx->pc = 0x16B008u;
            goto label_16b008;
        }
    }
    ctx->pc = 0x16AFF0u;
    // 0x16aff0: 0x24020b10  addiu       $v0, $zero, 0xB10
    ctx->pc = 0x16aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
    // 0x16aff4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16aff8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16aff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16affc: 0x24846e30  addiu       $a0, $a0, 0x6E30
    ctx->pc = 0x16affcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28208));
    // 0x16b000: 0xc05a334  jal         func_168CD0
    ctx->pc = 0x16B000u;
    SET_GPR_U32(ctx, 31, 0x16B008u);
    ctx->pc = 0x16B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B000u;
    // 0x16b004: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168CD0u, 0x16B000u, 0x16B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B008u;
label_16b008:
    // 0x16b008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b00c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B00Cu;
        // 0x16b010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B014u;
    // 0x16b014: 0x0  nop
    ctx->pc = 0x16b014u;
    // NOP
    ctx->pc = 0x16b018u;
}
