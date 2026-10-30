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

// Function: sub_0030C5E0
// Address: 0x30c5e0 - 0x30c6c8
void sub_0030C5E0_0x30c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C5E0_0x30c5e0");
#endif

    switch (ctx->pc) {
        case 0x30c628u: goto label_30c628;
        case 0x30c630u: goto label_30c630;
        case 0x30c638u: goto label_30c638;
        case 0x30c664u: goto label_30c664;
        case 0x30c684u: goto label_30c684;
        default: break;
    }

    ctx->pc = 0x30c5e0u;

    // 0x30c5e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30c5e4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30c5e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30c5ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30c5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30c5f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30c5f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30c5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x30c5fc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30c5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x30c600: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x30c600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c604: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x30c604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30c608: 0x2415004f  addiu       $s5, $zero, 0x4F
    ctx->pc = 0x30c608u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x30c60c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x30c610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c614: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30c614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x30c618: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30c618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30c61c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30c620: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x30c620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30c624: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30c624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30c628:
    // 0x30c628: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30C628u;
    SET_GPR_U32(ctx, 31, 0x30C630u);
    ctx->pc = 0x30C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C628u;
    // 0x30c62c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30C628u, 0x30C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C630u;
label_30c630:
    // 0x30c630: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30C630u;
    SET_GPR_U32(ctx, 31, 0x30C638u);
    ctx->pc = 0x30C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C630u;
    // 0x30c634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30C630u, 0x30C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C638u;
label_30c638:
    // 0x30c638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c63c: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x30C63Cu;
    {
        const bool branch_taken_0x30c63c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c63c) {
            ctx->pc = 0x30C640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C63Cu;
            // 0x30c640: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C68Cu;
            goto label_30c68c;
        }
    }
    ctx->pc = 0x30C644u;
    // 0x30c644: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x30c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30c648: 0x54550010  bnel        $v0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x30C648u;
    {
        const bool branch_taken_0x30c648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x30c648) {
            ctx->pc = 0x30C64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C648u;
            // 0x30c64c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C68Cu;
            goto label_30c68c;
        }
    }
    ctx->pc = 0x30C650u;
    // 0x30c650: 0x92420031  lbu         $v0, 0x31($s2)
    ctx->pc = 0x30c650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x30c654: 0x5454000d  bnel        $v0, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x30C654u;
    {
        const bool branch_taken_0x30c654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x30c654) {
            ctx->pc = 0x30C658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C654u;
            // 0x30c658: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C68Cu;
            goto label_30c68c;
        }
    }
    ctx->pc = 0x30C65Cu;
    // 0x30c65c: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x30C65Cu;
    SET_GPR_U32(ctx, 31, 0x30C664u);
    ctx->pc = 0x30C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C65Cu;
    // 0x30c660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30C65Cu, 0x30C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C664u;
label_30c664:
    // 0x30c664: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x30c664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c668: 0x0  nop
    ctx->pc = 0x30c668u;
    // NOP
    // 0x30c66c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x30C66Cu;
    {
        const bool branch_taken_0x30c66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C66Cu;
        // 0x30c670: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c66c) {
            ctx->pc = 0x30C68Cu;
            goto label_30c68c;
        }
    }
    ctx->pc = 0x30C674u;
    // 0x30c674: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30c674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x30c678: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30c678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30c67c: 0xc088ba0  jal         func_222E80
    ctx->pc = 0x30C67Cu;
    SET_GPR_U32(ctx, 31, 0x30C684u);
    ctx->pc = 0x30C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C67Cu;
    // 0x30c680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30C67Cu, 0x30C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C684u;
label_30c684:
    // 0x30c684: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30C684u;
    {
        const bool branch_taken_0x30c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C684u;
        // 0x30c688: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c684) {
            ctx->pc = 0x30C69Cu;
            goto label_30c69c;
        }
    }
    ctx->pc = 0x30C68Cu;
label_30c68c:
    // 0x30c68c: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x30c68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30c690: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x30C690u;
    {
        const bool branch_taken_0x30c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C690u;
        // 0x30c694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c690) {
            ctx->pc = 0x30C628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c628;
        }
    }
    ctx->pc = 0x30C698u;
    // 0x30c698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c69c:
    // 0x30c69c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30c69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30c6a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30c6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c6a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30c6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c6a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30c6a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c6ac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30c6acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c6b0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x30c6b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c6b8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x30c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x30C6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6BCu;
        // 0x30c6c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C6C4u;
    // 0x30c6c4: 0x0  nop
    ctx->pc = 0x30c6c4u;
    // NOP
    ctx->pc = 0x30c6c8u;
}
