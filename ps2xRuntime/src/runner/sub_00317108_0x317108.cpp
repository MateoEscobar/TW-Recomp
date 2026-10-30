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

// Function: sub_00317108
// Address: 0x317108 - 0x317218
void sub_00317108_0x317108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317108_0x317108");
#endif

    switch (ctx->pc) {
        case 0x317148u: goto label_317148;
        case 0x317150u: goto label_317150;
        case 0x31715cu: goto label_31715c;
        case 0x317170u: goto label_317170;
        case 0x317180u: goto label_317180;
        case 0x31718cu: goto label_31718c;
        case 0x317194u: goto label_317194;
        case 0x31719cu: goto label_31719c;
        case 0x3171d8u: goto label_3171d8;
        case 0x3171e4u: goto label_3171e4;
        default: break;
    }

    ctx->pc = 0x317108u;

    // 0x317108: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x317108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31710c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x317110: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x317110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x317114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x317114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317118: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x317118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31711c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31711cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317120: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x317120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x317124: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x317124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x317128: 0x241501f4  addiu       $s5, $zero, 0x1F4
    ctx->pc = 0x317128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x31712c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x317130: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x317130u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317134: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x317134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x317138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x317138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31713c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x317140: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x317140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x317144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x317144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_317148:
    // 0x317148: 0xc137826  jal         func_4DE098
    ctx->pc = 0x317148u;
    SET_GPR_U32(ctx, 31, 0x317150u);
    ctx->pc = 0x31714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317148u;
    // 0x31714c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x317148u, 0x317150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317150u;
label_317150:
    // 0x317150: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x317150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x317154: 0xc0e409a  jal         func_390268
    ctx->pc = 0x317154u;
    SET_GPR_U32(ctx, 31, 0x31715Cu);
    ctx->pc = 0x317158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317154u;
    // 0x317158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x317154u, 0x31715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31715Cu;
label_31715c:
    // 0x31715c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31715cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317160: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x317160u;
    {
        const bool branch_taken_0x317160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317160u;
        // 0x317164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317160) {
            ctx->pc = 0x3171E4u;
            goto label_3171e4;
        }
    }
    ctx->pc = 0x317168u;
    // 0x317168: 0xc089f98  jal         func_227E60
    ctx->pc = 0x317168u;
    SET_GPR_U32(ctx, 31, 0x317170u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x317168u, 0x317170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317170u;
label_317170:
    // 0x317170: 0x1056001d  beq         $v0, $s6, . + 4 + (0x1D << 2)
    ctx->pc = 0x317170u;
    {
        const bool branch_taken_0x317170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x317174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317170u;
        // 0x317174: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317170) {
            ctx->pc = 0x3171E8u;
            goto label_3171e8;
        }
    }
    ctx->pc = 0x317178u;
    // 0x317178: 0xc087502  jal         func_21D408
    ctx->pc = 0x317178u;
    SET_GPR_U32(ctx, 31, 0x317180u);
    ctx->pc = 0x31717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317178u;
    // 0x31717c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x317178u, 0x317180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317180u;
label_317180:
    // 0x317180: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317184: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x317184u;
    SET_GPR_U32(ctx, 31, 0x31718Cu);
    ctx->pc = 0x317188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317184u;
    // 0x317188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x317184u, 0x31718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31718Cu;
label_31718c:
    // 0x31718c: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x31718Cu;
    SET_GPR_U32(ctx, 31, 0x317194u);
    ctx->pc = 0x317190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31718Cu;
    // 0x317190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31718Cu, 0x317194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317194u;
label_317194:
    // 0x317194: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x317194u;
    SET_GPR_U32(ctx, 31, 0x31719Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x317194u, 0x31719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31719Cu;
label_31719c:
    // 0x31719c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31719cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3171a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3171a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3171a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3171a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171ac: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3171acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3171b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3171b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3171B4u;
    {
        const bool branch_taken_0x3171b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3171B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171B4u;
        // 0x3171b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171b4) {
            ctx->pc = 0x3171D8u;
            goto label_3171d8;
        }
    }
    ctx->pc = 0x3171BCu;
    // 0x3171bc: 0x86470028  lh          $a3, 0x28($s2)
    ctx->pc = 0x3171bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3171c0: 0x8648002a  lh          $t0, 0x2A($s2)
    ctx->pc = 0x3171c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x3171c4: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x3171c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3171c8: 0xc64d0024  lwc1        $f13, 0x24($s2)
    ctx->pc = 0x3171c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3171cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3171ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3171d0: 0xc0a8cc8  jal         func_2A3320
    ctx->pc = 0x3171D0u;
    SET_GPR_U32(ctx, 31, 0x3171D8u);
    ctx->pc = 0x3171D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3171D0u;
    // 0x3171d4: 0xafb50008  sw          $s5, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x3171D0u, 0x3171D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3171D8u;
label_3171d8:
    // 0x3171d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3171d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171dc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x3171DCu;
    SET_GPR_U32(ctx, 31, 0x3171E4u);
    ctx->pc = 0x3171E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3171DCu;
    // 0x3171e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x3171DCu, 0x3171E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3171E4u;
label_3171e4:
    // 0x3171e4: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x3171e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3171e8:
    // 0x3171e8: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3171E8u;
    {
        const bool branch_taken_0x3171e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3171e8) {
            ctx->pc = 0x3171ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3171E8u;
            // 0x3171ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317148;
        }
    }
    ctx->pc = 0x3171F0u;
    // 0x3171f0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3171f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3171f4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3171f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3171f8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3171f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3171fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3171fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x317200: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x317200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x317204: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x317204u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317208: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x317208u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31720c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31720cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317210: 0x3e00008  jr          $ra
    ctx->pc = 0x317210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317210u;
        // 0x317214: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317218u;
}
