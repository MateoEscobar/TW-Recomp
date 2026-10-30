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

// Function: sub_004BF070
// Address: 0x4bf070 - 0x4bf138
void sub_004BF070_0x4bf070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF070_0x4bf070");
#endif

    switch (ctx->pc) {
        case 0x4bf070u: goto label_4bf070;
        case 0x4bf074u: goto label_4bf074;
        case 0x4bf078u: goto label_4bf078;
        case 0x4bf07cu: goto label_4bf07c;
        case 0x4bf080u: goto label_4bf080;
        case 0x4bf084u: goto label_4bf084;
        case 0x4bf088u: goto label_4bf088;
        case 0x4bf08cu: goto label_4bf08c;
        case 0x4bf090u: goto label_4bf090;
        case 0x4bf094u: goto label_4bf094;
        case 0x4bf098u: goto label_4bf098;
        case 0x4bf09cu: goto label_4bf09c;
        case 0x4bf0a0u: goto label_4bf0a0;
        case 0x4bf0a4u: goto label_4bf0a4;
        case 0x4bf0a8u: goto label_4bf0a8;
        case 0x4bf0acu: goto label_4bf0ac;
        case 0x4bf0b0u: goto label_4bf0b0;
        case 0x4bf0b4u: goto label_4bf0b4;
        case 0x4bf0b8u: goto label_4bf0b8;
        case 0x4bf0bcu: goto label_4bf0bc;
        case 0x4bf0c0u: goto label_4bf0c0;
        case 0x4bf0c4u: goto label_4bf0c4;
        case 0x4bf0c8u: goto label_4bf0c8;
        case 0x4bf0ccu: goto label_4bf0cc;
        case 0x4bf0d0u: goto label_4bf0d0;
        case 0x4bf0d4u: goto label_4bf0d4;
        case 0x4bf0d8u: goto label_4bf0d8;
        case 0x4bf0dcu: goto label_4bf0dc;
        case 0x4bf0e0u: goto label_4bf0e0;
        case 0x4bf0e4u: goto label_4bf0e4;
        case 0x4bf0e8u: goto label_4bf0e8;
        case 0x4bf0ecu: goto label_4bf0ec;
        case 0x4bf0f0u: goto label_4bf0f0;
        case 0x4bf0f4u: goto label_4bf0f4;
        case 0x4bf0f8u: goto label_4bf0f8;
        case 0x4bf0fcu: goto label_4bf0fc;
        case 0x4bf100u: goto label_4bf100;
        case 0x4bf104u: goto label_4bf104;
        case 0x4bf108u: goto label_4bf108;
        case 0x4bf10cu: goto label_4bf10c;
        case 0x4bf110u: goto label_4bf110;
        case 0x4bf114u: goto label_4bf114;
        case 0x4bf118u: goto label_4bf118;
        case 0x4bf11cu: goto label_4bf11c;
        case 0x4bf120u: goto label_4bf120;
        case 0x4bf124u: goto label_4bf124;
        case 0x4bf128u: goto label_4bf128;
        case 0x4bf12cu: goto label_4bf12c;
        case 0x4bf130u: goto label_4bf130;
        case 0x4bf134u: goto label_4bf134;
        default: break;
    }

    ctx->pc = 0x4bf070u;

label_4bf070:
    // 0x4bf070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bf070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4bf074:
    // 0x4bf074: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bf074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4bf078:
    // 0x4bf078: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4bf078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4bf07c:
    // 0x4bf07c: 0x244341f0  addiu       $v1, $v0, 0x41F0
    ctx->pc = 0x4bf07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
label_4bf080:
    // 0x4bf080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4bf080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4bf084:
    // 0x4bf084: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4bf084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4bf088:
    // 0x4bf088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4bf08c:
    // 0x4bf08c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4bf08cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf090:
    // 0x4bf090: 0x8c4541f0  lw          $a1, 0x41F0($v0)
    ctx->pc = 0x4bf090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16880)));
label_4bf094:
    // 0x4bf094: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4bf094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4bf098:
    // 0x4bf098: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x4bf098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4bf09c:
    // 0x4bf09c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4bf09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4bf0a0:
    // 0x4bf0a0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_4bf0a4:
    if (ctx->pc == 0x4BF0A4u) {
        ctx->pc = 0x4BF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0A0u;
        // 0x4bf0a4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF0A8u;
        goto label_4bf0a8;
    }
    ctx->pc = 0x4BF0A0u;
    {
        const bool branch_taken_0x4bf0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0A0u;
        // 0x4bf0a4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf0a0) {
            ctx->pc = 0x4BF0FCu;
            goto label_4bf0fc;
        }
    }
    ctx->pc = 0x4BF0A8u;
label_4bf0a8:
    // 0x4bf0a8: 0xc12fbcc  jal         func_4BEF30
label_4bf0ac:
    if (ctx->pc == 0x4BF0ACu) {
        ctx->pc = 0x4BF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0A8u;
        // 0x4bf0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF0B0u;
        goto label_4bf0b0;
    }
    ctx->pc = 0x4BF0A8u;
    SET_GPR_U32(ctx, 31, 0x4BF0B0u);
    ctx->pc = 0x4BF0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF0A8u;
    // 0x4bf0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEF30u, 0x4BF0A8u, 0x4BF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF0B0u;
label_4bf0b0:
    // 0x4bf0b0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_4bf0b4:
    if (ctx->pc == 0x4BF0B4u) {
        ctx->pc = 0x4BF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0B0u;
        // 0x4bf0b4: 0x96230084  lhu         $v1, 0x84($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF0B8u;
        goto label_4bf0b8;
    }
    ctx->pc = 0x4BF0B0u;
    {
        const bool branch_taken_0x4bf0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf0b0) {
            ctx->pc = 0x4BF0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF0B0u;
            // 0x4bf0b4: 0x96230084  lhu         $v1, 0x84($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF0ECu;
            goto label_4bf0ec;
        }
    }
    ctx->pc = 0x4BF0B8u;
label_4bf0b8:
    // 0x4bf0b8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4bf0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4bf0bc:
    // 0x4bf0bc: 0x40f809  jalr        $v0
label_4bf0c0:
    if (ctx->pc == 0x4BF0C0u) {
        ctx->pc = 0x4BF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0BCu;
        // 0x4bf0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF0C4u;
        goto label_4bf0c4;
    }
    ctx->pc = 0x4BF0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4BF0C4u);
        ctx->pc = 0x4BF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0BCu;
        // 0x4bf0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF0BCu, 0x4BF0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4BF0C4u;
label_4bf0c4:
    // 0x4bf0c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bf0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bf0c8:
    // 0x4bf0c8: 0x96430084  lhu         $v1, 0x84($s2)
    ctx->pc = 0x4bf0c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
label_4bf0cc:
    // 0x4bf0cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4bf0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4bf0d0:
    // 0x4bf0d0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4bf0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4bf0d4:
    // 0x4bf0d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bf0d8:
    // 0x4bf0d8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4bf0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4bf0dc:
    // 0x4bf0dc: 0x96430084  lhu         $v1, 0x84($s2)
    ctx->pc = 0x4bf0dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
label_4bf0e0:
    // 0x4bf0e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4bf0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4bf0e4:
    // 0x4bf0e4: 0x10000009  b           . + 4 + (0x9 << 2)
label_4bf0e8:
    if (ctx->pc == 0x4BF0E8u) {
        ctx->pc = 0x4BF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0E4u;
        // 0x4bf0e8: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF0ECu;
        goto label_4bf0ec;
    }
    ctx->pc = 0x4BF0E4u;
    {
        const bool branch_taken_0x4bf0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0E4u;
        // 0x4bf0e8: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf0e4) {
            ctx->pc = 0x4BF10Cu;
            goto label_4bf10c;
        }
    }
    ctx->pc = 0x4BF0ECu;
label_4bf0ec:
    // 0x4bf0ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4bf0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4bf0f0:
    // 0x4bf0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bf0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bf0f4:
    // 0x4bf0f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4bf0f8:
    if (ctx->pc == 0x4BF0F8u) {
        ctx->pc = 0x4BF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0F4u;
        // 0x4bf0f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF0FCu;
        goto label_4bf0fc;
    }
    ctx->pc = 0x4BF0F4u;
    {
        const bool branch_taken_0x4bf0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0F4u;
        // 0x4bf0f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf0f4) {
            ctx->pc = 0x4BF10Cu;
            goto label_4bf10c;
        }
    }
    ctx->pc = 0x4BF0FCu;
label_4bf0fc:
    // 0x4bf0fc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4bf0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4bf100:
    // 0x4bf100: 0x40f809  jalr        $v0
label_4bf104:
    if (ctx->pc == 0x4BF104u) {
        ctx->pc = 0x4BF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF100u;
        // 0x4bf104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF108u;
        goto label_4bf108;
    }
    ctx->pc = 0x4BF100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4BF108u);
        ctx->pc = 0x4BF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF100u;
        // 0x4bf104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF100u, 0x4BF108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4BF108u;
label_4bf108:
    // 0x4bf108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bf108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bf10c:
    // 0x4bf10c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bf10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf110:
    // 0x4bf110: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4bf110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bf114:
    // 0x4bf114: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4bf114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf118:
    // 0x4bf118: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4bf118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf11c:
    // 0x4bf11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf120:
    // 0x4bf120: 0x3e00008  jr          $ra
label_4bf124:
    if (ctx->pc == 0x4BF124u) {
        ctx->pc = 0x4BF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF120u;
        // 0x4bf124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF128u;
        goto label_4bf128;
    }
    ctx->pc = 0x4BF120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF120u;
        // 0x4bf124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF128u;
label_4bf128:
    // 0x4bf128: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4bf128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4bf12c:
    // 0x4bf12c: 0x0  nop
    ctx->pc = 0x4bf12cu;
    // NOP
label_4bf130:
    // 0x4bf130: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4bf130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4bf134:
    // 0x4bf134: 0x0  nop
    ctx->pc = 0x4bf134u;
    // NOP
    ctx->pc = 0x4bf138u;
}
