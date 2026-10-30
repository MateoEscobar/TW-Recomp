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

// Function: sub_00316590
// Address: 0x316590 - 0x316638
void sub_00316590_0x316590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316590_0x316590");
#endif

    switch (ctx->pc) {
        case 0x3165c4u: goto label_3165c4;
        case 0x3165d8u: goto label_3165d8;
        case 0x31660cu: goto label_31660c;
        case 0x316618u: goto label_316618;
        default: break;
    }

    ctx->pc = 0x316590u;

    // 0x316590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x316590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x316594: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316598: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x316598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31659c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x31659cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3165a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3165a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3165a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3165a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3165a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3165ac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3165acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3165b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3165b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3165b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3165b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3165b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3165bc: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x3165BCu;
    SET_GPR_U32(ctx, 31, 0x3165C4u);
    ctx->pc = 0x3165C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3165BCu;
    // 0x3165c0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x3165BCu, 0x3165C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3165C4u;
label_3165c4:
    // 0x3165c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3165c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165c8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3165C8u;
    {
        const bool branch_taken_0x3165c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3165CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165C8u;
        // 0x3165cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165c8) {
            ctx->pc = 0x31661Cu;
            goto label_31661c;
        }
    }
    ctx->pc = 0x3165D0u;
    // 0x3165d0: 0xc0c1956  jal         func_306558
    ctx->pc = 0x3165D0u;
    SET_GPR_U32(ctx, 31, 0x3165D8u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x3165D0u, 0x3165D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3165D8u;
label_3165d8:
    // 0x3165d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3165d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165dc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3165DCu;
    {
        const bool branch_taken_0x3165dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3165E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165DCu;
        // 0x3165e0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165dc) {
            ctx->pc = 0x31660Cu;
            goto label_31660c;
        }
    }
    ctx->pc = 0x3165E4u;
    // 0x3165e4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x3165e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x3165e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3165e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3165ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3165ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3165f0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3165f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165f4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3165f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3165f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3165fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316604: 0xc0c78ee  jal         func_31E3B8
    ctx->pc = 0x316604u;
    SET_GPR_U32(ctx, 31, 0x31660Cu);
    ctx->pc = 0x316608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316604u;
    // 0x316608: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E3B8u, 0x316604u, 0x31660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31660Cu;
label_31660c:
    // 0x31660c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316610: 0xc059590  jal         func_165640
    ctx->pc = 0x316610u;
    SET_GPR_U32(ctx, 31, 0x316618u);
    ctx->pc = 0x316614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316610u;
    // 0x316614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316610u, 0x316618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316618u;
label_316618:
    // 0x316618: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x316618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31661c:
    // 0x31661c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31661cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316620: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x316620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316624: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x316624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316628: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x316628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31662c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31662cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316630: 0x3e00008  jr          $ra
    ctx->pc = 0x316630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316630u;
        // 0x316634: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316638u;
}
