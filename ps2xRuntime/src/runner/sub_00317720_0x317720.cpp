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

// Function: sub_00317720
// Address: 0x317720 - 0x3177c0
void sub_00317720_0x317720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317720_0x317720");
#endif

    switch (ctx->pc) {
        case 0x31773cu: goto label_31773c;
        case 0x317778u: goto label_317778;
        case 0x317780u: goto label_317780;
        case 0x3177a0u: goto label_3177a0;
        case 0x3177acu: goto label_3177ac;
        default: break;
    }

    ctx->pc = 0x317720u;

    // 0x317720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31772c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x317730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317734: 0xc059646  jal         func_165918
    ctx->pc = 0x317734u;
    SET_GPR_U32(ctx, 31, 0x31773Cu);
    ctx->pc = 0x317738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317734u;
    // 0x317738: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165918u, 0x317734u, 0x31773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31773Cu;
label_31773c:
    // 0x31773c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x31773cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x317740: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x317740u;
    {
        const bool branch_taken_0x317740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x317744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317740u;
        // 0x317744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317740) {
            ctx->pc = 0x317778u;
            goto label_317778;
        }
    }
    ctx->pc = 0x317748u;
    // 0x317748: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x317748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x31774c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31774Cu;
    {
        const bool branch_taken_0x31774c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x317750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31774Cu;
        // 0x317750: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31774c) {
            ctx->pc = 0x317778u;
            goto label_317778;
        }
    }
    ctx->pc = 0x317754u;
    // 0x317754: 0x8c8303b4  lw          $v1, 0x3B4($a0)
    ctx->pc = 0x317754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 948)));
    // 0x317758: 0x2404026d  addiu       $a0, $zero, 0x26D
    ctx->pc = 0x317758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x31775c: 0x8c45aa84  lw          $a1, -0x557C($v0)
    ctx->pc = 0x31775cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x317760: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x317760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x317764: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x317764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
    // 0x317768: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x317768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31776c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317770: 0xc05a582  jal         func_169608
    ctx->pc = 0x317770u;
    SET_GPR_U32(ctx, 31, 0x317778u);
    ctx->pc = 0x317774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317770u;
    // 0x317774: 0x90650040  lbu         $a1, 0x40($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x317770u, 0x317778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317778u;
label_317778:
    // 0x317778: 0xc05959e  jal         func_165678
    ctx->pc = 0x317778u;
    SET_GPR_U32(ctx, 31, 0x317780u);
    ctx->pc = 0x31777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317778u;
    // 0x31777c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x317778u, 0x317780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317780u;
label_317780:
    // 0x317780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317784: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x317784u;
    {
        const bool branch_taken_0x317784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x317784) {
            ctx->pc = 0x317788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317784u;
            // 0x317788: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3177B0u;
            goto label_3177b0;
        }
    }
    ctx->pc = 0x31778Cu;
    // 0x31778c: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x31778cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x317790: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x317790u;
    {
        const bool branch_taken_0x317790 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x317790) {
            ctx->pc = 0x317794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317790u;
            // 0x317794: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3177B0u;
            goto label_3177b0;
        }
    }
    ctx->pc = 0x317798u;
    // 0x317798: 0xc08750a  jal         func_21D428
    ctx->pc = 0x317798u;
    SET_GPR_U32(ctx, 31, 0x3177A0u);
    ctx->pc = 0x31779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317798u;
    // 0x31779c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x317798u, 0x3177A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177A0u;
label_3177a0:
    // 0x3177a0: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x3177a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3177a4: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x3177A4u;
    SET_GPR_U32(ctx, 31, 0x3177ACu);
    ctx->pc = 0x3177A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3177A4u;
    // 0x3177a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x3177A4u, 0x3177ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177ACu;
label_3177ac:
    // 0x3177ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3177acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3177b0:
    // 0x3177b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3177b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3177b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3177B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3177B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177B4u;
        // 0x3177b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3177B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3177BCu;
    // 0x3177bc: 0x0  nop
    ctx->pc = 0x3177bcu;
    // NOP
    ctx->pc = 0x3177c0u;
}
