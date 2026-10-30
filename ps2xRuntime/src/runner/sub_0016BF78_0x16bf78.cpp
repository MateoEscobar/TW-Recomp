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

// Function: sub_0016BF78
// Address: 0x16bf78 - 0x16bfc8
void sub_0016BF78_0x16bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BF78_0x16bf78");
#endif

    switch (ctx->pc) {
        case 0x16bfacu: goto label_16bfac;
        default: break;
    }

    ctx->pc = 0x16bf78u;

    // 0x16bf78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bf7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bf80: 0x90a200de  lbu         $v0, 0xDE($a1)
    ctx->pc = 0x16bf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 222)));
    // 0x16bf84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16BF84u;
    {
        const bool branch_taken_0x16bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF84u;
        // 0x16bf88: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf84) {
            ctx->pc = 0x16BFB4u;
            goto label_16bfb4;
        }
    }
    ctx->pc = 0x16BF8Cu;
    // 0x16bf8c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16bf90: 0x2442ffe9  addiu       $v0, $v0, -0x17
    ctx->pc = 0x16bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
    // 0x16bf94: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x16bf94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16bf98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BF98u;
    {
        const bool branch_taken_0x16bf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bf98) {
            ctx->pc = 0x16BF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BF98u;
            // 0x16bf9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BFB8u;
            goto label_16bfb8;
        }
    }
    ctx->pc = 0x16BFA0u;
    // 0x16bfa0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16bfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bfa4: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x16BFA4u;
    SET_GPR_U32(ctx, 31, 0x16BFACu);
    ctx->pc = 0x16BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFA4u;
    // 0x16bfa8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x16BFA4u, 0x16BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFACu;
label_16bfac:
    // 0x16bfac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16BFACu;
    {
        const bool branch_taken_0x16bfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFACu;
        // 0x16bfb0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfac) {
            ctx->pc = 0x16BFB8u;
            goto label_16bfb8;
        }
    }
    ctx->pc = 0x16BFB4u;
label_16bfb4:
    // 0x16bfb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bfb8:
    // 0x16bfb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x16BFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFBCu;
        // 0x16bfc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BFC4u;
    // 0x16bfc4: 0x0  nop
    ctx->pc = 0x16bfc4u;
    // NOP
    ctx->pc = 0x16bfc8u;
}
