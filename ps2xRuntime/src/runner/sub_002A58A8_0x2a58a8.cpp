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

// Function: sub_002A58A8
// Address: 0x2a58a8 - 0x2a5958
void sub_002A58A8_0x2a58a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A58A8_0x2a58a8");
#endif

    switch (ctx->pc) {
        case 0x2a58f0u: goto label_2a58f0;
        case 0x2a58f8u: goto label_2a58f8;
        case 0x2a5900u: goto label_2a5900;
        case 0x2a5928u: goto label_2a5928;
        case 0x2a5934u: goto label_2a5934;
        default: break;
    }

    ctx->pc = 0x2a58a8u;

    // 0x2a58a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a58a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a58ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a58acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a58b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a58b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2a58b4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a58b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a58b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a58b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a58bc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a58bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2a58c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2a58c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2a58c4: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x2a58c4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a58c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2a58c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2a58cc: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x2a58ccu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a58d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a58d4: 0x7a403  sra         $s4, $a3, 16
    ctx->pc = 0x2a58d4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2a58d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a58d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2a58dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a58dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a58e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2a58e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a58e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A58E8u;
    SET_GPR_U32(ctx, 31, 0x2A58F0u);
    ctx->pc = 0x2A58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58E8u;
    // 0x2a58ec: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A58E8u, 0x2A58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58F0u;
label_2a58f0:
    // 0x2a58f0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A58F0u;
    SET_GPR_U32(ctx, 31, 0x2A58F8u);
    ctx->pc = 0x2A58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58F0u;
    // 0x2a58f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A58F0u, 0x2A58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58F8u;
label_2a58f8:
    // 0x2a58f8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A58F8u;
    SET_GPR_U32(ctx, 31, 0x2A5900u);
    ctx->pc = 0x2A58FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58F8u;
    // 0x2a58fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A58F8u, 0x2A5900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5900u;
label_2a5900:
    // 0x2a5900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5904: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5904u;
    {
        const bool branch_taken_0x2a5904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5904u;
        // 0x2a5908: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5904) {
            ctx->pc = 0x2A5928u;
            goto label_2a5928;
        }
    }
    ctx->pc = 0x2A590Cu;
    // 0x2a590c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a590cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5910: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2a5910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5914: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2a5914u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a591c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a591cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5920: 0xc0a9656  jal         func_2A5958
    ctx->pc = 0x2A5920u;
    SET_GPR_U32(ctx, 31, 0x2A5928u);
    ctx->pc = 0x2A5924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5920u;
    // 0x2a5924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5958u, 0x2A5920u, 0x2A5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5928u;
label_2a5928:
    // 0x2a5928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a592c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A592Cu;
    SET_GPR_U32(ctx, 31, 0x2A5934u);
    ctx->pc = 0x2A5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A592Cu;
    // 0x2a5930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A592Cu, 0x2A5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5934u;
label_2a5934:
    // 0x2a5934: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a5934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a5938: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a5938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a593c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a593cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a5940: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a5940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5944: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2a5944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5948: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2a5948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a594c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a594cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5950: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5950u;
        // 0x2a5954: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5958u;
}
