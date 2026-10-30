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

// Function: sub_002A57E8
// Address: 0x2a57e8 - 0x2a58a8
void sub_002A57E8_0x2a57e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A57E8_0x2a57e8");
#endif

    switch (ctx->pc) {
        case 0x2a5834u: goto label_2a5834;
        case 0x2a583cu: goto label_2a583c;
        case 0x2a5844u: goto label_2a5844;
        case 0x2a5858u: goto label_2a5858;
        case 0x2a5878u: goto label_2a5878;
        case 0x2a5884u: goto label_2a5884;
        default: break;
    }

    ctx->pc = 0x2a57e8u;

    // 0x2a57e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a57e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a57ec: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a57ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a57f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a57f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2a57f4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a57f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2a57f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a57f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a57fc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2a57fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2a5800: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2a5800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2a5804: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x2a5804u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a5808: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2a5808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2a580c: 0x7a403  sra         $s4, $a3, 16
    ctx->pc = 0x2a580cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2a5810: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a5810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a5814: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x2a5814u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2a5818: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a5818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2a581c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5820: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a5820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2a5824: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2a5824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a582c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A582Cu;
    SET_GPR_U32(ctx, 31, 0x2A5834u);
    ctx->pc = 0x2A5830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A582Cu;
    // 0x2a5830: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A582Cu, 0x2A5834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5834u;
label_2a5834:
    // 0x2a5834: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A5834u;
    SET_GPR_U32(ctx, 31, 0x2A583Cu);
    ctx->pc = 0x2A5838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5834u;
    // 0x2a5838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A5834u, 0x2A583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A583Cu;
label_2a583c:
    // 0x2a583c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A583Cu;
    SET_GPR_U32(ctx, 31, 0x2A5844u);
    ctx->pc = 0x2A5840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A583Cu;
    // 0x2a5840: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A583Cu, 0x2A5844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5844u;
label_2a5844:
    // 0x2a5844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5848: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A5848u;
    {
        const bool branch_taken_0x2a5848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5848u;
        // 0x2a584c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5848) {
            ctx->pc = 0x2A587Cu;
            goto label_2a587c;
        }
    }
    ctx->pc = 0x2A5850u;
    // 0x2a5850: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2A5850u;
    SET_GPR_U32(ctx, 31, 0x2A5858u);
    ctx->pc = 0x2A5854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5850u;
    // 0x2a5854: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A5850u, 0x2A5858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5858u;
label_2a5858:
    // 0x2a5858: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a5858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a585c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a585cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5860: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a5860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5864: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2a5864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5868: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a5868u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a586c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5870: 0xc0a9656  jal         func_2A5958
    ctx->pc = 0x2A5870u;
    SET_GPR_U32(ctx, 31, 0x2A5878u);
    ctx->pc = 0x2A5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5870u;
    // 0x2a5874: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5958u, 0x2A5870u, 0x2A5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5878u;
label_2a5878:
    // 0x2a5878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a587c:
    // 0x2a587c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A587Cu;
    SET_GPR_U32(ctx, 31, 0x2A5884u);
    ctx->pc = 0x2A5880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A587Cu;
    // 0x2a5880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A587Cu, 0x2A5884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5884u;
label_2a5884:
    // 0x2a5884: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a5884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a5888: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a5888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a588c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a588cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a5890: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a5890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5894: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2a5894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5898: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2a5898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a589c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a589cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a58a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A58A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58A0u;
        // 0x2a58a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A58A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A58A8u;
}
