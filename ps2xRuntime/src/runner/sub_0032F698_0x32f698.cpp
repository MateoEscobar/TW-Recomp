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

// Function: sub_0032F698
// Address: 0x32f698 - 0x32f780
void sub_0032F698_0x32f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F698_0x32f698");
#endif

    switch (ctx->pc) {
        case 0x32f6b8u: goto label_32f6b8;
        case 0x32f748u: goto label_32f748;
        case 0x32f768u: goto label_32f768;
        default: break;
    }

    ctx->pc = 0x32f698u;

    // 0x32f698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f6a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x32f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x32f6a4: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x32f6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x32f6a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32f6ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32f6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32f6b0: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F6B0u;
    SET_GPR_U32(ctx, 31, 0x32F6B8u);
    ctx->pc = 0x32F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F6B0u;
    // 0x32f6b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F6B0u, 0x32F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F6B8u;
label_32f6b8:
    // 0x32f6b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32f6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f6bc: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x32F6BCu;
    {
        const bool branch_taken_0x32f6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6BCu;
        // 0x32f6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f6bc) {
            ctx->pc = 0x32F76Cu;
            goto label_32f76c;
        }
    }
    ctx->pc = 0x32F6C4u;
    // 0x32f6c4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x32f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x32f6c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32f6cc: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x32f6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x32f6d0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x32f6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x32f6d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32f6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f6d8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32f6dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x32f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x32f6e0: 0x24a5f5f0  addiu       $a1, $a1, -0xA10
    ctx->pc = 0x32f6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964720));
    // 0x32f6e4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x32f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x32f6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f6ec: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x32f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x32f6f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32f6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f6f4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x32f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x32f6f8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x32f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x32f6fc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x32f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x32f700: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x32f700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x32f704: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x32f704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x32f708: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x32f708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x32f70c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x32f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x32f710: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x32f710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x32f714: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x32f714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x32f718: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x32f718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x32f71c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x32f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x32f720: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x32f720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x32f724: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x32f724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x32f728: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x32f728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x32f72c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x32f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x32f730: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x32f730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x32f734: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x32f734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
    // 0x32f738: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x32f738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x32f73c: 0xae08006c  sw          $t0, 0x6C($s0)
    ctx->pc = 0x32f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 8));
    // 0x32f740: 0xc0ca48e  jal         func_329238
    ctx->pc = 0x32F740u;
    SET_GPR_U32(ctx, 31, 0x32F748u);
    ctx->pc = 0x32F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F740u;
    // 0x32f744: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329238u, 0x32F740u, 0x32F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F748u;
label_32f748:
    // 0x32f748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F748u;
    {
        const bool branch_taken_0x32f748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F748u;
        // 0x32f74c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f748) {
            ctx->pc = 0x32F760u;
            goto label_32f760;
        }
    }
    ctx->pc = 0x32F750u;
    // 0x32f750: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x32f750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32f754: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32f754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32f758: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32F758u;
    {
        const bool branch_taken_0x32f758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F758u;
        // 0x32f75c: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f758) {
            ctx->pc = 0x32F76Cu;
            goto label_32f76c;
        }
    }
    ctx->pc = 0x32F760u;
label_32f760:
    // 0x32f760: 0xc0cbde0  jal         func_32F780
    ctx->pc = 0x32F760u;
    SET_GPR_U32(ctx, 31, 0x32F768u);
    ctx->pc = 0x32F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F760u;
    // 0x32f764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F780u, 0x32F760u, 0x32F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F768u;
label_32f768:
    // 0x32f768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f76c:
    // 0x32f76c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32f76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32f770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f774: 0x3e00008  jr          $ra
    ctx->pc = 0x32F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F774u;
        // 0x32f778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F77Cu;
    // 0x32f77c: 0x0  nop
    ctx->pc = 0x32f77cu;
    // NOP
    ctx->pc = 0x32f780u;
}
