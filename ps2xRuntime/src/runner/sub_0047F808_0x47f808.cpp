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

// Function: sub_0047F808
// Address: 0x47f808 - 0x47f8b0
void sub_0047F808_0x47f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F808_0x47f808");
#endif

    switch (ctx->pc) {
        case 0x47f834u: goto label_47f834;
        case 0x47f83cu: goto label_47f83c;
        case 0x47f850u: goto label_47f850;
        case 0x47f868u: goto label_47f868;
        case 0x47f878u: goto label_47f878;
        default: break;
    }

    ctx->pc = 0x47f808u;

    // 0x47f808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47f808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47f80c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47f80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f810: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47f810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x47f814: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x47f814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f818: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47f818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x47f81c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47f81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f820: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47f820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47f828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f82c: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x47F82Cu;
    SET_GPR_U32(ctx, 31, 0x47F834u);
    ctx->pc = 0x47F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F82Cu;
    // 0x47f830: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x47F82Cu, 0x47F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F834u;
label_47f834:
    // 0x47f834: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47F834u;
    {
        const bool branch_taken_0x47f834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F834u;
        // 0x47f838: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f834) {
            ctx->pc = 0x47F844u;
            goto label_47f844;
        }
    }
    ctx->pc = 0x47F83Cu;
label_47f83c:
    // 0x47f83c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x47F83Cu;
    {
        const bool branch_taken_0x47f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F83Cu;
        // 0x47f840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f83c) {
            ctx->pc = 0x47F898u;
            goto label_47f898;
        }
    }
    ctx->pc = 0x47F844u;
label_47f844:
    // 0x47f844: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x47F844u;
    {
        const bool branch_taken_0x47f844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F844u;
        // 0x47f848: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f844) {
            ctx->pc = 0x47F898u;
            goto label_47f898;
        }
    }
    ctx->pc = 0x47F84Cu;
    // 0x47f84c: 0x0  nop
    ctx->pc = 0x47f84cu;
    // NOP
label_47f850:
    // 0x47f850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47f850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47f854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f858: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x47f858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x47f85c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47f85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f860: 0xc11efa8  jal         func_47BEA0
    ctx->pc = 0x47F860u;
    SET_GPR_U32(ctx, 31, 0x47F868u);
    ctx->pc = 0x47F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F860u;
    // 0x47f864: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BEA0u, 0x47F860u, 0x47F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F868u;
label_47f868:
    // 0x47f868: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x47F868u;
    {
        const bool branch_taken_0x47f868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F868u;
        // 0x47f86c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f868) {
            ctx->pc = 0x47F83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f83c;
        }
    }
    ctx->pc = 0x47F870u;
    // 0x47f870: 0xc11fc30  jal         func_47F0C0
    ctx->pc = 0x47F870u;
    SET_GPR_U32(ctx, 31, 0x47F878u);
    ctx->pc = 0x47F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F870u;
    // 0x47f874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F0C0u, 0x47F870u, 0x47F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F878u;
label_47f878:
    // 0x47f878: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x47F878u;
    {
        const bool branch_taken_0x47f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F878u;
        // 0x47f87c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f878) {
            ctx->pc = 0x47F83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f83c;
        }
    }
    ctx->pc = 0x47F880u;
    // 0x47f880: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x47f880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x47f884: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x47f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x47f888: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x47f888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47f88c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x47F88Cu;
    {
        const bool branch_taken_0x47f88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F88Cu;
        // 0x47f890: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f88c) {
            ctx->pc = 0x47F850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f850;
        }
    }
    ctx->pc = 0x47F894u;
    // 0x47f894: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47f894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f898:
    // 0x47f898: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47f898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47f89c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47f89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47f8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47f8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x47F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8A4u;
        // 0x47f8a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F8ACu;
    // 0x47f8ac: 0x0  nop
    ctx->pc = 0x47f8acu;
    // NOP
    ctx->pc = 0x47f8b0u;
}
