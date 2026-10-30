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

// Function: sub_0038C868
// Address: 0x38c868 - 0x38c988
void sub_0038C868_0x38c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C868_0x38c868");
#endif

    switch (ctx->pc) {
        case 0x38c868u: goto label_38c868;
        case 0x38c86cu: goto label_38c86c;
        case 0x38c870u: goto label_38c870;
        case 0x38c874u: goto label_38c874;
        case 0x38c878u: goto label_38c878;
        case 0x38c87cu: goto label_38c87c;
        case 0x38c880u: goto label_38c880;
        case 0x38c884u: goto label_38c884;
        case 0x38c888u: goto label_38c888;
        case 0x38c88cu: goto label_38c88c;
        case 0x38c890u: goto label_38c890;
        case 0x38c894u: goto label_38c894;
        case 0x38c898u: goto label_38c898;
        case 0x38c89cu: goto label_38c89c;
        case 0x38c8a0u: goto label_38c8a0;
        case 0x38c8a4u: goto label_38c8a4;
        case 0x38c8a8u: goto label_38c8a8;
        case 0x38c8acu: goto label_38c8ac;
        case 0x38c8b0u: goto label_38c8b0;
        case 0x38c8b4u: goto label_38c8b4;
        case 0x38c8b8u: goto label_38c8b8;
        case 0x38c8bcu: goto label_38c8bc;
        case 0x38c8c0u: goto label_38c8c0;
        case 0x38c8c4u: goto label_38c8c4;
        case 0x38c8c8u: goto label_38c8c8;
        case 0x38c8ccu: goto label_38c8cc;
        case 0x38c8d0u: goto label_38c8d0;
        case 0x38c8d4u: goto label_38c8d4;
        case 0x38c8d8u: goto label_38c8d8;
        case 0x38c8dcu: goto label_38c8dc;
        case 0x38c8e0u: goto label_38c8e0;
        case 0x38c8e4u: goto label_38c8e4;
        case 0x38c8e8u: goto label_38c8e8;
        case 0x38c8ecu: goto label_38c8ec;
        case 0x38c8f0u: goto label_38c8f0;
        case 0x38c8f4u: goto label_38c8f4;
        case 0x38c8f8u: goto label_38c8f8;
        case 0x38c8fcu: goto label_38c8fc;
        case 0x38c900u: goto label_38c900;
        case 0x38c904u: goto label_38c904;
        case 0x38c908u: goto label_38c908;
        case 0x38c90cu: goto label_38c90c;
        case 0x38c910u: goto label_38c910;
        case 0x38c914u: goto label_38c914;
        case 0x38c918u: goto label_38c918;
        case 0x38c91cu: goto label_38c91c;
        case 0x38c920u: goto label_38c920;
        case 0x38c924u: goto label_38c924;
        case 0x38c928u: goto label_38c928;
        case 0x38c92cu: goto label_38c92c;
        case 0x38c930u: goto label_38c930;
        case 0x38c934u: goto label_38c934;
        case 0x38c938u: goto label_38c938;
        case 0x38c93cu: goto label_38c93c;
        case 0x38c940u: goto label_38c940;
        case 0x38c944u: goto label_38c944;
        case 0x38c948u: goto label_38c948;
        case 0x38c94cu: goto label_38c94c;
        case 0x38c950u: goto label_38c950;
        case 0x38c954u: goto label_38c954;
        case 0x38c958u: goto label_38c958;
        case 0x38c95cu: goto label_38c95c;
        case 0x38c960u: goto label_38c960;
        case 0x38c964u: goto label_38c964;
        case 0x38c968u: goto label_38c968;
        case 0x38c96cu: goto label_38c96c;
        case 0x38c970u: goto label_38c970;
        case 0x38c974u: goto label_38c974;
        case 0x38c978u: goto label_38c978;
        case 0x38c97cu: goto label_38c97c;
        case 0x38c980u: goto label_38c980;
        case 0x38c984u: goto label_38c984;
        default: break;
    }

    ctx->pc = 0x38c868u;

label_38c868:
    // 0x38c868: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x38c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_38c86c:
    // 0x38c86c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x38c86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_38c870:
    // 0x38c870: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x38c870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_38c874:
    // 0x38c874: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38c874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c878:
    // 0x38c878: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x38c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_38c87c:
    // 0x38c87c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x38c87cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_38c880:
    // 0x38c880: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x38c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_38c884:
    // 0x38c884: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_38c888:
    // 0x38c888: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x38c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_38c88c:
    // 0x38c88c: 0x8e231204  lw          $v1, 0x1204($s1)
    ctx->pc = 0x38c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4612)));
label_38c890:
    // 0x38c890: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_38c894:
    if (ctx->pc == 0x38C894u) {
        ctx->pc = 0x38C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C890u;
        // 0x38c894: 0x26331204  addiu       $s3, $s1, 0x1204 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4612));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C898u;
        goto label_38c898;
    }
    ctx->pc = 0x38C890u;
    {
        const bool branch_taken_0x38c890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C890u;
        // 0x38c894: 0x26331204  addiu       $s3, $s1, 0x1204 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c890) {
            ctx->pc = 0x38C968u;
            goto label_38c968;
        }
    }
    ctx->pc = 0x38C898u;
label_38c898:
    // 0x38c898: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x38c898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_38c89c:
    // 0x38c89c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x38c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_38c8a0:
    // 0x38c8a0: 0xc0cd940  jal         func_336500
label_38c8a4:
    if (ctx->pc == 0x38C8A4u) {
        ctx->pc = 0x38C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8A0u;
        // 0x38c8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8A8u;
        goto label_38c8a8;
    }
    ctx->pc = 0x38C8A0u;
    SET_GPR_U32(ctx, 31, 0x38C8A8u);
    ctx->pc = 0x38C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C8A0u;
    // 0x38c8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38C8A0u, 0x38C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C8A8u;
label_38c8a8:
    // 0x38c8a8: 0x8e2311e0  lw          $v1, 0x11E0($s1)
    ctx->pc = 0x38c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_38c8ac:
    // 0x38c8ac: 0x240405f0  addiu       $a0, $zero, 0x5F0
    ctx->pc = 0x38c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_38c8b0:
    // 0x38c8b0: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x38c8b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_38c8b4:
    // 0x38c8b4: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x38c8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_38c8b8:
    // 0x38c8b8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x38c8b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38c8bc:
    // 0x38c8bc: 0x24c6e4a0  addiu       $a2, $a2, -0x1B60
    ctx->pc = 0x38c8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960288));
label_38c8c0:
    // 0x38c8c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x38c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38c8c4:
    // 0x38c8c4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x38c8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_38c8c8:
    // 0x38c8c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38c8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c8cc:
    // 0x38c8cc: 0xc0e1c74  jal         func_3871D0
label_38c8d0:
    if (ctx->pc == 0x38C8D0u) {
        ctx->pc = 0x38C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8CCu;
        // 0x38c8d0: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8D4u;
        goto label_38c8d4;
    }
    ctx->pc = 0x38C8CCu;
    SET_GPR_U32(ctx, 31, 0x38C8D4u);
    ctx->pc = 0x38C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C8CCu;
    // 0x38c8d0: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3871D0u, 0x38C8CCu, 0x38C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C8D4u;
label_38c8d4:
    // 0x38c8d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c8d8:
    // 0x38c8d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38c8dc:
    // 0x38c8dc: 0x8c452c7c  lw          $a1, 0x2C7C($v0)
    ctx->pc = 0x38c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_38c8e0:
    // 0x38c8e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x38c8e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38c8e4:
    // 0x38c8e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38c8e8:
    // 0x38c8e8: 0x8cb00840  lw          $s0, 0x840($a1)
    ctx->pc = 0x38c8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_38c8ec:
    // 0x38c8ec: 0x40f809  jalr        $v0
label_38c8f0:
    if (ctx->pc == 0x38C8F0u) {
        ctx->pc = 0x38C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8ECu;
        // 0x38c8f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8F4u;
        goto label_38c8f4;
    }
    ctx->pc = 0x38C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C8F4u);
        ctx->pc = 0x38C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8ECu;
        // 0x38c8f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C8ECu, 0x38C8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C8F4u;
label_38c8f4:
    // 0x38c8f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x38c8f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38c8f8:
    // 0x38c8f8: 0x8e4bbd30  lw          $t3, -0x42D0($s2)
    ctx->pc = 0x38c8f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_38c8fc:
    // 0x38c8fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_38c900:
    // 0x38c900: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x38c900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_38c904:
    // 0x38c904: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38c904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_38c908:
    // 0x38c908: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x38c908u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_38c90c:
    // 0x38c90c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x38c90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38c910:
    // 0x38c910: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38c910u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c914:
    // 0x38c914: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_38c918:
    // 0x38c918: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x38c918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
label_38c91c:
    // 0x38c91c: 0x24c6e3c8  addiu       $a2, $a2, -0x1C38
    ctx->pc = 0x38c91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960072));
label_38c920:
    // 0x38c920: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x38c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_38c924:
    // 0x38c924: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38c924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_38c928:
    // 0x38c928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38c928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c92c:
    // 0x38c92c: 0xc0e6250  jal         func_398940
label_38c930:
    if (ctx->pc == 0x38C930u) {
        ctx->pc = 0x38C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C92Cu;
        // 0x38c930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C934u;
        goto label_38c934;
    }
    ctx->pc = 0x38C92Cu;
    SET_GPR_U32(ctx, 31, 0x38C934u);
    ctx->pc = 0x38C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C92Cu;
    // 0x38c930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x38C92Cu, 0x38C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C934u;
label_38c934:
    // 0x38c934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c938:
    // 0x38c938: 0xc0e4060  jal         func_390180
label_38c93c:
    if (ctx->pc == 0x38C93Cu) {
        ctx->pc = 0x38C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C938u;
        // 0x38c93c: 0xae221204  sw          $v0, 0x1204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C940u;
        goto label_38c940;
    }
    ctx->pc = 0x38C938u;
    SET_GPR_U32(ctx, 31, 0x38C940u);
    ctx->pc = 0x38C93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C938u;
    // 0x38c93c: 0xae221204  sw          $v0, 0x1204($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38C938u, 0x38C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C940u;
label_38c940:
    // 0x38c940: 0xc0e57ce  jal         func_395F38
label_38c944:
    if (ctx->pc == 0x38C944u) {
        ctx->pc = 0x38C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C940u;
        // 0x38c944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C948u;
        goto label_38c948;
    }
    ctx->pc = 0x38C940u;
    SET_GPR_U32(ctx, 31, 0x38C948u);
    ctx->pc = 0x38C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C940u;
    // 0x38c944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38C940u, 0x38C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C948u;
label_38c948:
    // 0x38c948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38c948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38c94c:
    // 0x38c94c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_38c950:
    if (ctx->pc == 0x38C950u) {
        ctx->pc = 0x38C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C94Cu;
        // 0x38c950: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C954u;
        goto label_38c954;
    }
    ctx->pc = 0x38C94Cu;
    {
        const bool branch_taken_0x38c94c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C94Cu;
        // 0x38c950: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c94c) {
            ctx->pc = 0x38C96Cu;
            goto label_38c96c;
        }
    }
    ctx->pc = 0x38C954u;
label_38c954:
    // 0x38c954: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x38c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_38c958:
    // 0x38c958: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_38c95c:
    // 0x38c95c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x38c95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_38c960:
    // 0x38c960: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38c960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_38c964:
    // 0x38c964: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x38c964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_38c968:
    // 0x38c968: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x38c968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38c96c:
    // 0x38c96c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x38c96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38c970:
    // 0x38c970: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x38c970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38c974:
    // 0x38c974: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x38c974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38c978:
    // 0x38c978: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38c978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38c97c:
    // 0x38c97c: 0x3e00008  jr          $ra
label_38c980:
    if (ctx->pc == 0x38C980u) {
        ctx->pc = 0x38C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C97Cu;
        // 0x38c980: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C984u;
        goto label_38c984;
    }
    ctx->pc = 0x38C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C97Cu;
        // 0x38c980: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C984u;
label_38c984:
    // 0x38c984: 0x0  nop
    ctx->pc = 0x38c984u;
    // NOP
    ctx->pc = 0x38c988u;
}
