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

// Function: sub_0026B328
// Address: 0x26b328 - 0x26b3d8
void sub_0026B328_0x26b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B328_0x26b328");
#endif

    switch (ctx->pc) {
        case 0x26b35cu: goto label_26b35c;
        case 0x26b380u: goto label_26b380;
        case 0x26b398u: goto label_26b398;
        case 0x26b3b8u: goto label_26b3b8;
        default: break;
    }

    ctx->pc = 0x26b328u;

    // 0x26b328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26b328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26b32c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26b330: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26b330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26b334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26b334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b338: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x26b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x26b33c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26b33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b344: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26b344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b348: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26b348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26b34c: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x26b34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x26b350: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x26b354: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x26B354u;
    SET_GPR_U32(ctx, 31, 0x26B35Cu);
    ctx->pc = 0x26B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B354u;
    // 0x26b358: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x26B354u, 0x26B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B35Cu;
label_26b35c:
    // 0x26b35c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x26B35Cu;
    {
        const bool branch_taken_0x26b35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b35c) {
            ctx->pc = 0x26B360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B35Cu;
            // 0x26b360: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B3BCu;
            goto label_26b3bc;
        }
    }
    ctx->pc = 0x26B364u;
    // 0x26b364: 0x56400015  bnel        $s2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x26B364u;
    {
        const bool branch_taken_0x26b364 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b364) {
            ctx->pc = 0x26B368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B364u;
            // 0x26b368: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B3BCu;
            goto label_26b3bc;
        }
    }
    ctx->pc = 0x26B36Cu;
    // 0x26b36c: 0x16300013  bne         $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26B36Cu;
    {
        const bool branch_taken_0x26b36c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x26B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B36Cu;
        // 0x26b370: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b36c) {
            ctx->pc = 0x26B3BCu;
            goto label_26b3bc;
        }
    }
    ctx->pc = 0x26B374u;
    // 0x26b374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b378: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x26B378u;
    SET_GPR_U32(ctx, 31, 0x26B380u);
    ctx->pc = 0x26B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B378u;
    // 0x26b37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x26B378u, 0x26B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B380u;
label_26b380:
    // 0x26b380: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x26b384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b388: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x26b388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x26b38c: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x26b38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x26b390: 0xc089988  jal         func_226620
    ctx->pc = 0x26B390u;
    SET_GPR_U32(ctx, 31, 0x26B398u);
    ctx->pc = 0x26B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B390u;
    // 0x26b394: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26B390u, 0x26B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B398u;
label_26b398:
    // 0x26b398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b39c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x26b39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x26b3a0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26b3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x26b3a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b3a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26b3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3ac: 0x24060126  addiu       $a2, $zero, 0x126
    ctx->pc = 0x26b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x26b3b0: 0xc09a9b4  jal         func_26A6D0
    ctx->pc = 0x26B3B0u;
    SET_GPR_U32(ctx, 31, 0x26B3B8u);
    ctx->pc = 0x26B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B3B0u;
    // 0x26b3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x26B3B0u, 0x26B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3B8u;
label_26b3b8:
    // 0x26b3b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26b3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26b3bc:
    // 0x26b3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b3c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26b3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b3c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26b3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x26B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3CCu;
        // 0x26b3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B3D4u;
    // 0x26b3d4: 0x0  nop
    ctx->pc = 0x26b3d4u;
    // NOP
    ctx->pc = 0x26b3d8u;
}
