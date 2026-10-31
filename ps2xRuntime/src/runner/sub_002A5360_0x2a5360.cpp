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

// Function: sub_002A5360
// Address: 0x2a5360 - 0x2a53d8
void sub_002A5360_0x2a5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5360_0x2a5360");
#endif

    switch (ctx->pc) {
        case 0x2a5380u: goto label_2a5380;
        case 0x2a5388u: goto label_2a5388;
        case 0x2a5390u: goto label_2a5390;
        case 0x2a53a4u: goto label_2a53a4;
        case 0x2a53b4u: goto label_2a53b4;
        case 0x2a53c0u: goto label_2a53c0;
        default: break;
    }

    ctx->pc = 0x2a5360u;

    // 0x2a5360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a5364: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a5364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a5368: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a5368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a536c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a536cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5370: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a5374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5378: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A5378u;
    SET_GPR_U32(ctx, 31, 0x2A5380u);
    ctx->pc = 0x2A537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5378u;
    // 0x2a537c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A5378u, 0x2A5380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5380u;
label_2a5380:
    // 0x2a5380: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A5380u;
    SET_GPR_U32(ctx, 31, 0x2A5388u);
    ctx->pc = 0x2A5384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5380u;
    // 0x2a5384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A5380u, 0x2A5388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5388u;
label_2a5388:
    // 0x2a5388: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A5388u;
    SET_GPR_U32(ctx, 31, 0x2A5390u);
    ctx->pc = 0x2A538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5388u;
    // 0x2a538c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A5388u, 0x2A5390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5390u;
label_2a5390:
    // 0x2a5390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5394: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5394u;
    {
        const bool branch_taken_0x2a5394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5394u;
        // 0x2a5398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5394) {
            ctx->pc = 0x2A53B8u;
            goto label_2a53b8;
        }
    }
    ctx->pc = 0x2A539Cu;
    // 0x2a539c: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2A539Cu;
    SET_GPR_U32(ctx, 31, 0x2A53A4u);
    ctx->pc = 0x2A53A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A539Cu;
    // 0x2a53a0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A539Cu, 0x2A53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53A4u;
label_2a53a4:
    // 0x2a53a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a53a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a53a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53ac: 0xc0a94f6  jal         func_2A53D8
    ctx->pc = 0x2A53ACu;
    SET_GPR_U32(ctx, 31, 0x2A53B4u);
    ctx->pc = 0x2A53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53ACu;
    // 0x2a53b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A53D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A53D8u, 0x2A53ACu, 0x2A53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53B4u;
label_2a53b4:
    // 0x2a53b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a53b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a53b8:
    // 0x2a53b8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A53B8u;
    SET_GPR_U32(ctx, 31, 0x2A53C0u);
    ctx->pc = 0x2A53BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53B8u;
    // 0x2a53bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A53B8u, 0x2A53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53C0u;
label_2a53c0:
    // 0x2a53c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a53c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a53c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a53c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a53c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a53c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a53cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A53CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53CCu;
        // 0x2a53d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A53CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A53D4u;
    // 0x2a53d4: 0x0  nop
    ctx->pc = 0x2a53d4u;
    // NOP
    ctx->pc = 0x2a53d8u;
}
