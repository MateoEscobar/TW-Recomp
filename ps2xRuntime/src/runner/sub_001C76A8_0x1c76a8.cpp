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

// Function: sub_001C76A8
// Address: 0x1c76a8 - 0x1c7730
void sub_001C76A8_0x1c76a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C76A8_0x1c76a8");
#endif

    switch (ctx->pc) {
        case 0x1c76a8u: goto label_1c76a8;
        case 0x1c76acu: goto label_1c76ac;
        case 0x1c76b0u: goto label_1c76b0;
        case 0x1c76b4u: goto label_1c76b4;
        case 0x1c76b8u: goto label_1c76b8;
        case 0x1c76bcu: goto label_1c76bc;
        case 0x1c76c0u: goto label_1c76c0;
        case 0x1c76c4u: goto label_1c76c4;
        case 0x1c76c8u: goto label_1c76c8;
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76d0u: goto label_1c76d0;
        case 0x1c76d4u: goto label_1c76d4;
        case 0x1c76d8u: goto label_1c76d8;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76e0u: goto label_1c76e0;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c76e8u: goto label_1c76e8;
        case 0x1c76ecu: goto label_1c76ec;
        case 0x1c76f0u: goto label_1c76f0;
        case 0x1c76f4u: goto label_1c76f4;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c76fcu: goto label_1c76fc;
        case 0x1c7700u: goto label_1c7700;
        case 0x1c7704u: goto label_1c7704;
        case 0x1c7708u: goto label_1c7708;
        case 0x1c770cu: goto label_1c770c;
        case 0x1c7710u: goto label_1c7710;
        case 0x1c7714u: goto label_1c7714;
        case 0x1c7718u: goto label_1c7718;
        case 0x1c771cu: goto label_1c771c;
        case 0x1c7720u: goto label_1c7720;
        case 0x1c7724u: goto label_1c7724;
        case 0x1c7728u: goto label_1c7728;
        case 0x1c772cu: goto label_1c772c;
        default: break;
    }

    ctx->pc = 0x1c76a8u;

label_1c76a8:
    // 0x1c76a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c76a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c76ac:
    // 0x1c76ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c76b0:
    // 0x1c76b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c76b4:
    // 0x1c76b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c76b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c76b8:
    // 0x1c76b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c76b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c76bc:
    // 0x1c76bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c76bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c76c0:
    // 0x1c76c0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c76c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c76c4:
    // 0x1c76c4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c76c8:
    // 0x1c76c8: 0x40f809  jalr        $v0
label_1c76cc:
    if (ctx->pc == 0x1C76CCu) {
        ctx->pc = 0x1C76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76C8u;
        // 0x1c76cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76D0u;
        goto label_1c76d0;
    }
    ctx->pc = 0x1C76C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C76D0u);
        ctx->pc = 0x1C76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76C8u;
        // 0x1c76cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C76C8u, 0x1C76D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C76D0u;
label_1c76d0:
    // 0x1c76d0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1c76d4:
    if (ctx->pc == 0x1C76D4u) {
        ctx->pc = 0x1C76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76D0u;
        // 0x1c76d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76D8u;
        goto label_1c76d8;
    }
    ctx->pc = 0x1C76D0u;
    {
        const bool branch_taken_0x1c76d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c76d0) {
            ctx->pc = 0x1C76D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C76D0u;
            // 0x1c76d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7720u;
            goto label_1c7720;
        }
    }
    ctx->pc = 0x1C76D8u;
label_1c76d8:
    // 0x1c76d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c76d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c76dc:
    // 0x1c76dc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1c76dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1c76e0:
    // 0x1c76e0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1c76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1c76e4:
    // 0x1c76e4: 0x40f809  jalr        $v0
label_1c76e8:
    if (ctx->pc == 0x1C76E8u) {
        ctx->pc = 0x1C76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76E4u;
        // 0x1c76e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76ECu;
        goto label_1c76ec;
    }
    ctx->pc = 0x1C76E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C76ECu);
        ctx->pc = 0x1C76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76E4u;
        // 0x1c76e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C76E4u, 0x1C76ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C76ECu;
label_1c76ec:
    // 0x1c76ec: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1c76f0:
    if (ctx->pc == 0x1C76F0u) {
        ctx->pc = 0x1C76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76ECu;
        // 0x1c76f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76F4u;
        goto label_1c76f4;
    }
    ctx->pc = 0x1C76ECu;
    {
        const bool branch_taken_0x1c76ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c76ec) {
            ctx->pc = 0x1C76F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C76ECu;
            // 0x1c76f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7720u;
            goto label_1c7720;
        }
    }
    ctx->pc = 0x1C76F4u;
label_1c76f4:
    // 0x1c76f4: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x1c76f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_1c76f8:
    // 0x1c76f8: 0xc0706d6  jal         func_1C1B58
label_1c76fc:
    if (ctx->pc == 0x1C76FCu) {
        ctx->pc = 0x1C76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76F8u;
        // 0x1c76fc: 0x26110080  addiu       $s1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7700u;
        goto label_1c7700;
    }
    ctx->pc = 0x1C76F8u;
    SET_GPR_U32(ctx, 31, 0x1C7700u);
    ctx->pc = 0x1C76FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76F8u;
    // 0x1c76fc: 0x26110080  addiu       $s1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B58u, 0x1C76F8u, 0x1C7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7700u;
label_1c7700:
    // 0x1c7700: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1c7704:
    // 0x1c7704: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1c7708:
    if (ctx->pc == 0x1C7708u) {
        ctx->pc = 0x1C7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7704u;
        // 0x1c7708: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C770Cu;
        goto label_1c770c;
    }
    ctx->pc = 0x1C7704u;
    {
        const bool branch_taken_0x1c7704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7704) {
            ctx->pc = 0x1C7708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7704u;
            // 0x1c7708: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7720u;
            goto label_1c7720;
        }
    }
    ctx->pc = 0x1C770Cu;
label_1c770c:
    // 0x1c770c: 0xc073b62  jal         func_1CED88
label_1c7710:
    if (ctx->pc == 0x1C7710u) {
        ctx->pc = 0x1C7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C770Cu;
        // 0x1c7710: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7714u;
        goto label_1c7714;
    }
    ctx->pc = 0x1C770Cu;
    SET_GPR_U32(ctx, 31, 0x1C7714u);
    ctx->pc = 0x1C7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C770Cu;
    // 0x1c7710: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED88u, 0x1C770Cu, 0x1C7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7714u;
label_1c7714:
    // 0x1c7714: 0xc0754b2  jal         func_1D52C8
label_1c7718:
    if (ctx->pc == 0x1C7718u) {
        ctx->pc = 0x1C7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7714u;
        // 0x1c7718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C771Cu;
        goto label_1c771c;
    }
    ctx->pc = 0x1C7714u;
    SET_GPR_U32(ctx, 31, 0x1C771Cu);
    ctx->pc = 0x1C7718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7714u;
    // 0x1c7718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52C8u, 0x1C7714u, 0x1C771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C771Cu;
label_1c771c:
    // 0x1c771c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c771cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7720:
    // 0x1c7720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7724:
    // 0x1c7724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7728:
    // 0x1c7728: 0x3e00008  jr          $ra
label_1c772c:
    if (ctx->pc == 0x1C772Cu) {
        ctx->pc = 0x1C772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7728u;
        // 0x1c772c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7730u;
        goto label_fallthrough_0x1c7728;
    }
    ctx->pc = 0x1C7728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7728u;
        // 0x1c772c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c7728:
    ctx->pc = 0x1C7730u;
}
