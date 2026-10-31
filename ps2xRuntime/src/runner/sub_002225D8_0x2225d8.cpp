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

// Function: sub_002225D8
// Address: 0x2225d8 - 0x2226e0
void sub_002225D8_0x2225d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002225D8_0x2225d8");
#endif

    switch (ctx->pc) {
        case 0x222600u: goto label_222600;
        case 0x222614u: goto label_222614;
        case 0x222630u: goto label_222630;
        default: break;
    }

    ctx->pc = 0x2225d8u;

    // 0x2225d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2225d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2225dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2225dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2225e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2225e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2225e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2225e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2225e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2225e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2225ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2225f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2225f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2225f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2225f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225f8: 0xc08a200  jal         func_228800
    ctx->pc = 0x2225F8u;
    SET_GPR_U32(ctx, 31, 0x222600u);
    ctx->pc = 0x2225FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225F8u;
    // 0x2225fc: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2225F8u, 0x222600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222600u;
label_222600:
    // 0x222600: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x222600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x222604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222608: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x222608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x22260c: 0xc087502  jal         func_21D408
    ctx->pc = 0x22260Cu;
    SET_GPR_U32(ctx, 31, 0x222614u);
    ctx->pc = 0x222610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22260Cu;
    // 0x222610: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22260Cu, 0x222614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222614u;
label_222614:
    // 0x222614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222618: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22261c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x222620: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x222620u;
    {
        const bool branch_taken_0x222620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x222624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222620u;
        // 0x222624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222620) {
            ctx->pc = 0x2226C0u;
            goto label_2226c0;
        }
    }
    ctx->pc = 0x222628u;
    // 0x222628: 0xc0a4138  jal         func_2904E0
    ctx->pc = 0x222628u;
    SET_GPR_U32(ctx, 31, 0x222630u);
    ctx->pc = 0x22262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222628u;
    // 0x22262c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2904E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2904E0u, 0x222628u, 0x222630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222630u;
label_222630:
    // 0x222630: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x222630u;
    {
        const bool branch_taken_0x222630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222630) {
            ctx->pc = 0x222634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222630u;
            // 0x222634: 0x920202d0  lbu         $v0, 0x2D0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222644u;
            goto label_222644;
        }
    }
    ctx->pc = 0x222638u;
    // 0x222638: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x222638u;
    {
        const bool branch_taken_0x222638 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222638u;
        // 0x22263c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222638) {
            ctx->pc = 0x2226C0u;
            goto label_2226c0;
        }
    }
    ctx->pc = 0x222640u;
    // 0x222640: 0x920202d0  lbu         $v0, 0x2D0($s0)
    ctx->pc = 0x222640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
label_222644:
    // 0x222644: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x222644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x222648: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x222648u;
    {
        const bool branch_taken_0x222648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222648) {
            ctx->pc = 0x22264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222648u;
            // 0x22264c: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222658u;
            goto label_222658;
        }
    }
    ctx->pc = 0x222650u;
    // 0x222650: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x222650u;
    {
        const bool branch_taken_0x222650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222650u;
        // 0x222654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222650) {
            ctx->pc = 0x2226C0u;
            goto label_2226c0;
        }
    }
    ctx->pc = 0x222658u;
label_222658:
    // 0x222658: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x222658u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22265c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22265Cu;
    {
        const bool branch_taken_0x22265c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22265Cu;
        // 0x222660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22265c) {
            ctx->pc = 0x2226C0u;
            goto label_2226c0;
        }
    }
    ctx->pc = 0x222664u;
    // 0x222664: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x222664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x222668: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x222668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x22266c: 0xc4420ad4  lwc1        $f2, 0xAD4($v0)
    ctx->pc = 0x22266cu;
    { uint32_t bits = FAST_READ32(0x510AD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222670: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x222670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x222674: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x222674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x222678: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x222678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x22267c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22267cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222680: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x222680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x222684: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x222688: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x222688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x22268c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x22268cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x222690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222694: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x222694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222698: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x222698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x22269c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2226a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2226a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2226a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2226a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2226a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2226a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2226ac: 0x0  nop
    ctx->pc = 0x2226acu;
    // NOP
    // 0x2226b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2226B0u;
    {
        const bool branch_taken_0x2226b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2226B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226B0u;
        // 0x2226b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226b0) {
            ctx->pc = 0x2226BCu;
            goto label_2226bc;
        }
    }
    ctx->pc = 0x2226B8u;
    // 0x2226b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2226b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2226bc:
    // 0x2226bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2226bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2226c0:
    // 0x2226c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2226c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2226c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2226c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2226c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2226c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2226cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2226ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2226d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2226d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2226d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2226D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2226D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226D4u;
        // 0x2226d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2226D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2226DCu;
    // 0x2226dc: 0x0  nop
    ctx->pc = 0x2226dcu;
    // NOP
    ctx->pc = 0x2226e0u;
}
