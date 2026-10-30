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

// Function: sub_0041DC80
// Address: 0x41dc80 - 0x41dcf0
void sub_0041DC80_0x41dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DC80_0x41dc80");
#endif

    switch (ctx->pc) {
        case 0x41dca8u: goto label_41dca8;
        case 0x41dcb0u: goto label_41dcb0;
        case 0x41dcd4u: goto label_41dcd4;
        default: break;
    }

    ctx->pc = 0x41dc80u;

    // 0x41dc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41dc84: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x41dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41dc88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41dc8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41dc90: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x41dc90u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41dc94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x41dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x41dc98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x41dc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41dca0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x41DCA0u;
    SET_GPR_U32(ctx, 31, 0x41DCA8u);
    ctx->pc = 0x41DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DCA0u;
    // 0x41dca4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41DCA0u, 0x41DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DCA8u;
label_41dca8:
    // 0x41dca8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x41DCA8u;
    SET_GPR_U32(ctx, 31, 0x41DCB0u);
    ctx->pc = 0x41DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DCA8u;
    // 0x41dcac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x41DCA8u, 0x41DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DCB0u;
label_41dcb0:
    // 0x41dcb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41dcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dcb4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x41DCB4u;
    {
        const bool branch_taken_0x41dcb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DCB4u;
        // 0x41dcb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dcb4) {
            ctx->pc = 0x41DCD4u;
            goto label_41dcd4;
        }
    }
    ctx->pc = 0x41DCBCu;
    // 0x41dcbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41dcbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dcc0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x41dcc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x41dcc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dcc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41dcc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dccc: 0xc107138  jal         func_41C4E0
    ctx->pc = 0x41DCCCu;
    SET_GPR_U32(ctx, 31, 0x41DCD4u);
    ctx->pc = 0x41DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DCCCu;
    // 0x41dcd0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x41DCCCu, 0x41DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DCD4u;
label_41dcd4:
    // 0x41dcd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41dcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41dcd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41dcd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41dcdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41dcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41dce0: 0x3e00008  jr          $ra
    ctx->pc = 0x41DCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DCE0u;
        // 0x41dce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DCE8u;
    // 0x41dce8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x41dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x41dcec: 0x0  nop
    ctx->pc = 0x41dcecu;
    // NOP
    ctx->pc = 0x41dcf0u;
}
