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

// Function: sub_0029F790
// Address: 0x29f790 - 0x29f810
void sub_0029F790_0x29f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F790_0x29f790");
#endif

    switch (ctx->pc) {
        case 0x29f790u: goto label_29f790;
        case 0x29f794u: goto label_29f794;
        case 0x29f798u: goto label_29f798;
        case 0x29f79cu: goto label_29f79c;
        case 0x29f7a0u: goto label_29f7a0;
        case 0x29f7a4u: goto label_29f7a4;
        case 0x29f7a8u: goto label_29f7a8;
        case 0x29f7acu: goto label_29f7ac;
        case 0x29f7b0u: goto label_29f7b0;
        case 0x29f7b4u: goto label_29f7b4;
        case 0x29f7b8u: goto label_29f7b8;
        case 0x29f7bcu: goto label_29f7bc;
        case 0x29f7c0u: goto label_29f7c0;
        case 0x29f7c4u: goto label_29f7c4;
        case 0x29f7c8u: goto label_29f7c8;
        case 0x29f7ccu: goto label_29f7cc;
        case 0x29f7d0u: goto label_29f7d0;
        case 0x29f7d4u: goto label_29f7d4;
        case 0x29f7d8u: goto label_29f7d8;
        case 0x29f7dcu: goto label_29f7dc;
        case 0x29f7e0u: goto label_29f7e0;
        case 0x29f7e4u: goto label_29f7e4;
        case 0x29f7e8u: goto label_29f7e8;
        case 0x29f7ecu: goto label_29f7ec;
        case 0x29f7f0u: goto label_29f7f0;
        case 0x29f7f4u: goto label_29f7f4;
        case 0x29f7f8u: goto label_29f7f8;
        case 0x29f7fcu: goto label_29f7fc;
        case 0x29f800u: goto label_29f800;
        case 0x29f804u: goto label_29f804;
        case 0x29f808u: goto label_29f808;
        case 0x29f80cu: goto label_29f80c;
        default: break;
    }

    ctx->pc = 0x29f790u;

label_29f790:
    // 0x29f790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29f794:
    // 0x29f794: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29f794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_29f798:
    // 0x29f798: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_29f79c:
    // 0x29f79c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_29f7a0:
    // 0x29f7a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29f7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29f7a4:
    // 0x29f7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29f7a8:
    // 0x29f7a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f7ac:
    // 0x29f7ac: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x29f7acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_29f7b0:
    // 0x29f7b0: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_29f7b4:
    if (ctx->pc == 0x29F7B4u) {
        ctx->pc = 0x29F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7B0u;
        // 0x29f7b4: 0x2882a  slt         $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F7B8u;
        goto label_29f7b8;
    }
    ctx->pc = 0x29F7B0u;
    {
        const bool branch_taken_0x29f7b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7B0u;
        // 0x29f7b4: 0x2882a  slt         $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7b0) {
            ctx->pc = 0x29F7F4u;
            goto label_29f7f4;
        }
    }
    ctx->pc = 0x29F7B8u;
label_29f7b8:
    // 0x29f7b8: 0xc0a36c2  jal         func_28DB08
label_29f7bc:
    if (ctx->pc == 0x29F7BCu) {
        ctx->pc = 0x29F7C0u;
        goto label_29f7c0;
    }
    ctx->pc = 0x29F7B8u;
    SET_GPR_U32(ctx, 31, 0x29F7C0u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x29F7B8u, 0x29F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7C0u;
label_29f7c0:
    // 0x29f7c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f7c4:
    // 0x29f7c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29f7c8:
    // 0x29f7c8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29f7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29f7cc:
    // 0x29f7cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29f7d0:
    // 0x29f7d0: 0x40f809  jalr        $v0
label_29f7d4:
    if (ctx->pc == 0x29F7D4u) {
        ctx->pc = 0x29F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7D0u;
        // 0x29f7d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F7D8u;
        goto label_29f7d8;
    }
    ctx->pc = 0x29F7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F7D8u);
        ctx->pc = 0x29F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7D0u;
        // 0x29f7d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F7D0u, 0x29F7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F7D8u;
label_29f7d8:
    // 0x29f7d8: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
label_29f7dc:
    if (ctx->pc == 0x29F7DCu) {
        ctx->pc = 0x29F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7D8u;
        // 0x29f7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F7E0u;
        goto label_29f7e0;
    }
    ctx->pc = 0x29F7D8u;
    {
        const bool branch_taken_0x29f7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x29F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7D8u;
        // 0x29f7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7d8) {
            ctx->pc = 0x29F7F8u;
            goto label_29f7f8;
        }
    }
    ctx->pc = 0x29F7E0u;
label_29f7e0:
    // 0x29f7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f7e4:
    // 0x29f7e4: 0xc0beefa  jal         func_2FBBE8
label_29f7e8:
    if (ctx->pc == 0x29F7E8u) {
        ctx->pc = 0x29F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7E4u;
        // 0x29f7e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F7ECu;
        goto label_29f7ec;
    }
    ctx->pc = 0x29F7E4u;
    SET_GPR_U32(ctx, 31, 0x29F7ECu);
    ctx->pc = 0x29F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F7E4u;
    // 0x29f7e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE8u, 0x29F7E4u, 0x29F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7ECu;
label_29f7ec:
    // 0x29f7ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_29f7f0:
    if (ctx->pc == 0x29F7F0u) {
        ctx->pc = 0x29F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7ECu;
        // 0x29f7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F7F4u;
        goto label_29f7f4;
    }
    ctx->pc = 0x29F7ECu;
    {
        const bool branch_taken_0x29f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7ECu;
        // 0x29f7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7ec) {
            ctx->pc = 0x29F7F8u;
            goto label_29f7f8;
        }
    }
    ctx->pc = 0x29F7F4u;
label_29f7f4:
    // 0x29f7f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29f7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f7f8:
    // 0x29f7f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29f7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29f7fc:
    // 0x29f7fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29f7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f800:
    // 0x29f800: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29f800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f804:
    // 0x29f804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f808:
    // 0x29f808: 0x3e00008  jr          $ra
label_29f80c:
    if (ctx->pc == 0x29F80Cu) {
        ctx->pc = 0x29F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F808u;
        // 0x29f80c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F810u;
        goto label_fallthrough_0x29f808;
    }
    ctx->pc = 0x29F808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F808u;
        // 0x29f80c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f808:
    ctx->pc = 0x29F810u;
}
