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

// Function: sub_0047EA78
// Address: 0x47ea78 - 0x47eaf8
void sub_0047EA78_0x47ea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047EA78_0x47ea78");
#endif

    switch (ctx->pc) {
        case 0x47ea78u: goto label_47ea78;
        case 0x47ea7cu: goto label_47ea7c;
        case 0x47ea80u: goto label_47ea80;
        case 0x47ea84u: goto label_47ea84;
        case 0x47ea88u: goto label_47ea88;
        case 0x47ea8cu: goto label_47ea8c;
        case 0x47ea90u: goto label_47ea90;
        case 0x47ea94u: goto label_47ea94;
        case 0x47ea98u: goto label_47ea98;
        case 0x47ea9cu: goto label_47ea9c;
        case 0x47eaa0u: goto label_47eaa0;
        case 0x47eaa4u: goto label_47eaa4;
        case 0x47eaa8u: goto label_47eaa8;
        case 0x47eaacu: goto label_47eaac;
        case 0x47eab0u: goto label_47eab0;
        case 0x47eab4u: goto label_47eab4;
        case 0x47eab8u: goto label_47eab8;
        case 0x47eabcu: goto label_47eabc;
        case 0x47eac0u: goto label_47eac0;
        case 0x47eac4u: goto label_47eac4;
        case 0x47eac8u: goto label_47eac8;
        case 0x47eaccu: goto label_47eacc;
        case 0x47ead0u: goto label_47ead0;
        case 0x47ead4u: goto label_47ead4;
        case 0x47ead8u: goto label_47ead8;
        case 0x47eadcu: goto label_47eadc;
        case 0x47eae0u: goto label_47eae0;
        case 0x47eae4u: goto label_47eae4;
        case 0x47eae8u: goto label_47eae8;
        case 0x47eaecu: goto label_47eaec;
        case 0x47eaf0u: goto label_47eaf0;
        case 0x47eaf4u: goto label_47eaf4;
        default: break;
    }

    ctx->pc = 0x47ea78u;

label_47ea78:
    // 0x47ea78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47ea78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47ea7c:
    // 0x47ea7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ea80:
    // 0x47ea80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x47ea80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_47ea84:
    // 0x47ea84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47ea88:
    // 0x47ea88: 0xc11fa08  jal         func_47E820
label_47ea8c:
    if (ctx->pc == 0x47EA8Cu) {
        ctx->pc = 0x47EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EA88u;
        // 0x47ea8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EA90u;
        goto label_47ea90;
    }
    ctx->pc = 0x47EA88u;
    SET_GPR_U32(ctx, 31, 0x47EA90u);
    ctx->pc = 0x47EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EA88u;
    // 0x47ea8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E820u, 0x47EA88u, 0x47EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EA90u;
label_47ea90:
    // 0x47ea90: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x47ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47ea94:
    // 0x47ea94: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47ea98:
    // 0x47ea98: 0x2450ad18  addiu       $s0, $v0, -0x52E8
    ctx->pc = 0x47ea98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47ea9c:
    // 0x47ea9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x47ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_47eaa0:
    // 0x47eaa0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x47eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_47eaa4:
    // 0x47eaa4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_47eaa8:
    if (ctx->pc == 0x47EAA8u) {
        ctx->pc = 0x47EAACu;
        goto label_47eaac;
    }
    ctx->pc = 0x47EAA4u;
    {
        const bool branch_taken_0x47eaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eaa4) {
            ctx->pc = 0x47EAD4u;
            goto label_47ead4;
        }
    }
    ctx->pc = 0x47EAACu;
label_47eaac:
    // 0x47eaac: 0xc1201b8  jal         func_4806E0
label_47eab0:
    if (ctx->pc == 0x47EAB0u) {
        ctx->pc = 0x47EAB4u;
        goto label_47eab4;
    }
    ctx->pc = 0x47EAACu;
    SET_GPR_U32(ctx, 31, 0x47EAB4u);
    ctx->pc = 0x4806E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4806E0u, 0x47EAACu, 0x47EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EAB4u;
label_47eab4:
    // 0x47eab4: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x47eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47eab8:
    // 0x47eab8: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x47eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_47eabc:
    // 0x47eabc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x47eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_47eac0:
    // 0x47eac0: 0xa0f809  jalr        $a1
label_47eac4:
    if (ctx->pc == 0x47EAC4u) {
        ctx->pc = 0x47EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EAC0u;
        // 0x47eac4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EAC8u;
        goto label_47eac8;
    }
    ctx->pc = 0x47EAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x47EAC8u);
        ctx->pc = 0x47EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EAC0u;
        // 0x47eac4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EAC0u, 0x47EAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47EAC8u;
label_47eac8:
    // 0x47eac8: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x47eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47eacc:
    // 0x47eacc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47ead0:
    // 0x47ead0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x47ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_47ead4:
    // 0x47ead4: 0x8f83893c  lw          $v1, -0x76C4($gp)
    ctx->pc = 0x47ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_47ead8:
    // 0x47ead8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47ead8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47eadc:
    // 0x47eadc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x47eadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47eae0:
    // 0x47eae0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_47eae4:
    // 0x47eae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47eae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47eae8:
    // 0x47eae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47eae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47eaec:
    // 0x47eaec: 0xaf83893c  sw          $v1, -0x76C4($gp)
    ctx->pc = 0x47eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 3));
label_47eaf0:
    // 0x47eaf0: 0x3e00008  jr          $ra
label_47eaf4:
    if (ctx->pc == 0x47EAF4u) {
        ctx->pc = 0x47EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EAF0u;
        // 0x47eaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EAF8u;
        goto label_fallthrough_0x47eaf0;
    }
    ctx->pc = 0x47EAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EAF0u;
        // 0x47eaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47eaf0:
    ctx->pc = 0x47EAF8u;
}
