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

// Function: sub_0021EF58
// Address: 0x21ef58 - 0x21efb0
void sub_0021EF58_0x21ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EF58_0x21ef58");
#endif

    switch (ctx->pc) {
        case 0x21ef78u: goto label_21ef78;
        case 0x21ef90u: goto label_21ef90;
        default: break;
    }

    ctx->pc = 0x21ef58u;

    // 0x21ef58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ef58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ef5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21ef60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ef64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ef6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ef6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef70: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21EF70u;
    SET_GPR_U32(ctx, 31, 0x21EF78u);
    ctx->pc = 0x21EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF70u;
    // 0x21ef74: 0x26040168  addiu       $a0, $s0, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21EF70u, 0x21EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF78u;
label_21ef78:
    // 0x21ef78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EF78u;
    {
        const bool branch_taken_0x21ef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF78u;
        // 0x21ef7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef78) {
            ctx->pc = 0x21EF90u;
            goto label_21ef90;
        }
    }
    ctx->pc = 0x21EF80u;
    // 0x21ef80: 0x8e050168  lw          $a1, 0x168($s0)
    ctx->pc = 0x21ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21ef84: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x21ef88: 0xc0440c6  jal         func_110318
    ctx->pc = 0x21EF88u;
    SET_GPR_U32(ctx, 31, 0x21EF90u);
    ctx->pc = 0x21EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF88u;
    // 0x21ef8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x21EF88u, 0x21EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF90u;
label_21ef90:
    // 0x21ef90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21ef94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ef94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ef98: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x21ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x21ef9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21ef9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21efa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21efa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21efa4: 0x3e00008  jr          $ra
    ctx->pc = 0x21EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFA4u;
        // 0x21efa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EFACu;
    // 0x21efac: 0x0  nop
    ctx->pc = 0x21efacu;
    // NOP
    ctx->pc = 0x21efb0u;
}
