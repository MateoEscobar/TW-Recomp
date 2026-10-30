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

// Function: sub_003CC8B8
// Address: 0x3cc8b8 - 0x3cca88
void sub_003CC8B8_0x3cc8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC8B8_0x3cc8b8");
#endif

    switch (ctx->pc) {
        case 0x3cc8b8u: goto label_3cc8b8;
        case 0x3cc8bcu: goto label_3cc8bc;
        case 0x3cc8c0u: goto label_3cc8c0;
        case 0x3cc8c4u: goto label_3cc8c4;
        case 0x3cc8c8u: goto label_3cc8c8;
        case 0x3cc8ccu: goto label_3cc8cc;
        case 0x3cc8d0u: goto label_3cc8d0;
        case 0x3cc8d4u: goto label_3cc8d4;
        case 0x3cc8d8u: goto label_3cc8d8;
        case 0x3cc8dcu: goto label_3cc8dc;
        case 0x3cc8e0u: goto label_3cc8e0;
        case 0x3cc8e4u: goto label_3cc8e4;
        case 0x3cc8e8u: goto label_3cc8e8;
        case 0x3cc8ecu: goto label_3cc8ec;
        case 0x3cc8f0u: goto label_3cc8f0;
        case 0x3cc8f4u: goto label_3cc8f4;
        case 0x3cc8f8u: goto label_3cc8f8;
        case 0x3cc8fcu: goto label_3cc8fc;
        case 0x3cc900u: goto label_3cc900;
        case 0x3cc904u: goto label_3cc904;
        case 0x3cc908u: goto label_3cc908;
        case 0x3cc90cu: goto label_3cc90c;
        case 0x3cc910u: goto label_3cc910;
        case 0x3cc914u: goto label_3cc914;
        case 0x3cc918u: goto label_3cc918;
        case 0x3cc91cu: goto label_3cc91c;
        case 0x3cc920u: goto label_3cc920;
        case 0x3cc924u: goto label_3cc924;
        case 0x3cc928u: goto label_3cc928;
        case 0x3cc92cu: goto label_3cc92c;
        case 0x3cc930u: goto label_3cc930;
        case 0x3cc934u: goto label_3cc934;
        case 0x3cc938u: goto label_3cc938;
        case 0x3cc93cu: goto label_3cc93c;
        case 0x3cc940u: goto label_3cc940;
        case 0x3cc944u: goto label_3cc944;
        case 0x3cc948u: goto label_3cc948;
        case 0x3cc94cu: goto label_3cc94c;
        case 0x3cc950u: goto label_3cc950;
        case 0x3cc954u: goto label_3cc954;
        case 0x3cc958u: goto label_3cc958;
        case 0x3cc95cu: goto label_3cc95c;
        case 0x3cc960u: goto label_3cc960;
        case 0x3cc964u: goto label_3cc964;
        case 0x3cc968u: goto label_3cc968;
        case 0x3cc96cu: goto label_3cc96c;
        case 0x3cc970u: goto label_3cc970;
        case 0x3cc974u: goto label_3cc974;
        case 0x3cc978u: goto label_3cc978;
        case 0x3cc97cu: goto label_3cc97c;
        case 0x3cc980u: goto label_3cc980;
        case 0x3cc984u: goto label_3cc984;
        case 0x3cc988u: goto label_3cc988;
        case 0x3cc98cu: goto label_3cc98c;
        case 0x3cc990u: goto label_3cc990;
        case 0x3cc994u: goto label_3cc994;
        case 0x3cc998u: goto label_3cc998;
        case 0x3cc99cu: goto label_3cc99c;
        case 0x3cc9a0u: goto label_3cc9a0;
        case 0x3cc9a4u: goto label_3cc9a4;
        case 0x3cc9a8u: goto label_3cc9a8;
        case 0x3cc9acu: goto label_3cc9ac;
        case 0x3cc9b0u: goto label_3cc9b0;
        case 0x3cc9b4u: goto label_3cc9b4;
        case 0x3cc9b8u: goto label_3cc9b8;
        case 0x3cc9bcu: goto label_3cc9bc;
        case 0x3cc9c0u: goto label_3cc9c0;
        case 0x3cc9c4u: goto label_3cc9c4;
        case 0x3cc9c8u: goto label_3cc9c8;
        case 0x3cc9ccu: goto label_3cc9cc;
        case 0x3cc9d0u: goto label_3cc9d0;
        case 0x3cc9d4u: goto label_3cc9d4;
        case 0x3cc9d8u: goto label_3cc9d8;
        case 0x3cc9dcu: goto label_3cc9dc;
        case 0x3cc9e0u: goto label_3cc9e0;
        case 0x3cc9e4u: goto label_3cc9e4;
        case 0x3cc9e8u: goto label_3cc9e8;
        case 0x3cc9ecu: goto label_3cc9ec;
        case 0x3cc9f0u: goto label_3cc9f0;
        case 0x3cc9f4u: goto label_3cc9f4;
        case 0x3cc9f8u: goto label_3cc9f8;
        case 0x3cc9fcu: goto label_3cc9fc;
        case 0x3cca00u: goto label_3cca00;
        case 0x3cca04u: goto label_3cca04;
        case 0x3cca08u: goto label_3cca08;
        case 0x3cca0cu: goto label_3cca0c;
        case 0x3cca10u: goto label_3cca10;
        case 0x3cca14u: goto label_3cca14;
        case 0x3cca18u: goto label_3cca18;
        case 0x3cca1cu: goto label_3cca1c;
        case 0x3cca20u: goto label_3cca20;
        case 0x3cca24u: goto label_3cca24;
        case 0x3cca28u: goto label_3cca28;
        case 0x3cca2cu: goto label_3cca2c;
        case 0x3cca30u: goto label_3cca30;
        case 0x3cca34u: goto label_3cca34;
        case 0x3cca38u: goto label_3cca38;
        case 0x3cca3cu: goto label_3cca3c;
        case 0x3cca40u: goto label_3cca40;
        case 0x3cca44u: goto label_3cca44;
        case 0x3cca48u: goto label_3cca48;
        case 0x3cca4cu: goto label_3cca4c;
        case 0x3cca50u: goto label_3cca50;
        case 0x3cca54u: goto label_3cca54;
        case 0x3cca58u: goto label_3cca58;
        case 0x3cca5cu: goto label_3cca5c;
        case 0x3cca60u: goto label_3cca60;
        case 0x3cca64u: goto label_3cca64;
        case 0x3cca68u: goto label_3cca68;
        case 0x3cca6cu: goto label_3cca6c;
        case 0x3cca70u: goto label_3cca70;
        case 0x3cca74u: goto label_3cca74;
        case 0x3cca78u: goto label_3cca78;
        case 0x3cca7cu: goto label_3cca7c;
        case 0x3cca80u: goto label_3cca80;
        case 0x3cca84u: goto label_3cca84;
        default: break;
    }

    ctx->pc = 0x3cc8b8u;

label_3cc8b8:
    // 0x3cc8b8: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x3cc8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
label_3cc8bc:
    // 0x3cc8bc: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x3cc8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
label_3cc8c0:
    // 0x3cc8c0: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x3cc8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
label_3cc8c4:
    // 0x3cc8c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cc8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cc8c8:
    // 0x3cc8c8: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x3cc8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
label_3cc8cc:
    // 0x3cc8cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cc8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc8d0:
    // 0x3cc8d0: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x3cc8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
label_3cc8d4:
    // 0x3cc8d4: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3cc8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3cc8d8:
    // 0x3cc8d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3cc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cc8dc:
    // 0x3cc8dc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cc8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc8e0:
    // 0x3cc8e0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc8e4:
    // 0x3cc8e4: 0x40f809  jalr        $v0
label_3cc8e8:
    if (ctx->pc == 0x3CC8E8u) {
        ctx->pc = 0x3CC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8E4u;
        // 0x3cc8e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC8ECu;
        goto label_3cc8ec;
    }
    ctx->pc = 0x3CC8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC8ECu);
        ctx->pc = 0x3CC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8E4u;
        // 0x3cc8e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC8E4u, 0x3CC8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC8ECu;
label_3cc8ec:
    // 0x3cc8ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cc8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc8f0:
    // 0x3cc8f0: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3cc8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3cc8f4:
    // 0x3cc8f4: 0xc0e858c  jal         func_3A1630
label_3cc8f8:
    if (ctx->pc == 0x3CC8F8u) {
        ctx->pc = 0x3CC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8F4u;
        // 0x3cc8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC8FCu;
        goto label_3cc8fc;
    }
    ctx->pc = 0x3CC8F4u;
    SET_GPR_U32(ctx, 31, 0x3CC8FCu);
    ctx->pc = 0x3CC8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC8F4u;
    // 0x3cc8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CC8F4u, 0x3CC8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC8FCu;
label_3cc8fc:
    // 0x3cc8fc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3cc8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3cc900:
    // 0x3cc900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cc900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc904:
    // 0x3cc904: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3cc904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_3cc908:
    // 0x3cc908: 0xc0ea14c  jal         func_3A8530
label_3cc90c:
    if (ctx->pc == 0x3CC90Cu) {
        ctx->pc = 0x3CC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC908u;
        // 0x3cc90c: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC910u;
        goto label_3cc910;
    }
    ctx->pc = 0x3CC908u;
    SET_GPR_U32(ctx, 31, 0x3CC910u);
    ctx->pc = 0x3CC90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC908u;
    // 0x3cc90c: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CC908u, 0x3CC910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC910u;
label_3cc910:
    // 0x3cc910: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cc910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cc914:
    // 0x3cc914: 0xc0ea12a  jal         func_3A84A8
label_3cc918:
    if (ctx->pc == 0x3CC918u) {
        ctx->pc = 0x3CC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC914u;
        // 0x3cc918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC91Cu;
        goto label_3cc91c;
    }
    ctx->pc = 0x3CC914u;
    SET_GPR_U32(ctx, 31, 0x3CC91Cu);
    ctx->pc = 0x3CC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC914u;
    // 0x3cc918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CC914u, 0x3CC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC91Cu;
label_3cc91c:
    // 0x3cc91c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cc91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc920:
    // 0x3cc920: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cc920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cc924:
    // 0x3cc924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cc924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc928:
    // 0x3cc928: 0xc0ea12a  jal         func_3A84A8
label_3cc92c:
    if (ctx->pc == 0x3CC92Cu) {
        ctx->pc = 0x3CC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC928u;
        // 0x3cc92c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC930u;
        goto label_3cc930;
    }
    ctx->pc = 0x3CC928u;
    SET_GPR_U32(ctx, 31, 0x3CC930u);
    ctx->pc = 0x3CC92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC928u;
    // 0x3cc92c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CC928u, 0x3CC930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC930u;
label_3cc930:
    // 0x3cc930: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cc930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc934:
    // 0x3cc934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cc934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc938:
    // 0x3cc938: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3cc938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3cc93c:
    // 0x3cc93c: 0xc0e858c  jal         func_3A1630
label_3cc940:
    if (ctx->pc == 0x3CC940u) {
        ctx->pc = 0x3CC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC93Cu;
        // 0x3cc940: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC944u;
        goto label_3cc944;
    }
    ctx->pc = 0x3CC93Cu;
    SET_GPR_U32(ctx, 31, 0x3CC944u);
    ctx->pc = 0x3CC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC93Cu;
    // 0x3cc940: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CC93Cu, 0x3CC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC944u;
label_3cc944:
    // 0x3cc944: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3cc944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3cc948:
    // 0x3cc948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cc948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc94c:
    // 0x3cc94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cc94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc950:
    // 0x3cc950: 0xc0e9132  jal         func_3A44C8
label_3cc954:
    if (ctx->pc == 0x3CC954u) {
        ctx->pc = 0x3CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC950u;
        // 0x3cc954: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC958u;
        goto label_3cc958;
    }
    ctx->pc = 0x3CC950u;
    SET_GPR_U32(ctx, 31, 0x3CC958u);
    ctx->pc = 0x3CC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC950u;
    // 0x3cc954: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3CC950u, 0x3CC958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC958u;
label_3cc958:
    // 0x3cc958: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3cc958u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc95c:
    // 0x3cc95c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3cc95cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3cc960:
    // 0x3cc960: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3cc960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cc964:
    // 0x3cc964: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x3cc964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3cc968:
    // 0x3cc968: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x3cc968u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
label_3cc96c:
    // 0x3cc96c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3cc96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cc970:
    // 0x3cc970: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3cc970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3cc974:
    // 0x3cc974: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3cc974u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3cc978:
    // 0x3cc978: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x3cc978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_3cc97c:
    // 0x3cc97c: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x3cc97cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_3cc980:
    // 0x3cc980: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3cc980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3cc984:
    // 0x3cc984: 0xc1073cc  jal         func_41CF30
label_3cc988:
    if (ctx->pc == 0x3CC988u) {
        ctx->pc = 0x3CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC984u;
        // 0x3cc988: 0xae670000  sw          $a3, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC98Cu;
        goto label_3cc98c;
    }
    ctx->pc = 0x3CC984u;
    SET_GPR_U32(ctx, 31, 0x3CC98Cu);
    ctx->pc = 0x3CC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC984u;
    // 0x3cc988: 0xae670000  sw          $a3, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3CC984u, 0x3CC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC98Cu;
label_3cc98c:
    // 0x3cc98c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cc98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3cc990:
    // 0x3cc990: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3cc994:
    if (ctx->pc == 0x3CC994u) {
        ctx->pc = 0x3CC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC990u;
        // 0x3cc994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC998u;
        goto label_3cc998;
    }
    ctx->pc = 0x3CC990u;
    {
        const bool branch_taken_0x3cc990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC990u;
        // 0x3cc994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc990) {
            ctx->pc = 0x3CC9B0u;
            goto label_3cc9b0;
        }
    }
    ctx->pc = 0x3CC998u;
label_3cc998:
    // 0x3cc998: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc99c:
    // 0x3cc99c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3cc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_3cc9a0:
    // 0x3cc9a0: 0xc0e91f0  jal         func_3A47C0
label_3cc9a4:
    if (ctx->pc == 0x3CC9A4u) {
        ctx->pc = 0x3CC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9A0u;
        // 0x3cc9a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC9A8u;
        goto label_3cc9a8;
    }
    ctx->pc = 0x3CC9A0u;
    SET_GPR_U32(ctx, 31, 0x3CC9A8u);
    ctx->pc = 0x3CC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC9A0u;
    // 0x3cc9a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3CC9A0u, 0x3CC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC9A8u;
label_3cc9a8:
    // 0x3cc9a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cc9ac:
    if (ctx->pc == 0x3CC9ACu) {
        ctx->pc = 0x3CC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9A8u;
        // 0x3cc9ac: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC9B0u;
        goto label_3cc9b0;
    }
    ctx->pc = 0x3CC9A8u;
    {
        const bool branch_taken_0x3cc9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9A8u;
        // 0x3cc9ac: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc9a8) {
            ctx->pc = 0x3CC9C4u;
            goto label_3cc9c4;
        }
    }
    ctx->pc = 0x3CC9B0u;
label_3cc9b0:
    // 0x3cc9b0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3cc9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3cc9b4:
    // 0x3cc9b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc9b8:
    // 0x3cc9b8: 0xc0e91f0  jal         func_3A47C0
label_3cc9bc:
    if (ctx->pc == 0x3CC9BCu) {
        ctx->pc = 0x3CC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9B8u;
        // 0x3cc9bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC9C0u;
        goto label_3cc9c0;
    }
    ctx->pc = 0x3CC9B8u;
    SET_GPR_U32(ctx, 31, 0x3CC9C0u);
    ctx->pc = 0x3CC9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC9B8u;
    // 0x3cc9bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3CC9B8u, 0x3CC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC9C0u;
label_3cc9c0:
    // 0x3cc9c0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3cc9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3cc9c4:
    // 0x3cc9c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cc9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc9c8:
    // 0x3cc9c8: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3cc9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_3cc9cc:
    // 0x3cc9cc: 0xc0e932c  jal         func_3A4CB0
label_3cc9d0:
    if (ctx->pc == 0x3CC9D0u) {
        ctx->pc = 0x3CC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9CCu;
        // 0x3cc9d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC9D4u;
        goto label_3cc9d4;
    }
    ctx->pc = 0x3CC9CCu;
    SET_GPR_U32(ctx, 31, 0x3CC9D4u);
    ctx->pc = 0x3CC9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC9CCu;
    // 0x3cc9d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CB0u, 0x3CC9CCu, 0x3CC9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC9D4u;
label_3cc9d4:
    // 0x3cc9d4: 0x3c0392ce  lui         $v1, 0x92CE
    ctx->pc = 0x3cc9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37582 << 16));
label_3cc9d8:
    // 0x3cc9d8: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x3cc9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3cc9dc:
    // 0x3cc9dc: 0x34637f2f  ori         $v1, $v1, 0x7F2F
    ctx->pc = 0x3cc9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32559);
label_3cc9e0:
    // 0x3cc9e0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_3cc9e4:
    if (ctx->pc == 0x3CC9E4u) {
        ctx->pc = 0x3CC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9E0u;
        // 0x3cc9e4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC9E8u;
        goto label_3cc9e8;
    }
    ctx->pc = 0x3CC9E0u;
    {
        const bool branch_taken_0x3cc9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9E0u;
        // 0x3cc9e4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc9e0) {
            ctx->pc = 0x3CCA38u;
            goto label_3cca38;
        }
    }
    ctx->pc = 0x3CC9E8u;
label_3cc9e8:
    // 0x3cc9e8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3cc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3cc9ec:
    // 0x3cc9ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3cc9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3cc9f0:
    // 0x3cc9f0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_3cc9f4:
    if (ctx->pc == 0x3CC9F4u) {
        ctx->pc = 0x3CC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9F0u;
        // 0x3cc9f4: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC9F8u;
        goto label_3cc9f8;
    }
    ctx->pc = 0x3CC9F0u;
    {
        const bool branch_taken_0x3cc9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9F0u;
        // 0x3cc9f4: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc9f0) {
            ctx->pc = 0x3CCA38u;
            goto label_3cca38;
        }
    }
    ctx->pc = 0x3CC9F8u;
label_3cc9f8:
    // 0x3cc9f8: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3cc9f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3cc9fc:
    // 0x3cc9fc: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3cc9fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3cca00:
    // 0x3cca00: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cca00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cca04:
    // 0x3cca04: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3cca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cca08:
    // 0x3cca08: 0x261048c0  addiu       $s0, $s0, 0x48C0
    ctx->pc = 0x3cca08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18624));
label_3cca0c:
    // 0x3cca0c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3cca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3cca10:
    // 0x3cca10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cca14:
    // 0x3cca14: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3cca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3cca18:
    // 0x3cca18: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3cca18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3cca1c:
    // 0x3cca1c: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3cca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3cca20:
    // 0x3cca20: 0xc0e9fa6  jal         func_3A7E98
label_3cca24:
    if (ctx->pc == 0x3CCA24u) {
        ctx->pc = 0x3CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA20u;
        // 0x3cca24: 0x27a70450  addiu       $a3, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA28u;
        goto label_3cca28;
    }
    ctx->pc = 0x3CCA20u;
    SET_GPR_U32(ctx, 31, 0x3CCA28u);
    ctx->pc = 0x3CCA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCA20u;
    // 0x3cca24: 0x27a70450  addiu       $a3, $sp, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3CCA20u, 0x3CCA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCA28u;
label_3cca28:
    // 0x3cca28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cca28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cca2c:
    // 0x3cca2c: 0xc0f15bc  jal         func_3C56F0
label_3cca30:
    if (ctx->pc == 0x3CCA30u) {
        ctx->pc = 0x3CCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA2Cu;
        // 0x3cca30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA34u;
        goto label_3cca34;
    }
    ctx->pc = 0x3CCA2Cu;
    SET_GPR_U32(ctx, 31, 0x3CCA34u);
    ctx->pc = 0x3CCA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCA2Cu;
    // 0x3cca30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CCA2Cu, 0x3CCA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCA34u;
label_3cca34:
    // 0x3cca34: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x3cca34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_3cca38:
    // 0x3cca38: 0x3c02c4cb  lui         $v0, 0xC4CB
    ctx->pc = 0x3cca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50379 << 16));
label_3cca3c:
    // 0x3cca3c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3cca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3cca40:
    // 0x3cca40: 0x34422a87  ori         $v0, $v0, 0x2A87
    ctx->pc = 0x3cca40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10887);
label_3cca44:
    // 0x3cca44: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_3cca48:
    if (ctx->pc == 0x3CCA48u) {
        ctx->pc = 0x3CCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA44u;
        // 0x3cca48: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA4Cu;
        goto label_3cca4c;
    }
    ctx->pc = 0x3CCA44u;
    {
        const bool branch_taken_0x3cca44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA44u;
        // 0x3cca48: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cca44) {
            ctx->pc = 0x3CCA6Cu;
            goto label_3cca6c;
        }
    }
    ctx->pc = 0x3CCA4Cu;
label_3cca4c:
    // 0x3cca4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3cca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cca50:
    // 0x3cca50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cca54:
    // 0x3cca54: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x3cca54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_3cca58:
    // 0x3cca58: 0xc0e858c  jal         func_3A1630
label_3cca5c:
    if (ctx->pc == 0x3CCA5Cu) {
        ctx->pc = 0x3CCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA58u;
        // 0x3cca5c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA60u;
        goto label_3cca60;
    }
    ctx->pc = 0x3CCA58u;
    SET_GPR_U32(ctx, 31, 0x3CCA60u);
    ctx->pc = 0x3CCA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCA58u;
    // 0x3cca5c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CCA58u, 0x3CCA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCA60u;
label_3cca60:
    // 0x3cca60: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3cca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3cca64:
    // 0x3cca64: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3cca64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_3cca68:
    // 0x3cca68: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x3cca68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3cca6c:
    // 0x3cca6c: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x3cca6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3cca70:
    // 0x3cca70: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x3cca70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3cca74:
    // 0x3cca74: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x3cca74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3cca78:
    // 0x3cca78: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3cca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3cca7c:
    // 0x3cca7c: 0x3e00008  jr          $ra
label_3cca80:
    if (ctx->pc == 0x3CCA80u) {
        ctx->pc = 0x3CCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA7Cu;
        // 0x3cca80: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA84u;
        goto label_3cca84;
    }
    ctx->pc = 0x3CCA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA7Cu;
        // 0x3cca80: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCA84u;
label_3cca84:
    // 0x3cca84: 0x0  nop
    ctx->pc = 0x3cca84u;
    // NOP
    ctx->pc = 0x3cca88u;
}
