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

// Function: sub_003EB7E8
// Address: 0x3eb7e8 - 0x3ebae8
void sub_003EB7E8_0x3eb7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB7E8_0x3eb7e8");
#endif

    switch (ctx->pc) {
        case 0x3eb7e8u: goto label_3eb7e8;
        case 0x3eb7ecu: goto label_3eb7ec;
        case 0x3eb7f0u: goto label_3eb7f0;
        case 0x3eb7f4u: goto label_3eb7f4;
        case 0x3eb7f8u: goto label_3eb7f8;
        case 0x3eb7fcu: goto label_3eb7fc;
        case 0x3eb800u: goto label_3eb800;
        case 0x3eb804u: goto label_3eb804;
        case 0x3eb808u: goto label_3eb808;
        case 0x3eb80cu: goto label_3eb80c;
        case 0x3eb810u: goto label_3eb810;
        case 0x3eb814u: goto label_3eb814;
        case 0x3eb818u: goto label_3eb818;
        case 0x3eb81cu: goto label_3eb81c;
        case 0x3eb820u: goto label_3eb820;
        case 0x3eb824u: goto label_3eb824;
        case 0x3eb828u: goto label_3eb828;
        case 0x3eb82cu: goto label_3eb82c;
        case 0x3eb830u: goto label_3eb830;
        case 0x3eb834u: goto label_3eb834;
        case 0x3eb838u: goto label_3eb838;
        case 0x3eb83cu: goto label_3eb83c;
        case 0x3eb840u: goto label_3eb840;
        case 0x3eb844u: goto label_3eb844;
        case 0x3eb848u: goto label_3eb848;
        case 0x3eb84cu: goto label_3eb84c;
        case 0x3eb850u: goto label_3eb850;
        case 0x3eb854u: goto label_3eb854;
        case 0x3eb858u: goto label_3eb858;
        case 0x3eb85cu: goto label_3eb85c;
        case 0x3eb860u: goto label_3eb860;
        case 0x3eb864u: goto label_3eb864;
        case 0x3eb868u: goto label_3eb868;
        case 0x3eb86cu: goto label_3eb86c;
        case 0x3eb870u: goto label_3eb870;
        case 0x3eb874u: goto label_3eb874;
        case 0x3eb878u: goto label_3eb878;
        case 0x3eb87cu: goto label_3eb87c;
        case 0x3eb880u: goto label_3eb880;
        case 0x3eb884u: goto label_3eb884;
        case 0x3eb888u: goto label_3eb888;
        case 0x3eb88cu: goto label_3eb88c;
        case 0x3eb890u: goto label_3eb890;
        case 0x3eb894u: goto label_3eb894;
        case 0x3eb898u: goto label_3eb898;
        case 0x3eb89cu: goto label_3eb89c;
        case 0x3eb8a0u: goto label_3eb8a0;
        case 0x3eb8a4u: goto label_3eb8a4;
        case 0x3eb8a8u: goto label_3eb8a8;
        case 0x3eb8acu: goto label_3eb8ac;
        case 0x3eb8b0u: goto label_3eb8b0;
        case 0x3eb8b4u: goto label_3eb8b4;
        case 0x3eb8b8u: goto label_3eb8b8;
        case 0x3eb8bcu: goto label_3eb8bc;
        case 0x3eb8c0u: goto label_3eb8c0;
        case 0x3eb8c4u: goto label_3eb8c4;
        case 0x3eb8c8u: goto label_3eb8c8;
        case 0x3eb8ccu: goto label_3eb8cc;
        case 0x3eb8d0u: goto label_3eb8d0;
        case 0x3eb8d4u: goto label_3eb8d4;
        case 0x3eb8d8u: goto label_3eb8d8;
        case 0x3eb8dcu: goto label_3eb8dc;
        case 0x3eb8e0u: goto label_3eb8e0;
        case 0x3eb8e4u: goto label_3eb8e4;
        case 0x3eb8e8u: goto label_3eb8e8;
        case 0x3eb8ecu: goto label_3eb8ec;
        case 0x3eb8f0u: goto label_3eb8f0;
        case 0x3eb8f4u: goto label_3eb8f4;
        case 0x3eb8f8u: goto label_3eb8f8;
        case 0x3eb8fcu: goto label_3eb8fc;
        case 0x3eb900u: goto label_3eb900;
        case 0x3eb904u: goto label_3eb904;
        case 0x3eb908u: goto label_3eb908;
        case 0x3eb90cu: goto label_3eb90c;
        case 0x3eb910u: goto label_3eb910;
        case 0x3eb914u: goto label_3eb914;
        case 0x3eb918u: goto label_3eb918;
        case 0x3eb91cu: goto label_3eb91c;
        case 0x3eb920u: goto label_3eb920;
        case 0x3eb924u: goto label_3eb924;
        case 0x3eb928u: goto label_3eb928;
        case 0x3eb92cu: goto label_3eb92c;
        case 0x3eb930u: goto label_3eb930;
        case 0x3eb934u: goto label_3eb934;
        case 0x3eb938u: goto label_3eb938;
        case 0x3eb93cu: goto label_3eb93c;
        case 0x3eb940u: goto label_3eb940;
        case 0x3eb944u: goto label_3eb944;
        case 0x3eb948u: goto label_3eb948;
        case 0x3eb94cu: goto label_3eb94c;
        case 0x3eb950u: goto label_3eb950;
        case 0x3eb954u: goto label_3eb954;
        case 0x3eb958u: goto label_3eb958;
        case 0x3eb95cu: goto label_3eb95c;
        case 0x3eb960u: goto label_3eb960;
        case 0x3eb964u: goto label_3eb964;
        case 0x3eb968u: goto label_3eb968;
        case 0x3eb96cu: goto label_3eb96c;
        case 0x3eb970u: goto label_3eb970;
        case 0x3eb974u: goto label_3eb974;
        case 0x3eb978u: goto label_3eb978;
        case 0x3eb97cu: goto label_3eb97c;
        case 0x3eb980u: goto label_3eb980;
        case 0x3eb984u: goto label_3eb984;
        case 0x3eb988u: goto label_3eb988;
        case 0x3eb98cu: goto label_3eb98c;
        case 0x3eb990u: goto label_3eb990;
        case 0x3eb994u: goto label_3eb994;
        case 0x3eb998u: goto label_3eb998;
        case 0x3eb99cu: goto label_3eb99c;
        case 0x3eb9a0u: goto label_3eb9a0;
        case 0x3eb9a4u: goto label_3eb9a4;
        case 0x3eb9a8u: goto label_3eb9a8;
        case 0x3eb9acu: goto label_3eb9ac;
        case 0x3eb9b0u: goto label_3eb9b0;
        case 0x3eb9b4u: goto label_3eb9b4;
        case 0x3eb9b8u: goto label_3eb9b8;
        case 0x3eb9bcu: goto label_3eb9bc;
        case 0x3eb9c0u: goto label_3eb9c0;
        case 0x3eb9c4u: goto label_3eb9c4;
        case 0x3eb9c8u: goto label_3eb9c8;
        case 0x3eb9ccu: goto label_3eb9cc;
        case 0x3eb9d0u: goto label_3eb9d0;
        case 0x3eb9d4u: goto label_3eb9d4;
        case 0x3eb9d8u: goto label_3eb9d8;
        case 0x3eb9dcu: goto label_3eb9dc;
        case 0x3eb9e0u: goto label_3eb9e0;
        case 0x3eb9e4u: goto label_3eb9e4;
        case 0x3eb9e8u: goto label_3eb9e8;
        case 0x3eb9ecu: goto label_3eb9ec;
        case 0x3eb9f0u: goto label_3eb9f0;
        case 0x3eb9f4u: goto label_3eb9f4;
        case 0x3eb9f8u: goto label_3eb9f8;
        case 0x3eb9fcu: goto label_3eb9fc;
        case 0x3eba00u: goto label_3eba00;
        case 0x3eba04u: goto label_3eba04;
        case 0x3eba08u: goto label_3eba08;
        case 0x3eba0cu: goto label_3eba0c;
        case 0x3eba10u: goto label_3eba10;
        case 0x3eba14u: goto label_3eba14;
        case 0x3eba18u: goto label_3eba18;
        case 0x3eba1cu: goto label_3eba1c;
        case 0x3eba20u: goto label_3eba20;
        case 0x3eba24u: goto label_3eba24;
        case 0x3eba28u: goto label_3eba28;
        case 0x3eba2cu: goto label_3eba2c;
        case 0x3eba30u: goto label_3eba30;
        case 0x3eba34u: goto label_3eba34;
        case 0x3eba38u: goto label_3eba38;
        case 0x3eba3cu: goto label_3eba3c;
        case 0x3eba40u: goto label_3eba40;
        case 0x3eba44u: goto label_3eba44;
        case 0x3eba48u: goto label_3eba48;
        case 0x3eba4cu: goto label_3eba4c;
        case 0x3eba50u: goto label_3eba50;
        case 0x3eba54u: goto label_3eba54;
        case 0x3eba58u: goto label_3eba58;
        case 0x3eba5cu: goto label_3eba5c;
        case 0x3eba60u: goto label_3eba60;
        case 0x3eba64u: goto label_3eba64;
        case 0x3eba68u: goto label_3eba68;
        case 0x3eba6cu: goto label_3eba6c;
        case 0x3eba70u: goto label_3eba70;
        case 0x3eba74u: goto label_3eba74;
        case 0x3eba78u: goto label_3eba78;
        case 0x3eba7cu: goto label_3eba7c;
        case 0x3eba80u: goto label_3eba80;
        case 0x3eba84u: goto label_3eba84;
        case 0x3eba88u: goto label_3eba88;
        case 0x3eba8cu: goto label_3eba8c;
        case 0x3eba90u: goto label_3eba90;
        case 0x3eba94u: goto label_3eba94;
        case 0x3eba98u: goto label_3eba98;
        case 0x3eba9cu: goto label_3eba9c;
        case 0x3ebaa0u: goto label_3ebaa0;
        case 0x3ebaa4u: goto label_3ebaa4;
        case 0x3ebaa8u: goto label_3ebaa8;
        case 0x3ebaacu: goto label_3ebaac;
        case 0x3ebab0u: goto label_3ebab0;
        case 0x3ebab4u: goto label_3ebab4;
        case 0x3ebab8u: goto label_3ebab8;
        case 0x3ebabcu: goto label_3ebabc;
        case 0x3ebac0u: goto label_3ebac0;
        case 0x3ebac4u: goto label_3ebac4;
        case 0x3ebac8u: goto label_3ebac8;
        case 0x3ebaccu: goto label_3ebacc;
        case 0x3ebad0u: goto label_3ebad0;
        case 0x3ebad4u: goto label_3ebad4;
        case 0x3ebad8u: goto label_3ebad8;
        case 0x3ebadcu: goto label_3ebadc;
        case 0x3ebae0u: goto label_3ebae0;
        case 0x3ebae4u: goto label_3ebae4;
        default: break;
    }

    ctx->pc = 0x3eb7e8u;

label_3eb7e8:
    // 0x3eb7e8: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x3eb7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_3eb7ec:
    // 0x3eb7ec: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x3eb7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_3eb7f0:
    // 0x3eb7f0: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x3eb7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_3eb7f4:
    // 0x3eb7f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eb7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb7f8:
    // 0x3eb7f8: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x3eb7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_3eb7fc:
    // 0x3eb7fc: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x3eb7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_3eb800:
    // 0x3eb800: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3eb800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eb804:
    // 0x3eb804: 0xffbf04d0  sd          $ra, 0x4D0($sp)
    ctx->pc = 0x3eb804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 31));
label_3eb808:
    // 0x3eb808: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3eb808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eb80c:
    // 0x3eb80c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eb80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb810:
    // 0x3eb810: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb814:
    // 0x3eb814: 0x40f809  jalr        $v0
label_3eb818:
    if (ctx->pc == 0x3EB818u) {
        ctx->pc = 0x3EB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB814u;
        // 0x3eb818: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB81Cu;
        goto label_3eb81c;
    }
    ctx->pc = 0x3EB814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB81Cu);
        ctx->pc = 0x3EB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB814u;
        // 0x3eb818: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB814u, 0x3EB81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB81Cu;
label_3eb81c:
    // 0x3eb81c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3eb81cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb820:
    // 0x3eb820: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_3eb824:
    if (ctx->pc == 0x3EB824u) {
        ctx->pc = 0x3EB828u;
        goto label_3eb828;
    }
    ctx->pc = 0x3EB820u;
    {
        const bool branch_taken_0x3eb820 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb820) {
            ctx->pc = 0x3EB834u;
            goto label_3eb834;
        }
    }
    ctx->pc = 0x3EB828u;
label_3eb828:
    // 0x3eb828: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3eb828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3eb82c:
    // 0x3eb82c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3eb82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3eb830:
    // 0x3eb830: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3eb830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3eb834:
    // 0x3eb834: 0xc0ea14c  jal         func_3A8530
label_3eb838:
    if (ctx->pc == 0x3EB838u) {
        ctx->pc = 0x3EB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB834u;
        // 0x3eb838: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB83Cu;
        goto label_3eb83c;
    }
    ctx->pc = 0x3EB834u;
    SET_GPR_U32(ctx, 31, 0x3EB83Cu);
    ctx->pc = 0x3EB838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB834u;
    // 0x3eb838: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EB834u, 0x3EB83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB83Cu;
label_3eb83c:
    // 0x3eb83c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eb83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eb840:
    // 0x3eb840: 0xc0ea12a  jal         func_3A84A8
label_3eb844:
    if (ctx->pc == 0x3EB844u) {
        ctx->pc = 0x3EB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB840u;
        // 0x3eb844: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB848u;
        goto label_3eb848;
    }
    ctx->pc = 0x3EB840u;
    SET_GPR_U32(ctx, 31, 0x3EB848u);
    ctx->pc = 0x3EB844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB840u;
    // 0x3eb844: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EB840u, 0x3EB848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB848u;
label_3eb848:
    // 0x3eb848: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eb848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb84c:
    // 0x3eb84c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eb84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eb850:
    // 0x3eb850: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3eb850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eb854:
    // 0x3eb854: 0xc0ea12a  jal         func_3A84A8
label_3eb858:
    if (ctx->pc == 0x3EB858u) {
        ctx->pc = 0x3EB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB854u;
        // 0x3eb858: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB85Cu;
        goto label_3eb85c;
    }
    ctx->pc = 0x3EB854u;
    SET_GPR_U32(ctx, 31, 0x3EB85Cu);
    ctx->pc = 0x3EB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB854u;
    // 0x3eb858: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EB854u, 0x3EB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB85Cu;
label_3eb85c:
    // 0x3eb85c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eb85cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb860:
    // 0x3eb860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb864:
    // 0x3eb864: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eb864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eb868:
    // 0x3eb868: 0xc0e858c  jal         func_3A1630
label_3eb86c:
    if (ctx->pc == 0x3EB86Cu) {
        ctx->pc = 0x3EB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB868u;
        // 0x3eb86c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB870u;
        goto label_3eb870;
    }
    ctx->pc = 0x3EB868u;
    SET_GPR_U32(ctx, 31, 0x3EB870u);
    ctx->pc = 0x3EB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB868u;
    // 0x3eb86c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EB868u, 0x3EB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB870u;
label_3eb870:
    // 0x3eb870: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3eb870u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb874:
    // 0x3eb874: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3eb874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3eb878:
    // 0x3eb878: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x3eb878u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb87c:
    // 0x3eb87c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3eb87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3eb880:
    // 0x3eb880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb884:
    // 0x3eb884: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3eb884u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3eb888:
    // 0x3eb888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb88c:
    // 0x3eb88c: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x3eb88cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
label_3eb890:
    // 0x3eb890: 0xc0e9132  jal         func_3A44C8
label_3eb894:
    if (ctx->pc == 0x3EB894u) {
        ctx->pc = 0x3EB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB890u;
        // 0x3eb894: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB898u;
        goto label_3eb898;
    }
    ctx->pc = 0x3EB890u;
    SET_GPR_U32(ctx, 31, 0x3EB898u);
    ctx->pc = 0x3EB894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB890u;
    // 0x3eb894: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EB890u, 0x3EB898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB898u;
label_3eb898:
    // 0x3eb898: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3eb898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3eb89c:
    // 0x3eb89c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3eb89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb8a0:
    // 0x3eb8a0: 0x3c023006  lui         $v0, 0x3006
    ctx->pc = 0x3eb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12294 << 16));
label_3eb8a4:
    // 0x3eb8a4: 0x3c030401  lui         $v1, 0x401
    ctx->pc = 0x3eb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1025 << 16));
label_3eb8a8:
    // 0x3eb8a8: 0x34630805  ori         $v1, $v1, 0x805
    ctx->pc = 0x3eb8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2053);
label_3eb8ac:
    // 0x3eb8ac: 0x34420403  ori         $v0, $v0, 0x403
    ctx->pc = 0x3eb8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1027);
label_3eb8b0:
    // 0x3eb8b0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3eb8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eb8b4:
    // 0x3eb8b4: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x3eb8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
label_3eb8b8:
    // 0x3eb8b8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3eb8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3eb8bc:
    // 0x3eb8bc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x3eb8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_3eb8c0:
    // 0x3eb8c0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3eb8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3eb8c4:
    // 0x3eb8c4: 0x34a5887f  ori         $a1, $a1, 0x887F
    ctx->pc = 0x3eb8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34943);
label_3eb8c8:
    // 0x3eb8c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3eb8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb8cc:
    // 0x3eb8cc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3eb8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3eb8d0:
    // 0x3eb8d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3eb8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3eb8d4:
    // 0x3eb8d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3eb8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3eb8d8:
    // 0x3eb8d8: 0xc045cb2  jal         func_1172C8
label_3eb8dc:
    if (ctx->pc == 0x3EB8DCu) {
        ctx->pc = 0x3EB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8D8u;
        // 0x3eb8dc: 0xae470018  sw          $a3, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB8E0u;
        goto label_3eb8e0;
    }
    ctx->pc = 0x3EB8D8u;
    SET_GPR_U32(ctx, 31, 0x3EB8E0u);
    ctx->pc = 0x3EB8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB8D8u;
    // 0x3eb8dc: 0xae470018  sw          $a3, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3EB8D8u, 0x3EB8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB8E0u;
label_3eb8e0:
    // 0x3eb8e0: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3eb8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_3eb8e4:
    // 0x3eb8e4: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x3eb8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_3eb8e8:
    // 0x3eb8e8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3eb8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3eb8ec:
    // 0x3eb8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb8f0:
    // 0x3eb8f0: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x3eb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_3eb8f4:
    // 0x3eb8f4: 0x24a55ba8  addiu       $a1, $a1, 0x5BA8
    ctx->pc = 0x3eb8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23464));
label_3eb8f8:
    // 0x3eb8f8: 0xc0e9666  jal         func_3A5998
label_3eb8fc:
    if (ctx->pc == 0x3EB8FCu) {
        ctx->pc = 0x3EB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8F8u;
        // 0x3eb8fc: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB900u;
        goto label_3eb900;
    }
    ctx->pc = 0x3EB8F8u;
    SET_GPR_U32(ctx, 31, 0x3EB900u);
    ctx->pc = 0x3EB8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB8F8u;
    // 0x3eb8fc: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EB8F8u, 0x3EB900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB900u;
label_3eb900:
    // 0x3eb900: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3eb904:
    if (ctx->pc == 0x3EB904u) {
        ctx->pc = 0x3EB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB900u;
        // 0x3eb904: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB908u;
        goto label_3eb908;
    }
    ctx->pc = 0x3EB900u;
    {
        const bool branch_taken_0x3eb900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB900u;
        // 0x3eb904: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb900) {
            ctx->pc = 0x3EB920u;
            goto label_3eb920;
        }
    }
    ctx->pc = 0x3EB908u;
label_3eb908:
    // 0x3eb908: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3eb908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3eb90c:
    // 0x3eb90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb910:
    // 0x3eb910: 0xc0e9666  jal         func_3A5998
label_3eb914:
    if (ctx->pc == 0x3EB914u) {
        ctx->pc = 0x3EB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB910u;
        // 0x3eb914: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB918u;
        goto label_3eb918;
    }
    ctx->pc = 0x3EB910u;
    SET_GPR_U32(ctx, 31, 0x3EB918u);
    ctx->pc = 0x3EB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB910u;
    // 0x3eb914: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EB910u, 0x3EB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB918u;
label_3eb918:
    // 0x3eb918: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_3eb91c:
    if (ctx->pc == 0x3EB91Cu) {
        ctx->pc = 0x3EB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB918u;
        // 0x3eb91c: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB920u;
        goto label_3eb920;
    }
    ctx->pc = 0x3EB918u;
    {
        const bool branch_taken_0x3eb918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB918u;
        // 0x3eb91c: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb918) {
            ctx->pc = 0x3EB9F0u;
            goto label_3eb9f0;
        }
    }
    ctx->pc = 0x3EB920u;
label_3eb920:
    // 0x3eb920: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3eb920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3eb924:
    // 0x3eb924: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3eb924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
label_3eb928:
    // 0x3eb928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3eb928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3eb92c:
    // 0x3eb92c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3eb92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3eb930:
    // 0x3eb930: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3eb930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3eb934:
    // 0x3eb934: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3eb934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3eb938:
    // 0x3eb938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3eb938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3eb93c:
    // 0x3eb93c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eb93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eb940:
    // 0x3eb940: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3eb940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3eb944:
    // 0x3eb944: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3eb944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3eb948:
    // 0x3eb948: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3eb948u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eb94c:
    // 0x3eb94c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3eb94cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eb950:
    // 0x3eb950: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3eb950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3eb954:
    // 0x3eb954: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3eb954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3eb958:
    // 0x3eb958: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3eb958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3eb95c:
    // 0x3eb95c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3eb95cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3eb960:
    // 0x3eb960: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3eb960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb964:
    // 0x3eb964: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3eb964u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3eb968:
    // 0x3eb968: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3eb968u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3eb96c:
    // 0x3eb96c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3eb96cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb970:
    // 0x3eb970: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3eb970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb974:
    // 0x3eb974: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3eb974u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3eb978:
    // 0x3eb978: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3eb978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb97c:
    // 0x3eb97c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3eb97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3eb980:
    // 0x3eb980: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3eb980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3eb984:
    // 0x3eb984: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3eb984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb988:
    // 0x3eb988: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3eb988u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3eb98c:
    // 0x3eb98c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3eb98cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb990:
    // 0x3eb990: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3eb990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb994:
    // 0x3eb994: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3eb994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb998:
    // 0x3eb998: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3eb998u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3eb99c:
    // 0x3eb99c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3eb99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3eb9a0:
    // 0x3eb9a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3eb9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3eb9a4:
    // 0x3eb9a4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3eb9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3eb9a8:
    // 0x3eb9a8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3eb9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3eb9ac:
    // 0x3eb9ac: 0xc136b18  jal         func_4DAC60
label_3eb9b0:
    if (ctx->pc == 0x3EB9B0u) {
        ctx->pc = 0x3EB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9ACu;
        // 0x3eb9b0: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB9B4u;
        goto label_3eb9b4;
    }
    ctx->pc = 0x3EB9ACu;
    SET_GPR_U32(ctx, 31, 0x3EB9B4u);
    ctx->pc = 0x3EB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB9ACu;
    // 0x3eb9b0: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EB9ACu, 0x3EB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB9B4u;
label_3eb9b4:
    // 0x3eb9b4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3eb9b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eb9b8:
    // 0x3eb9b8: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x3eb9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3eb9bc:
    // 0x3eb9bc: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3eb9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3eb9c0:
    // 0x3eb9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eb9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eb9c4:
    // 0x3eb9c4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3eb9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3eb9c8:
    // 0x3eb9c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3eb9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3eb9cc:
    // 0x3eb9cc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3eb9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3eb9d0:
    // 0x3eb9d0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3eb9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3eb9d4:
    // 0x3eb9d4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3eb9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3eb9d8:
    // 0x3eb9d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3eb9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3eb9dc:
    // 0x3eb9dc: 0x26105bd0  addiu       $s0, $s0, 0x5BD0
    ctx->pc = 0x3eb9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23504));
label_3eb9e0:
    // 0x3eb9e0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3eb9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3eb9e4:
    // 0x3eb9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eb9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eb9e8:
    // 0x3eb9e8: 0x10000013  b           . + 4 + (0x13 << 2)
label_3eb9ec:
    if (ctx->pc == 0x3EB9ECu) {
        ctx->pc = 0x3EB9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9E8u;
        // 0x3eb9ec: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB9F0u;
        goto label_3eb9f0;
    }
    ctx->pc = 0x3EB9E8u;
    {
        const bool branch_taken_0x3eb9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9E8u;
        // 0x3eb9ec: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb9e8) {
            ctx->pc = 0x3EBA38u;
            goto label_3eba38;
        }
    }
    ctx->pc = 0x3EB9F0u;
label_3eb9f0:
    // 0x3eb9f0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3eb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3eb9f4:
    // 0x3eb9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb9f8:
    // 0x3eb9f8: 0xc0e9666  jal         func_3A5998
label_3eb9fc:
    if (ctx->pc == 0x3EB9FCu) {
        ctx->pc = 0x3EB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9F8u;
        // 0x3eb9fc: 0x24a55be0  addiu       $a1, $a1, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA00u;
        goto label_3eba00;
    }
    ctx->pc = 0x3EB9F8u;
    SET_GPR_U32(ctx, 31, 0x3EBA00u);
    ctx->pc = 0x3EB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB9F8u;
    // 0x3eb9fc: 0x24a55be0  addiu       $a1, $a1, 0x5BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EB9F8u, 0x3EBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBA00u;
label_3eba00:
    // 0x3eba00: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3eba04:
    if (ctx->pc == 0x3EBA04u) {
        ctx->pc = 0x3EBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA00u;
        // 0x3eba04: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA08u;
        goto label_3eba08;
    }
    ctx->pc = 0x3EBA00u;
    {
        const bool branch_taken_0x3eba00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA00u;
        // 0x3eba04: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eba00) {
            ctx->pc = 0x3EBA84u;
            goto label_3eba84;
        }
    }
    ctx->pc = 0x3EBA08u;
label_3eba08:
    // 0x3eba08: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3eba08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eba0c:
    // 0x3eba0c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3eba0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3eba10:
    // 0x3eba10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eba10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eba14:
    // 0x3eba14: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3eba14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3eba18:
    // 0x3eba18: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3eba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3eba1c:
    // 0x3eba1c: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3eba1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3eba20:
    // 0x3eba20: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3eba20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3eba24:
    // 0x3eba24: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3eba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3eba28:
    // 0x3eba28: 0xe7a00440  swc1        $f0, 0x440($sp)
    ctx->pc = 0x3eba28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3eba2c:
    // 0x3eba2c: 0x26105bd0  addiu       $s0, $s0, 0x5BD0
    ctx->pc = 0x3eba2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23504));
label_3eba30:
    // 0x3eba30: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3eba30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3eba34:
    // 0x3eba34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eba38:
    // 0x3eba38: 0xc0e9fa6  jal         func_3A7E98
label_3eba3c:
    if (ctx->pc == 0x3EBA3Cu) {
        ctx->pc = 0x3EBA40u;
        goto label_3eba40;
    }
    ctx->pc = 0x3EBA38u;
    SET_GPR_U32(ctx, 31, 0x3EBA40u);
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3EBA38u, 0x3EBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBA40u;
label_3eba40:
    // 0x3eba40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eba44:
    // 0x3eba44: 0xc0f15bc  jal         func_3C56F0
label_3eba48:
    if (ctx->pc == 0x3EBA48u) {
        ctx->pc = 0x3EBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA44u;
        // 0x3eba48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA4Cu;
        goto label_3eba4c;
    }
    ctx->pc = 0x3EBA44u;
    SET_GPR_U32(ctx, 31, 0x3EBA4Cu);
    ctx->pc = 0x3EBA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBA44u;
    // 0x3eba48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EBA44u, 0x3EBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBA4Cu;
label_3eba4c:
    // 0x3eba4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3eba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eba50:
    // 0x3eba50: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x3eba50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_3eba54:
    // 0x3eba54: 0xc0ea16a  jal         func_3A85A8
label_3eba58:
    if (ctx->pc == 0x3EBA58u) {
        ctx->pc = 0x3EBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA54u;
        // 0x3eba58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA5Cu;
        goto label_3eba5c;
    }
    ctx->pc = 0x3EBA54u;
    SET_GPR_U32(ctx, 31, 0x3EBA5Cu);
    ctx->pc = 0x3EBA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBA54u;
    // 0x3eba58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3EBA54u, 0x3EBA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBA5Cu;
label_3eba5c:
    // 0x3eba5c: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x3eba5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3eba60:
    // 0x3eba60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3eba60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eba64:
    // 0x3eba64: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x3eba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3eba68:
    // 0x3eba68: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3eba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3eba6c:
    // 0x3eba6c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3eba6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3eba70:
    // 0x3eba70: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3eba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3eba74:
    // 0x3eba74: 0x60f809  jalr        $v1
label_3eba78:
    if (ctx->pc == 0x3EBA78u) {
        ctx->pc = 0x3EBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA74u;
        // 0x3eba78: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA7Cu;
        goto label_3eba7c;
    }
    ctx->pc = 0x3EBA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EBA7Cu);
        ctx->pc = 0x3EBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA74u;
        // 0x3eba78: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBA74u, 0x3EBA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBA7Cu;
label_3eba7c:
    // 0x3eba7c: 0x10000013  b           . + 4 + (0x13 << 2)
label_3eba80:
    if (ctx->pc == 0x3EBA80u) {
        ctx->pc = 0x3EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA7Cu;
        // 0x3eba80: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA84u;
        goto label_3eba84;
    }
    ctx->pc = 0x3EBA7Cu;
    {
        const bool branch_taken_0x3eba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA7Cu;
        // 0x3eba80: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eba7c) {
            ctx->pc = 0x3EBACCu;
            goto label_3ebacc;
        }
    }
    ctx->pc = 0x3EBA84u;
label_3eba84:
    // 0x3eba84: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3eba84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eba88:
    // 0x3eba88: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3eba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3eba8c:
    // 0x3eba8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eba8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eba90:
    // 0x3eba90: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3eba90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3eba94:
    // 0x3eba94: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3eba94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3eba98:
    // 0x3eba98: 0x26105bd0  addiu       $s0, $s0, 0x5BD0
    ctx->pc = 0x3eba98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23504));
label_3eba9c:
    // 0x3eba9c: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3eba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3ebaa0:
    // 0x3ebaa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ebaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ebaa4:
    // 0x3ebaa4: 0xe7a00440  swc1        $f0, 0x440($sp)
    ctx->pc = 0x3ebaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3ebaa8:
    // 0x3ebaa8: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3ebaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3ebaac:
    // 0x3ebaac: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3ebaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3ebab0:
    // 0x3ebab0: 0xc0e9fa6  jal         func_3A7E98
label_3ebab4:
    if (ctx->pc == 0x3EBAB4u) {
        ctx->pc = 0x3EBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAB0u;
        // 0x3ebab4: 0x27a70450  addiu       $a3, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAB8u;
        goto label_3ebab8;
    }
    ctx->pc = 0x3EBAB0u;
    SET_GPR_U32(ctx, 31, 0x3EBAB8u);
    ctx->pc = 0x3EBAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBAB0u;
    // 0x3ebab4: 0x27a70450  addiu       $a3, $sp, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3EBAB0u, 0x3EBAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBAB8u;
label_3ebab8:
    // 0x3ebab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ebab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ebabc:
    // 0x3ebabc: 0xc0f15bc  jal         func_3C56F0
label_3ebac0:
    if (ctx->pc == 0x3EBAC0u) {
        ctx->pc = 0x3EBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBABCu;
        // 0x3ebac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAC4u;
        goto label_3ebac4;
    }
    ctx->pc = 0x3EBABCu;
    SET_GPR_U32(ctx, 31, 0x3EBAC4u);
    ctx->pc = 0x3EBAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBABCu;
    // 0x3ebac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EBABCu, 0x3EBAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBAC4u;
label_3ebac4:
    // 0x3ebac4: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x3ebac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_3ebac8:
    // 0x3ebac8: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x3ebac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3ebacc:
    // 0x3ebacc: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x3ebaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3ebad0:
    // 0x3ebad0: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x3ebad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3ebad4:
    // 0x3ebad4: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x3ebad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3ebad8:
    // 0x3ebad8: 0xdfbf04d0  ld          $ra, 0x4D0($sp)
    ctx->pc = 0x3ebad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
label_3ebadc:
    // 0x3ebadc: 0x3e00008  jr          $ra
label_3ebae0:
    if (ctx->pc == 0x3EBAE0u) {
        ctx->pc = 0x3EBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBADCu;
        // 0x3ebae0: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAE4u;
        goto label_3ebae4;
    }
    ctx->pc = 0x3EBADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBADCu;
        // 0x3ebae0: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBAE4u;
label_3ebae4:
    // 0x3ebae4: 0x0  nop
    ctx->pc = 0x3ebae4u;
    // NOP
    ctx->pc = 0x3ebae8u;
}
