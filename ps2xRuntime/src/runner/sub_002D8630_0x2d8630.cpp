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

// Function: sub_002D8630
// Address: 0x2d8630 - 0x2d87b0
void sub_002D8630_0x2d8630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8630_0x2d8630");
#endif

    switch (ctx->pc) {
        case 0x2d8674u: goto label_2d8674;
        case 0x2d8690u: goto label_2d8690;
        case 0x2d86a0u: goto label_2d86a0;
        case 0x2d86a4u: goto label_2d86a4;
        case 0x2d86bcu: goto label_2d86bc;
        case 0x2d86d0u: goto label_2d86d0;
        case 0x2d86dcu: goto label_2d86dc;
        case 0x2d86f0u: goto label_2d86f0;
        case 0x2d8708u: goto label_2d8708;
        case 0x2d8724u: goto label_2d8724;
        case 0x2d8744u: goto label_2d8744;
        case 0x2d8754u: goto label_2d8754;
        case 0x2d8784u: goto label_2d8784;
        default: break;
    }

    ctx->pc = 0x2d8630u;

    // 0x2d8630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d8630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d8634: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d8634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d8638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d863c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d863cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8640: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d8640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d8644: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d8644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8648: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d8648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d864c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8650: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8654: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2d8654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2d8658: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8658u;
    {
        const bool branch_taken_0x2d8658 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8658u;
        // 0x2d865c: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8658) {
            ctx->pc = 0x2D86A4u;
            goto label_2d86a4;
        }
    }
    ctx->pc = 0x2D8660u;
    // 0x2d8660: 0x92030024  lbu         $v1, 0x24($s0)
    ctx->pc = 0x2d8660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d8664: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8664u;
    {
        const bool branch_taken_0x2d8664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8664) {
            ctx->pc = 0x2D86ACu;
            goto label_2d86ac;
        }
    }
    ctx->pc = 0x2D866Cu;
    // 0x2d866c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D866Cu;
    SET_GPR_U32(ctx, 31, 0x2D8674u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D866Cu, 0x2D8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8674u;
label_2d8674:
    // 0x2d8674: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8678: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8678u;
    {
        const bool branch_taken_0x2d8678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8678u;
        // 0x2d867c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8678) {
            ctx->pc = 0x2D86A0u;
            goto label_2d86a0;
        }
    }
    ctx->pc = 0x2D8680u;
    // 0x2d8680: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x2d8680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2d8684: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d8684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2d8688: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2D8688u;
    SET_GPR_U32(ctx, 31, 0x2D8690u);
    ctx->pc = 0x2D868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8688u;
    // 0x2d868c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D8688u, 0x2D8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8690u;
label_2d8690:
    // 0x2d8690: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d8690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8698: 0xc0bebdc  jal         func_2FAF70
    ctx->pc = 0x2D8698u;
    SET_GPR_U32(ctx, 31, 0x2D86A0u);
    ctx->pc = 0x2D869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8698u;
    // 0x2d869c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2D8698u, 0x2D86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86A0u;
label_2d86a0:
    // 0x2d86a0: 0xa2120024  sb          $s2, 0x24($s0)
    ctx->pc = 0x2d86a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 18));
label_2d86a4:
    // 0x2d86a4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2D86A4u;
    {
        const bool branch_taken_0x2d86a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86A4u;
        // 0x2d86a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86a4) {
            ctx->pc = 0x2D8794u;
            goto label_2d8794;
        }
    }
    ctx->pc = 0x2D86ACu;
label_2d86ac:
    // 0x2d86ac: 0x14720021  bne         $v1, $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D86ACu;
    {
        const bool branch_taken_0x2d86ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86ACu;
        // 0x2d86b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86ac) {
            ctx->pc = 0x2D8734u;
            goto label_2d8734;
        }
    }
    ctx->pc = 0x2D86B4u;
    // 0x2d86b4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D86B4u;
    SET_GPR_U32(ctx, 31, 0x2D86BCu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D86B4u, 0x2D86BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86BCu;
label_2d86bc:
    // 0x2d86bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D86BCu;
    {
        const bool branch_taken_0x2d86bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86BCu;
        // 0x2d86c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86bc) {
            ctx->pc = 0x2D86D0u;
            goto label_2d86d0;
        }
    }
    ctx->pc = 0x2D86C4u;
    // 0x2d86c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d86c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d86c8: 0xc0bebdc  jal         func_2FAF70
    ctx->pc = 0x2D86C8u;
    SET_GPR_U32(ctx, 31, 0x2D86D0u);
    ctx->pc = 0x2D86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D86C8u;
    // 0x2d86cc: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2D86C8u, 0x2D86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86D0u;
label_2d86d0:
    // 0x2d86d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d86d4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D86D4u;
    SET_GPR_U32(ctx, 31, 0x2D86DCu);
    ctx->pc = 0x2D86D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D86D4u;
    // 0x2d86d8: 0x26120010  addiu       $s2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D86D4u, 0x2D86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86DCu;
label_2d86dc:
    // 0x2d86dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d86dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86e0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D86E0u;
    {
        const bool branch_taken_0x2d86e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d86e0) {
            ctx->pc = 0x2D8708u;
            goto label_2d8708;
        }
    }
    ctx->pc = 0x2D86E8u;
    // 0x2d86e8: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2D86E8u;
    SET_GPR_U32(ctx, 31, 0x2D86F0u);
    ctx->pc = 0x2D86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D86E8u;
    // 0x2d86ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D86E8u, 0x2D86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86F0u;
label_2d86f0:
    // 0x2d86f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d86f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d86f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d86f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d86f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d86fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d86fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8700: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2D8700u;
    SET_GPR_U32(ctx, 31, 0x2D8708u);
    ctx->pc = 0x2D8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8700u;
    // 0x2d8704: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D8700u, 0x2D8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8708u;
label_2d8708:
    // 0x2d8708: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d8708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d870c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d870cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8710: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2d8710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
    // 0x2d8714: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d8714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8718: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2d8718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2d871c: 0xc0a67ca  jal         func_299F28
    ctx->pc = 0x2D871Cu;
    SET_GPR_U32(ctx, 31, 0x2D8724u);
    ctx->pc = 0x2D8720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D871Cu;
    // 0x2d8720: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x2D871Cu, 0x2D8724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8724u;
label_2d8724:
    // 0x2d8724: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d872c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D872Cu;
    {
        const bool branch_taken_0x2d872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D872Cu;
        // 0x2d8730: 0xa2030024  sb          $v1, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d872c) {
            ctx->pc = 0x2D8794u;
            goto label_2d8794;
        }
    }
    ctx->pc = 0x2D8734u;
label_2d8734:
    // 0x2d8734: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D8734u;
    {
        const bool branch_taken_0x2d8734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8734u;
        // 0x2d8738: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8734) {
            ctx->pc = 0x2D8794u;
            goto label_2d8794;
        }
    }
    ctx->pc = 0x2D873Cu;
    // 0x2d873c: 0xc0b6186  jal         func_2D8618
    ctx->pc = 0x2D873Cu;
    SET_GPR_U32(ctx, 31, 0x2D8744u);
    ctx->pc = 0x2D8740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D873Cu;
    // 0x2d8740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8618u, 0x2D873Cu, 0x2D8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8744u;
label_2d8744:
    // 0x2d8744: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8744u;
    {
        const bool branch_taken_0x2d8744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8744u;
        // 0x2d8748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8744) {
            ctx->pc = 0x2D8794u;
            goto label_2d8794;
        }
    }
    ctx->pc = 0x2D874Cu;
    // 0x2d874c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D874Cu;
    SET_GPR_U32(ctx, 31, 0x2D8754u);
    ctx->pc = 0x2D8750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D874Cu;
    // 0x2d8750: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D874Cu, 0x2D8754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8754u;
label_2d8754:
    // 0x2d8754: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8754u;
    {
        const bool branch_taken_0x2d8754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8754u;
        // 0x2d8758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8754) {
            ctx->pc = 0x2D8784u;
            goto label_2d8784;
        }
    }
    ctx->pc = 0x2D875Cu;
    // 0x2d875c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2d8760: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d8760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d8764: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8768: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d8768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d876c: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d876cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2d8770: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d8770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8774: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d8774u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d8778: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d8778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d877c: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2D877Cu;
    SET_GPR_U32(ctx, 31, 0x2D8784u);
    ctx->pc = 0x2D8780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D877Cu;
    // 0x2d8780: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D877Cu, 0x2D8784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8784u;
label_2d8784:
    // 0x2d8784: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d8784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8788: 0xa2600284  sb          $zero, 0x284($s3)
    ctx->pc = 0x2d8788u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 644), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d878c: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x2D878Cu;
    {
        const bool branch_taken_0x2d878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D878Cu;
        // 0x2d8790: 0xa2020024  sb          $v0, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d878c) {
            ctx->pc = 0x2D86A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d86a4;
        }
    }
    ctx->pc = 0x2D8794u;
label_2d8794:
    // 0x2d8794: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d8794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8798: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d8798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d879c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d879cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d87a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d87a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d87a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d87a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d87a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D87A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87A8u;
        // 0x2d87ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D87A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D87B0u;
}
