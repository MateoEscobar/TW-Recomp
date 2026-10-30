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

// Function: sub_004523A0
// Address: 0x4523a0 - 0x452400
void sub_004523A0_0x4523a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004523A0_0x4523a0");
#endif

    switch (ctx->pc) {
        case 0x4523c4u: goto label_4523c4;
        case 0x4523d8u: goto label_4523d8;
        default: break;
    }

    ctx->pc = 0x4523a0u;

    // 0x4523a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4523a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4523a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4523a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4523a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4523a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4523ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4523acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4523b0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4523B0u;
    {
        const bool branch_taken_0x4523b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4523B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4523B0u;
        // 0x4523b4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4523b0) {
            ctx->pc = 0x4523CCu;
            goto label_4523cc;
        }
    }
    ctx->pc = 0x4523B8u;
    // 0x4523b8: 0x8cc6007c  lw          $a2, 0x7C($a2)
    ctx->pc = 0x4523b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x4523bc: 0xc114012  jal         func_450048
    ctx->pc = 0x4523BCu;
    SET_GPR_U32(ctx, 31, 0x4523C4u);
    ctx->pc = 0x4523C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4523BCu;
    // 0x4523c0: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x450048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450048u, 0x4523BCu, 0x4523C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4523C4u;
label_4523c4:
    // 0x4523c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4523C4u;
    {
        const bool branch_taken_0x4523c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4523C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4523C4u;
        // 0x4523c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4523c4) {
            ctx->pc = 0x4523F8u;
            goto label_4523f8;
        }
    }
    ctx->pc = 0x4523CCu;
label_4523cc:
    // 0x4523cc: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4523CCu;
    {
        const bool branch_taken_0x4523cc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4523D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4523CCu;
        // 0x4523d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4523cc) {
            ctx->pc = 0x4523F8u;
            goto label_4523f8;
        }
    }
    ctx->pc = 0x4523D4u;
    // 0x4523d4: 0x0  nop
    ctx->pc = 0x4523d4u;
    // NOP
label_4523d8:
    // 0x4523d8: 0x88c2007f  lwl         $v0, 0x7F($a2)
    ctx->pc = 0x4523d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x4523dc: 0x98c2007c  lwr         $v0, 0x7C($a2)
    ctx->pc = 0x4523dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x4523e0: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x4523e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4523e4: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x4523e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4523e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4523e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4523ec: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4523ECu;
    {
        const bool branch_taken_0x4523ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4523F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4523ECu;
        // 0x4523f0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4523ec) {
            ctx->pc = 0x4523D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4523d8;
        }
    }
    ctx->pc = 0x4523F4u;
    // 0x4523f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4523f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4523f8:
    // 0x4523f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4523F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4523FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4523F8u;
        // 0x4523fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4523F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452400u;
}
