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

// Function: sub_001968C0
// Address: 0x1968c0 - 0x196ac8
void sub_001968C0_0x1968c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001968C0_0x1968c0");
#endif

    switch (ctx->pc) {
        case 0x1968c0u: goto label_1968c0;
        case 0x1968c4u: goto label_1968c4;
        case 0x1968c8u: goto label_1968c8;
        case 0x1968ccu: goto label_1968cc;
        case 0x1968d0u: goto label_1968d0;
        case 0x1968d4u: goto label_1968d4;
        case 0x1968d8u: goto label_1968d8;
        case 0x1968dcu: goto label_1968dc;
        case 0x1968e0u: goto label_1968e0;
        case 0x1968e4u: goto label_1968e4;
        case 0x1968e8u: goto label_1968e8;
        case 0x1968ecu: goto label_1968ec;
        case 0x1968f0u: goto label_1968f0;
        case 0x1968f4u: goto label_1968f4;
        case 0x1968f8u: goto label_1968f8;
        case 0x1968fcu: goto label_1968fc;
        case 0x196900u: goto label_196900;
        case 0x196904u: goto label_196904;
        case 0x196908u: goto label_196908;
        case 0x19690cu: goto label_19690c;
        case 0x196910u: goto label_196910;
        case 0x196914u: goto label_196914;
        case 0x196918u: goto label_196918;
        case 0x19691cu: goto label_19691c;
        case 0x196920u: goto label_196920;
        case 0x196924u: goto label_196924;
        case 0x196928u: goto label_196928;
        case 0x19692cu: goto label_19692c;
        case 0x196930u: goto label_196930;
        case 0x196934u: goto label_196934;
        case 0x196938u: goto label_196938;
        case 0x19693cu: goto label_19693c;
        case 0x196940u: goto label_196940;
        case 0x196944u: goto label_196944;
        case 0x196948u: goto label_196948;
        case 0x19694cu: goto label_19694c;
        case 0x196950u: goto label_196950;
        case 0x196954u: goto label_196954;
        case 0x196958u: goto label_196958;
        case 0x19695cu: goto label_19695c;
        case 0x196960u: goto label_196960;
        case 0x196964u: goto label_196964;
        case 0x196968u: goto label_196968;
        case 0x19696cu: goto label_19696c;
        case 0x196970u: goto label_196970;
        case 0x196974u: goto label_196974;
        case 0x196978u: goto label_196978;
        case 0x19697cu: goto label_19697c;
        case 0x196980u: goto label_196980;
        case 0x196984u: goto label_196984;
        case 0x196988u: goto label_196988;
        case 0x19698cu: goto label_19698c;
        case 0x196990u: goto label_196990;
        case 0x196994u: goto label_196994;
        case 0x196998u: goto label_196998;
        case 0x19699cu: goto label_19699c;
        case 0x1969a0u: goto label_1969a0;
        case 0x1969a4u: goto label_1969a4;
        case 0x1969a8u: goto label_1969a8;
        case 0x1969acu: goto label_1969ac;
        case 0x1969b0u: goto label_1969b0;
        case 0x1969b4u: goto label_1969b4;
        case 0x1969b8u: goto label_1969b8;
        case 0x1969bcu: goto label_1969bc;
        case 0x1969c0u: goto label_1969c0;
        case 0x1969c4u: goto label_1969c4;
        case 0x1969c8u: goto label_1969c8;
        case 0x1969ccu: goto label_1969cc;
        case 0x1969d0u: goto label_1969d0;
        case 0x1969d4u: goto label_1969d4;
        case 0x1969d8u: goto label_1969d8;
        case 0x1969dcu: goto label_1969dc;
        case 0x1969e0u: goto label_1969e0;
        case 0x1969e4u: goto label_1969e4;
        case 0x1969e8u: goto label_1969e8;
        case 0x1969ecu: goto label_1969ec;
        case 0x1969f0u: goto label_1969f0;
        case 0x1969f4u: goto label_1969f4;
        case 0x1969f8u: goto label_1969f8;
        case 0x1969fcu: goto label_1969fc;
        case 0x196a00u: goto label_196a00;
        case 0x196a04u: goto label_196a04;
        case 0x196a08u: goto label_196a08;
        case 0x196a0cu: goto label_196a0c;
        case 0x196a10u: goto label_196a10;
        case 0x196a14u: goto label_196a14;
        case 0x196a18u: goto label_196a18;
        case 0x196a1cu: goto label_196a1c;
        case 0x196a20u: goto label_196a20;
        case 0x196a24u: goto label_196a24;
        case 0x196a28u: goto label_196a28;
        case 0x196a2cu: goto label_196a2c;
        case 0x196a30u: goto label_196a30;
        case 0x196a34u: goto label_196a34;
        case 0x196a38u: goto label_196a38;
        case 0x196a3cu: goto label_196a3c;
        case 0x196a40u: goto label_196a40;
        case 0x196a44u: goto label_196a44;
        case 0x196a48u: goto label_196a48;
        case 0x196a4cu: goto label_196a4c;
        case 0x196a50u: goto label_196a50;
        case 0x196a54u: goto label_196a54;
        case 0x196a58u: goto label_196a58;
        case 0x196a5cu: goto label_196a5c;
        case 0x196a60u: goto label_196a60;
        case 0x196a64u: goto label_196a64;
        case 0x196a68u: goto label_196a68;
        case 0x196a6cu: goto label_196a6c;
        case 0x196a70u: goto label_196a70;
        case 0x196a74u: goto label_196a74;
        case 0x196a78u: goto label_196a78;
        case 0x196a7cu: goto label_196a7c;
        case 0x196a80u: goto label_196a80;
        case 0x196a84u: goto label_196a84;
        case 0x196a88u: goto label_196a88;
        case 0x196a8cu: goto label_196a8c;
        case 0x196a90u: goto label_196a90;
        case 0x196a94u: goto label_196a94;
        case 0x196a98u: goto label_196a98;
        case 0x196a9cu: goto label_196a9c;
        case 0x196aa0u: goto label_196aa0;
        case 0x196aa4u: goto label_196aa4;
        case 0x196aa8u: goto label_196aa8;
        case 0x196aacu: goto label_196aac;
        case 0x196ab0u: goto label_196ab0;
        case 0x196ab4u: goto label_196ab4;
        case 0x196ab8u: goto label_196ab8;
        case 0x196abcu: goto label_196abc;
        case 0x196ac0u: goto label_196ac0;
        case 0x196ac4u: goto label_196ac4;
        default: break;
    }

    ctx->pc = 0x1968c0u;

label_1968c0:
    // 0x1968c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1968c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1968c4:
    // 0x1968c4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1968c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1968c8:
    // 0x1968c8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1968c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1968cc:
    // 0x1968cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1968ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1968d0:
    // 0x1968d0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1968d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1968d4:
    // 0x1968d4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1968d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1968d8:
    // 0x1968d8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1968d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1968dc:
    // 0x1968dc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1968dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1968e0:
    // 0x1968e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1968e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1968e4:
    // 0x1968e4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1968e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1968e8:
    // 0x1968e8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1968e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1968ec:
    // 0x1968ec: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1968ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1968f0:
    // 0x1968f0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1968f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1968f4:
    // 0x1968f4: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1968f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1968f8:
    // 0x1968f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1968f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1968fc:
    // 0x1968fc: 0xc047ab8  jal         func_11EAE0
label_196900:
    if (ctx->pc == 0x196900u) {
        ctx->pc = 0x196900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968FCu;
        // 0x196900: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196904u;
        goto label_196904;
    }
    ctx->pc = 0x1968FCu;
    SET_GPR_U32(ctx, 31, 0x196904u);
    ctx->pc = 0x196900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968FCu;
    // 0x196900: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1968FCu, 0x196904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196904u;
label_196904:
    // 0x196904: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x196904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_196908:
    // 0x196908: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_19690c:
    if (ctx->pc == 0x19690Cu) {
        ctx->pc = 0x19690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196908u;
        // 0x19690c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196910u;
        goto label_196910;
    }
    ctx->pc = 0x196908u;
    {
        const bool branch_taken_0x196908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196908u;
        // 0x19690c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196908) {
            ctx->pc = 0x196A98u;
            goto label_196a98;
        }
    }
    ctx->pc = 0x196910u;
label_196910:
    // 0x196910: 0xc06616c  jal         func_1985B0
label_196914:
    if (ctx->pc == 0x196914u) {
        ctx->pc = 0x196914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196910u;
        // 0x196914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196918u;
        goto label_196918;
    }
    ctx->pc = 0x196910u;
    SET_GPR_U32(ctx, 31, 0x196918u);
    ctx->pc = 0x196914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196910u;
    // 0x196914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1985B0u, 0x196910u, 0x196918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196918u;
label_196918:
    // 0x196918: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x196918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19691c:
    // 0x19691c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x19691cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_196920:
    // 0x196920: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x196920u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_196924:
    // 0x196924: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x196924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_196928:
    // 0x196928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19692c:
    // 0x19692c: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x19692cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_196930:
    // 0x196930: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x196930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_196934:
    // 0x196934: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x196934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_196938:
    // 0x196938: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_19693c:
    // 0x19693c: 0x40f809  jalr        $v0
label_196940:
    if (ctx->pc == 0x196940u) {
        ctx->pc = 0x196940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19693Cu;
        // 0x196940: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196944u;
        goto label_196944;
    }
    ctx->pc = 0x19693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196944u);
        ctx->pc = 0x196940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19693Cu;
        // 0x196940: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19693Cu, 0x196944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196944u;
label_196944:
    // 0x196944: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196948:
    // 0x196948: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x196948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19694c:
    // 0x19694c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x19694cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_196950:
    // 0x196950: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_196954:
    // 0x196954: 0x40f809  jalr        $v0
label_196958:
    if (ctx->pc == 0x196958u) {
        ctx->pc = 0x196958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196954u;
        // 0x196958: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19695Cu;
        goto label_19695c;
    }
    ctx->pc = 0x196954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19695Cu);
        ctx->pc = 0x196958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196954u;
        // 0x196958: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196954u, 0x19695Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19695Cu;
label_19695c:
    // 0x19695c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_196960:
    if (ctx->pc == 0x196960u) {
        ctx->pc = 0x196960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19695Cu;
        // 0x196960: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196964u;
        goto label_196964;
    }
    ctx->pc = 0x19695Cu;
    {
        const bool branch_taken_0x19695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19695Cu;
        // 0x196960: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19695c) {
            ctx->pc = 0x196A8Cu;
            goto label_196a8c;
        }
    }
    ctx->pc = 0x196964u;
label_196964:
    // 0x196964: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x196964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_196968:
    // 0x196968: 0x2450ad28  addiu       $s0, $v0, -0x52D8
    ctx->pc = 0x196968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946088));
label_19696c:
    // 0x19696c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19696cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196970:
    // 0x196970: 0x40f809  jalr        $v0
label_196974:
    if (ctx->pc == 0x196974u) {
        ctx->pc = 0x196974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196970u;
        // 0x196974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196978u;
        goto label_196978;
    }
    ctx->pc = 0x196970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196978u);
        ctx->pc = 0x196974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196970u;
        // 0x196974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196970u, 0x196978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196978u;
label_196978:
    // 0x196978: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19697c:
    // 0x19697c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196980:
    // 0x196980: 0x40f809  jalr        $v0
label_196984:
    if (ctx->pc == 0x196984u) {
        ctx->pc = 0x196984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196980u;
        // 0x196984: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196988u;
        goto label_196988;
    }
    ctx->pc = 0x196980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196988u);
        ctx->pc = 0x196984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196980u;
        // 0x196984: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196980u, 0x196988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196988u;
label_196988:
    // 0x196988: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19698c:
    // 0x19698c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x19698cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_196990:
    // 0x196990: 0x40f809  jalr        $v0
label_196994:
    if (ctx->pc == 0x196994u) {
        ctx->pc = 0x196994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196990u;
        // 0x196994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196998u;
        goto label_196998;
    }
    ctx->pc = 0x196990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196998u);
        ctx->pc = 0x196994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196990u;
        // 0x196994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196990u, 0x196998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196998u;
label_196998:
    // 0x196998: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19699c:
    // 0x19699c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1969a0:
    // 0x1969a0: 0x40f809  jalr        $v0
label_1969a4:
    if (ctx->pc == 0x1969A4u) {
        ctx->pc = 0x1969A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969A0u;
        // 0x1969a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969A8u;
        goto label_1969a8;
    }
    ctx->pc = 0x1969A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1969A8u);
        ctx->pc = 0x1969A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969A0u;
        // 0x1969a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969A0u, 0x1969A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1969A8u;
label_1969a8:
    // 0x1969a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1969a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1969ac:
    // 0x1969ac: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1969acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1969b0:
    // 0x1969b0: 0x40f809  jalr        $v0
label_1969b4:
    if (ctx->pc == 0x1969B4u) {
        ctx->pc = 0x1969B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969B0u;
        // 0x1969b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969B8u;
        goto label_1969b8;
    }
    ctx->pc = 0x1969B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1969B8u);
        ctx->pc = 0x1969B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969B0u;
        // 0x1969b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969B0u, 0x1969B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1969B8u;
label_1969b8:
    // 0x1969b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1969b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1969bc:
    // 0x1969bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1969bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1969c0:
    // 0x1969c0: 0x40f809  jalr        $v0
label_1969c4:
    if (ctx->pc == 0x1969C4u) {
        ctx->pc = 0x1969C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969C0u;
        // 0x1969c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969C8u;
        goto label_1969c8;
    }
    ctx->pc = 0x1969C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1969C8u);
        ctx->pc = 0x1969C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969C0u;
        // 0x1969c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969C0u, 0x1969C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1969C8u;
label_1969c8:
    // 0x1969c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1969c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1969cc:
    // 0x1969cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1969ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1969d0:
    // 0x1969d0: 0x40f809  jalr        $v0
label_1969d4:
    if (ctx->pc == 0x1969D4u) {
        ctx->pc = 0x1969D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969D0u;
        // 0x1969d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969D8u;
        goto label_1969d8;
    }
    ctx->pc = 0x1969D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1969D8u);
        ctx->pc = 0x1969D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969D0u;
        // 0x1969d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969D0u, 0x1969D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1969D8u;
label_1969d8:
    // 0x1969d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1969dc:
    // 0x1969dc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1969dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1969e0:
    // 0x1969e0: 0x40f809  jalr        $v0
label_1969e4:
    if (ctx->pc == 0x1969E4u) {
        ctx->pc = 0x1969E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969E0u;
        // 0x1969e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969E8u;
        goto label_1969e8;
    }
    ctx->pc = 0x1969E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1969E8u);
        ctx->pc = 0x1969E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969E0u;
        // 0x1969e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969E0u, 0x1969E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1969E8u;
label_1969e8:
    // 0x1969e8: 0x8fc4ce98  lw          $a0, -0x3168($fp)
    ctx->pc = 0x1969e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954648)));
label_1969ec:
    // 0x1969ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1969ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1969f0:
    // 0x1969f0: 0x8ee5ce9c  lw          $a1, -0x3164($s7)
    ctx->pc = 0x1969f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954652)));
label_1969f4:
    // 0x1969f4: 0xc1293ca  jal         func_4A4F28
label_1969f8:
    if (ctx->pc == 0x1969F8u) {
        ctx->pc = 0x1969F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969F4u;
        // 0x1969f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969FCu;
        goto label_1969fc;
    }
    ctx->pc = 0x1969F4u;
    SET_GPR_U32(ctx, 31, 0x1969FCu);
    ctx->pc = 0x1969F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1969F4u;
    // 0x1969f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4F28u, 0x1969F4u, 0x1969FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969FCu;
label_1969fc:
    // 0x1969fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_196a00:
    if (ctx->pc == 0x196A00u) {
        ctx->pc = 0x196A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969FCu;
        // 0x196a00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A04u;
        goto label_196a04;
    }
    ctx->pc = 0x1969FCu;
    {
        const bool branch_taken_0x1969fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969FCu;
        // 0x196a00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969fc) {
            ctx->pc = 0x196A18u;
            goto label_196a18;
        }
    }
    ctx->pc = 0x196A04u;
label_196a04:
    // 0x196a04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x196a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_196a08:
    // 0x196a08: 0xc129216  jal         func_4A4858
label_196a0c:
    if (ctx->pc == 0x196A0Cu) {
        ctx->pc = 0x196A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A08u;
        // 0x196a0c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A10u;
        goto label_196a10;
    }
    ctx->pc = 0x196A08u;
    SET_GPR_U32(ctx, 31, 0x196A10u);
    ctx->pc = 0x196A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A08u;
    // 0x196a0c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4858u, 0x196A08u, 0x196A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A10u;
label_196a10:
    // 0x196a10: 0xc1293f4  jal         func_4A4FD0
label_196a14:
    if (ctx->pc == 0x196A14u) {
        ctx->pc = 0x196A18u;
        goto label_196a18;
    }
    ctx->pc = 0x196A10u;
    SET_GPR_U32(ctx, 31, 0x196A18u);
    ctx->pc = 0x4A4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4FD0u, 0x196A10u, 0x196A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A18u;
label_196a18:
    // 0x196a18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196a1c:
    // 0x196a1c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_196a20:
    // 0x196a20: 0x40f809  jalr        $v0
label_196a24:
    if (ctx->pc == 0x196A24u) {
        ctx->pc = 0x196A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A20u;
        // 0x196a24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A28u;
        goto label_196a28;
    }
    ctx->pc = 0x196A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A28u);
        ctx->pc = 0x196A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A20u;
        // 0x196a24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A20u, 0x196A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A28u;
label_196a28:
    // 0x196a28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196a2c:
    // 0x196a2c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x196a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_196a30:
    // 0x196a30: 0x40f809  jalr        $v0
label_196a34:
    if (ctx->pc == 0x196A34u) {
        ctx->pc = 0x196A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A30u;
        // 0x196a34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A38u;
        goto label_196a38;
    }
    ctx->pc = 0x196A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A38u);
        ctx->pc = 0x196A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A30u;
        // 0x196a34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A30u, 0x196A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A38u;
label_196a38:
    // 0x196a38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196a3c:
    // 0x196a3c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x196a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_196a40:
    // 0x196a40: 0x40f809  jalr        $v0
label_196a44:
    if (ctx->pc == 0x196A44u) {
        ctx->pc = 0x196A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A40u;
        // 0x196a44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A48u;
        goto label_196a48;
    }
    ctx->pc = 0x196A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A48u);
        ctx->pc = 0x196A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A40u;
        // 0x196a44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A40u, 0x196A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A48u;
label_196a48:
    // 0x196a48: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196a4c:
    // 0x196a4c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x196a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_196a50:
    // 0x196a50: 0x40f809  jalr        $v0
label_196a54:
    if (ctx->pc == 0x196A54u) {
        ctx->pc = 0x196A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A50u;
        // 0x196a54: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A58u;
        goto label_196a58;
    }
    ctx->pc = 0x196A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A58u);
        ctx->pc = 0x196A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A50u;
        // 0x196a54: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A50u, 0x196A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A58u;
label_196a58:
    // 0x196a58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196a5c:
    // 0x196a5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x196a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_196a60:
    // 0x196a60: 0x40f809  jalr        $v0
label_196a64:
    if (ctx->pc == 0x196A64u) {
        ctx->pc = 0x196A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A60u;
        // 0x196a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A68u;
        goto label_196a68;
    }
    ctx->pc = 0x196A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A68u);
        ctx->pc = 0x196A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A60u;
        // 0x196a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A60u, 0x196A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A68u;
label_196a68:
    // 0x196a68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196a6c:
    // 0x196a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196a70:
    // 0x196a70: 0x40f809  jalr        $v0
label_196a74:
    if (ctx->pc == 0x196A74u) {
        ctx->pc = 0x196A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A70u;
        // 0x196a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A78u;
        goto label_196a78;
    }
    ctx->pc = 0x196A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A78u);
        ctx->pc = 0x196A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A70u;
        // 0x196a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A70u, 0x196A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A78u;
label_196a78:
    // 0x196a78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x196a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_196a7c:
    // 0x196a7c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x196a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_196a80:
    // 0x196a80: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x196a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_196a84:
    // 0x196a84: 0x40f809  jalr        $v0
label_196a88:
    if (ctx->pc == 0x196A88u) {
        ctx->pc = 0x196A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A84u;
        // 0x196a88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A8Cu;
        goto label_196a8c;
    }
    ctx->pc = 0x196A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A8Cu);
        ctx->pc = 0x196A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A84u;
        // 0x196a88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A84u, 0x196A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A8Cu;
label_196a8c:
    // 0x196a8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x196a8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_196a90:
    // 0x196a90: 0x1240ffa5  beqz        $s2, . + 4 + (-0x5B << 2)
label_196a94:
    if (ctx->pc == 0x196A94u) {
        ctx->pc = 0x196A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A90u;
        // 0x196a94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A98u;
        goto label_196a98;
    }
    ctx->pc = 0x196A90u;
    {
        const bool branch_taken_0x196a90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x196A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A90u;
        // 0x196a94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a90) {
            ctx->pc = 0x196928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196928;
        }
    }
    ctx->pc = 0x196A98u;
label_196a98:
    // 0x196a98: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x196a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_196a9c:
    // 0x196a9c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x196a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_196aa0:
    // 0x196aa0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x196aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_196aa4:
    // 0x196aa4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x196aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_196aa8:
    // 0x196aa8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x196aa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_196aac:
    // 0x196aac: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x196aacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_196ab0:
    // 0x196ab0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x196ab0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196ab4:
    // 0x196ab4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x196ab4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196ab8:
    // 0x196ab8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x196ab8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196abc:
    // 0x196abc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_196ac0:
    // 0x196ac0: 0x3e00008  jr          $ra
label_196ac4:
    if (ctx->pc == 0x196AC4u) {
        ctx->pc = 0x196AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AC0u;
        // 0x196ac4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196AC8u;
        goto label_fallthrough_0x196ac0;
    }
    ctx->pc = 0x196AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AC0u;
        // 0x196ac4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x196ac0:
    ctx->pc = 0x196AC8u;
}
