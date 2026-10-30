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

// Function: sub_0029C1F0
// Address: 0x29c1f0 - 0x29c2e8
void sub_0029C1F0_0x29c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C1F0_0x29c1f0");
#endif

    switch (ctx->pc) {
        case 0x29c214u: goto label_29c214;
        case 0x29c224u: goto label_29c224;
        case 0x29c234u: goto label_29c234;
        case 0x29c244u: goto label_29c244;
        case 0x29c254u: goto label_29c254;
        case 0x29c26cu: goto label_29c26c;
        case 0x29c280u: goto label_29c280;
        case 0x29c2acu: goto label_29c2ac;
        default: break;
    }

    ctx->pc = 0x29c1f0u;

    // 0x29c1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29c1f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29c1f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29c1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29c1fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c200: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29c200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29c204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c20c: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x29C20Cu;
    SET_GPR_U32(ctx, 31, 0x29C214u);
    ctx->pc = 0x29C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C20Cu;
    // 0x29c210: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x29C20Cu, 0x29C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C214u;
label_29c214:
    // 0x29c214: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x29C214u;
    {
        const bool branch_taken_0x29c214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C214u;
        // 0x29c218: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c214) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C21Cu;
    // 0x29c21c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x29C21Cu;
    SET_GPR_U32(ctx, 31, 0x29C224u);
    ctx->pc = 0x29C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C21Cu;
    // 0x29c220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x29C21Cu, 0x29C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C224u;
label_29c224:
    // 0x29c224: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x29C224u;
    {
        const bool branch_taken_0x29c224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C224u;
        // 0x29c228: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c224) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C22Cu;
    // 0x29c22c: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x29C22Cu;
    SET_GPR_U32(ctx, 31, 0x29C234u);
    ctx->pc = 0x29C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C22Cu;
    // 0x29c230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x29C22Cu, 0x29C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C234u;
label_29c234:
    // 0x29c234: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29C234u;
    {
        const bool branch_taken_0x29c234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C234u;
        // 0x29c238: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c234) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C23Cu;
    // 0x29c23c: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x29C23Cu;
    SET_GPR_U32(ctx, 31, 0x29C244u);
    ctx->pc = 0x29C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C23Cu;
    // 0x29c240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x29C23Cu, 0x29C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C244u;
label_29c244:
    // 0x29c244: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x29C244u;
    {
        const bool branch_taken_0x29c244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C244u;
        // 0x29c248: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c244) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C24Cu;
    // 0x29c24c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C24Cu;
    SET_GPR_U32(ctx, 31, 0x29C254u);
    ctx->pc = 0x29C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C24Cu;
    // 0x29c250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C24Cu, 0x29C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C254u;
label_29c254:
    // 0x29c254: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29c258: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x29c258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x29c25c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x29C25Cu;
    {
        const bool branch_taken_0x29c25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C25Cu;
        // 0x29c260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c25c) {
            ctx->pc = 0x29C2CCu;
            goto label_29c2cc;
        }
    }
    ctx->pc = 0x29C264u;
    // 0x29c264: 0xc088976  jal         func_2225D8
    ctx->pc = 0x29C264u;
    SET_GPR_U32(ctx, 31, 0x29C26Cu);
    ctx->pc = 0x29C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C264u;
    // 0x29c268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225D8u, 0x29C264u, 0x29C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C26Cu;
label_29c26c:
    // 0x29c26c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c270: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x29C270u;
    {
        const bool branch_taken_0x29c270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C270u;
        // 0x29c274: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c270) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C278u;
    // 0x29c278: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C278u;
    SET_GPR_U32(ctx, 31, 0x29C280u);
    ctx->pc = 0x29C27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C278u;
    // 0x29c27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C278u, 0x29C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C280u;
label_29c280:
    // 0x29c280: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x29c280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x29c284: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29C284u;
    {
        const bool branch_taken_0x29c284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C284u;
        // 0x29c288: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c284) {
            ctx->pc = 0x29C2C8u;
            goto label_29c2c8;
        }
    }
    ctx->pc = 0x29C28Cu;
    // 0x29c28c: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x29c28cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x29c290: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x29c290u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x29c294: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x29c298: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29c298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x29c29c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29c29cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x29c2a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29c2a4: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x29C2A4u;
    SET_GPR_U32(ctx, 31, 0x29C2ACu);
    ctx->pc = 0x29C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2A4u;
    // 0x29c2a8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29C2A4u, 0x29C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2ACu;
label_29c2ac:
    // 0x29c2ac: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x29c2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x29c2b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29c2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c2b4: 0x0  nop
    ctx->pc = 0x29c2b4u;
    // NOP
    // 0x29c2b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c2bc: 0x0  nop
    ctx->pc = 0x29c2bcu;
    // NOP
    // 0x29c2c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C2C0u;
    {
        const bool branch_taken_0x29c2c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2C0u;
        // 0x29c2c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2c0) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C2C8u;
label_29c2c8:
    // 0x29c2c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29c2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c2cc:
    // 0x29c2cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29c2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29c2d0:
    // 0x29c2d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29c2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c2d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29c2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c2d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29c2d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2E0u;
        // 0x29c2e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C2E8u;
}
