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

// Function: sub_00384840
// Address: 0x384840 - 0x3848c8
void sub_00384840_0x384840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384840_0x384840");
#endif

    switch (ctx->pc) {
        case 0x384840u: goto label_384840;
        case 0x384844u: goto label_384844;
        case 0x384848u: goto label_384848;
        case 0x38484cu: goto label_38484c;
        case 0x384850u: goto label_384850;
        case 0x384854u: goto label_384854;
        case 0x384858u: goto label_384858;
        case 0x38485cu: goto label_38485c;
        case 0x384860u: goto label_384860;
        case 0x384864u: goto label_384864;
        case 0x384868u: goto label_384868;
        case 0x38486cu: goto label_38486c;
        case 0x384870u: goto label_384870;
        case 0x384874u: goto label_384874;
        case 0x384878u: goto label_384878;
        case 0x38487cu: goto label_38487c;
        case 0x384880u: goto label_384880;
        case 0x384884u: goto label_384884;
        case 0x384888u: goto label_384888;
        case 0x38488cu: goto label_38488c;
        case 0x384890u: goto label_384890;
        case 0x384894u: goto label_384894;
        case 0x384898u: goto label_384898;
        case 0x38489cu: goto label_38489c;
        case 0x3848a0u: goto label_3848a0;
        case 0x3848a4u: goto label_3848a4;
        case 0x3848a8u: goto label_3848a8;
        case 0x3848acu: goto label_3848ac;
        case 0x3848b0u: goto label_3848b0;
        case 0x3848b4u: goto label_3848b4;
        case 0x3848b8u: goto label_3848b8;
        case 0x3848bcu: goto label_3848bc;
        case 0x3848c0u: goto label_3848c0;
        case 0x3848c4u: goto label_3848c4;
        default: break;
    }

    ctx->pc = 0x384840u;

label_384840:
    // 0x384840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_384844:
    // 0x384844: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x384844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_384848:
    // 0x384848: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x384848u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_38484c:
    // 0x38484c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_384850:
    // 0x384850: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x384850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_384854:
    // 0x384854: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x384854u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_384858:
    // 0x384858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38485c:
    // 0x38485c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x38485cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_384860:
    // 0x384860: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x384860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_384864:
    // 0x384864: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x384864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_384868:
    // 0x384868: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x384868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38486c:
    // 0x38486c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x38486cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_384870:
    // 0x384870: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x384870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_384874:
    // 0x384874: 0x60f809  jalr        $v1
label_384878:
    if (ctx->pc == 0x384878u) {
        ctx->pc = 0x384878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384874u;
        // 0x384878: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38487Cu;
        goto label_38487c;
    }
    ctx->pc = 0x384874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38487Cu);
        ctx->pc = 0x384878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384874u;
        // 0x384878: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384874u, 0x38487Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38487Cu;
label_38487c:
    // 0x38487c: 0x8e042b24  lw          $a0, 0x2B24($s0)
    ctx->pc = 0x38487cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_384880:
    // 0x384880: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x384880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_384884:
    // 0x384884: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x384884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_384888:
    // 0x384888: 0xc13c76e  jal         func_4F1DB8
label_38488c:
    if (ctx->pc == 0x38488Cu) {
        ctx->pc = 0x38488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384888u;
        // 0x38488c: 0x24a5dcd8  addiu       $a1, $a1, -0x2328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384890u;
        goto label_384890;
    }
    ctx->pc = 0x384888u;
    SET_GPR_U32(ctx, 31, 0x384890u);
    ctx->pc = 0x38488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384888u;
    // 0x38488c: 0x24a5dcd8  addiu       $a1, $a1, -0x2328 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1DB8u, 0x384888u, 0x384890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384890u;
label_384890:
    // 0x384890: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x384890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_384894:
    // 0x384894: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x384894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_384898:
    // 0x384898: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x384898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38489c:
    // 0x38489c: 0xae002b24  sw          $zero, 0x2B24($s0)
    ctx->pc = 0x38489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 0));
label_3848a0:
    // 0x3848a0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x3848a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_3848a4:
    // 0x3848a4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x3848a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_3848a8:
    // 0x3848a8: 0x60f809  jalr        $v1
label_3848ac:
    if (ctx->pc == 0x3848ACu) {
        ctx->pc = 0x3848ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848A8u;
        // 0x3848ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3848B0u;
        goto label_3848b0;
    }
    ctx->pc = 0x3848A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3848B0u);
        ctx->pc = 0x3848ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848A8u;
        // 0x3848ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3848A8u, 0x3848B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3848B0u;
label_3848b0:
    // 0x3848b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3848b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3848b4:
    // 0x3848b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3848b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3848b8:
    // 0x3848b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3848b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3848bc:
    // 0x3848bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3848bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3848c0:
    // 0x3848c0: 0x3e00008  jr          $ra
label_3848c4:
    if (ctx->pc == 0x3848C4u) {
        ctx->pc = 0x3848C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848C0u;
        // 0x3848c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3848C8u;
        goto label_fallthrough_0x3848c0;
    }
    ctx->pc = 0x3848C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3848C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848C0u;
        // 0x3848c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3848C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3848c0:
    ctx->pc = 0x3848C8u;
}
