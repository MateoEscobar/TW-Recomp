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

// Function: sub_002A7810
// Address: 0x2a7810 - 0x2a78c8
void sub_002A7810_0x2a7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7810_0x2a7810");
#endif

    switch (ctx->pc) {
        case 0x2a782cu: goto label_2a782c;
        case 0x2a7834u: goto label_2a7834;
        case 0x2a7850u: goto label_2a7850;
        case 0x2a7874u: goto label_2a7874;
        case 0x2a7880u: goto label_2a7880;
        case 0x2a7890u: goto label_2a7890;
        case 0x2a78a8u: goto label_2a78a8;
        case 0x2a78b4u: goto label_2a78b4;
        default: break;
    }

    ctx->pc = 0x2a7810u;

    // 0x2a7810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7814: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a7814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a7818: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a7818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a781c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a7820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7824: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A7824u;
    SET_GPR_U32(ctx, 31, 0x2A782Cu);
    ctx->pc = 0x2A7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7824u;
    // 0x2a7828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A7824u, 0x2A782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A782Cu;
label_2a782c:
    // 0x2a782c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A782Cu;
    SET_GPR_U32(ctx, 31, 0x2A7834u);
    ctx->pc = 0x2A7830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A782Cu;
    // 0x2a7830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A782Cu, 0x2A7834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7834u;
label_2a7834:
    // 0x2a7834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a7834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7838: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a783c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a783cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a7840: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A7840u;
    {
        const bool branch_taken_0x2a7840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7840) {
            ctx->pc = 0x2A7888u;
            goto label_2a7888;
        }
    }
    ctx->pc = 0x2A7848u;
    // 0x2a7848: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A7848u;
    SET_GPR_U32(ctx, 31, 0x2A7850u);
    ctx->pc = 0x2A784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7848u;
    // 0x2a784c: 0xae20021c  sw          $zero, 0x21C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A7848u, 0x2A7850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7850u;
label_2a7850:
    // 0x2a7850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7854: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7854u;
    {
        const bool branch_taken_0x2a7854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7854u;
        // 0x2a7858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7854) {
            ctx->pc = 0x2A7874u;
            goto label_2a7874;
        }
    }
    ctx->pc = 0x2A785Cu;
    // 0x2a785c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a785cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7860: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a7864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a786c: 0xc0aab8c  jal         func_2AAE30
    ctx->pc = 0x2A786Cu;
    SET_GPR_U32(ctx, 31, 0x2A7874u);
    ctx->pc = 0x2A7870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A786Cu;
    // 0x2a7870: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAE30u, 0x2A786Cu, 0x2A7874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7874u;
label_2a7874:
    // 0x2a7874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7878: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A7878u;
    SET_GPR_U32(ctx, 31, 0x2A7880u);
    ctx->pc = 0x2A787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7878u;
    // 0x2a787c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A7878u, 0x2A7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7880u;
label_2a7880:
    // 0x2a7880: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A7880u;
    {
        const bool branch_taken_0x2a7880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7880u;
        // 0x2a7884: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7880) {
            ctx->pc = 0x2A78B8u;
            goto label_2a78b8;
        }
    }
    ctx->pc = 0x2A7888u;
label_2a7888:
    // 0x2a7888: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A7888u;
    SET_GPR_U32(ctx, 31, 0x2A7890u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A7888u, 0x2A7890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7890u;
label_2a7890:
    // 0x2a7890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7894: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7894u;
    {
        const bool branch_taken_0x2a7894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7894u;
        // 0x2a7898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7894) {
            ctx->pc = 0x2A78A8u;
            goto label_2a78a8;
        }
    }
    ctx->pc = 0x2A789Cu;
    // 0x2a789c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a789cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78a0: 0xc0b04ce  jal         func_2C1338
    ctx->pc = 0x2A78A0u;
    SET_GPR_U32(ctx, 31, 0x2A78A8u);
    ctx->pc = 0x2A78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A78A0u;
    // 0x2a78a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1338u, 0x2A78A0u, 0x2A78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A78A8u;
label_2a78a8:
    // 0x2a78a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a78a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78ac: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A78ACu;
    SET_GPR_U32(ctx, 31, 0x2A78B4u);
    ctx->pc = 0x2A78B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A78ACu;
    // 0x2a78b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A78ACu, 0x2A78B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A78B4u;
label_2a78b4:
    // 0x2a78b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a78b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a78b8:
    // 0x2a78b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a78b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a78bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a78bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a78c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A78C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78C0u;
        // 0x2a78c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A78C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A78C8u;
}
