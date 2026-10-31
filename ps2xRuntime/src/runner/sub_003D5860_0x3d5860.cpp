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

// Function: sub_003D5860
// Address: 0x3d5860 - 0x3d5af0
void sub_003D5860_0x3d5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5860_0x3d5860");
#endif

    switch (ctx->pc) {
        case 0x3d5860u: goto label_3d5860;
        case 0x3d5864u: goto label_3d5864;
        case 0x3d5868u: goto label_3d5868;
        case 0x3d586cu: goto label_3d586c;
        case 0x3d5870u: goto label_3d5870;
        case 0x3d5874u: goto label_3d5874;
        case 0x3d5878u: goto label_3d5878;
        case 0x3d587cu: goto label_3d587c;
        case 0x3d5880u: goto label_3d5880;
        case 0x3d5884u: goto label_3d5884;
        case 0x3d5888u: goto label_3d5888;
        case 0x3d588cu: goto label_3d588c;
        case 0x3d5890u: goto label_3d5890;
        case 0x3d5894u: goto label_3d5894;
        case 0x3d5898u: goto label_3d5898;
        case 0x3d589cu: goto label_3d589c;
        case 0x3d58a0u: goto label_3d58a0;
        case 0x3d58a4u: goto label_3d58a4;
        case 0x3d58a8u: goto label_3d58a8;
        case 0x3d58acu: goto label_3d58ac;
        case 0x3d58b0u: goto label_3d58b0;
        case 0x3d58b4u: goto label_3d58b4;
        case 0x3d58b8u: goto label_3d58b8;
        case 0x3d58bcu: goto label_3d58bc;
        case 0x3d58c0u: goto label_3d58c0;
        case 0x3d58c4u: goto label_3d58c4;
        case 0x3d58c8u: goto label_3d58c8;
        case 0x3d58ccu: goto label_3d58cc;
        case 0x3d58d0u: goto label_3d58d0;
        case 0x3d58d4u: goto label_3d58d4;
        case 0x3d58d8u: goto label_3d58d8;
        case 0x3d58dcu: goto label_3d58dc;
        case 0x3d58e0u: goto label_3d58e0;
        case 0x3d58e4u: goto label_3d58e4;
        case 0x3d58e8u: goto label_3d58e8;
        case 0x3d58ecu: goto label_3d58ec;
        case 0x3d58f0u: goto label_3d58f0;
        case 0x3d58f4u: goto label_3d58f4;
        case 0x3d58f8u: goto label_3d58f8;
        case 0x3d58fcu: goto label_3d58fc;
        case 0x3d5900u: goto label_3d5900;
        case 0x3d5904u: goto label_3d5904;
        case 0x3d5908u: goto label_3d5908;
        case 0x3d590cu: goto label_3d590c;
        case 0x3d5910u: goto label_3d5910;
        case 0x3d5914u: goto label_3d5914;
        case 0x3d5918u: goto label_3d5918;
        case 0x3d591cu: goto label_3d591c;
        case 0x3d5920u: goto label_3d5920;
        case 0x3d5924u: goto label_3d5924;
        case 0x3d5928u: goto label_3d5928;
        case 0x3d592cu: goto label_3d592c;
        case 0x3d5930u: goto label_3d5930;
        case 0x3d5934u: goto label_3d5934;
        case 0x3d5938u: goto label_3d5938;
        case 0x3d593cu: goto label_3d593c;
        case 0x3d5940u: goto label_3d5940;
        case 0x3d5944u: goto label_3d5944;
        case 0x3d5948u: goto label_3d5948;
        case 0x3d594cu: goto label_3d594c;
        case 0x3d5950u: goto label_3d5950;
        case 0x3d5954u: goto label_3d5954;
        case 0x3d5958u: goto label_3d5958;
        case 0x3d595cu: goto label_3d595c;
        case 0x3d5960u: goto label_3d5960;
        case 0x3d5964u: goto label_3d5964;
        case 0x3d5968u: goto label_3d5968;
        case 0x3d596cu: goto label_3d596c;
        case 0x3d5970u: goto label_3d5970;
        case 0x3d5974u: goto label_3d5974;
        case 0x3d5978u: goto label_3d5978;
        case 0x3d597cu: goto label_3d597c;
        case 0x3d5980u: goto label_3d5980;
        case 0x3d5984u: goto label_3d5984;
        case 0x3d5988u: goto label_3d5988;
        case 0x3d598cu: goto label_3d598c;
        case 0x3d5990u: goto label_3d5990;
        case 0x3d5994u: goto label_3d5994;
        case 0x3d5998u: goto label_3d5998;
        case 0x3d599cu: goto label_3d599c;
        case 0x3d59a0u: goto label_3d59a0;
        case 0x3d59a4u: goto label_3d59a4;
        case 0x3d59a8u: goto label_3d59a8;
        case 0x3d59acu: goto label_3d59ac;
        case 0x3d59b0u: goto label_3d59b0;
        case 0x3d59b4u: goto label_3d59b4;
        case 0x3d59b8u: goto label_3d59b8;
        case 0x3d59bcu: goto label_3d59bc;
        case 0x3d59c0u: goto label_3d59c0;
        case 0x3d59c4u: goto label_3d59c4;
        case 0x3d59c8u: goto label_3d59c8;
        case 0x3d59ccu: goto label_3d59cc;
        case 0x3d59d0u: goto label_3d59d0;
        case 0x3d59d4u: goto label_3d59d4;
        case 0x3d59d8u: goto label_3d59d8;
        case 0x3d59dcu: goto label_3d59dc;
        case 0x3d59e0u: goto label_3d59e0;
        case 0x3d59e4u: goto label_3d59e4;
        case 0x3d59e8u: goto label_3d59e8;
        case 0x3d59ecu: goto label_3d59ec;
        case 0x3d59f0u: goto label_3d59f0;
        case 0x3d59f4u: goto label_3d59f4;
        case 0x3d59f8u: goto label_3d59f8;
        case 0x3d59fcu: goto label_3d59fc;
        case 0x3d5a00u: goto label_3d5a00;
        case 0x3d5a04u: goto label_3d5a04;
        case 0x3d5a08u: goto label_3d5a08;
        case 0x3d5a0cu: goto label_3d5a0c;
        case 0x3d5a10u: goto label_3d5a10;
        case 0x3d5a14u: goto label_3d5a14;
        case 0x3d5a18u: goto label_3d5a18;
        case 0x3d5a1cu: goto label_3d5a1c;
        case 0x3d5a20u: goto label_3d5a20;
        case 0x3d5a24u: goto label_3d5a24;
        case 0x3d5a28u: goto label_3d5a28;
        case 0x3d5a2cu: goto label_3d5a2c;
        case 0x3d5a30u: goto label_3d5a30;
        case 0x3d5a34u: goto label_3d5a34;
        case 0x3d5a38u: goto label_3d5a38;
        case 0x3d5a3cu: goto label_3d5a3c;
        case 0x3d5a40u: goto label_3d5a40;
        case 0x3d5a44u: goto label_3d5a44;
        case 0x3d5a48u: goto label_3d5a48;
        case 0x3d5a4cu: goto label_3d5a4c;
        case 0x3d5a50u: goto label_3d5a50;
        case 0x3d5a54u: goto label_3d5a54;
        case 0x3d5a58u: goto label_3d5a58;
        case 0x3d5a5cu: goto label_3d5a5c;
        case 0x3d5a60u: goto label_3d5a60;
        case 0x3d5a64u: goto label_3d5a64;
        case 0x3d5a68u: goto label_3d5a68;
        case 0x3d5a6cu: goto label_3d5a6c;
        case 0x3d5a70u: goto label_3d5a70;
        case 0x3d5a74u: goto label_3d5a74;
        case 0x3d5a78u: goto label_3d5a78;
        case 0x3d5a7cu: goto label_3d5a7c;
        case 0x3d5a80u: goto label_3d5a80;
        case 0x3d5a84u: goto label_3d5a84;
        case 0x3d5a88u: goto label_3d5a88;
        case 0x3d5a8cu: goto label_3d5a8c;
        case 0x3d5a90u: goto label_3d5a90;
        case 0x3d5a94u: goto label_3d5a94;
        case 0x3d5a98u: goto label_3d5a98;
        case 0x3d5a9cu: goto label_3d5a9c;
        case 0x3d5aa0u: goto label_3d5aa0;
        case 0x3d5aa4u: goto label_3d5aa4;
        case 0x3d5aa8u: goto label_3d5aa8;
        case 0x3d5aacu: goto label_3d5aac;
        case 0x3d5ab0u: goto label_3d5ab0;
        case 0x3d5ab4u: goto label_3d5ab4;
        case 0x3d5ab8u: goto label_3d5ab8;
        case 0x3d5abcu: goto label_3d5abc;
        case 0x3d5ac0u: goto label_3d5ac0;
        case 0x3d5ac4u: goto label_3d5ac4;
        case 0x3d5ac8u: goto label_3d5ac8;
        case 0x3d5accu: goto label_3d5acc;
        case 0x3d5ad0u: goto label_3d5ad0;
        case 0x3d5ad4u: goto label_3d5ad4;
        case 0x3d5ad8u: goto label_3d5ad8;
        case 0x3d5adcu: goto label_3d5adc;
        case 0x3d5ae0u: goto label_3d5ae0;
        case 0x3d5ae4u: goto label_3d5ae4;
        case 0x3d5ae8u: goto label_3d5ae8;
        case 0x3d5aecu: goto label_3d5aec;
        default: break;
    }

    ctx->pc = 0x3d5860u;

label_3d5860:
    // 0x3d5860: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3d5860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3d5864:
    // 0x3d5864: 0x7fb208d0  sq          $s2, 0x8D0($sp)
    ctx->pc = 0x3d5864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 18));
label_3d5868:
    // 0x3d5868: 0x7fb408b0  sq          $s4, 0x8B0($sp)
    ctx->pc = 0x3d5868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 20));
label_3d586c:
    // 0x3d586c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d586cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d5870:
    // 0x3d5870: 0x7fb008f0  sq          $s0, 0x8F0($sp)
    ctx->pc = 0x3d5870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 16));
label_3d5874:
    // 0x3d5874: 0x7fb108e0  sq          $s1, 0x8E0($sp)
    ctx->pc = 0x3d5874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 17));
label_3d5878:
    // 0x3d5878: 0x7fb308c0  sq          $s3, 0x8C0($sp)
    ctx->pc = 0x3d5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 19));
label_3d587c:
    // 0x3d587c: 0xffbf08a0  sd          $ra, 0x8A0($sp)
    ctx->pc = 0x3d587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2208), GPR_U64(ctx, 31));
label_3d5880:
    // 0x3d5880: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d5880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d5884:
    // 0x3d5884: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d5884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d5888:
    // 0x3d5888: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d588c:
    // 0x3d588c: 0x40f809  jalr        $v0
label_3d5890:
    if (ctx->pc == 0x3D5890u) {
        ctx->pc = 0x3D5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D588Cu;
        // 0x3d5890: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5894u;
        goto label_3d5894;
    }
    ctx->pc = 0x3D588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5894u);
        ctx->pc = 0x3D5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D588Cu;
        // 0x3d5890: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D588Cu, 0x3D5894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5894u;
label_3d5894:
    // 0x3d5894: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d5894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5898:
    // 0x3d5898: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d5898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d589c:
    // 0x3d589c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d589cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d58a0:
    // 0x3d58a0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d58a4:
    // 0x3d58a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d58a8:
    // 0x3d58a8: 0x0  nop
    ctx->pc = 0x3d58a8u;
    // NOP
label_3d58ac:
    // 0x3d58ac: 0x0  nop
    ctx->pc = 0x3d58acu;
    // NOP
label_3d58b0:
    // 0x3d58b0: 0x0  nop
    ctx->pc = 0x3d58b0u;
    // NOP
label_3d58b4:
    // 0x3d58b4: 0x0  nop
    ctx->pc = 0x3d58b4u;
    // NOP
label_3d58b8:
    // 0x3d58b8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d58bc:
    if (ctx->pc == 0x3D58BCu) {
        ctx->pc = 0x3D58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58B8u;
        // 0x3d58bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58C0u;
        goto label_3d58c0;
    }
    ctx->pc = 0x3D58B8u;
    {
        const bool branch_taken_0x3d58b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58B8u;
        // 0x3d58bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58b8) {
            ctx->pc = 0x3D58A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d58a8;
        }
    }
    ctx->pc = 0x3D58C0u;
label_3d58c0:
    // 0x3d58c0: 0xc138ddc  jal         func_4E3770
label_3d58c4:
    if (ctx->pc == 0x3D58C4u) {
        ctx->pc = 0x3D58C8u;
        goto label_3d58c8;
    }
    ctx->pc = 0x3D58C0u;
    SET_GPR_U32(ctx, 31, 0x3D58C8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D58C0u, 0x3D58C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D58C8u;
label_3d58c8:
    // 0x3d58c8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3d58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d58cc:
    // 0x3d58cc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3d58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3d58d0:
    // 0x3d58d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d58d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d58d4:
    // 0x3d58d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3d58d8:
    if (ctx->pc == 0x3D58D8u) {
        ctx->pc = 0x3D58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58D4u;
        // 0x3d58d8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58DCu;
        goto label_3d58dc;
    }
    ctx->pc = 0x3D58D4u;
    {
        const bool branch_taken_0x3d58d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58D4u;
        // 0x3d58d8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58d4) {
            ctx->pc = 0x3D58ECu;
            goto label_3d58ec;
        }
    }
    ctx->pc = 0x3D58DCu;
label_3d58dc:
    // 0x3d58dc: 0xc0e93de  jal         func_3A4F78
label_3d58e0:
    if (ctx->pc == 0x3D58E0u) {
        ctx->pc = 0x3D58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58DCu;
        // 0x3d58e0: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58E4u;
        goto label_3d58e4;
    }
    ctx->pc = 0x3D58DCu;
    SET_GPR_U32(ctx, 31, 0x3D58E4u);
    ctx->pc = 0x3D58E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D58DCu;
    // 0x3d58e0: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3D58DCu, 0x3D58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D58E4u;
label_3d58e4:
    // 0x3d58e4: 0x10000079  b           . + 4 + (0x79 << 2)
label_3d58e8:
    if (ctx->pc == 0x3D58E8u) {
        ctx->pc = 0x3D58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58E4u;
        // 0x3d58e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58ECu;
        goto label_3d58ec;
    }
    ctx->pc = 0x3D58E4u;
    {
        const bool branch_taken_0x3d58e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58E4u;
        // 0x3d58e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58e4) {
            ctx->pc = 0x3D5ACCu;
            goto label_3d5acc;
        }
    }
    ctx->pc = 0x3D58ECu;
label_3d58ec:
    // 0x3d58ec: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_3d58f0:
    if (ctx->pc == 0x3D58F0u) {
        ctx->pc = 0x3D58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58ECu;
        // 0x3d58f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58F4u;
        goto label_3d58f4;
    }
    ctx->pc = 0x3D58ECu;
    {
        const bool branch_taken_0x3d58ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58ECu;
        // 0x3d58f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58ec) {
            ctx->pc = 0x3D5ACCu;
            goto label_3d5acc;
        }
    }
    ctx->pc = 0x3D58F4u;
label_3d58f4:
    // 0x3d58f4: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3d58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3d58f8:
    // 0x3d58f8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_3d58fc:
    if (ctx->pc == 0x3D58FCu) {
        ctx->pc = 0x3D58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58F8u;
        // 0x3d58fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5900u;
        goto label_3d5900;
    }
    ctx->pc = 0x3D58F8u;
    {
        const bool branch_taken_0x3d58f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58F8u;
        // 0x3d58fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58f8) {
            ctx->pc = 0x3D5934u;
            goto label_3d5934;
        }
    }
    ctx->pc = 0x3D5900u;
label_3d5900:
    // 0x3d5900: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3d5900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3d5904:
    // 0x3d5904: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d5904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d5908:
    // 0x3d5908: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3d5908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3d590c:
    // 0x3d590c: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x3d590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
label_3d5910:
    // 0x3d5910: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x3d5910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
label_3d5914:
    // 0x3d5914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5918:
    // 0x3d5918: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d5918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d591c:
    // 0x3d591c: 0x27b30430  addiu       $s3, $sp, 0x430
    ctx->pc = 0x3d591cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d5920:
    // 0x3d5920: 0x3462006f  ori         $v0, $v1, 0x6F
    ctx->pc = 0x3d5920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
label_3d5924:
    // 0x3d5924: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3d5924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3d5928:
    // 0x3d5928: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3d5928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3d592c:
    // 0x3d592c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3d5930:
    if (ctx->pc == 0x3D5930u) {
        ctx->pc = 0x3D5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D592Cu;
        // 0x3d5930: 0xae4300b0  sw          $v1, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5934u;
        goto label_3d5934;
    }
    ctx->pc = 0x3D592Cu;
    {
        const bool branch_taken_0x3d592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D592Cu;
        // 0x3d5930: 0xae4300b0  sw          $v1, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d592c) {
            ctx->pc = 0x3D59DCu;
            goto label_3d59dc;
        }
    }
    ctx->pc = 0x3D5934u;
label_3d5934:
    // 0x3d5934: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_3d5938:
    if (ctx->pc == 0x3D5938u) {
        ctx->pc = 0x3D5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5934u;
        // 0x3d5938: 0x27b30430  addiu       $s3, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D593Cu;
        goto label_3d593c;
    }
    ctx->pc = 0x3D5934u;
    {
        const bool branch_taken_0x3d5934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5934u;
        // 0x3d5938: 0x27b30430  addiu       $s3, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5934) {
            ctx->pc = 0x3D59DCu;
            goto label_3d59dc;
        }
    }
    ctx->pc = 0x3D593Cu;
label_3d593c:
    // 0x3d593c: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3d593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3d5940:
    // 0x3d5940: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d5940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d5944:
    // 0x3d5944: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3d5944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3d5948:
    // 0x3d5948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d5948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d594c:
    // 0x3d594c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d594cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5950:
    // 0x3d5950: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d5950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d5954:
    // 0x3d5954: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3d5954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d5958:
    // 0x3d5958: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3d5958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3d595c:
    // 0x3d595c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d595cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d5960:
    // 0x3d5960: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x3d5960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_3d5964:
    // 0x3d5964: 0xae850014  sw          $a1, 0x14($s4)
    ctx->pc = 0x3d5964u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 5));
label_3d5968:
    // 0x3d5968: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3d5968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3d596c:
    // 0x3d596c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d596cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d5970:
    // 0x3d5970: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d5970u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d5974:
    // 0x3d5974: 0xc0e947e  jal         func_3A51F8
label_3d5978:
    if (ctx->pc == 0x3D5978u) {
        ctx->pc = 0x3D5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5974u;
        // 0x3d5978: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D597Cu;
        goto label_3d597c;
    }
    ctx->pc = 0x3D5974u;
    SET_GPR_U32(ctx, 31, 0x3D597Cu);
    ctx->pc = 0x3D5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5974u;
    // 0x3d5978: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3D5974u, 0x3D597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D597Cu;
label_3d597c:
    // 0x3d597c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3d5980:
    if (ctx->pc == 0x3D5980u) {
        ctx->pc = 0x3D5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D597Cu;
        // 0x3d5980: 0x27b10440  addiu       $s1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5984u;
        goto label_3d5984;
    }
    ctx->pc = 0x3D597Cu;
    {
        const bool branch_taken_0x3d597c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D597Cu;
        // 0x3d5980: 0x27b10440  addiu       $s1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d597c) {
            ctx->pc = 0x3D59DCu;
            goto label_3d59dc;
        }
    }
    ctx->pc = 0x3D5984u;
label_3d5984:
    // 0x3d5984: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d5984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d5988:
    // 0x3d5988: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x3d5988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3d598c:
    // 0x3d598c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d598cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d5990:
    // 0x3d5990: 0x8e4600b0  lw          $a2, 0xB0($s2)
    ctx->pc = 0x3d5990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3d5994:
    // 0x3d5994: 0x26104f38  addiu       $s0, $s0, 0x4F38
    ctx->pc = 0x3d5994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20280));
label_3d5998:
    // 0x3d5998: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3d5998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3d599c:
    // 0x3d599c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d59a0:
    // 0x3d59a0: 0xafa60870  sw          $a2, 0x870($sp)
    ctx->pc = 0x3d59a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 6));
label_3d59a4:
    // 0x3d59a4: 0x27a50850  addiu       $a1, $sp, 0x850
    ctx->pc = 0x3d59a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d59a8:
    // 0x3d59a8: 0xafa30860  sw          $v1, 0x860($sp)
    ctx->pc = 0x3d59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 3));
label_3d59ac:
    // 0x3d59ac: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3d59acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3d59b0:
    // 0x3d59b0: 0x27a70870  addiu       $a3, $sp, 0x870
    ctx->pc = 0x3d59b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3d59b4:
    // 0x3d59b4: 0x27a80880  addiu       $t0, $sp, 0x880
    ctx->pc = 0x3d59b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3d59b8:
    // 0x3d59b8: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x3d59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3d59bc:
    // 0x3d59bc: 0x27a90890  addiu       $t1, $sp, 0x890
    ctx->pc = 0x3d59bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3d59c0:
    // 0x3d59c0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3d59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3d59c4:
    // 0x3d59c4: 0xafa20890  sw          $v0, 0x890($sp)
    ctx->pc = 0x3d59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
label_3d59c8:
    // 0x3d59c8: 0xc0ea004  jal         func_3A8010
label_3d59cc:
    if (ctx->pc == 0x3D59CCu) {
        ctx->pc = 0x3D59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59C8u;
        // 0x3d59cc: 0xafa30880  sw          $v1, 0x880($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D59D0u;
        goto label_3d59d0;
    }
    ctx->pc = 0x3D59C8u;
    SET_GPR_U32(ctx, 31, 0x3D59D0u);
    ctx->pc = 0x3D59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D59C8u;
    // 0x3d59cc: 0xafa30880  sw          $v1, 0x880($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3D59C8u, 0x3D59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D59D0u;
label_3d59d0:
    // 0x3d59d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d59d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d59d4:
    // 0x3d59d4: 0xc0f15bc  jal         func_3C56F0
label_3d59d8:
    if (ctx->pc == 0x3D59D8u) {
        ctx->pc = 0x3D59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59D4u;
        // 0x3d59d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D59DCu;
        goto label_3d59dc;
    }
    ctx->pc = 0x3D59D4u;
    SET_GPR_U32(ctx, 31, 0x3D59DCu);
    ctx->pc = 0x3D59D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D59D4u;
    // 0x3d59d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D59D4u, 0x3D59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D59DCu;
label_3d59dc:
    // 0x3d59dc: 0xc0e8fc0  jal         func_3A3F00
label_3d59e0:
    if (ctx->pc == 0x3D59E0u) {
        ctx->pc = 0x3D59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59DCu;
        // 0x3d59e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D59E4u;
        goto label_3d59e4;
    }
    ctx->pc = 0x3D59DCu;
    SET_GPR_U32(ctx, 31, 0x3D59E4u);
    ctx->pc = 0x3D59E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D59DCu;
    // 0x3d59e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3D59DCu, 0x3D59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D59E4u;
label_3d59e4:
    // 0x3d59e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d59e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d59e8:
    // 0x3d59e8: 0xc0e90ca  jal         func_3A4328
label_3d59ec:
    if (ctx->pc == 0x3D59ECu) {
        ctx->pc = 0x3D59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59E8u;
        // 0x3d59ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D59F0u;
        goto label_3d59f0;
    }
    ctx->pc = 0x3D59E8u;
    SET_GPR_U32(ctx, 31, 0x3D59F0u);
    ctx->pc = 0x3D59ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D59E8u;
    // 0x3d59ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D59E8u, 0x3D59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D59F0u;
label_3d59f0:
    // 0x3d59f0: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d59f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d59f4:
    // 0x3d59f4: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3d59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d59f8:
    // 0x3d59f8: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3d59f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d59fc:
    // 0x3d59fc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3d59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3d5a00:
    // 0x3d5a00: 0xc136afa  jal         func_4DABE8
label_3d5a04:
    if (ctx->pc == 0x3D5A04u) {
        ctx->pc = 0x3D5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A00u;
        // 0x3d5a04: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A08u;
        goto label_3d5a08;
    }
    ctx->pc = 0x3D5A00u;
    SET_GPR_U32(ctx, 31, 0x3D5A08u);
    ctx->pc = 0x3D5A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5A00u;
    // 0x3d5a04: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3D5A00u, 0x3D5A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5A08u;
label_3d5a08:
    // 0x3d5a08: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3d5a08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d5a0c:
    // 0x3d5a0c: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x3d5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d5a10:
    // 0x3d5a10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d5a10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d5a14:
    // 0x3d5a14: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3d5a14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5a18:
    // 0x3d5a18: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3d5a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5a1c:
    // 0x3d5a1c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3d5a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5a20:
    // 0x3d5a20: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3d5a20u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3d5a24:
    // 0x3d5a24: 0x4a0003bf  vwaitq
    ctx->pc = 0x3d5a24u;
    // VWAITQ (Q already resolved in this runtime)
label_3d5a28:
    // 0x3d5a28: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3d5a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3d5a2c:
    // 0x3d5a2c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3d5a2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3d5a30:
    // 0x3d5a30: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3d5a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3d5a34:
    // 0x3d5a34: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d5a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d5a38:
    // 0x3d5a38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d5a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d5a3c:
    // 0x3d5a3c: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3d5a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3d5a40:
    // 0x3d5a40: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d5a44:
    // 0x3d5a44: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d5a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d5a48:
    // 0x3d5a48: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3d5a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3d5a4c:
    // 0x3d5a4c: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3d5a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3d5a50:
    // 0x3d5a50: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3d5a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3d5a54:
    // 0x3d5a54: 0xc136b24  jal         func_4DAC90
label_3d5a58:
    if (ctx->pc == 0x3D5A58u) {
        ctx->pc = 0x3D5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A54u;
        // 0x3d5a58: 0x7fa30430  sq          $v1, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A5Cu;
        goto label_3d5a5c;
    }
    ctx->pc = 0x3D5A54u;
    SET_GPR_U32(ctx, 31, 0x3D5A5Cu);
    ctx->pc = 0x3D5A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5A54u;
    // 0x3d5a58: 0x7fa30430  sq          $v1, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D5A54u, 0x3D5A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5A5Cu;
label_3d5a5c:
    // 0x3d5a5c: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3d5a5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d5a60:
    // 0x3d5a60: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x3d5a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d5a64:
    // 0x3d5a64: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d5a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d5a68:
    // 0x3d5a68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d5a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a6c:
    // 0x3d5a6c: 0xc136afa  jal         func_4DABE8
label_3d5a70:
    if (ctx->pc == 0x3D5A70u) {
        ctx->pc = 0x3D5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A6Cu;
        // 0x3d5a70: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A74u;
        goto label_3d5a74;
    }
    ctx->pc = 0x3D5A6Cu;
    SET_GPR_U32(ctx, 31, 0x3D5A74u);
    ctx->pc = 0x3D5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5A6Cu;
    // 0x3d5a70: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3D5A6Cu, 0x3D5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5A74u;
label_3d5a74:
    // 0x3d5a74: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3d5a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d5a78:
    // 0x3d5a78: 0x27a30470  addiu       $v1, $sp, 0x470
    ctx->pc = 0x3d5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d5a7c:
    // 0x3d5a7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d5a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d5a80:
    // 0x3d5a80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5a84:
    // 0x3d5a84: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3d5a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a88:
    // 0x3d5a88: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d5a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d5a8c:
    // 0x3d5a8c: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3d5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d5a90:
    // 0x3d5a90: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3d5a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3d5a94:
    // 0x3d5a94: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3d5a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d5a98:
    // 0x3d5a98: 0xafa00474  sw          $zero, 0x474($sp)
    ctx->pc = 0x3d5a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 0));
label_3d5a9c:
    // 0x3d5a9c: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x3d5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
label_3d5aa0:
    // 0x3d5aa0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3d5aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3d5aa4:
    // 0x3d5aa4: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d5aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d5aa8:
    // 0x3d5aa8: 0xc136b18  jal         func_4DAC60
label_3d5aac:
    if (ctx->pc == 0x3D5AACu) {
        ctx->pc = 0x3D5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AA8u;
        // 0x3d5aac: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5AB0u;
        goto label_3d5ab0;
    }
    ctx->pc = 0x3D5AA8u;
    SET_GPR_U32(ctx, 31, 0x3D5AB0u);
    ctx->pc = 0x3D5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5AA8u;
    // 0x3d5aac: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D5AA8u, 0x3D5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5AB0u;
label_3d5ab0:
    // 0x3d5ab0: 0x7ba30470  lq          $v1, 0x470($sp)
    ctx->pc = 0x3d5ab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d5ab4:
    // 0x3d5ab4: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x3d5ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
label_3d5ab8:
    // 0x3d5ab8: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3d5ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3d5abc:
    // 0x3d5abc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3d5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3d5ac0:
    // 0x3d5ac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d5ac4:
    // 0x3d5ac4: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3d5ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3d5ac8:
    // 0x3d5ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d5ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d5acc:
    // 0x3d5acc: 0x7bb008f0  lq          $s0, 0x8F0($sp)
    ctx->pc = 0x3d5accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3d5ad0:
    // 0x3d5ad0: 0x7bb108e0  lq          $s1, 0x8E0($sp)
    ctx->pc = 0x3d5ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3d5ad4:
    // 0x3d5ad4: 0x7bb208d0  lq          $s2, 0x8D0($sp)
    ctx->pc = 0x3d5ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3d5ad8:
    // 0x3d5ad8: 0x7bb308c0  lq          $s3, 0x8C0($sp)
    ctx->pc = 0x3d5ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3d5adc:
    // 0x3d5adc: 0x7bb408b0  lq          $s4, 0x8B0($sp)
    ctx->pc = 0x3d5adcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3d5ae0:
    // 0x3d5ae0: 0xdfbf08a0  ld          $ra, 0x8A0($sp)
    ctx->pc = 0x3d5ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2208)));
label_3d5ae4:
    // 0x3d5ae4: 0x3e00008  jr          $ra
label_3d5ae8:
    if (ctx->pc == 0x3D5AE8u) {
        ctx->pc = 0x3D5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AE4u;
        // 0x3d5ae8: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5AECu;
        goto label_3d5aec;
    }
    ctx->pc = 0x3D5AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AE4u;
        // 0x3d5ae8: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5AECu;
label_3d5aec:
    // 0x3d5aec: 0x0  nop
    ctx->pc = 0x3d5aecu;
    // NOP
    ctx->pc = 0x3d5af0u;
}
