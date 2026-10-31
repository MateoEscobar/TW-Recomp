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

// Function: sub_0032F780
// Address: 0x32f780 - 0x32f870
void sub_0032F780_0x32f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F780_0x32f780");
#endif

    switch (ctx->pc) {
        case 0x32f798u: goto label_32f798;
        case 0x32f7a0u: goto label_32f7a0;
        case 0x32f7dcu: goto label_32f7dc;
        case 0x32f804u: goto label_32f804;
        case 0x32f82cu: goto label_32f82c;
        case 0x32f84cu: goto label_32f84c;
        case 0x32f85cu: goto label_32f85c;
        default: break;
    }

    ctx->pc = 0x32f780u;

    // 0x32f780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32f784: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32f784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f788: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32f78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f790: 0xc0ca82e  jal         func_32A0B8
    ctx->pc = 0x32F790u;
    SET_GPR_U32(ctx, 31, 0x32F798u);
    ctx->pc = 0x32F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F790u;
    // 0x32f794: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A0B8u, 0x32F790u, 0x32F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F798u;
label_32f798:
    // 0x32f798: 0xc0cbe40  jal         func_32F900
    ctx->pc = 0x32F798u;
    SET_GPR_U32(ctx, 31, 0x32F7A0u);
    ctx->pc = 0x32F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F798u;
    // 0x32f79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F900u, 0x32F798u, 0x32F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F7A0u;
label_32f7a0:
    // 0x32f7a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32f7a4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x32F7A4u;
    {
        const bool branch_taken_0x32f7a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f7a4) {
            ctx->pc = 0x32F7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F7A4u;
            // 0x32f7a8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F7D0u;
            goto label_32f7d0;
        }
    }
    ctx->pc = 0x32F7ACu;
    // 0x32f7ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32f7b0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x32f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32f7b4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x32f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32f7b8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x32f7b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x32f7bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f7c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f7c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x32f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32f7c8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x32f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x32f7cc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x32f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32f7d0:
    // 0x32f7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f7d4: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F7D4u;
    SET_GPR_U32(ctx, 31, 0x32F7DCu);
    ctx->pc = 0x32F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F7D4u;
    // 0x32f7d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F7D4u, 0x32F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F7DCu;
label_32f7dc:
    // 0x32f7dc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x32f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x32f7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f7e4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x32f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32f7e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32f7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f7ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f7f0: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x32f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x32f7f4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x32f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x32f7f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f7fc: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F7FCu;
    SET_GPR_U32(ctx, 31, 0x32F804u);
    ctx->pc = 0x32F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F7FCu;
    // 0x32f800: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F7FCu, 0x32F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F804u;
label_32f804:
    // 0x32f804: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x32f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x32f808: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x32f808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x32f80c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x32f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32f810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f814: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x32f814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32f818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32f818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f81c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x32f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32f820: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32f820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f824: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F824u;
    SET_GPR_U32(ctx, 31, 0x32F82Cu);
    ctx->pc = 0x32F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F824u;
    // 0x32f828: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F824u, 0x32F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F82Cu;
label_32f82c:
    // 0x32f82c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x32f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32f830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f834: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x32f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x32f838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32f838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f83c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x32f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32f840: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x32f840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32f844: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F844u;
    SET_GPR_U32(ctx, 31, 0x32F84Cu);
    ctx->pc = 0x32F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F844u;
    // 0x32f848: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F844u, 0x32F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F84Cu;
label_32f84c:
    // 0x32f84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32f850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f854: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F854u;
    SET_GPR_U32(ctx, 31, 0x32F85Cu);
    ctx->pc = 0x32F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F854u;
    // 0x32f858: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F854u, 0x32F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F85Cu;
label_32f85c:
    // 0x32f85c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32f85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f864: 0x3e00008  jr          $ra
    ctx->pc = 0x32F864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F864u;
        // 0x32f868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F86Cu;
    // 0x32f86c: 0x0  nop
    ctx->pc = 0x32f86cu;
    // NOP
    ctx->pc = 0x32f870u;
}
