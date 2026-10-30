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

// Function: sub_003CC098
// Address: 0x3cc098 - 0x3cc158
void sub_003CC098_0x3cc098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC098_0x3cc098");
#endif

    switch (ctx->pc) {
        case 0x3cc098u: goto label_3cc098;
        case 0x3cc09cu: goto label_3cc09c;
        case 0x3cc0a0u: goto label_3cc0a0;
        case 0x3cc0a4u: goto label_3cc0a4;
        case 0x3cc0a8u: goto label_3cc0a8;
        case 0x3cc0acu: goto label_3cc0ac;
        case 0x3cc0b0u: goto label_3cc0b0;
        case 0x3cc0b4u: goto label_3cc0b4;
        case 0x3cc0b8u: goto label_3cc0b8;
        case 0x3cc0bcu: goto label_3cc0bc;
        case 0x3cc0c0u: goto label_3cc0c0;
        case 0x3cc0c4u: goto label_3cc0c4;
        case 0x3cc0c8u: goto label_3cc0c8;
        case 0x3cc0ccu: goto label_3cc0cc;
        case 0x3cc0d0u: goto label_3cc0d0;
        case 0x3cc0d4u: goto label_3cc0d4;
        case 0x3cc0d8u: goto label_3cc0d8;
        case 0x3cc0dcu: goto label_3cc0dc;
        case 0x3cc0e0u: goto label_3cc0e0;
        case 0x3cc0e4u: goto label_3cc0e4;
        case 0x3cc0e8u: goto label_3cc0e8;
        case 0x3cc0ecu: goto label_3cc0ec;
        case 0x3cc0f0u: goto label_3cc0f0;
        case 0x3cc0f4u: goto label_3cc0f4;
        case 0x3cc0f8u: goto label_3cc0f8;
        case 0x3cc0fcu: goto label_3cc0fc;
        case 0x3cc100u: goto label_3cc100;
        case 0x3cc104u: goto label_3cc104;
        case 0x3cc108u: goto label_3cc108;
        case 0x3cc10cu: goto label_3cc10c;
        case 0x3cc110u: goto label_3cc110;
        case 0x3cc114u: goto label_3cc114;
        case 0x3cc118u: goto label_3cc118;
        case 0x3cc11cu: goto label_3cc11c;
        case 0x3cc120u: goto label_3cc120;
        case 0x3cc124u: goto label_3cc124;
        case 0x3cc128u: goto label_3cc128;
        case 0x3cc12cu: goto label_3cc12c;
        case 0x3cc130u: goto label_3cc130;
        case 0x3cc134u: goto label_3cc134;
        case 0x3cc138u: goto label_3cc138;
        case 0x3cc13cu: goto label_3cc13c;
        case 0x3cc140u: goto label_3cc140;
        case 0x3cc144u: goto label_3cc144;
        case 0x3cc148u: goto label_3cc148;
        case 0x3cc14cu: goto label_3cc14c;
        case 0x3cc150u: goto label_3cc150;
        case 0x3cc154u: goto label_3cc154;
        default: break;
    }

    ctx->pc = 0x3cc098u;

label_3cc098:
    // 0x3cc098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cc098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3cc09c:
    // 0x3cc09c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3cc09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3cc0a0:
    // 0x3cc0a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cc0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3cc0a4:
    // 0x3cc0a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cc0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cc0a8:
    // 0x3cc0a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3cc0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3cc0ac:
    // 0x3cc0ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cc0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc0b0:
    // 0x3cc0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cc0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cc0b4:
    // 0x3cc0b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3cc0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cc0b8:
    // 0x3cc0b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3cc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cc0bc:
    // 0x3cc0bc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cc0bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc0c0:
    // 0x3cc0c0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc0c4:
    // 0x3cc0c4: 0x40f809  jalr        $v0
label_3cc0c8:
    if (ctx->pc == 0x3CC0C8u) {
        ctx->pc = 0x3CC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0C4u;
        // 0x3cc0c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC0CCu;
        goto label_3cc0cc;
    }
    ctx->pc = 0x3CC0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC0CCu);
        ctx->pc = 0x3CC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0C4u;
        // 0x3cc0c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC0C4u, 0x3CC0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC0CCu;
label_3cc0cc:
    // 0x3cc0cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3cc0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc0d0:
    // 0x3cc0d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3cc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cc0d4:
    // 0x3cc0d4: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_3cc0d8:
    if (ctx->pc == 0x3CC0D8u) {
        ctx->pc = 0x3CC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0D4u;
        // 0x3cc0d8: 0x2e02000b  sltiu       $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC0DCu;
        goto label_3cc0dc;
    }
    ctx->pc = 0x3CC0D4u;
    {
        const bool branch_taken_0x3cc0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0D4u;
        // 0x3cc0d8: 0x2e02000b  sltiu       $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc0d4) {
            ctx->pc = 0x3CC118u;
            goto label_3cc118;
        }
    }
    ctx->pc = 0x3CC0DCu;
label_3cc0dc:
    // 0x3cc0dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3cc0e0:
    if (ctx->pc == 0x3CC0E0u) {
        ctx->pc = 0x3CC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0DCu;
        // 0x3cc0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC0E4u;
        goto label_3cc0e4;
    }
    ctx->pc = 0x3CC0DCu;
    {
        const bool branch_taken_0x3cc0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0DCu;
        // 0x3cc0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc0dc) {
            ctx->pc = 0x3CC0F4u;
            goto label_3cc0f4;
        }
    }
    ctx->pc = 0x3CC0E4u;
label_3cc0e4:
    // 0x3cc0e4: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_3cc0e8:
    if (ctx->pc == 0x3CC0E8u) {
        ctx->pc = 0x3CC0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0E4u;
        // 0x3cc0e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC0ECu;
        goto label_3cc0ec;
    }
    ctx->pc = 0x3CC0E4u;
    {
        const bool branch_taken_0x3cc0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CC0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0E4u;
        // 0x3cc0e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc0e4) {
            ctx->pc = 0x3CC134u;
            goto label_3cc134;
        }
    }
    ctx->pc = 0x3CC0ECu;
label_3cc0ec:
    // 0x3cc0ec: 0x10000016  b           . + 4 + (0x16 << 2)
label_3cc0f0:
    if (ctx->pc == 0x3CC0F0u) {
        ctx->pc = 0x3CC0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0ECu;
        // 0x3cc0f0: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC0F4u;
        goto label_3cc0f4;
    }
    ctx->pc = 0x3CC0ECu;
    {
        const bool branch_taken_0x3cc0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0ECu;
        // 0x3cc0f0: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc0ec) {
            ctx->pc = 0x3CC148u;
            goto label_3cc148;
        }
    }
    ctx->pc = 0x3CC0F4u;
label_3cc0f4:
    // 0x3cc0f4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3cc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3cc0f8:
    // 0x3cc0f8: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
label_3cc0fc:
    if (ctx->pc == 0x3CC0FCu) {
        ctx->pc = 0x3CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0F8u;
        // 0x3cc0fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC100u;
        goto label_3cc100;
    }
    ctx->pc = 0x3CC0F8u;
    {
        const bool branch_taken_0x3cc0f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0F8u;
        // 0x3cc0fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc0f8) {
            ctx->pc = 0x3CC144u;
            goto label_3cc144;
        }
    }
    ctx->pc = 0x3CC100u;
label_3cc100:
    // 0x3cc100: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3cc100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3cc104:
    // 0x3cc104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cc104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cc108:
    // 0x3cc108: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3cc108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3cc10c:
    // 0x3cc10c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3cc10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3cc110:
    // 0x3cc110: 0x1000000c  b           . + 4 + (0xC << 2)
label_3cc114:
    if (ctx->pc == 0x3CC114u) {
        ctx->pc = 0x3CC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC110u;
        // 0x3cc114: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC118u;
        goto label_3cc118;
    }
    ctx->pc = 0x3CC110u;
    {
        const bool branch_taken_0x3cc110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC110u;
        // 0x3cc114: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc110) {
            ctx->pc = 0x3CC144u;
            goto label_3cc144;
        }
    }
    ctx->pc = 0x3CC118u;
label_3cc118:
    // 0x3cc118: 0xc0ea146  jal         func_3A8518
label_3cc11c:
    if (ctx->pc == 0x3CC11Cu) {
        ctx->pc = 0x3CC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC118u;
        // 0x3cc11c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC120u;
        goto label_3cc120;
    }
    ctx->pc = 0x3CC118u;
    SET_GPR_U32(ctx, 31, 0x3CC120u);
    ctx->pc = 0x3CC11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC118u;
    // 0x3cc11c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CC118u, 0x3CC120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC120u;
label_3cc120:
    // 0x3cc120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cc120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc124:
    // 0x3cc124: 0xc0e85fa  jal         func_3A17E8
label_3cc128:
    if (ctx->pc == 0x3CC128u) {
        ctx->pc = 0x3CC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC124u;
        // 0x3cc128: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC12Cu;
        goto label_3cc12c;
    }
    ctx->pc = 0x3CC124u;
    SET_GPR_U32(ctx, 31, 0x3CC12Cu);
    ctx->pc = 0x3CC128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC124u;
    // 0x3cc128: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3CC124u, 0x3CC12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC12Cu;
label_3cc12c:
    // 0x3cc12c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3cc130:
    if (ctx->pc == 0x3CC130u) {
        ctx->pc = 0x3CC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC12Cu;
        // 0x3cc130: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC134u;
        goto label_3cc134;
    }
    ctx->pc = 0x3CC12Cu;
    {
        const bool branch_taken_0x3cc12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC12Cu;
        // 0x3cc130: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc12c) {
            ctx->pc = 0x3CC144u;
            goto label_3cc144;
        }
    }
    ctx->pc = 0x3CC134u;
label_3cc134:
    // 0x3cc134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cc134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc138:
    // 0x3cc138: 0xc0f2c88  jal         func_3CB220
label_3cc13c:
    if (ctx->pc == 0x3CC13Cu) {
        ctx->pc = 0x3CC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC138u;
        // 0x3cc13c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC140u;
        goto label_3cc140;
    }
    ctx->pc = 0x3CC138u;
    SET_GPR_U32(ctx, 31, 0x3CC140u);
    ctx->pc = 0x3CC13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC138u;
    // 0x3cc13c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB220u, 0x3CC138u, 0x3CC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC140u;
label_3cc140:
    // 0x3cc140: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3cc140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cc144:
    // 0x3cc144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cc144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc148:
    // 0x3cc148: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3cc148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cc14c:
    // 0x3cc14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cc14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc150:
    // 0x3cc150: 0x3e00008  jr          $ra
label_3cc154:
    if (ctx->pc == 0x3CC154u) {
        ctx->pc = 0x3CC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC150u;
        // 0x3cc154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC158u;
        goto label_fallthrough_0x3cc150;
    }
    ctx->pc = 0x3CC150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC150u;
        // 0x3cc154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cc150:
    ctx->pc = 0x3CC158u;
}
