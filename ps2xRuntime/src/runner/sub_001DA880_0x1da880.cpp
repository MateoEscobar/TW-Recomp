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

// Function: sub_001DA880
// Address: 0x1da880 - 0x1da9b8
void sub_001DA880_0x1da880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA880_0x1da880");
#endif

    switch (ctx->pc) {
        case 0x1da880u: goto label_1da880;
        case 0x1da884u: goto label_1da884;
        case 0x1da888u: goto label_1da888;
        case 0x1da88cu: goto label_1da88c;
        case 0x1da890u: goto label_1da890;
        case 0x1da894u: goto label_1da894;
        case 0x1da898u: goto label_1da898;
        case 0x1da89cu: goto label_1da89c;
        case 0x1da8a0u: goto label_1da8a0;
        case 0x1da8a4u: goto label_1da8a4;
        case 0x1da8a8u: goto label_1da8a8;
        case 0x1da8acu: goto label_1da8ac;
        case 0x1da8b0u: goto label_1da8b0;
        case 0x1da8b4u: goto label_1da8b4;
        case 0x1da8b8u: goto label_1da8b8;
        case 0x1da8bcu: goto label_1da8bc;
        case 0x1da8c0u: goto label_1da8c0;
        case 0x1da8c4u: goto label_1da8c4;
        case 0x1da8c8u: goto label_1da8c8;
        case 0x1da8ccu: goto label_1da8cc;
        case 0x1da8d0u: goto label_1da8d0;
        case 0x1da8d4u: goto label_1da8d4;
        case 0x1da8d8u: goto label_1da8d8;
        case 0x1da8dcu: goto label_1da8dc;
        case 0x1da8e0u: goto label_1da8e0;
        case 0x1da8e4u: goto label_1da8e4;
        case 0x1da8e8u: goto label_1da8e8;
        case 0x1da8ecu: goto label_1da8ec;
        case 0x1da8f0u: goto label_1da8f0;
        case 0x1da8f4u: goto label_1da8f4;
        case 0x1da8f8u: goto label_1da8f8;
        case 0x1da8fcu: goto label_1da8fc;
        case 0x1da900u: goto label_1da900;
        case 0x1da904u: goto label_1da904;
        case 0x1da908u: goto label_1da908;
        case 0x1da90cu: goto label_1da90c;
        case 0x1da910u: goto label_1da910;
        case 0x1da914u: goto label_1da914;
        case 0x1da918u: goto label_1da918;
        case 0x1da91cu: goto label_1da91c;
        case 0x1da920u: goto label_1da920;
        case 0x1da924u: goto label_1da924;
        case 0x1da928u: goto label_1da928;
        case 0x1da92cu: goto label_1da92c;
        case 0x1da930u: goto label_1da930;
        case 0x1da934u: goto label_1da934;
        case 0x1da938u: goto label_1da938;
        case 0x1da93cu: goto label_1da93c;
        case 0x1da940u: goto label_1da940;
        case 0x1da944u: goto label_1da944;
        case 0x1da948u: goto label_1da948;
        case 0x1da94cu: goto label_1da94c;
        case 0x1da950u: goto label_1da950;
        case 0x1da954u: goto label_1da954;
        case 0x1da958u: goto label_1da958;
        case 0x1da95cu: goto label_1da95c;
        case 0x1da960u: goto label_1da960;
        case 0x1da964u: goto label_1da964;
        case 0x1da968u: goto label_1da968;
        case 0x1da96cu: goto label_1da96c;
        case 0x1da970u: goto label_1da970;
        case 0x1da974u: goto label_1da974;
        case 0x1da978u: goto label_1da978;
        case 0x1da97cu: goto label_1da97c;
        case 0x1da980u: goto label_1da980;
        case 0x1da984u: goto label_1da984;
        case 0x1da988u: goto label_1da988;
        case 0x1da98cu: goto label_1da98c;
        case 0x1da990u: goto label_1da990;
        case 0x1da994u: goto label_1da994;
        case 0x1da998u: goto label_1da998;
        case 0x1da99cu: goto label_1da99c;
        case 0x1da9a0u: goto label_1da9a0;
        case 0x1da9a4u: goto label_1da9a4;
        case 0x1da9a8u: goto label_1da9a8;
        case 0x1da9acu: goto label_1da9ac;
        case 0x1da9b0u: goto label_1da9b0;
        case 0x1da9b4u: goto label_1da9b4;
        default: break;
    }

    ctx->pc = 0x1da880u;

label_1da880:
    // 0x1da880: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1da880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1da884:
    // 0x1da884: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1da884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1da888:
    // 0x1da888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1da888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1da88c:
    // 0x1da88c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da890:
    // 0x1da890: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1da890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1da894:
    // 0x1da894: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1da894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1da898:
    // 0x1da898: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1da898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1da89c:
    // 0x1da89c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1da89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1da8a0:
    // 0x1da8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1da8a4:
    // 0x1da8a4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1da8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1da8a8:
    // 0x1da8a8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1da8ac:
    if (ctx->pc == 0x1DA8ACu) {
        ctx->pc = 0x1DA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8A8u;
        // 0x1da8ac: 0x30b300ff  andi        $s3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA8B0u;
        goto label_1da8b0;
    }
    ctx->pc = 0x1DA8A8u;
    {
        const bool branch_taken_0x1da8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8A8u;
        // 0x1da8ac: 0x30b300ff  andi        $s3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8a8) {
            ctx->pc = 0x1DA994u;
            goto label_1da994;
        }
    }
    ctx->pc = 0x1DA8B0u;
label_1da8b0:
    // 0x1da8b0: 0x8e2245c8  lw          $v0, 0x45C8($s1)
    ctx->pc = 0x1da8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17864)));
label_1da8b4:
    // 0x1da8b4: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_1da8b8:
    if (ctx->pc == 0x1DA8B8u) {
        ctx->pc = 0x1DA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8B4u;
        // 0x1da8b8: 0x8e2445c0  lw          $a0, 0x45C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA8BCu;
        goto label_1da8bc;
    }
    ctx->pc = 0x1DA8B4u;
    {
        const bool branch_taken_0x1da8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da8b4) {
            ctx->pc = 0x1DA8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA8B4u;
            // 0x1da8b8: 0x8e2445c0  lw          $a0, 0x45C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA97Cu;
            goto label_1da97c;
        }
    }
    ctx->pc = 0x1DA8BCu;
label_1da8bc:
    // 0x1da8bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1da8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da8c0:
    // 0x1da8c0: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x1da8c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
label_1da8c4:
    // 0x1da8c4: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x1da8c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_1da8c8:
    // 0x1da8c8: 0x263007a0  addiu       $s0, $s1, 0x7A0
    ctx->pc = 0x1da8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
label_1da8cc:
    // 0x1da8cc: 0x0  nop
    ctx->pc = 0x1da8ccu;
    // NOP
label_1da8d0:
    // 0x1da8d0: 0x8e2245c0  lw          $v0, 0x45C0($s1)
    ctx->pc = 0x1da8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17856)));
label_1da8d4:
    // 0x1da8d4: 0x16420013  bne         $s2, $v0, . + 4 + (0x13 << 2)
label_1da8d8:
    if (ctx->pc == 0x1DA8D8u) {
        ctx->pc = 0x1DA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8D4u;
        // 0x1da8d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA8DCu;
        goto label_1da8dc;
    }
    ctx->pc = 0x1DA8D4u;
    {
        const bool branch_taken_0x1da8d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8D4u;
        // 0x1da8d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8d4) {
            ctx->pc = 0x1DA924u;
            goto label_1da924;
        }
    }
    ctx->pc = 0x1DA8DCu;
label_1da8dc:
    // 0x1da8dc: 0x26a5d310  addiu       $a1, $s5, -0x2CF0
    ctx->pc = 0x1da8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955792));
label_1da8e0:
    // 0x1da8e0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1da8e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1da8e4:
    // 0x1da8e4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1da8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1da8e8:
    // 0x1da8e8: 0x60f809  jalr        $v1
label_1da8ec:
    if (ctx->pc == 0x1DA8ECu) {
        ctx->pc = 0x1DA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8E8u;
        // 0x1da8ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA8F0u;
        goto label_1da8f0;
    }
    ctx->pc = 0x1DA8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA8F0u);
        ctx->pc = 0x1DA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8E8u;
        // 0x1da8ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8E8u, 0x1DA8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA8F0u;
label_1da8f0:
    // 0x1da8f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da8f4:
    // 0x1da8f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1da8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da8f8:
    // 0x1da8f8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1da8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1da8fc:
    // 0x1da8fc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1da8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1da900:
    // 0x1da900: 0x60f809  jalr        $v1
label_1da904:
    if (ctx->pc == 0x1DA904u) {
        ctx->pc = 0x1DA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA900u;
        // 0x1da904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA908u;
        goto label_1da908;
    }
    ctx->pc = 0x1DA900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA908u);
        ctx->pc = 0x1DA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA900u;
        // 0x1da904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA900u, 0x1DA908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA908u;
label_1da908:
    // 0x1da908: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da90c:
    // 0x1da90c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1da90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1da910:
    // 0x1da910: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1da910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1da914:
    // 0x1da914: 0x60f809  jalr        $v1
label_1da918:
    if (ctx->pc == 0x1DA918u) {
        ctx->pc = 0x1DA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA914u;
        // 0x1da918: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA91Cu;
        goto label_1da91c;
    }
    ctx->pc = 0x1DA914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA91Cu);
        ctx->pc = 0x1DA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA914u;
        // 0x1da918: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA914u, 0x1DA91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA91Cu;
label_1da91c:
    // 0x1da91c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1da920:
    if (ctx->pc == 0x1DA920u) {
        ctx->pc = 0x1DA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA91Cu;
        // 0x1da920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA924u;
        goto label_1da924;
    }
    ctx->pc = 0x1DA91Cu;
    {
        const bool branch_taken_0x1da91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA91Cu;
        // 0x1da920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da91c) {
            ctx->pc = 0x1DA968u;
            goto label_1da968;
        }
    }
    ctx->pc = 0x1DA924u;
label_1da924:
    // 0x1da924: 0x2685d320  addiu       $a1, $s4, -0x2CE0
    ctx->pc = 0x1da924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955808));
label_1da928:
    // 0x1da928: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1da928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1da92c:
    // 0x1da92c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1da92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1da930:
    // 0x1da930: 0x60f809  jalr        $v1
label_1da934:
    if (ctx->pc == 0x1DA934u) {
        ctx->pc = 0x1DA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA930u;
        // 0x1da934: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA938u;
        goto label_1da938;
    }
    ctx->pc = 0x1DA930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA938u);
        ctx->pc = 0x1DA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA930u;
        // 0x1da934: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA930u, 0x1DA938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA938u;
label_1da938:
    // 0x1da938: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da93c:
    // 0x1da93c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1da93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da940:
    // 0x1da940: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1da940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1da944:
    // 0x1da944: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1da944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1da948:
    // 0x1da948: 0x60f809  jalr        $v1
label_1da94c:
    if (ctx->pc == 0x1DA94Cu) {
        ctx->pc = 0x1DA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA948u;
        // 0x1da94c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA950u;
        goto label_1da950;
    }
    ctx->pc = 0x1DA948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA950u);
        ctx->pc = 0x1DA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA948u;
        // 0x1da94c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA948u, 0x1DA950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA950u;
label_1da950:
    // 0x1da950: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da954:
    // 0x1da954: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1da954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1da958:
    // 0x1da958: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1da958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1da95c:
    // 0x1da95c: 0x60f809  jalr        $v1
label_1da960:
    if (ctx->pc == 0x1DA960u) {
        ctx->pc = 0x1DA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA95Cu;
        // 0x1da960: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA964u;
        goto label_1da964;
    }
    ctx->pc = 0x1DA95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA964u);
        ctx->pc = 0x1DA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA95Cu;
        // 0x1da960: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA95Cu, 0x1DA964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA964u;
label_1da964:
    // 0x1da964: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1da964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1da968:
    // 0x1da968: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x1da968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1da96c:
    // 0x1da96c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_1da970:
    if (ctx->pc == 0x1DA970u) {
        ctx->pc = 0x1DA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA96Cu;
        // 0x1da970: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA974u;
        goto label_1da974;
    }
    ctx->pc = 0x1DA96Cu;
    {
        const bool branch_taken_0x1da96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA96Cu;
        // 0x1da970: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da96c) {
            ctx->pc = 0x1DA8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8d0;
        }
    }
    ctx->pc = 0x1DA974u;
label_1da974:
    // 0x1da974: 0x10000008  b           . + 4 + (0x8 << 2)
label_1da978:
    if (ctx->pc == 0x1DA978u) {
        ctx->pc = 0x1DA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA974u;
        // 0x1da978: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA97Cu;
        goto label_1da97c;
    }
    ctx->pc = 0x1DA974u;
    {
        const bool branch_taken_0x1da974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA974u;
        // 0x1da978: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da974) {
            ctx->pc = 0x1DA998u;
            goto label_1da998;
        }
    }
    ctx->pc = 0x1DA97Cu;
label_1da97c:
    // 0x1da97c: 0x240206f0  addiu       $v0, $zero, 0x6F0
    ctx->pc = 0x1da97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
label_1da980:
    // 0x1da980: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1da980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da984:
    // 0x1da984: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1da984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1da988:
    // 0x1da988: 0x24841530  addiu       $a0, $a0, 0x1530
    ctx->pc = 0x1da988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
label_1da98c:
    // 0x1da98c: 0xc0758b6  jal         func_1D62D8
label_1da990:
    if (ctx->pc == 0x1DA990u) {
        ctx->pc = 0x1DA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA98Cu;
        // 0x1da990: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA994u;
        goto label_1da994;
    }
    ctx->pc = 0x1DA98Cu;
    SET_GPR_U32(ctx, 31, 0x1DA994u);
    ctx->pc = 0x1DA990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA98Cu;
    // 0x1da990: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D62D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D62D8u, 0x1DA98Cu, 0x1DA994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA994u;
label_1da994:
    // 0x1da994: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1da994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1da998:
    // 0x1da998: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1da998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1da99c:
    // 0x1da99c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1da99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1da9a0:
    // 0x1da9a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1da9a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1da9a4:
    // 0x1da9a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1da9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1da9a8:
    // 0x1da9a8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1da9a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da9ac:
    // 0x1da9ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da9b0:
    // 0x1da9b0: 0x3e00008  jr          $ra
label_1da9b4:
    if (ctx->pc == 0x1DA9B4u) {
        ctx->pc = 0x1DA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9B0u;
        // 0x1da9b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA9B8u;
        goto label_fallthrough_0x1da9b0;
    }
    ctx->pc = 0x1DA9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9B0u;
        // 0x1da9b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1da9b0:
    ctx->pc = 0x1DA9B8u;
}
