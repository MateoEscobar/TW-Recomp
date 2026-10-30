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

// Function: sub_00294088
// Address: 0x294088 - 0x2941c0
void sub_00294088_0x294088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294088_0x294088");
#endif

    switch (ctx->pc) {
        case 0x294088u: goto label_294088;
        case 0x29408cu: goto label_29408c;
        case 0x294090u: goto label_294090;
        case 0x294094u: goto label_294094;
        case 0x294098u: goto label_294098;
        case 0x29409cu: goto label_29409c;
        case 0x2940a0u: goto label_2940a0;
        case 0x2940a4u: goto label_2940a4;
        case 0x2940a8u: goto label_2940a8;
        case 0x2940acu: goto label_2940ac;
        case 0x2940b0u: goto label_2940b0;
        case 0x2940b4u: goto label_2940b4;
        case 0x2940b8u: goto label_2940b8;
        case 0x2940bcu: goto label_2940bc;
        case 0x2940c0u: goto label_2940c0;
        case 0x2940c4u: goto label_2940c4;
        case 0x2940c8u: goto label_2940c8;
        case 0x2940ccu: goto label_2940cc;
        case 0x2940d0u: goto label_2940d0;
        case 0x2940d4u: goto label_2940d4;
        case 0x2940d8u: goto label_2940d8;
        case 0x2940dcu: goto label_2940dc;
        case 0x2940e0u: goto label_2940e0;
        case 0x2940e4u: goto label_2940e4;
        case 0x2940e8u: goto label_2940e8;
        case 0x2940ecu: goto label_2940ec;
        case 0x2940f0u: goto label_2940f0;
        case 0x2940f4u: goto label_2940f4;
        case 0x2940f8u: goto label_2940f8;
        case 0x2940fcu: goto label_2940fc;
        case 0x294100u: goto label_294100;
        case 0x294104u: goto label_294104;
        case 0x294108u: goto label_294108;
        case 0x29410cu: goto label_29410c;
        case 0x294110u: goto label_294110;
        case 0x294114u: goto label_294114;
        case 0x294118u: goto label_294118;
        case 0x29411cu: goto label_29411c;
        case 0x294120u: goto label_294120;
        case 0x294124u: goto label_294124;
        case 0x294128u: goto label_294128;
        case 0x29412cu: goto label_29412c;
        case 0x294130u: goto label_294130;
        case 0x294134u: goto label_294134;
        case 0x294138u: goto label_294138;
        case 0x29413cu: goto label_29413c;
        case 0x294140u: goto label_294140;
        case 0x294144u: goto label_294144;
        case 0x294148u: goto label_294148;
        case 0x29414cu: goto label_29414c;
        case 0x294150u: goto label_294150;
        case 0x294154u: goto label_294154;
        case 0x294158u: goto label_294158;
        case 0x29415cu: goto label_29415c;
        case 0x294160u: goto label_294160;
        case 0x294164u: goto label_294164;
        case 0x294168u: goto label_294168;
        case 0x29416cu: goto label_29416c;
        case 0x294170u: goto label_294170;
        case 0x294174u: goto label_294174;
        case 0x294178u: goto label_294178;
        case 0x29417cu: goto label_29417c;
        case 0x294180u: goto label_294180;
        case 0x294184u: goto label_294184;
        case 0x294188u: goto label_294188;
        case 0x29418cu: goto label_29418c;
        case 0x294190u: goto label_294190;
        case 0x294194u: goto label_294194;
        case 0x294198u: goto label_294198;
        case 0x29419cu: goto label_29419c;
        case 0x2941a0u: goto label_2941a0;
        case 0x2941a4u: goto label_2941a4;
        case 0x2941a8u: goto label_2941a8;
        case 0x2941acu: goto label_2941ac;
        case 0x2941b0u: goto label_2941b0;
        case 0x2941b4u: goto label_2941b4;
        case 0x2941b8u: goto label_2941b8;
        case 0x2941bcu: goto label_2941bc;
        default: break;
    }

    ctx->pc = 0x294088u;

label_294088:
    // 0x294088: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x294088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_29408c:
    // 0x29408c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x29408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_294090:
    // 0x294090: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x294090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_294094:
    // 0x294094: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x294094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294098:
    // 0x294098: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x294098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_29409c:
    // 0x29409c: 0x3c16006d  lui         $s6, 0x6D
    ctx->pc = 0x29409cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)109 << 16));
label_2940a0:
    // 0x2940a0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2940a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2940a4:
    // 0x2940a4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2940a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2940a8:
    // 0x2940a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2940a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2940ac:
    // 0x2940ac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2940acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2940b0:
    // 0x2940b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2940b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2940b4:
    // 0x2940b4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2940b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2940b8:
    // 0x2940b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2940b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2940bc:
    // 0x2940bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2940bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2940c0:
    // 0x2940c0: 0x40f809  jalr        $v0
label_2940c4:
    if (ctx->pc == 0x2940C4u) {
        ctx->pc = 0x2940C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940C0u;
        // 0x2940c4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2940C8u;
        goto label_2940c8;
    }
    ctx->pc = 0x2940C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2940C8u);
        ctx->pc = 0x2940C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940C0u;
        // 0x2940c4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2940C0u, 0x2940C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2940C8u;
label_2940c8:
    // 0x2940c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2940c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2940cc:
    // 0x2940cc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2940ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_2940d0:
    // 0x2940d0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2940d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2940d4:
    // 0x2940d4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2940d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2940d8:
    // 0x2940d8: 0x2442e978  addiu       $v0, $v0, -0x1688
    ctx->pc = 0x2940d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961528));
label_2940dc:
    // 0x2940dc: 0x2469eab8  addiu       $t1, $v1, -0x1548
    ctx->pc = 0x2940dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961848));
label_2940e0:
    // 0x2940e0: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x2940e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2940e4:
    // 0x2940e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2940e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2940e8:
    // 0x2940e8: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x2940e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_2940ec:
    // 0x2940ec: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x2940ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_2940f0:
    // 0x2940f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2940f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2940f4:
    // 0x2940f4: 0x6a2004  sllv        $a0, $t2, $v1
    ctx->pc = 0x2940f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
label_2940f8:
    // 0x2940f8: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x2940f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2940fc:
    // 0x2940fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2940fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_294100:
    // 0x294100: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x294100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_294104:
    // 0x294104: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_294108:
    if (ctx->pc == 0x294108u) {
        ctx->pc = 0x294108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294104u;
        // 0x294108: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29410Cu;
        goto label_29410c;
    }
    ctx->pc = 0x294104u;
    {
        const bool branch_taken_0x294104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294104u;
        // 0x294108: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294104) {
            ctx->pc = 0x294124u;
            goto label_294124;
        }
    }
    ctx->pc = 0x29410Cu;
label_29410c:
    // 0x29410c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x29410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_294110:
    // 0x294110: 0x14480004  bne         $v0, $t0, . + 4 + (0x4 << 2)
label_294114:
    if (ctx->pc == 0x294114u) {
        ctx->pc = 0x294118u;
        goto label_294118;
    }
    ctx->pc = 0x294110u;
    {
        const bool branch_taken_0x294110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x294110) {
            ctx->pc = 0x294124u;
            goto label_294124;
        }
    }
    ctx->pc = 0x294118u;
label_294118:
    // 0x294118: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x294118u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_29411c:
    // 0x29411c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_294120:
    // 0x294120: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x294120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_294124:
    // 0x294124: 0x2cc20028  sltiu       $v0, $a2, 0x28
    ctx->pc = 0x294124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_294128:
    // 0x294128: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_29412c:
    if (ctx->pc == 0x29412Cu) {
        ctx->pc = 0x29412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294128u;
        // 0x29412c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294130u;
        goto label_294130;
    }
    ctx->pc = 0x294128u;
    {
        const bool branch_taken_0x294128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294128u;
        // 0x29412c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294128) {
            ctx->pc = 0x2940E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2940e8;
        }
    }
    ctx->pc = 0x294130u;
label_294130:
    // 0x294130: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x294130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_294134:
    // 0x294134: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x294134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294138:
    // 0x294138: 0x2452de30  addiu       $s2, $v0, -0x21D0
    ctx->pc = 0x294138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
label_29413c:
    // 0x29413c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x29413cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294140:
    // 0x294140: 0x8ec3e970  lw          $v1, -0x1690($s6)
    ctx->pc = 0x294140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961520)));
label_294144:
    // 0x294144: 0x3262001f  andi        $v0, $s3, 0x1F
    ctx->pc = 0x294144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
label_294148:
    // 0x294148: 0x548804  sllv        $s1, $s4, $v0
    ctx->pc = 0x294148u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
label_29414c:
    // 0x29414c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x29414cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_294150:
    // 0x294150: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x294150u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_294154:
    // 0x294154: 0x5614000c  bnel        $s0, $s4, . + 4 + (0xC << 2)
label_294158:
    if (ctx->pc == 0x294158u) {
        ctx->pc = 0x294158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294154u;
        // 0x294158: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29415Cu;
        goto label_29415c;
    }
    ctx->pc = 0x294154u;
    {
        const bool branch_taken_0x294154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x294154) {
            ctx->pc = 0x294158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294154u;
            // 0x294158: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294188u;
            goto label_294188;
        }
    }
    ctx->pc = 0x29415Cu;
label_29415c:
    // 0x29415c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_294160:
    // 0x294160: 0xc0a6760  jal         func_299D80
label_294164:
    if (ctx->pc == 0x294164u) {
        ctx->pc = 0x294164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294160u;
        // 0x294164: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294168u;
        goto label_294168;
    }
    ctx->pc = 0x294160u;
    SET_GPR_U32(ctx, 31, 0x294168u);
    ctx->pc = 0x294164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294160u;
    // 0x294164: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299D80u, 0x294160u, 0x294168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294168u;
label_294168:
    // 0x294168: 0xc0a6730  jal         func_299CC0
label_29416c:
    if (ctx->pc == 0x29416Cu) {
        ctx->pc = 0x29416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294168u;
        // 0x29416c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294170u;
        goto label_294170;
    }
    ctx->pc = 0x294168u;
    SET_GPR_U32(ctx, 31, 0x294170u);
    ctx->pc = 0x29416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294168u;
    // 0x29416c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299CC0u, 0x294168u, 0x294170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294170u;
label_294170:
    // 0x294170: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_294174:
    if (ctx->pc == 0x294174u) {
        ctx->pc = 0x294174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294170u;
        // 0x294174: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294178u;
        goto label_294178;
    }
    ctx->pc = 0x294170u;
    {
        const bool branch_taken_0x294170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x294174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294170u;
        // 0x294174: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294170) {
            ctx->pc = 0x294188u;
            goto label_294188;
        }
    }
    ctx->pc = 0x294178u;
label_294178:
    // 0x294178: 0x8ec2e970  lw          $v0, -0x1690($s6)
    ctx->pc = 0x294178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961520)));
label_29417c:
    // 0x29417c: 0x111827  nor         $v1, $zero, $s1
    ctx->pc = 0x29417cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
label_294180:
    // 0x294180: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_294184:
    // 0x294184: 0xaec2e970  sw          $v0, -0x1690($s6)
    ctx->pc = 0x294184u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294961520), GPR_U32(ctx, 2));
label_294188:
    // 0x294188: 0x2e620014  sltiu       $v0, $s3, 0x14
    ctx->pc = 0x294188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_29418c:
    // 0x29418c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_294190:
    if (ctx->pc == 0x294190u) {
        ctx->pc = 0x294190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29418Cu;
        // 0x294190: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294194u;
        goto label_294194;
    }
    ctx->pc = 0x29418Cu;
    {
        const bool branch_taken_0x29418c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29418Cu;
        // 0x294190: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29418c) {
            ctx->pc = 0x294140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294140;
        }
    }
    ctx->pc = 0x294194u;
label_294194:
    // 0x294194: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x294194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_294198:
    // 0x294198: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x294198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29419c:
    // 0x29419c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x29419cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2941a0:
    // 0x2941a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2941a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2941a4:
    // 0x2941a4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2941a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2941a8:
    // 0x2941a8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2941a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2941ac:
    // 0x2941ac: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2941acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2941b0:
    // 0x2941b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2941b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2941b4:
    // 0x2941b4: 0x3e00008  jr          $ra
label_2941b8:
    if (ctx->pc == 0x2941B8u) {
        ctx->pc = 0x2941B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941B4u;
        // 0x2941b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2941BCu;
        goto label_2941bc;
    }
    ctx->pc = 0x2941B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2941B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941B4u;
        // 0x2941b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2941B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2941BCu;
label_2941bc:
    // 0x2941bc: 0x0  nop
    ctx->pc = 0x2941bcu;
    // NOP
    ctx->pc = 0x2941c0u;
}
