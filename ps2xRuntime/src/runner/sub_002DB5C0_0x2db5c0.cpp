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

// Function: sub_002DB5C0
// Address: 0x2db5c0 - 0x2db6b0
void sub_002DB5C0_0x2db5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB5C0_0x2db5c0");
#endif

    switch (ctx->pc) {
        case 0x2db620u: goto label_2db620;
        case 0x2db660u: goto label_2db660;
        case 0x2db690u: goto label_2db690;
        default: break;
    }

    ctx->pc = 0x2db5c0u;

    // 0x2db5c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2db5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2db5c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2db5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2db5c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2db5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2db5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2db5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2db5d4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2db5d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2db5d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2db5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db5dc: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2db5dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2db5e0: 0x1c40002c  bgtz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DB5E0u;
    {
        const bool branch_taken_0x2db5e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5E0u;
        // 0x2db5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5e0) {
            ctx->pc = 0x2DB694u;
            goto label_2db694;
        }
    }
    ctx->pc = 0x2DB5E8u;
    // 0x2db5e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db5ec: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2db5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2db5f0: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2db5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x2db5f4: 0xc614002c  lwc1        $f20, 0x2C($s0)
    ctx->pc = 0x2db5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db5f8: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x2db5f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2db5fc: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2db5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2db600: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2db600u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2db604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2db604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db608: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2db608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2db60c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db610: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2db610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2db614: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2db614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db618: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2DB618u;
    SET_GPR_U32(ctx, 31, 0x2DB620u);
    ctx->pc = 0x2DB61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB618u;
    // 0x2db61c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DB618u, 0x2DB620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB620u;
label_2db620:
    // 0x2db620: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2db620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db624: 0x0  nop
    ctx->pc = 0x2db624u;
    // NOP
    // 0x2db628: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB628u;
    {
        const bool branch_taken_0x2db628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB628u;
        // 0x2db62c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db628) {
            ctx->pc = 0x2DB63Cu;
            goto label_2db63c;
        }
    }
    ctx->pc = 0x2DB630u;
    // 0x2db630: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2db630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db634: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB634u;
    {
        const bool branch_taken_0x2db634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB634u;
        // 0x2db638: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db634) {
            ctx->pc = 0x2DB694u;
            goto label_2db694;
        }
    }
    ctx->pc = 0x2DB63Cu;
label_2db63c:
    // 0x2db63c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2db63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2db640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2db640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2db644: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x2db644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2db648: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB648u;
    {
        const bool branch_taken_0x2db648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB648u;
        // 0x2db64c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db648) {
            ctx->pc = 0x2DB658u;
            goto label_2db658;
        }
    }
    ctx->pc = 0x2DB650u;
    // 0x2db650: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DB650u;
    {
        const bool branch_taken_0x2db650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB650u;
        // 0x2db654: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db650) {
            ctx->pc = 0x2DB694u;
            goto label_2db694;
        }
    }
    ctx->pc = 0x2DB658u;
label_2db658:
    // 0x2db658: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2DB658u;
    SET_GPR_U32(ctx, 31, 0x2DB660u);
    ctx->pc = 0x2DB65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB658u;
    // 0x2db65c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DB658u, 0x2DB660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB660u;
label_2db660:
    // 0x2db660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db664: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DB664u;
    {
        const bool branch_taken_0x2db664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB664u;
        // 0x2db668: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db664) {
            ctx->pc = 0x2DB690u;
            goto label_2db690;
        }
    }
    ctx->pc = 0x2DB66Cu;
    // 0x2db66c: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x2db66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db670: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2db670u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2db674: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2db674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db678: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2db678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db67c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2db67cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db680: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x2db680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2db684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2db684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db688: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2DB688u;
    SET_GPR_U32(ctx, 31, 0x2DB690u);
    ctx->pc = 0x2DB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB688u;
    // 0x2db68c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DB688u, 0x2DB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB690u;
label_2db690:
    // 0x2db690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db694:
    // 0x2db694: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2db694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db698: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2db698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db69c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2db69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db6a0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2db6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6A4u;
        // 0x2db6a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB6ACu;
    // 0x2db6ac: 0x0  nop
    ctx->pc = 0x2db6acu;
    // NOP
    ctx->pc = 0x2db6b0u;
}
