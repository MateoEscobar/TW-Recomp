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

// Function: sub_004A5888
// Address: 0x4a5888 - 0x4a5988
void sub_004A5888_0x4a5888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5888_0x4a5888");
#endif

    switch (ctx->pc) {
        case 0x4a5888u: goto label_4a5888;
        case 0x4a588cu: goto label_4a588c;
        case 0x4a5890u: goto label_4a5890;
        case 0x4a5894u: goto label_4a5894;
        case 0x4a5898u: goto label_4a5898;
        case 0x4a589cu: goto label_4a589c;
        case 0x4a58a0u: goto label_4a58a0;
        case 0x4a58a4u: goto label_4a58a4;
        case 0x4a58a8u: goto label_4a58a8;
        case 0x4a58acu: goto label_4a58ac;
        case 0x4a58b0u: goto label_4a58b0;
        case 0x4a58b4u: goto label_4a58b4;
        case 0x4a58b8u: goto label_4a58b8;
        case 0x4a58bcu: goto label_4a58bc;
        case 0x4a58c0u: goto label_4a58c0;
        case 0x4a58c4u: goto label_4a58c4;
        case 0x4a58c8u: goto label_4a58c8;
        case 0x4a58ccu: goto label_4a58cc;
        case 0x4a58d0u: goto label_4a58d0;
        case 0x4a58d4u: goto label_4a58d4;
        case 0x4a58d8u: goto label_4a58d8;
        case 0x4a58dcu: goto label_4a58dc;
        case 0x4a58e0u: goto label_4a58e0;
        case 0x4a58e4u: goto label_4a58e4;
        case 0x4a58e8u: goto label_4a58e8;
        case 0x4a58ecu: goto label_4a58ec;
        case 0x4a58f0u: goto label_4a58f0;
        case 0x4a58f4u: goto label_4a58f4;
        case 0x4a58f8u: goto label_4a58f8;
        case 0x4a58fcu: goto label_4a58fc;
        case 0x4a5900u: goto label_4a5900;
        case 0x4a5904u: goto label_4a5904;
        case 0x4a5908u: goto label_4a5908;
        case 0x4a590cu: goto label_4a590c;
        case 0x4a5910u: goto label_4a5910;
        case 0x4a5914u: goto label_4a5914;
        case 0x4a5918u: goto label_4a5918;
        case 0x4a591cu: goto label_4a591c;
        case 0x4a5920u: goto label_4a5920;
        case 0x4a5924u: goto label_4a5924;
        case 0x4a5928u: goto label_4a5928;
        case 0x4a592cu: goto label_4a592c;
        case 0x4a5930u: goto label_4a5930;
        case 0x4a5934u: goto label_4a5934;
        case 0x4a5938u: goto label_4a5938;
        case 0x4a593cu: goto label_4a593c;
        case 0x4a5940u: goto label_4a5940;
        case 0x4a5944u: goto label_4a5944;
        case 0x4a5948u: goto label_4a5948;
        case 0x4a594cu: goto label_4a594c;
        case 0x4a5950u: goto label_4a5950;
        case 0x4a5954u: goto label_4a5954;
        case 0x4a5958u: goto label_4a5958;
        case 0x4a595cu: goto label_4a595c;
        case 0x4a5960u: goto label_4a5960;
        case 0x4a5964u: goto label_4a5964;
        case 0x4a5968u: goto label_4a5968;
        case 0x4a596cu: goto label_4a596c;
        case 0x4a5970u: goto label_4a5970;
        case 0x4a5974u: goto label_4a5974;
        case 0x4a5978u: goto label_4a5978;
        case 0x4a597cu: goto label_4a597c;
        case 0x4a5980u: goto label_4a5980;
        case 0x4a5984u: goto label_4a5984;
        default: break;
    }

    ctx->pc = 0x4a5888u;

label_4a5888:
    // 0x4a5888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a5888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a588c:
    // 0x4a588c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a5890:
    // 0x4a5890: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a5890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4a5894:
    // 0x4a5894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a5894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a5898:
    // 0x4a5898: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a5898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a589c:
    // 0x4a589c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a589cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a58a0:
    // 0x4a58a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a58a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a58a4:
    // 0x4a58a4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_4a58a8:
    if (ctx->pc == 0x4A58A8u) {
        ctx->pc = 0x4A58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58A4u;
        // 0x4a58a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A58ACu;
        goto label_4a58ac;
    }
    ctx->pc = 0x4A58A4u;
    {
        const bool branch_taken_0x4a58a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58A4u;
        // 0x4a58a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a58a4) {
            ctx->pc = 0x4A58C4u;
            goto label_4a58c4;
        }
    }
    ctx->pc = 0x4A58ACu;
label_4a58ac:
    // 0x4a58ac: 0x8f8487d0  lw          $a0, -0x7830($gp)
    ctx->pc = 0x4a58acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_4a58b0:
    // 0x4a58b0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4a58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_4a58b4:
    // 0x4a58b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4a58b8:
    if (ctx->pc == 0x4A58B8u) {
        ctx->pc = 0x4A58B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58B4u;
        // 0x4a58b8: 0x8f8387d0  lw          $v1, -0x7830($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A58BCu;
        goto label_4a58bc;
    }
    ctx->pc = 0x4A58B4u;
    {
        const bool branch_taken_0x4a58b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A58B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58B4u;
        // 0x4a58b8: 0x8f8387d0  lw          $v1, -0x7830($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a58b4) {
            ctx->pc = 0x4A58C8u;
            goto label_4a58c8;
        }
    }
    ctx->pc = 0x4A58BCu;
label_4a58bc:
    // 0x4a58bc: 0xc12a3ca  jal         func_4A8F28
label_4a58c0:
    if (ctx->pc == 0x4A58C0u) {
        ctx->pc = 0x4A58C4u;
        goto label_4a58c4;
    }
    ctx->pc = 0x4A58BCu;
    SET_GPR_U32(ctx, 31, 0x4A58C4u);
    ctx->pc = 0x4A8F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8F28u, 0x4A58BCu, 0x4A58C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A58C4u;
label_4a58c4:
    // 0x4a58c4: 0x8f8387d0  lw          $v1, -0x7830($gp)
    ctx->pc = 0x4a58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_4a58c8:
    // 0x4a58c8: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x4a58c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
label_4a58cc:
    // 0x4a58cc: 0x26510590  addiu       $s1, $s2, 0x590
    ctx->pc = 0x4a58ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
label_4a58d0:
    // 0x4a58d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a58d4:
    // 0x4a58d4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4a58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4a58d8:
    // 0x4a58d8: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x4a58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
label_4a58dc:
    // 0x4a58dc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x4a58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_4a58e0:
    // 0x4a58e0: 0xae500590  sw          $s0, 0x590($s2)
    ctx->pc = 0x4a58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1424), GPR_U32(ctx, 16));
label_4a58e4:
    // 0x4a58e4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4a58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_4a58e8:
    // 0x4a58e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a58e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a58ec:
    // 0x4a58ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a58f0:
    // 0x4a58f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a58f4:
    // 0x4a58f4: 0x40f809  jalr        $v0
label_4a58f8:
    if (ctx->pc == 0x4A58F8u) {
        ctx->pc = 0x4A58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58F4u;
        // 0x4a58f8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A58FCu;
        goto label_4a58fc;
    }
    ctx->pc = 0x4A58F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A58FCu);
        ctx->pc = 0x4A58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58F4u;
        // 0x4a58f8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A58F4u, 0x4A58FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A58FCu;
label_4a58fc:
    // 0x4a58fc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_4a5900:
    if (ctx->pc == 0x4A5900u) {
        ctx->pc = 0x4A5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58FCu;
        // 0x4a5900: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5904u;
        goto label_4a5904;
    }
    ctx->pc = 0x4A58FCu;
    {
        const bool branch_taken_0x4a58fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a58fc) {
            ctx->pc = 0x4A5900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A58FCu;
            // 0x4a5900: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5908u;
            goto label_4a5908;
        }
    }
    ctx->pc = 0x4A5904u;
label_4a5904:
    // 0x4a5904: 0x0  nop
    ctx->pc = 0x4a5904u;
    // NOP
label_4a5908:
    // 0x4a5908: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4a5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a590c:
    // 0x4a590c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a590cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4a5910:
    // 0x4a5910: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4a5914:
    if (ctx->pc == 0x4A5914u) {
        ctx->pc = 0x4A5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5910u;
        // 0x4a5914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5918u;
        goto label_4a5918;
    }
    ctx->pc = 0x4A5910u;
    {
        const bool branch_taken_0x4a5910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5910u;
        // 0x4a5914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5910) {
            ctx->pc = 0x4A5924u;
            goto label_4a5924;
        }
    }
    ctx->pc = 0x4A5918u;
label_4a5918:
    // 0x4a5918: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4a5918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4a591c:
    // 0x4a591c: 0xc12a838  jal         func_4AA0E0
label_4a5920:
    if (ctx->pc == 0x4A5920u) {
        ctx->pc = 0x4A5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A591Cu;
        // 0x4a5920: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5924u;
        goto label_4a5924;
    }
    ctx->pc = 0x4A591Cu;
    SET_GPR_U32(ctx, 31, 0x4A5924u);
    ctx->pc = 0x4A5920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A591Cu;
    // 0x4a5920: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA0E0u, 0x4A591Cu, 0x4A5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5924u;
label_4a5924:
    // 0x4a5924: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4a5924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4a5928:
    // 0x4a5928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a5928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a592c:
    // 0x4a592c: 0xae400590  sw          $zero, 0x590($s2)
    ctx->pc = 0x4a592cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1424), GPR_U32(ctx, 0));
label_4a5930:
    // 0x4a5930: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x4a5930u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_4a5934:
    // 0x4a5934: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x4a5934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_4a5938:
    // 0x4a5938: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x4a5938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_4a593c:
    // 0x4a593c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a593cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a5940:
    // 0x4a5940: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a5940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a5944:
    // 0x4a5944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a5944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a5948:
    // 0x4a5948: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a5948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a594c:
    // 0x4a594c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a594cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a5950:
    // 0x4a5950: 0x3e00008  jr          $ra
label_4a5954:
    if (ctx->pc == 0x4A5954u) {
        ctx->pc = 0x4A5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5950u;
        // 0x4a5954: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5958u;
        goto label_4a5958;
    }
    ctx->pc = 0x4A5950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5950u;
        // 0x4a5954: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5958u;
label_4a5958:
    // 0x4a5958: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x4a5958u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
label_4a595c:
    // 0x4a595c: 0x0  nop
    ctx->pc = 0x4a595cu;
    // NOP
label_4a5960:
    // 0x4a5960: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4a5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a5964:
    // 0x4a5964: 0x0  nop
    ctx->pc = 0x4a5964u;
    // NOP
label_4a5968:
    // 0x4a5968: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4a5968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a596c:
    // 0x4a596c: 0x0  nop
    ctx->pc = 0x4a596cu;
    // NOP
label_4a5970:
    // 0x4a5970: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4a5970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4a5974:
    // 0x4a5974: 0x0  nop
    ctx->pc = 0x4a5974u;
    // NOP
label_4a5978:
    // 0x4a5978: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4a5978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4a597c:
    // 0x4a597c: 0x0  nop
    ctx->pc = 0x4a597cu;
    // NOP
label_4a5980:
    // 0x4a5980: 0x0  nop
    ctx->pc = 0x4a5980u;
    // NOP
label_4a5984:
    // 0x4a5984: 0x0  nop
    ctx->pc = 0x4a5984u;
    // NOP
    ctx->pc = 0x4a5988u;
}
