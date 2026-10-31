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

// Function: sub_0018E5F0
// Address: 0x18e5f0 - 0x18e6b8
void sub_0018E5F0_0x18e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E5F0_0x18e5f0");
#endif

    switch (ctx->pc) {
        case 0x18e620u: goto label_18e620;
        case 0x18e634u: goto label_18e634;
        case 0x18e658u: goto label_18e658;
        case 0x18e678u: goto label_18e678;
        case 0x18e68cu: goto label_18e68c;
        default: break;
    }

    ctx->pc = 0x18e5f0u;

    // 0x18e5f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e5f4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x18e5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18e5f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18e5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18e5fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18e600: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x18e600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e604: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e608: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e60c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e610: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18e610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e614: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x18e614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x18e618: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18e618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18e61c: 0x0  nop
    ctx->pc = 0x18e61cu;
    // NOP
label_18e620:
    // 0x18e620: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x18e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18e624: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18e624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18e628: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18e628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18e62c: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x18E62Cu;
    SET_GPR_U32(ctx, 31, 0x18E634u);
    ctx->pc = 0x18E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E62Cu;
    // 0x18e630: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x18E62Cu, 0x18E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E634u;
label_18e634:
    // 0x18e634: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18e634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18e638: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x18e638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18e63c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18E63Cu;
    {
        const bool branch_taken_0x18e63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E63Cu;
        // 0x18e640: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e63c) {
            ctx->pc = 0x18E620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e620;
        }
    }
    ctx->pc = 0x18E644u;
    // 0x18e644: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18e648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e64c: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x18e64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18e650: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e650u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x18e654: 0x0  nop
    ctx->pc = 0x18e654u;
    // NOP
label_18e658:
    // 0x18e658: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x18e658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18e65c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18e65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18e660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e668: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18e668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e66c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18e66cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e670: 0xc062d2a  jal         func_18B4A8
    ctx->pc = 0x18E670u;
    SET_GPR_U32(ctx, 31, 0x18E678u);
    ctx->pc = 0x18E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E670u;
    // 0x18e674: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4A8u, 0x18E670u, 0x18E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E678u;
label_18e678:
    // 0x18e678: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e67c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e680: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x18e680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18e684: 0xc062d18  jal         func_18B460
    ctx->pc = 0x18E684u;
    SET_GPR_U32(ctx, 31, 0x18E68Cu);
    ctx->pc = 0x18E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E684u;
    // 0x18e688: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B460u, 0x18E684u, 0x18E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E68Cu;
label_18e68c:
    // 0x18e68c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x18e68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18e690: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x18E690u;
    {
        const bool branch_taken_0x18e690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e690) {
            ctx->pc = 0x18E694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E690u;
            // 0x18e694: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e658;
        }
    }
    ctx->pc = 0x18E698u;
    // 0x18e698: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18e698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e69c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18e69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e6a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e6a8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x18e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18E6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6ACu;
        // 0x18e6b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E6B4u;
    // 0x18e6b4: 0x0  nop
    ctx->pc = 0x18e6b4u;
    // NOP
    ctx->pc = 0x18e6b8u;
}
