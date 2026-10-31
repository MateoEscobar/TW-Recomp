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

// Function: sub_003DA078
// Address: 0x3da078 - 0x3da158
void sub_003DA078_0x3da078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA078_0x3da078");
#endif

    switch (ctx->pc) {
        case 0x3da078u: goto label_3da078;
        case 0x3da07cu: goto label_3da07c;
        case 0x3da080u: goto label_3da080;
        case 0x3da084u: goto label_3da084;
        case 0x3da088u: goto label_3da088;
        case 0x3da08cu: goto label_3da08c;
        case 0x3da090u: goto label_3da090;
        case 0x3da094u: goto label_3da094;
        case 0x3da098u: goto label_3da098;
        case 0x3da09cu: goto label_3da09c;
        case 0x3da0a0u: goto label_3da0a0;
        case 0x3da0a4u: goto label_3da0a4;
        case 0x3da0a8u: goto label_3da0a8;
        case 0x3da0acu: goto label_3da0ac;
        case 0x3da0b0u: goto label_3da0b0;
        case 0x3da0b4u: goto label_3da0b4;
        case 0x3da0b8u: goto label_3da0b8;
        case 0x3da0bcu: goto label_3da0bc;
        case 0x3da0c0u: goto label_3da0c0;
        case 0x3da0c4u: goto label_3da0c4;
        case 0x3da0c8u: goto label_3da0c8;
        case 0x3da0ccu: goto label_3da0cc;
        case 0x3da0d0u: goto label_3da0d0;
        case 0x3da0d4u: goto label_3da0d4;
        case 0x3da0d8u: goto label_3da0d8;
        case 0x3da0dcu: goto label_3da0dc;
        case 0x3da0e0u: goto label_3da0e0;
        case 0x3da0e4u: goto label_3da0e4;
        case 0x3da0e8u: goto label_3da0e8;
        case 0x3da0ecu: goto label_3da0ec;
        case 0x3da0f0u: goto label_3da0f0;
        case 0x3da0f4u: goto label_3da0f4;
        case 0x3da0f8u: goto label_3da0f8;
        case 0x3da0fcu: goto label_3da0fc;
        case 0x3da100u: goto label_3da100;
        case 0x3da104u: goto label_3da104;
        case 0x3da108u: goto label_3da108;
        case 0x3da10cu: goto label_3da10c;
        case 0x3da110u: goto label_3da110;
        case 0x3da114u: goto label_3da114;
        case 0x3da118u: goto label_3da118;
        case 0x3da11cu: goto label_3da11c;
        case 0x3da120u: goto label_3da120;
        case 0x3da124u: goto label_3da124;
        case 0x3da128u: goto label_3da128;
        case 0x3da12cu: goto label_3da12c;
        case 0x3da130u: goto label_3da130;
        case 0x3da134u: goto label_3da134;
        case 0x3da138u: goto label_3da138;
        case 0x3da13cu: goto label_3da13c;
        case 0x3da140u: goto label_3da140;
        case 0x3da144u: goto label_3da144;
        case 0x3da148u: goto label_3da148;
        case 0x3da14cu: goto label_3da14c;
        case 0x3da150u: goto label_3da150;
        case 0x3da154u: goto label_3da154;
        default: break;
    }

    ctx->pc = 0x3da078u;

label_3da078:
    // 0x3da078: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3da078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3da07c:
    // 0x3da07c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3da07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3da080:
    // 0x3da080: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3da080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3da084:
    // 0x3da084: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3da084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3da088:
    // 0x3da088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3da088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3da08c:
    // 0x3da08c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3da08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da090:
    // 0x3da090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3da094:
    // 0x3da094: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3da094u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3da098:
    // 0x3da098: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3da098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3da09c:
    // 0x3da09c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da09cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da0a0:
    // 0x3da0a0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da0a4:
    // 0x3da0a4: 0x40f809  jalr        $v0
label_3da0a8:
    if (ctx->pc == 0x3DA0A8u) {
        ctx->pc = 0x3DA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0A4u;
        // 0x3da0a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA0ACu;
        goto label_3da0ac;
    }
    ctx->pc = 0x3DA0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA0ACu);
        ctx->pc = 0x3DA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0A4u;
        // 0x3da0a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA0A4u, 0x3DA0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA0ACu;
label_3da0ac:
    // 0x3da0ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3da0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3da0b0:
    // 0x3da0b0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3da0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3da0b4:
    // 0x3da0b4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3da0b8:
    if (ctx->pc == 0x3DA0B8u) {
        ctx->pc = 0x3DA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0B4u;
        // 0x3da0b8: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA0BCu;
        goto label_3da0bc;
    }
    ctx->pc = 0x3DA0B4u;
    {
        const bool branch_taken_0x3da0b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0B4u;
        // 0x3da0b8: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0b4) {
            ctx->pc = 0x3DA0D8u;
            goto label_3da0d8;
        }
    }
    ctx->pc = 0x3DA0BCu;
label_3da0bc:
    // 0x3da0bc: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_3da0c0:
    if (ctx->pc == 0x3DA0C0u) {
        ctx->pc = 0x3DA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0BCu;
        // 0x3da0c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA0C4u;
        goto label_3da0c4;
    }
    ctx->pc = 0x3DA0BCu;
    {
        const bool branch_taken_0x3da0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da0bc) {
            ctx->pc = 0x3DA0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA0BCu;
            // 0x3da0c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA140u;
            goto label_3da140;
        }
    }
    ctx->pc = 0x3DA0C4u;
label_3da0c4:
    // 0x3da0c4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3da0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3da0c8:
    // 0x3da0c8: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_3da0cc:
    if (ctx->pc == 0x3DA0CCu) {
        ctx->pc = 0x3DA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0C8u;
        // 0x3da0cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA0D0u;
        goto label_3da0d0;
    }
    ctx->pc = 0x3DA0C8u;
    {
        const bool branch_taken_0x3da0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0C8u;
        // 0x3da0cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0c8) {
            ctx->pc = 0x3DA118u;
            goto label_3da118;
        }
    }
    ctx->pc = 0x3DA0D0u;
label_3da0d0:
    // 0x3da0d0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3da0d4:
    if (ctx->pc == 0x3DA0D4u) {
        ctx->pc = 0x3DA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0D0u;
        // 0x3da0d4: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA0D8u;
        goto label_3da0d8;
    }
    ctx->pc = 0x3DA0D0u;
    {
        const bool branch_taken_0x3da0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0D0u;
        // 0x3da0d4: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0d0) {
            ctx->pc = 0x3DA144u;
            goto label_3da144;
        }
    }
    ctx->pc = 0x3DA0D8u;
label_3da0d8:
    // 0x3da0d8: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3da0d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3da0dc:
    // 0x3da0dc: 0x3c049711  lui         $a0, 0x9711
    ctx->pc = 0x3da0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38673 << 16));
label_3da0e0:
    // 0x3da0e0: 0x34846eb7  ori         $a0, $a0, 0x6EB7
    ctx->pc = 0x3da0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28343);
label_3da0e4:
    // 0x3da0e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3da0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3da0e8:
    // 0x3da0e8: 0xc045c8e  jal         func_117238
label_3da0ec:
    if (ctx->pc == 0x3DA0ECu) {
        ctx->pc = 0x3DA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0E8u;
        // 0x3da0ec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA0F0u;
        goto label_3da0f0;
    }
    ctx->pc = 0x3DA0E8u;
    SET_GPR_U32(ctx, 31, 0x3DA0F0u);
    ctx->pc = 0x3DA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA0E8u;
    // 0x3da0ec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3DA0E8u, 0x3DA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA0F0u;
label_3da0f0:
    // 0x3da0f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3da0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3da0f4:
    // 0x3da0f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3da0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3da0f8:
    // 0x3da0f8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_3da0fc:
    if (ctx->pc == 0x3DA0FCu) {
        ctx->pc = 0x3DA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0F8u;
        // 0x3da0fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA100u;
        goto label_3da100;
    }
    ctx->pc = 0x3DA0F8u;
    {
        const bool branch_taken_0x3da0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0F8u;
        // 0x3da0fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0f8) {
            ctx->pc = 0x3DA140u;
            goto label_3da140;
        }
    }
    ctx->pc = 0x3DA100u;
label_3da100:
    // 0x3da100: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3da100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3da104:
    // 0x3da104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3da104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3da108:
    // 0x3da108: 0xc0e858c  jal         func_3A1630
label_3da10c:
    if (ctx->pc == 0x3DA10Cu) {
        ctx->pc = 0x3DA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA108u;
        // 0x3da10c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA110u;
        goto label_3da110;
    }
    ctx->pc = 0x3DA108u;
    SET_GPR_U32(ctx, 31, 0x3DA110u);
    ctx->pc = 0x3DA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA108u;
    // 0x3da10c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA108u, 0x3DA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA110u;
label_3da110:
    // 0x3da110: 0x1000000b  b           . + 4 + (0xB << 2)
label_3da114:
    if (ctx->pc == 0x3DA114u) {
        ctx->pc = 0x3DA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA110u;
        // 0x3da114: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA118u;
        goto label_3da118;
    }
    ctx->pc = 0x3DA110u;
    {
        const bool branch_taken_0x3da110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA110u;
        // 0x3da114: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da110) {
            ctx->pc = 0x3DA140u;
            goto label_3da140;
        }
    }
    ctx->pc = 0x3DA118u;
label_3da118:
    // 0x3da118: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3da118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3da11c:
    // 0x3da11c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3da120:
    // 0x3da120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3da120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da124:
    // 0x3da124: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3da124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3da128:
    // 0x3da128: 0xc0e9182  jal         func_3A4608
label_3da12c:
    if (ctx->pc == 0x3DA12Cu) {
        ctx->pc = 0x3DA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA128u;
        // 0x3da12c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA130u;
        goto label_3da130;
    }
    ctx->pc = 0x3DA128u;
    SET_GPR_U32(ctx, 31, 0x3DA130u);
    ctx->pc = 0x3DA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA128u;
    // 0x3da12c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3DA128u, 0x3DA130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA130u;
label_3da130:
    // 0x3da130: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3da130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3da134:
    // 0x3da134: 0xc0e919a  jal         func_3A4668
label_3da138:
    if (ctx->pc == 0x3DA138u) {
        ctx->pc = 0x3DA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA134u;
        // 0x3da138: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA13Cu;
        goto label_3da13c;
    }
    ctx->pc = 0x3DA134u;
    SET_GPR_U32(ctx, 31, 0x3DA13Cu);
    ctx->pc = 0x3DA138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA134u;
    // 0x3da138: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3DA134u, 0x3DA13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA13Cu;
label_3da13c:
    // 0x3da13c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3da13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3da140:
    // 0x3da140: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3da140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3da144:
    // 0x3da144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3da144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da148:
    // 0x3da148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3da14c:
    // 0x3da14c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3da14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3da150:
    // 0x3da150: 0x3e00008  jr          $ra
label_3da154:
    if (ctx->pc == 0x3DA154u) {
        ctx->pc = 0x3DA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA150u;
        // 0x3da154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA158u;
        goto label_fallthrough_0x3da150;
    }
    ctx->pc = 0x3DA150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA150u;
        // 0x3da154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3da150:
    ctx->pc = 0x3DA158u;
}
