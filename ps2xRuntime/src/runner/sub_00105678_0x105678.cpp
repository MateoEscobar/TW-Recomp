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

// Function: sub_00105678
// Address: 0x105678 - 0x105740
void sub_00105678_0x105678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105678_0x105678");
#endif

    switch (ctx->pc) {
        case 0x1056d4u: goto label_1056d4;
        case 0x1056e4u: goto label_1056e4;
        case 0x1056f4u: goto label_1056f4;
        case 0x105714u: goto label_105714;
        default: break;
    }

    ctx->pc = 0x105678u;

    // 0x105678: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10567c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x10567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x105680: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x105680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x105684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105688: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x105688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x10568c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10568cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105690: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x105690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x105694: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x105694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x105698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10569c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10569cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1056a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1056a4: 0x244250d0  addiu       $v0, $v0, 0x50D0
    ctx->pc = 0x1056a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20688));
    // 0x1056a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1056a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1056ac: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1056acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1056b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1056b4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1056b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056b8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1056b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1056bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1056bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056c0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1056c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1056c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1056c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1056c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056cc: 0xc05d420  jal         func_175080
    ctx->pc = 0x1056CCu;
    SET_GPR_U32(ctx, 31, 0x1056D4u);
    ctx->pc = 0x1056D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056CCu;
    // 0x1056d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x1056CCu, 0x1056D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056D4u;
label_1056d4:
    // 0x1056d4: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x1056d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    // 0x1056d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1056d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056dc: 0xc04128e  jal         func_104A38
    ctx->pc = 0x1056DCu;
    SET_GPR_U32(ctx, 31, 0x1056E4u);
    ctx->pc = 0x1056E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056DCu;
    // 0x1056e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x1056DCu, 0x1056E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056E4u;
label_1056e4:
    // 0x1056e4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1056e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1056e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1056e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056ec: 0xc042ed8  jal         func_10BB60
    ctx->pc = 0x1056ECu;
    SET_GPR_U32(ctx, 31, 0x1056F4u);
    ctx->pc = 0x1056F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056ECu;
    // 0x1056f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x1056ECu, 0x1056F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056F4u;
label_1056f4:
    // 0x1056f4: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x1056f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x1056f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1056f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056fc: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x1056fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x105700: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x105700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105704: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x105704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105708: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x105708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x10570c: 0xc041164  jal         func_104590
    ctx->pc = 0x10570Cu;
    SET_GPR_U32(ctx, 31, 0x105714u);
    ctx->pc = 0x105710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10570Cu;
    // 0x105710: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10570Cu, 0x105714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105714u;
label_105714:
    // 0x105714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105718: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x105718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10571c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10571cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105720: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x105720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x105724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105728: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x105728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10572c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x10572cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105734: 0x3e00008  jr          $ra
    ctx->pc = 0x105734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105734u;
        // 0x105738: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10573Cu;
    // 0x10573c: 0x0  nop
    ctx->pc = 0x10573cu;
    // NOP
    ctx->pc = 0x105740u;
}
