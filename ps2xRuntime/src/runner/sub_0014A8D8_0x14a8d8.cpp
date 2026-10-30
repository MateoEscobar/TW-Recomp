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

// Function: sub_0014A8D8
// Address: 0x14a8d8 - 0x14aa78
void sub_0014A8D8_0x14a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A8D8_0x14a8d8");
#endif

    switch (ctx->pc) {
        case 0x14a910u: goto label_14a910;
        case 0x14a91cu: goto label_14a91c;
        case 0x14a950u: goto label_14a950;
        case 0x14a984u: goto label_14a984;
        case 0x14a990u: goto label_14a990;
        case 0x14aa20u: goto label_14aa20;
        case 0x14aa2cu: goto label_14aa2c;
        case 0x14aa48u: goto label_14aa48;
        case 0x14aa54u: goto label_14aa54;
        default: break;
    }

    ctx->pc = 0x14a8d8u;

    // 0x14a8d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14a8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14a8dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14a8e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14a8e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14a8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14a8ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14a8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a8f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14a8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14a8fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14a8fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a904: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x14a904u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a908: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x14a908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14a90c: 0x0  nop
    ctx->pc = 0x14a90cu;
    // NOP
label_14a910:
    // 0x14a910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a914: 0xc1114ec  jal         func_4453B0
    ctx->pc = 0x14A914u;
    SET_GPR_U32(ctx, 31, 0x14A91Cu);
    ctx->pc = 0x14A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A914u;
    // 0x14a918: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4453B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4453B0u, 0x14A914u, 0x14A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A91Cu;
label_14a91c:
    // 0x14a91c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14a920: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x14a920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a924: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A924u;
    {
        const bool branch_taken_0x14a924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A924u;
        // 0x14a928: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a924) {
            ctx->pc = 0x14A938u;
            goto label_14a938;
        }
    }
    ctx->pc = 0x14A92Cu;
    // 0x14a92c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14a92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a930: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14A930u;
    {
        const bool branch_taken_0x14a930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a930) {
            ctx->pc = 0x14A934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A930u;
            // 0x14a934: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a910;
        }
    }
    ctx->pc = 0x14A938u;
label_14a938:
    // 0x14a938: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14a938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a93c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x14A93Cu;
    {
        const bool branch_taken_0x14a93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A93Cu;
        // 0x14a940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a93c) {
            ctx->pc = 0x14AA54u;
            goto label_14aa54;
        }
    }
    ctx->pc = 0x14A944u;
    // 0x14a944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a948: 0xc111590  jal         func_445640
    ctx->pc = 0x14A948u;
    SET_GPR_U32(ctx, 31, 0x14A950u);
    ctx->pc = 0x14A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A948u;
    // 0x14a94c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14A948u, 0x14A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A950u;
label_14a950:
    // 0x14a950: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a954: 0x4410041  bgez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x14A954u;
    {
        const bool branch_taken_0x14a954 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A954u;
        // 0x14a958: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a954) {
            ctx->pc = 0x14AA5Cu;
            goto label_14aa5c;
        }
    }
    ctx->pc = 0x14A95Cu;
    // 0x14a95c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14a95cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14a960: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
    // 0x14a964: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14a964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14a968: 0x2633a870  addiu       $s3, $s1, -0x5790
    ctx->pc = 0x14a968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a96c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a970: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a974: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14a974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a978: 0x24c6ad68  addiu       $a2, $a2, -0x5298
    ctx->pc = 0x14a978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946152));
    // 0x14a97c: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14A97Cu;
    SET_GPR_U32(ctx, 31, 0x14A984u);
    ctx->pc = 0x14A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A97Cu;
    // 0x14a980: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A97Cu, 0x14A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A984u;
label_14a984:
    // 0x14a984: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14a984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14a988: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14A988u;
    SET_GPR_U32(ctx, 31, 0x14A990u);
    ctx->pc = 0x14A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A988u;
    // 0x14a98c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A988u, 0x14A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A990u;
label_14a990:
    // 0x14a990: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a994: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x14a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x14a998: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14A998u;
    {
        const bool branch_taken_0x14a998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A998u;
        // 0x14a99c: 0x2862fffd  slti        $v0, $v1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a998) {
            ctx->pc = 0x14A9D8u;
            goto label_14a9d8;
        }
    }
    ctx->pc = 0x14A9A0u;
    // 0x14a9a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A9A0u;
    {
        const bool branch_taken_0x14a9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A0u;
        // 0x14a9a4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9a0) {
            ctx->pc = 0x14A9B8u;
            goto label_14a9b8;
        }
    }
    ctx->pc = 0x14A9A8u;
    // 0x14a9a8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A9A8u;
    {
        const bool branch_taken_0x14a9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A8u;
        // 0x14a9ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9a8) {
            ctx->pc = 0x14A9ECu;
            goto label_14a9ec;
        }
    }
    ctx->pc = 0x14A9B0u;
    // 0x14a9b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14A9B0u;
    {
        const bool branch_taken_0x14a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9B0u;
        // 0x14a9b4: 0x2842fff7  slti        $v0, $v0, -0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9b0) {
            ctx->pc = 0x14AA04u;
            goto label_14aa04;
        }
    }
    ctx->pc = 0x14A9B8u;
label_14a9b8:
    // 0x14a9b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14a9bc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A9BCu;
    {
        const bool branch_taken_0x14a9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9BCu;
        // 0x14a9c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9bc) {
            ctx->pc = 0x14AA00u;
            goto label_14aa00;
        }
    }
    ctx->pc = 0x14A9C4u;
    // 0x14a9c4: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a9c8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a9cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14A9D0u;
    {
        const bool branch_taken_0x14a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9D0u;
        // 0x14a9d4: 0x24c6aa68  addiu       $a2, $a2, -0x5598 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9d0) {
            ctx->pc = 0x14AA18u;
            goto label_14aa18;
        }
    }
    ctx->pc = 0x14A9D8u;
label_14a9d8:
    // 0x14a9d8: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a9dc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a9e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14A9E4u;
    {
        const bool branch_taken_0x14a9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9E4u;
        // 0x14a9e8: 0x24c6ad98  addiu       $a2, $a2, -0x5268 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9e4) {
            ctx->pc = 0x14AA18u;
            goto label_14aa18;
        }
    }
    ctx->pc = 0x14A9ECu;
label_14a9ec:
    // 0x14a9ec: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a9f0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a9f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14a9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14A9F8u;
    {
        const bool branch_taken_0x14a9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F8u;
        // 0x14a9fc: 0x24c6add8  addiu       $a2, $a2, -0x5228 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9f8) {
            ctx->pc = 0x14AA18u;
            goto label_14aa18;
        }
    }
    ctx->pc = 0x14AA00u;
label_14aa00:
    // 0x14aa00: 0x2842fff7  slti        $v0, $v0, -0x9
    ctx->pc = 0x14aa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
label_14aa04:
    // 0x14aa04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14AA04u;
    {
        const bool branch_taken_0x14aa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA04u;
        // 0x14aa08: 0x8e4269ec  lw          $v0, 0x69EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa04) {
            ctx->pc = 0x14AA34u;
            goto label_14aa34;
        }
    }
    ctx->pc = 0x14AA0Cu;
    // 0x14aa0c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14aa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14aa10: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14aa14: 0x24c6acb8  addiu       $a2, $a2, -0x5348
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945976));
label_14aa18:
    // 0x14aa18: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14AA18u;
    SET_GPR_U32(ctx, 31, 0x14AA20u);
    ctx->pc = 0x14AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA18u;
    // 0x14aa1c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14AA18u, 0x14AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA20u;
label_14aa20:
    // 0x14aa20: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14aa24: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14AA24u;
    SET_GPR_U32(ctx, 31, 0x14AA2Cu);
    ctx->pc = 0x14AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA24u;
    // 0x14aa28: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14AA24u, 0x14AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA2Cu;
label_14aa2c:
    // 0x14aa2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14AA2Cu;
    {
        const bool branch_taken_0x14aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA2Cu;
        // 0x14aa30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa2c) {
            ctx->pc = 0x14AA58u;
            goto label_14aa58;
        }
    }
    ctx->pc = 0x14AA34u;
label_14aa34:
    // 0x14aa34: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14aa34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14aa38: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14aa3c: 0x24c6acf8  addiu       $a2, $a2, -0x5308
    ctx->pc = 0x14aa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946040));
    // 0x14aa40: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14AA40u;
    SET_GPR_U32(ctx, 31, 0x14AA48u);
    ctx->pc = 0x14AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA40u;
    // 0x14aa44: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14AA40u, 0x14AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA48u;
label_14aa48:
    // 0x14aa48: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14aa4c: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14AA4Cu;
    SET_GPR_U32(ctx, 31, 0x14AA54u);
    ctx->pc = 0x14AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA4Cu;
    // 0x14aa50: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14AA4Cu, 0x14AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA54u;
label_14aa54:
    // 0x14aa54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14aa58:
    // 0x14aa58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14aa58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14aa5c:
    // 0x14aa5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14aa5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14aa60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14aa60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aa64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14aa64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14aa68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14aa68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aa6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14aa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aa70: 0x3e00008  jr          $ra
    ctx->pc = 0x14AA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA70u;
        // 0x14aa74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AA78u;
}
