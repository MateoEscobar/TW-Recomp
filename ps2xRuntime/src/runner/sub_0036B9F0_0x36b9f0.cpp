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

// Function: sub_0036B9F0
// Address: 0x36b9f0 - 0x36bac0
void sub_0036B9F0_0x36b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B9F0_0x36b9f0");
#endif

    switch (ctx->pc) {
        case 0x36ba10u: goto label_36ba10;
        case 0x36ba28u: goto label_36ba28;
        case 0x36ba30u: goto label_36ba30;
        case 0x36ba48u: goto label_36ba48;
        case 0x36ba50u: goto label_36ba50;
        case 0x36ba64u: goto label_36ba64;
        case 0x36ba7cu: goto label_36ba7c;
        case 0x36ba90u: goto label_36ba90;
        default: break;
    }

    ctx->pc = 0x36b9f0u;

    // 0x36b9f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36b9f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x36b9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x36b9f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x36b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x36b9fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36b9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36ba04: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36ba04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36ba0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36ba0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36ba10:
    // 0x36ba10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ba10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ba14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ba14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ba1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ba1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba20: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36BA20u;
    SET_GPR_U32(ctx, 31, 0x36BA28u);
    ctx->pc = 0x36BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA20u;
    // 0x36ba24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36BA20u, 0x36BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA28u;
label_36ba28:
    // 0x36ba28: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36BA28u;
    SET_GPR_U32(ctx, 31, 0x36BA30u);
    ctx->pc = 0x36BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA28u;
    // 0x36ba2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36BA28u, 0x36BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA30u;
label_36ba30:
    // 0x36ba30: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x36ba30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x36ba34: 0x2a020017  slti        $v0, $s0, 0x17
    ctx->pc = 0x36ba34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x36ba38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36BA38u;
    {
        const bool branch_taken_0x36ba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA38u;
        // 0x36ba3c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ba38) {
            ctx->pc = 0x36BA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ba10;
        }
    }
    ctx->pc = 0x36BA40u;
    // 0x36ba40: 0xc07c9b8  jal         func_1F26E0
    ctx->pc = 0x36BA40u;
    SET_GPR_U32(ctx, 31, 0x36BA48u);
    ctx->pc = 0x36BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA40u;
    // 0x36ba44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26E0u, 0x36BA40u, 0x36BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA48u;
label_36ba48:
    // 0x36ba48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba4c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x36ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_36ba50:
    // 0x36ba50: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x36ba50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36ba54: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36ba58: 0x84700000  lh          $s0, 0x0($v1)
    ctx->pc = 0x36ba58u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ba5c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36BA5Cu;
    SET_GPR_U32(ctx, 31, 0x36BA64u);
    ctx->pc = 0x36BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA5Cu;
    // 0x36ba60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36BA5Cu, 0x36BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA64u;
label_36ba64:
    // 0x36ba64: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36BA64u;
    {
        const bool branch_taken_0x36ba64 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA64u;
        // 0x36ba68: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ba64) {
            ctx->pc = 0x36BA80u;
            goto label_36ba80;
        }
    }
    ctx->pc = 0x36BA6Cu;
    // 0x36ba6c: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x36ba6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x36ba70: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36ba70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36ba74: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36BA74u;
    SET_GPR_U32(ctx, 31, 0x36BA7Cu);
    ctx->pc = 0x36BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA74u;
    // 0x36ba78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36BA74u, 0x36BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA7Cu;
label_36ba7c:
    // 0x36ba7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36ba7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ba80:
    // 0x36ba80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36ba80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba88: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36BA88u;
    SET_GPR_U32(ctx, 31, 0x36BA90u);
    ctx->pc = 0x36BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA88u;
    // 0x36ba8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36BA88u, 0x36BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA90u;
label_36ba90:
    // 0x36ba90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36ba90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba94: 0x28c20017  slti        $v0, $a2, 0x17
    ctx->pc = 0x36ba94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x36ba98: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x36BA98u;
    {
        const bool branch_taken_0x36ba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA98u;
        // 0x36ba9c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ba98) {
            ctx->pc = 0x36BA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ba50;
        }
    }
    ctx->pc = 0x36BAA0u;
    // 0x36baa0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x36baa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36baa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36baa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baa8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x36baa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36baac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36baacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36bab0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36bab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36bab4: 0x3e00008  jr          $ra
    ctx->pc = 0x36BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BAB4u;
        // 0x36bab8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BABCu;
    // 0x36babc: 0x0  nop
    ctx->pc = 0x36babcu;
    // NOP
    ctx->pc = 0x36bac0u;
}
