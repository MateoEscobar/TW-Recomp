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

// Function: sub_0018AFB8
// Address: 0x18afb8 - 0x18b008
void sub_0018AFB8_0x18afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AFB8_0x18afb8");
#endif

    switch (ctx->pc) {
        case 0x18aff8u: goto label_18aff8;
        default: break;
    }

    ctx->pc = 0x18afb8u;

    // 0x18afb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18afb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18afbc: 0x24840c44  addiu       $a0, $a0, 0xC44
    ctx->pc = 0x18afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3140));
    // 0x18afc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18afc4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18afc8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18afcc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18afd0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AFD0u;
    {
        const bool branch_taken_0x18afd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18afd0) {
            ctx->pc = 0x18AFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AFD0u;
            // 0x18afd4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AFF0u;
            goto label_18aff0;
        }
    }
    ctx->pc = 0x18AFD8u;
    // 0x18afd8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18AFD8u;
    {
        const bool branch_taken_0x18afd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18afd8) {
            ctx->pc = 0x18AFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AFD8u;
            // 0x18afdc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AFE0u;
            goto label_18afe0;
        }
    }
    ctx->pc = 0x18AFE0u;
label_18afe0:
    // 0x18afe0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18afe4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18afe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18AFE8u;
    {
        const bool branch_taken_0x18afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFE8u;
        // 0x18afec: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18afe8) {
            ctx->pc = 0x18AFF8u;
            goto label_18aff8;
        }
    }
    ctx->pc = 0x18AFF0u;
label_18aff0:
    // 0x18aff0: 0xc138cda  jal         func_4E3368
    ctx->pc = 0x18AFF0u;
    SET_GPR_U32(ctx, 31, 0x18AFF8u);
    ctx->pc = 0x18AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFF0u;
    // 0x18aff4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3368u, 0x18AFF0u, 0x18AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFF8u;
label_18aff8:
    // 0x18aff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18aff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18affc: 0x3e00008  jr          $ra
    ctx->pc = 0x18AFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFFCu;
        // 0x18b000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B004u;
    // 0x18b004: 0x0  nop
    ctx->pc = 0x18b004u;
    // NOP
    ctx->pc = 0x18b008u;
}
