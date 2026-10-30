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

// Function: sub_003E9780
// Address: 0x3e9780 - 0x3e9828
void sub_003E9780_0x3e9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9780_0x3e9780");
#endif

    switch (ctx->pc) {
        case 0x3e9780u: goto label_3e9780;
        case 0x3e9784u: goto label_3e9784;
        case 0x3e9788u: goto label_3e9788;
        case 0x3e978cu: goto label_3e978c;
        case 0x3e9790u: goto label_3e9790;
        case 0x3e9794u: goto label_3e9794;
        case 0x3e9798u: goto label_3e9798;
        case 0x3e979cu: goto label_3e979c;
        case 0x3e97a0u: goto label_3e97a0;
        case 0x3e97a4u: goto label_3e97a4;
        case 0x3e97a8u: goto label_3e97a8;
        case 0x3e97acu: goto label_3e97ac;
        case 0x3e97b0u: goto label_3e97b0;
        case 0x3e97b4u: goto label_3e97b4;
        case 0x3e97b8u: goto label_3e97b8;
        case 0x3e97bcu: goto label_3e97bc;
        case 0x3e97c0u: goto label_3e97c0;
        case 0x3e97c4u: goto label_3e97c4;
        case 0x3e97c8u: goto label_3e97c8;
        case 0x3e97ccu: goto label_3e97cc;
        case 0x3e97d0u: goto label_3e97d0;
        case 0x3e97d4u: goto label_3e97d4;
        case 0x3e97d8u: goto label_3e97d8;
        case 0x3e97dcu: goto label_3e97dc;
        case 0x3e97e0u: goto label_3e97e0;
        case 0x3e97e4u: goto label_3e97e4;
        case 0x3e97e8u: goto label_3e97e8;
        case 0x3e97ecu: goto label_3e97ec;
        case 0x3e97f0u: goto label_3e97f0;
        case 0x3e97f4u: goto label_3e97f4;
        case 0x3e97f8u: goto label_3e97f8;
        case 0x3e97fcu: goto label_3e97fc;
        case 0x3e9800u: goto label_3e9800;
        case 0x3e9804u: goto label_3e9804;
        case 0x3e9808u: goto label_3e9808;
        case 0x3e980cu: goto label_3e980c;
        case 0x3e9810u: goto label_3e9810;
        case 0x3e9814u: goto label_3e9814;
        case 0x3e9818u: goto label_3e9818;
        case 0x3e981cu: goto label_3e981c;
        case 0x3e9820u: goto label_3e9820;
        case 0x3e9824u: goto label_3e9824;
        default: break;
    }

    ctx->pc = 0x3e9780u;

label_3e9780:
    // 0x3e9780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e9784:
    // 0x3e9784: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e9784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e9788:
    // 0x3e9788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e9788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e978c:
    // 0x3e978c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e978cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9790:
    // 0x3e9790: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e9790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e9794:
    // 0x3e9794: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e9794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9798:
    // 0x3e9798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e979c:
    // 0x3e979c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e979cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e97a0:
    // 0x3e97a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e97a4:
    // 0x3e97a4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e97a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e97a8:
    // 0x3e97a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e97ac:
    // 0x3e97ac: 0x40f809  jalr        $v0
label_3e97b0:
    if (ctx->pc == 0x3E97B0u) {
        ctx->pc = 0x3E97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97ACu;
        // 0x3e97b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E97B4u;
        goto label_3e97b4;
    }
    ctx->pc = 0x3E97ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E97B4u);
        ctx->pc = 0x3E97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97ACu;
        // 0x3e97b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E97ACu, 0x3E97B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E97B4u;
label_3e97b4:
    // 0x3e97b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3e97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e97b8:
    // 0x3e97b8: 0x1223000c  beq         $s1, $v1, . + 4 + (0xC << 2)
label_3e97bc:
    if (ctx->pc == 0x3E97BCu) {
        ctx->pc = 0x3E97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97B8u;
        // 0x3e97bc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E97C0u;
        goto label_3e97c0;
    }
    ctx->pc = 0x3E97B8u;
    {
        const bool branch_taken_0x3e97b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97B8u;
        // 0x3e97bc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e97b8) {
            ctx->pc = 0x3E97ECu;
            goto label_3e97ec;
        }
    }
    ctx->pc = 0x3E97C0u;
label_3e97c0:
    // 0x3e97c0: 0x56220014  bnel        $s1, $v0, . + 4 + (0x14 << 2)
label_3e97c4:
    if (ctx->pc == 0x3E97C4u) {
        ctx->pc = 0x3E97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97C0u;
        // 0x3e97c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E97C8u;
        goto label_3e97c8;
    }
    ctx->pc = 0x3E97C0u;
    {
        const bool branch_taken_0x3e97c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e97c0) {
            ctx->pc = 0x3E97C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E97C0u;
            // 0x3e97c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9814u;
            goto label_3e9814;
        }
    }
    ctx->pc = 0x3E97C8u;
label_3e97c8:
    // 0x3e97c8: 0xc0e8616  jal         func_3A1858
label_3e97cc:
    if (ctx->pc == 0x3E97CCu) {
        ctx->pc = 0x3E97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97C8u;
        // 0x3e97cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E97D0u;
        goto label_3e97d0;
    }
    ctx->pc = 0x3E97C8u;
    SET_GPR_U32(ctx, 31, 0x3E97D0u);
    ctx->pc = 0x3E97CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E97C8u;
    // 0x3e97cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3E97C8u, 0x3E97D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E97D0u;
label_3e97d0:
    // 0x3e97d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3e97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e97d4:
    // 0x3e97d4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3e97d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3e97d8:
    // 0x3e97d8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3e97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3e97dc:
    // 0x3e97dc: 0x60f809  jalr        $v1
label_3e97e0:
    if (ctx->pc == 0x3E97E0u) {
        ctx->pc = 0x3E97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97DCu;
        // 0x3e97e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E97E4u;
        goto label_3e97e4;
    }
    ctx->pc = 0x3E97DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E97E4u);
        ctx->pc = 0x3E97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97DCu;
        // 0x3e97e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E97DCu, 0x3E97E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E97E4u;
label_3e97e4:
    // 0x3e97e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e97e8:
    if (ctx->pc == 0x3E97E8u) {
        ctx->pc = 0x3E97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97E4u;
        // 0x3e97e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E97ECu;
        goto label_3e97ec;
    }
    ctx->pc = 0x3E97E4u;
    {
        const bool branch_taken_0x3e97e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97E4u;
        // 0x3e97e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e97e4) {
            ctx->pc = 0x3E9814u;
            goto label_3e9814;
        }
    }
    ctx->pc = 0x3E97ECu;
label_3e97ec:
    // 0x3e97ec: 0xc0ea146  jal         func_3A8518
label_3e97f0:
    if (ctx->pc == 0x3E97F0u) {
        ctx->pc = 0x3E97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97ECu;
        // 0x3e97f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E97F4u;
        goto label_3e97f4;
    }
    ctx->pc = 0x3E97ECu;
    SET_GPR_U32(ctx, 31, 0x3E97F4u);
    ctx->pc = 0x3E97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E97ECu;
    // 0x3e97f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E97ECu, 0x3E97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E97F4u;
label_3e97f4:
    // 0x3e97f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e97f8:
    if (ctx->pc == 0x3E97F8u) {
        ctx->pc = 0x3E97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97F4u;
        // 0x3e97f8: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E97FCu;
        goto label_3e97fc;
    }
    ctx->pc = 0x3E97F4u;
    {
        const bool branch_taken_0x3e97f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97F4u;
        // 0x3e97f8: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e97f4) {
            ctx->pc = 0x3E9804u;
            goto label_3e9804;
        }
    }
    ctx->pc = 0x3E97FCu;
label_3e97fc:
    // 0x3e97fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e9800:
    if (ctx->pc == 0x3E9800u) {
        ctx->pc = 0x3E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97FCu;
        // 0x3e9800: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9804u;
        goto label_3e9804;
    }
    ctx->pc = 0x3E97FCu;
    {
        const bool branch_taken_0x3e97fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97FCu;
        // 0x3e9800: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e97fc) {
            ctx->pc = 0x3E980Cu;
            goto label_3e980c;
        }
    }
    ctx->pc = 0x3E9804u;
label_3e9804:
    // 0x3e9804: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e9804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e9808:
    // 0x3e9808: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e9808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e980c:
    // 0x3e980c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e980cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e9810:
    // 0x3e9810: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e9810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e9814:
    // 0x3e9814: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e9814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9818:
    // 0x3e9818: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e9818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e981c:
    // 0x3e981c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e981cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9820:
    // 0x3e9820: 0x3e00008  jr          $ra
label_3e9824:
    if (ctx->pc == 0x3E9824u) {
        ctx->pc = 0x3E9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9820u;
        // 0x3e9824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9828u;
        goto label_fallthrough_0x3e9820;
    }
    ctx->pc = 0x3E9820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9820u;
        // 0x3e9824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9820:
    ctx->pc = 0x3E9828u;
}
