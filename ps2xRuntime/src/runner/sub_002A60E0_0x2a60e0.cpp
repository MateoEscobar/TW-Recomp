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

// Function: sub_002A60E0
// Address: 0x2a60e0 - 0x2a6178
void sub_002A60E0_0x2a60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A60E0_0x2a60e0");
#endif

    switch (ctx->pc) {
        case 0x2a611cu: goto label_2a611c;
        case 0x2a6124u: goto label_2a6124;
        case 0x2a612cu: goto label_2a612c;
        case 0x2a614cu: goto label_2a614c;
        case 0x2a6158u: goto label_2a6158;
        default: break;
    }

    ctx->pc = 0x2a60e0u;

    // 0x2a60e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a60e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a60e4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a60e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a60e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a60e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a60ec: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a60ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2a60f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a60f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a60f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a60f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2a60f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2a60fc: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x2a60fcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a6100: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a6100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a6104: 0x7a403  sra         $s4, $a3, 16
    ctx->pc = 0x2a6104u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2a6108: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2a6108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2a610c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2a610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2a6110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6114: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A6114u;
    SET_GPR_U32(ctx, 31, 0x2A611Cu);
    ctx->pc = 0x2A6118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6114u;
    // 0x2a6118: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A6114u, 0x2A611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A611Cu;
label_2a611c:
    // 0x2a611c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A611Cu;
    SET_GPR_U32(ctx, 31, 0x2A6124u);
    ctx->pc = 0x2A6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A611Cu;
    // 0x2a6120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A611Cu, 0x2A6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6124u;
label_2a6124:
    // 0x2a6124: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A6124u;
    SET_GPR_U32(ctx, 31, 0x2A612Cu);
    ctx->pc = 0x2A6128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6124u;
    // 0x2a6128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A6124u, 0x2A612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A612Cu;
label_2a612c:
    // 0x2a612c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a612cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6130: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6130u;
    {
        const bool branch_taken_0x2a6130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6130u;
        // 0x2a6134: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6130) {
            ctx->pc = 0x2A614Cu;
            goto label_2a614c;
        }
    }
    ctx->pc = 0x2A6138u;
    // 0x2a6138: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a6138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a613c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a613cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6144: 0xc0a985e  jal         func_2A6178
    ctx->pc = 0x2A6144u;
    SET_GPR_U32(ctx, 31, 0x2A614Cu);
    ctx->pc = 0x2A6148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6144u;
    // 0x2a6148: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6178u, 0x2A6144u, 0x2A614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A614Cu;
label_2a614c:
    // 0x2a614c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6150: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A6150u;
    SET_GPR_U32(ctx, 31, 0x2A6158u);
    ctx->pc = 0x2A6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6150u;
    // 0x2a6154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A6150u, 0x2A6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6158u;
label_2a6158:
    // 0x2a6158: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2a6158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a615c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2a615cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6160: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a6160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a6164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6168: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2a6168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a616c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6170: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6170u;
        // 0x2a6174: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6178u;
}
