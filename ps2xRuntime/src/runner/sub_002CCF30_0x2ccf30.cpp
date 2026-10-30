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

// Function: sub_002CCF30
// Address: 0x2ccf30 - 0x2ccfe0
void sub_002CCF30_0x2ccf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCF30_0x2ccf30");
#endif

    switch (ctx->pc) {
        case 0x2ccf6cu: goto label_2ccf6c;
        case 0x2ccf74u: goto label_2ccf74;
        case 0x2ccf84u: goto label_2ccf84;
        case 0x2ccf8cu: goto label_2ccf8c;
        case 0x2ccfb0u: goto label_2ccfb0;
        case 0x2ccfbcu: goto label_2ccfbc;
        default: break;
    }

    ctx->pc = 0x2ccf30u;

    // 0x2ccf30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ccf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ccf34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ccf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ccf38: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2ccf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2ccf3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ccf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ccf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ccf44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ccf44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf48: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2ccf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2ccf4c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ccf4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf50: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2ccf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2ccf54: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ccf54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf58: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2ccf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2ccf5c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2ccf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2ccf60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ccf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ccf64: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2CCF64u;
    SET_GPR_U32(ctx, 31, 0x2CCF6Cu);
    ctx->pc = 0x2CCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF64u;
    // 0x2ccf68: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CCF64u, 0x2CCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF6Cu;
label_2ccf6c:
    // 0x2ccf6c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2CCF6Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF74u);
    ctx->pc = 0x2CCF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF6Cu;
    // 0x2ccf70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2CCF6Cu, 0x2CCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF74u;
label_2ccf74:
    // 0x2ccf74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CCF74u;
    {
        const bool branch_taken_0x2ccf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF74u;
        // 0x2ccf78: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf74) {
            ctx->pc = 0x2CCFC0u;
            goto label_2ccfc0;
        }
    }
    ctx->pc = 0x2CCF7Cu;
    // 0x2ccf7c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2CCF7Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF84u);
    ctx->pc = 0x2CCF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF7Cu;
    // 0x2ccf80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CCF7Cu, 0x2CCF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF84u;
label_2ccf84:
    // 0x2ccf84: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2CCF84u;
    SET_GPR_U32(ctx, 31, 0x2CCF8Cu);
    ctx->pc = 0x2CCF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF84u;
    // 0x2ccf88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CCF84u, 0x2CCF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF8Cu;
label_2ccf8c:
    // 0x2ccf8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ccf8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf90: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCF90u;
    {
        const bool branch_taken_0x2ccf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF90u;
        // 0x2ccf94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf90) {
            ctx->pc = 0x2CCFB0u;
            goto label_2ccfb0;
        }
    }
    ctx->pc = 0x2CCF98u;
    // 0x2ccf98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ccf98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf9c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ccf9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfa0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2ccfa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfa8: 0xc0b33f8  jal         func_2CCFE0
    ctx->pc = 0x2CCFA8u;
    SET_GPR_U32(ctx, 31, 0x2CCFB0u);
    ctx->pc = 0x2CCFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCFA8u;
    // 0x2ccfac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFE0u, 0x2CCFA8u, 0x2CCFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFB0u;
label_2ccfb0:
    // 0x2ccfb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfb4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2CCFB4u;
    SET_GPR_U32(ctx, 31, 0x2CCFBCu);
    ctx->pc = 0x2CCFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCFB4u;
    // 0x2ccfb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CCFB4u, 0x2CCFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFBCu;
label_2ccfbc:
    // 0x2ccfbc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2ccfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ccfc0:
    // 0x2ccfc0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2ccfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ccfc4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2ccfc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ccfc8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ccfc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ccfcc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2ccfccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ccfd0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2ccfd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccfd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ccfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFD8u;
        // 0x2ccfdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCFE0u;
}
