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

// Function: sub_002F2818
// Address: 0x2f2818 - 0x2f28b8
void sub_002F2818_0x2f2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2818_0x2f2818");
#endif

    switch (ctx->pc) {
        case 0x2f2818u: goto label_2f2818;
        case 0x2f281cu: goto label_2f281c;
        case 0x2f2820u: goto label_2f2820;
        case 0x2f2824u: goto label_2f2824;
        case 0x2f2828u: goto label_2f2828;
        case 0x2f282cu: goto label_2f282c;
        case 0x2f2830u: goto label_2f2830;
        case 0x2f2834u: goto label_2f2834;
        case 0x2f2838u: goto label_2f2838;
        case 0x2f283cu: goto label_2f283c;
        case 0x2f2840u: goto label_2f2840;
        case 0x2f2844u: goto label_2f2844;
        case 0x2f2848u: goto label_2f2848;
        case 0x2f284cu: goto label_2f284c;
        case 0x2f2850u: goto label_2f2850;
        case 0x2f2854u: goto label_2f2854;
        case 0x2f2858u: goto label_2f2858;
        case 0x2f285cu: goto label_2f285c;
        case 0x2f2860u: goto label_2f2860;
        case 0x2f2864u: goto label_2f2864;
        case 0x2f2868u: goto label_2f2868;
        case 0x2f286cu: goto label_2f286c;
        case 0x2f2870u: goto label_2f2870;
        case 0x2f2874u: goto label_2f2874;
        case 0x2f2878u: goto label_2f2878;
        case 0x2f287cu: goto label_2f287c;
        case 0x2f2880u: goto label_2f2880;
        case 0x2f2884u: goto label_2f2884;
        case 0x2f2888u: goto label_2f2888;
        case 0x2f288cu: goto label_2f288c;
        case 0x2f2890u: goto label_2f2890;
        case 0x2f2894u: goto label_2f2894;
        case 0x2f2898u: goto label_2f2898;
        case 0x2f289cu: goto label_2f289c;
        case 0x2f28a0u: goto label_2f28a0;
        case 0x2f28a4u: goto label_2f28a4;
        case 0x2f28a8u: goto label_2f28a8;
        case 0x2f28acu: goto label_2f28ac;
        case 0x2f28b0u: goto label_2f28b0;
        case 0x2f28b4u: goto label_2f28b4;
        default: break;
    }

    ctx->pc = 0x2f2818u;

label_2f2818:
    // 0x2f2818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f2818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f281c:
    // 0x2f281c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2f2820:
    // 0x2f2820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f2820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f2824:
    // 0x2f2824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2828:
    // 0x2f2828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f2828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f282c:
    // 0x2f282c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2f282cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2830:
    // 0x2f2830: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2f2830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_2f2834:
    // 0x2f2834: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f2834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2838:
    // 0x2f2838: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x2f2838u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
label_2f283c:
    // 0x2f283c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2f283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2f2840:
    // 0x2f2840: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2f2844:
    if (ctx->pc == 0x2F2844u) {
        ctx->pc = 0x2F2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2840u;
        // 0x2f2844: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2848u;
        goto label_2f2848;
    }
    ctx->pc = 0x2F2840u;
    {
        const bool branch_taken_0x2f2840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2840u;
        // 0x2f2844: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2840) {
            ctx->pc = 0x2F28A0u;
            goto label_2f28a0;
        }
    }
    ctx->pc = 0x2F2848u;
label_2f2848:
    // 0x2f2848: 0xc088bbc  jal         func_222EF0
label_2f284c:
    if (ctx->pc == 0x2F284Cu) {
        ctx->pc = 0x2F284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2848u;
        // 0x2f284c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2850u;
        goto label_2f2850;
    }
    ctx->pc = 0x2F2848u;
    SET_GPR_U32(ctx, 31, 0x2F2850u);
    ctx->pc = 0x2F284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2848u;
    // 0x2f284c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2F2848u, 0x2F2850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2850u;
label_2f2850:
    // 0x2f2850: 0x3c01418c  lui         $at, 0x418C
    ctx->pc = 0x2f2850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16780 << 16));
label_2f2854:
    // 0x2f2854: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2858:
    // 0x2f2858: 0x0  nop
    ctx->pc = 0x2f2858u;
    // NOP
label_2f285c:
    // 0x2f285c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f285cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f2860:
    // 0x2f2860: 0x0  nop
    ctx->pc = 0x2f2860u;
    // NOP
label_2f2864:
    // 0x2f2864: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2f2868:
    if (ctx->pc == 0x2F2868u) {
        ctx->pc = 0x2F2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2864u;
        // 0x2f2868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F286Cu;
        goto label_2f286c;
    }
    ctx->pc = 0x2F2864u;
    {
        const bool branch_taken_0x2f2864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2864u;
        // 0x2f2868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2864) {
            ctx->pc = 0x2F28A0u;
            goto label_2f28a0;
        }
    }
    ctx->pc = 0x2F286Cu;
label_2f286c:
    // 0x2f286c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f2870:
    // 0x2f2870: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2f2870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2f2874:
    // 0x2f2874: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2f2874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2f2878:
    // 0x2f2878: 0x60f809  jalr        $v1
label_2f287c:
    if (ctx->pc == 0x2F287Cu) {
        ctx->pc = 0x2F287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2878u;
        // 0x2f287c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2880u;
        goto label_2f2880;
    }
    ctx->pc = 0x2F2878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2880u);
        ctx->pc = 0x2F287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2878u;
        // 0x2f287c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2878u, 0x2F2880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2880u;
label_2f2880:
    // 0x2f2880: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2f2880u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2f2884:
    // 0x2f2884: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f2884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f2888:
    // 0x2f2888: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f288c:
    // 0x2f288c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f288cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2890:
    // 0x2f2890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f2890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f2894:
    // 0x2f2894: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2f2894u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2f2898:
    // 0x2f2898: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x2f2898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
label_2f289c:
    // 0x2f289c: 0xa205004a  sb          $a1, 0x4A($s0)
    ctx->pc = 0x2f289cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 5));
label_2f28a0:
    // 0x2f28a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f28a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f28a4:
    // 0x2f28a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f28a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f28a8:
    // 0x2f28a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f28a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f28ac:
    // 0x2f28ac: 0x3e00008  jr          $ra
label_2f28b0:
    if (ctx->pc == 0x2F28B0u) {
        ctx->pc = 0x2F28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28ACu;
        // 0x2f28b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28B4u;
        goto label_2f28b4;
    }
    ctx->pc = 0x2F28ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28ACu;
        // 0x2f28b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F28ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F28B4u;
label_2f28b4:
    // 0x2f28b4: 0x0  nop
    ctx->pc = 0x2f28b4u;
    // NOP
    ctx->pc = 0x2f28b8u;
}
