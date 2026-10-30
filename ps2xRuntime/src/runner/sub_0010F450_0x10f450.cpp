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

// Function: sub_0010F450
// Address: 0x10f450 - 0x10f4b0
void sub_0010F450_0x10f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F450_0x10f450");
#endif

    switch (ctx->pc) {
        case 0x10f480u: goto label_10f480;
        default: break;
    }

    ctx->pc = 0x10f450u;

    // 0x10f450: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10f450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x10f454: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x10f454u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x10f458: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x10f458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x10f45c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10F45Cu;
    {
        const bool branch_taken_0x10f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F45Cu;
        // 0x10f460: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f45c) {
            ctx->pc = 0x10F4A8u;
            goto label_10f4a8;
        }
    }
    ctx->pc = 0x10F464u;
    // 0x10f464: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x10f464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x10f468: 0x24428698  addiu       $v0, $v0, -0x7968
    ctx->pc = 0x10f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936216));
    // 0x10f46c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10f470: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x10f470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x10f474: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10f474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10f478: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10f47c: 0x0  nop
    ctx->pc = 0x10f47cu;
    // NOP
label_10f480:
    // 0x10f480: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f484: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F484u;
    {
        const bool branch_taken_0x10f484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F484u;
        // 0x10f488: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f484) {
            ctx->pc = 0x10F494u;
            goto label_10f494;
        }
    }
    ctx->pc = 0x10F48Cu;
    // 0x10f48c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F48Cu;
        // 0x10f490: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F494u;
label_10f494:
    // 0x10f494: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x10f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x10f498: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x10f498u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x10f49c: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x10f49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x10f4a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10F4A0u;
    {
        const bool branch_taken_0x10f4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4A0u;
        // 0x10f4a4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4a0) {
            ctx->pc = 0x10F480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f480;
        }
    }
    ctx->pc = 0x10F4A8u;
label_10f4a8:
    // 0x10f4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4A8u;
        // 0x10f4ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4B0u;
}
