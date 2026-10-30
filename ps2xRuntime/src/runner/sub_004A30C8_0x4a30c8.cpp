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

// Function: sub_004A30C8
// Address: 0x4a30c8 - 0x4a3600
void sub_004A30C8_0x4a30c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A30C8_0x4a30c8");
#endif

    switch (ctx->pc) {
        case 0x4a3148u: goto label_4a3148;
        case 0x4a3158u: goto label_4a3158;
        case 0x4a3174u: goto label_4a3174;
        case 0x4a3338u: goto label_4a3338;
        case 0x4a3358u: goto label_4a3358;
        case 0x4a33e8u: goto label_4a33e8;
        case 0x4a3508u: goto label_4a3508;
        case 0x4a3524u: goto label_4a3524;
        case 0x4a353cu: goto label_4a353c;
        default: break;
    }

    ctx->pc = 0x4a30c8u;

    // 0x4a30c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a30c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a30cc: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x4a30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a30d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a30d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a30d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a30d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a30d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a30d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a30dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a30dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a30e0: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x4a30e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4a30e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a30e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a30e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a30e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a30ec: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x4a30ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x4a30f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a30f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a30f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A30F4u;
    {
        const bool branch_taken_0x4a30f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A30F4u;
        // 0x4a30f8: 0xa0682d  daddu       $t5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a30f4) {
            ctx->pc = 0x4A3104u;
            goto label_4a3104;
        }
    }
    ctx->pc = 0x4A30FCu;
    // 0x4a30fc: 0x55a0013a  bnel        $t5, $zero, . + 4 + (0x13A << 2)
    ctx->pc = 0x4A30FCu;
    {
        const bool branch_taken_0x4a30fc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a30fc) {
            ctx->pc = 0x4A3100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A30FCu;
            // 0x4a3100: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A35E8u;
            goto label_4a35e8;
        }
    }
    ctx->pc = 0x4A3104u;
label_4a3104:
    // 0x4a3104: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x4a3104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4a3108: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4A3108u;
    {
        const bool branch_taken_0x4a3108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3108u;
        // 0x4a310c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3108) {
            ctx->pc = 0x4A317Cu;
            goto label_4a317c;
        }
    }
    ctx->pc = 0x4A3110u;
    // 0x4a3110: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x4a3110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x4a3114: 0x2451f940  addiu       $s1, $v0, -0x6C0
    ctx->pc = 0x4a3114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
    // 0x4a3118: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4a3118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x4a311c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4a311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4a3120: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4a3120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a3124: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x4a3124u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a3128: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a3128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a312c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a312cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4a3130: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A3130u;
    {
        const bool branch_taken_0x4a3130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a3130) {
            ctx->pc = 0x4A3134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3130u;
            // 0x4a3134: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3180u;
            goto label_4a3180;
        }
    }
    ctx->pc = 0x4A3138u;
    // 0x4a3138: 0x55a0012b  bnel        $t5, $zero, . + 4 + (0x12B << 2)
    ctx->pc = 0x4A3138u;
    {
        const bool branch_taken_0x4a3138 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3138) {
            ctx->pc = 0x4A313Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3138u;
            // 0x4a313c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A35E8u;
            goto label_4a35e8;
        }
    }
    ctx->pc = 0x4A3140u;
    // 0x4a3140: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4A3140u;
    SET_GPR_U32(ctx, 31, 0x4A3148u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4A3140u, 0x4A3148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3148u;
label_4a3148:
    // 0x4a3148: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a314c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a3150: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4A3150u;
    SET_GPR_U32(ctx, 31, 0x4A3158u);
    ctx->pc = 0x4A3154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3150u;
    // 0x4a3154: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4A3150u, 0x4A3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3158u;
label_4a3158:
    // 0x4a3158: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4a3158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a315c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a3160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a3160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a3164: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A3164u;
    {
        const bool branch_taken_0x4a3164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3164u;
        // 0x4a3168: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3164) {
            ctx->pc = 0x4A3174u;
            goto label_4a3174;
        }
    }
    ctx->pc = 0x4A316Cu;
    // 0x4a316c: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x4A316Cu;
    SET_GPR_U32(ctx, 31, 0x4A3174u);
    ctx->pc = 0x4A3170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A316Cu;
    // 0x4a3170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x4A316Cu, 0x4A3174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3174u;
label_4a3174:
    // 0x4a3174: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x4A3174u;
    {
        const bool branch_taken_0x4a3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3174u;
        // 0x4a3178: 0xae330024  sw          $s3, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3174) {
            ctx->pc = 0x4A35E4u;
            goto label_4a35e4;
        }
    }
    ctx->pc = 0x4A317Cu;
label_4a317c:
    // 0x4a317c: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x4a317cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_4a3180:
    // 0x4a3180: 0x54400119  bnel        $v0, $zero, . + 4 + (0x119 << 2)
    ctx->pc = 0x4A3180u;
    {
        const bool branch_taken_0x4a3180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3180) {
            ctx->pc = 0x4A3184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3180u;
            // 0x4a3184: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A35E8u;
            goto label_4a35e8;
        }
    }
    ctx->pc = 0x4A3188u;
    // 0x4a3188: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a3188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4a318c: 0x2444f940  addiu       $a0, $v0, -0x6C0
    ctx->pc = 0x4a318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
    // 0x4a3190: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a3190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3194: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x4a3194u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x52F950u));
    // 0x4a3198: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a3198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52F94Cu));
    // 0x4a319c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A319Cu;
    {
        const bool branch_taken_0x4a319c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A319Cu;
        // 0x4a31a0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a319c) {
            ctx->pc = 0x4A31B8u;
            goto label_4a31b8;
        }
    }
    ctx->pc = 0x4A31A4u;
    // 0x4a31a4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a31a8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x4a31a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a31ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a31b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A31B0u;
    {
        const bool branch_taken_0x4a31b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A31B0u;
        // 0x4a31b4: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a31b0) {
            ctx->pc = 0x4A31C4u;
            goto label_4a31c4;
        }
    }
    ctx->pc = 0x4A31B8u;
label_4a31b8:
    // 0x4a31b8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4a31b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4a31bc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4a31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4a31c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x4a31c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a31c4:
    // 0x4a31c4: 0x2643f940  addiu       $v1, $s2, -0x6C0
    ctx->pc = 0x4a31c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
    // 0x4a31c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a31cc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4a31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a31d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a31d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a31d4: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A31D4u;
    {
        const bool branch_taken_0x4a31d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A31D4u;
        // 0x4a31d8: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a31d4) {
            ctx->pc = 0x4A3208u;
            goto label_4a3208;
        }
    }
    ctx->pc = 0x4A31DCu;
    // 0x4a31dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4a31dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a31e0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x4a31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4a31e4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x4a31e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a31e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a31ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4a31ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a31f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4a31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4a31f4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x4a31f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a31f8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x4a31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4a31fc: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x4a31fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4a3200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A3200u;
    {
        const bool branch_taken_0x4a3200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3200u;
        // 0x4a3204: 0x2643f940  addiu       $v1, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3200) {
            ctx->pc = 0x4A321Cu;
            goto label_4a321c;
        }
    }
    ctx->pc = 0x4A3208u;
label_4a3208:
    // 0x4a3208: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x4a3208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4a320c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x4a320cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4a3210: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x4a3210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4a3214: 0x544000f4  bnel        $v0, $zero, . + 4 + (0xF4 << 2)
    ctx->pc = 0x4A3214u;
    {
        const bool branch_taken_0x4a3214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3214) {
            ctx->pc = 0x4A3218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3214u;
            // 0x4a3218: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A35E8u;
            goto label_4a35e8;
        }
    }
    ctx->pc = 0x4A321Cu;
label_4a321c:
    // 0x4a321c: 0x11a0006a  beqz        $t5, . + 4 + (0x6A << 2)
    ctx->pc = 0x4A321Cu;
    {
        const bool branch_taken_0x4a321c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A321Cu;
        // 0x4a3220: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a321c) {
            ctx->pc = 0x4A33C8u;
            goto label_4a33c8;
        }
    }
    ctx->pc = 0x4A3224u;
    // 0x4a3224: 0x2646f940  addiu       $a2, $s2, -0x6C0
    ctx->pc = 0x4a3224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
    // 0x4a3228: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a3228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a322c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4a322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a3230: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a3230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a3234: 0x50450065  beql        $v0, $a1, . + 4 + (0x65 << 2)
    ctx->pc = 0x4A3234u;
    {
        const bool branch_taken_0x4a3234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x4a3234) {
            ctx->pc = 0x4A3238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3234u;
            // 0x4a3238: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A33CCu;
            goto label_4a33cc;
        }
    }
    ctx->pc = 0x4A323Cu;
    // 0x4a323c: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x4a323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x4a3240: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A3240u;
    {
        const bool branch_taken_0x4a3240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4A3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3240u;
        // 0x4a3244: 0x8cc70008  lw          $a3, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3240) {
            ctx->pc = 0x4A3268u;
            goto label_4a3268;
        }
    }
    ctx->pc = 0x4A3248u;
    // 0x4a3248: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4a3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a324c: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x4a324cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4a3250: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4a3250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3254: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a3258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a3258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a325c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A325Cu;
    {
        const bool branch_taken_0x4a325c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a325c) {
            ctx->pc = 0x4A3260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A325Cu;
            // 0x4a3260: 0xacc5002c  sw          $a1, 0x2C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3268u;
            goto label_4a3268;
        }
    }
    ctx->pc = 0x4A3264u;
    // 0x4a3264: 0x2646f940  addiu       $a2, $s2, -0x6C0
    ctx->pc = 0x4a3264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
label_4a3268:
    // 0x4a3268: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a3268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a326c: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x4a326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x4a3270: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a3270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a3274: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A3274u;
    {
        const bool branch_taken_0x4a3274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4A3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3274u;
        // 0x4a3278: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3274) {
            ctx->pc = 0x4A3294u;
            goto label_4a3294;
        }
    }
    ctx->pc = 0x4A327Cu;
    // 0x4a327c: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x4a327cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4a3280: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4a3280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3284: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a3284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a3288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a3288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a328c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A328Cu;
    {
        const bool branch_taken_0x4a328c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a328c) {
            ctx->pc = 0x4A3290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A328Cu;
            // 0x4a3290: 0xacc50030  sw          $a1, 0x30($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3294u;
            goto label_4a3294;
        }
    }
    ctx->pc = 0x4A3294u;
label_4a3294:
    // 0x4a3294: 0x2649f940  addiu       $t1, $s2, -0x6C0
    ctx->pc = 0x4a3294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
    // 0x4a3298: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a3298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a329c: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x4a329cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4a32a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a32a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a32a4: 0x10820048  beq         $a0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x4A32A4u;
    {
        const bool branch_taken_0x4a32a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A32A4u;
        // 0x4a32a8: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a32a4) {
            ctx->pc = 0x4A33C8u;
            goto label_4a33c8;
        }
    }
    ctx->pc = 0x4A32ACu;
    // 0x4a32ac: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x4a32acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4a32b0: 0x1031026  xor         $v0, $t0, $v1
    ctx->pc = 0x4a32b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x4a32b4: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x4a32b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x4a32b8: 0x5507000a  bnel        $t0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x4A32B8u;
    {
        const bool branch_taken_0x4a32b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x4a32b8) {
            ctx->pc = 0x4A32BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A32B8u;
            // 0x4a32bc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A32E4u;
            goto label_4a32e4;
        }
    }
    ctx->pc = 0x4A32C0u;
    // 0x4a32c0: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x4a32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4a32c4: 0x510200c8  beql        $t0, $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x4A32C4u;
    {
        const bool branch_taken_0x4a32c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a32c4) {
            ctx->pc = 0x4A32C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A32C4u;
            // 0x4a32c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A35E8u;
            goto label_4a35e8;
        }
    }
    ctx->pc = 0x4A32CCu;
    // 0x4a32cc: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x4a32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x4a32d0: 0x110200c4  beq         $t0, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x4A32D0u;
    {
        const bool branch_taken_0x4a32d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A32D0u;
        // 0x4a32d4: 0x25070001  addiu       $a3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a32d0) {
            ctx->pc = 0x4A35E4u;
            goto label_4a35e4;
        }
    }
    ctx->pc = 0x4A32D8u;
    // 0x4a32d8: 0xe31026  xor         $v0, $a3, $v1
    ctx->pc = 0x4a32d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x4a32dc: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x4a32dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x4a32e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a32e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a32e4:
    // 0x4a32e4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x4a32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4a32e8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x4a32e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a32ec: 0xe55018  mult        $t2, $a3, $a1
    ctx->pc = 0x4a32ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4a32f0: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x4a32f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4a32f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a32f8: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x4a32f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x4a32fc: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x4a32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x4a3300: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3304: 0x240782d  daddu       $t7, $s2, $zero
    ctx->pc = 0x4a3304u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3308: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x4a3308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x4a330c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4a330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4a3310: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x4a3310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a3314: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x4a3314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3318: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a3318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a331c: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x4a331cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4a3320: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x4a3320u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a3324: 0xd1602b  sltu        $t4, $a2, $s1
    ctx->pc = 0x4a3324u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4a3328: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4a3328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a332c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4A332Cu;
    {
        const bool branch_taken_0x4a332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A332Cu;
        // 0x4a3330: 0x222582b  sltu        $t3, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a332c) {
            ctx->pc = 0x4A3374u;
            goto label_4a3374;
        }
    }
    ctx->pc = 0x4A3334u;
    // 0x4a3334: 0x0  nop
    ctx->pc = 0x4a3334u;
    // NOP
label_4a3338:
    // 0x4a3338: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A3338u;
    {
        const bool branch_taken_0x4a3338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3338u;
        // 0x4a333c: 0x25e3f940  addiu       $v1, $t7, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3338) {
            ctx->pc = 0x4A3358u;
            goto label_4a3358;
        }
    }
    ctx->pc = 0x4A3340u;
    // 0x4a3340: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4a3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x4a3344: 0x50e200a8  beql        $a3, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4A3344u;
    {
        const bool branch_taken_0x4a3344 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3344) {
            ctx->pc = 0x4A3348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3344u;
            // 0x4a3348: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A35E8u;
            goto label_4a35e8;
        }
    }
    ctx->pc = 0x4A334Cu;
    // 0x4a334c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x4a334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4a3350: 0x50e200a5  beql        $a3, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x4A3350u;
    {
        const bool branch_taken_0x4a3350 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3350) {
            ctx->pc = 0x4A3354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3350u;
            // 0x4a3354: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A35E8u;
            goto label_4a35e8;
        }
    }
    ctx->pc = 0x4A3358u;
label_4a3358:
    // 0x4a3358: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x4a3358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4a335c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a335cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a3360: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x4a3360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x4a3364: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x4a3364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x4a3368: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x4a3368u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x4a336c: 0xee1018  mult        $v0, $a3, $t6
    ctx->pc = 0x4a336cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3370: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x4a3370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4a3374:
    // 0x4a3374: 0x51070015  beql        $t0, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A3374u;
    {
        const bool branch_taken_0x4a3374 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a3374) {
            ctx->pc = 0x4A3378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3374u;
            // 0x4a3378: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A33CCu;
            goto label_4a33cc;
        }
    }
    ctx->pc = 0x4A337Cu;
    // 0x4a337c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a3380: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A3380u;
    {
        const bool branch_taken_0x4a3380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3380u;
        // 0x4a3384: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3380) {
            ctx->pc = 0x4A3358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3358;
        }
    }
    ctx->pc = 0x4A3388u;
    // 0x4a3388: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x4a3388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4a338c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x4a338cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4a3390: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A3390u;
    {
        const bool branch_taken_0x4a3390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3390u;
        // 0x4a3394: 0x89102b  sltu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3390) {
            ctx->pc = 0x4A33B0u;
            goto label_4a33b0;
        }
    }
    ctx->pc = 0x4A3398u;
    // 0x4a3398: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A3398u;
    {
        const bool branch_taken_0x4a3398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3398u;
        // 0x4a339c: 0x91102b  sltu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3398) {
            ctx->pc = 0x4A33C8u;
            goto label_4a33c8;
        }
    }
    ctx->pc = 0x4A33A0u;
    // 0x4a33a0: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4A33A0u;
    {
        const bool branch_taken_0x4a33a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a33a0) {
            ctx->pc = 0x4A3338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3338;
        }
    }
    ctx->pc = 0x4A33A8u;
    // 0x4a33a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A33A8u;
    {
        const bool branch_taken_0x4a33a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A33A8u;
        // 0x4a33ac: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a33a8) {
            ctx->pc = 0x4A33CCu;
            goto label_4a33cc;
        }
    }
    ctx->pc = 0x4A33B0u;
label_4a33b0:
    // 0x4a33b0: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A33B0u;
    {
        const bool branch_taken_0x4a33b0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a33b0) {
            ctx->pc = 0x4A33C0u;
            goto label_4a33c0;
        }
    }
    ctx->pc = 0x4A33B8u;
    // 0x4a33b8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4A33B8u;
    {
        const bool branch_taken_0x4a33b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a33b8) {
            ctx->pc = 0x4A3338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3338;
        }
    }
    ctx->pc = 0x4A33C0u;
label_4a33c0:
    // 0x4a33c0: 0x1180ffdd  beqz        $t4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4A33C0u;
    {
        const bool branch_taken_0x4a33c0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a33c0) {
            ctx->pc = 0x4A3338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3338;
        }
    }
    ctx->pc = 0x4A33C8u;
label_4a33c8:
    // 0x4a33c8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4a33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a33cc:
    // 0x4a33cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A33CCu;
    {
        const bool branch_taken_0x4a33cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A33CCu;
        // 0x4a33d0: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a33cc) {
            ctx->pc = 0x4A33DCu;
            goto label_4a33dc;
        }
    }
    ctx->pc = 0x4A33D4u;
    // 0x4a33d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4a33d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4a33d8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4a33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4a33dc:
    // 0x4a33dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a33dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33e0: 0xc128a44  jal         func_4A2910
    ctx->pc = 0x4A33E0u;
    SET_GPR_U32(ctx, 31, 0x4A33E8u);
    ctx->pc = 0x4A33E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A33E0u;
    // 0x4a33e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2910u, 0x4A33E0u, 0x4A33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A33E8u;
label_4a33e8:
    // 0x4a33e8: 0x2646f940  addiu       $a2, $s2, -0x6C0
    ctx->pc = 0x4a33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
    // 0x4a33ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a33f0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x4a33f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a33f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a33f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a33f8: 0x10a2006b  beq         $a1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x4A33F8u;
    {
        const bool branch_taken_0x4a33f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A33F8u;
        // 0x4a33fc: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a33f8) {
            ctx->pc = 0x4A35A8u;
            goto label_4a35a8;
        }
    }
    ctx->pc = 0x4A3400u;
    // 0x4a3400: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x4a3400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a3404: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4a3404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4a3408: 0x1021026  xor         $v0, $t0, $v0
    ctx->pc = 0x4a3408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x4a340c: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x4a340cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x4a3410: 0x15030013  bne         $t0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A3410u;
    {
        const bool branch_taken_0x4a3410 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3410u;
        // 0x4a3414: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3410) {
            ctx->pc = 0x4A3460u;
            goto label_4a3460;
        }
    }
    ctx->pc = 0x4A3418u;
    // 0x4a3418: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4a3418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a341c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x4a341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4a3420: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x4a3420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a3424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a3428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a3428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a342c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A342Cu;
    {
        const bool branch_taken_0x4a342c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A342Cu;
        // 0x4a3430: 0x8f828a20  lw          $v0, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a342c) {
            ctx->pc = 0x4A3444u;
            goto label_4a3444;
        }
    }
    ctx->pc = 0x4A3434u;
    // 0x4a3434: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x4a3434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a3438: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4a3438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4a343c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4a343cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4a3440: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x4a3440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_4a3444:
    // 0x4a3444: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4a3444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4a3448: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4a3448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a344c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a3450: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A3450u;
    {
        const bool branch_taken_0x4a3450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3450u;
        // 0x4a3454: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3450) {
            ctx->pc = 0x4A345Cu;
            goto label_4a345c;
        }
    }
    ctx->pc = 0x4A3458u;
    // 0x4a3458: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x4a3458u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_4a345c:
    // 0x4a345c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x4a345cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a3460:
    // 0x4a3460: 0x2644f940  addiu       $a0, $s2, -0x6C0
    ctx->pc = 0x4a3460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
    // 0x4a3464: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x4a3464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a3468: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a3468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a346c: 0x8f8b8a20  lw          $t3, -0x75E0($gp)
    ctx->pc = 0x4a346cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a3470: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a3470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3474: 0x34c6f800  ori         $a2, $a2, 0xF800
    ctx->pc = 0x4a3474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)63488);
    // 0x4a3478: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x4a3478u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a347c: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x4a347cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3480: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x4a3480u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a3484: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a3484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a3488: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x4a3488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x4a348c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4a348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a3490: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a3490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a3494: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x4a3494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x4a3498: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a3498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a349c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a349cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a34a0: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x4a34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x4a34a4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4a34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4a34a8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a34ac: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x4a34acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x4a34b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a34b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a34b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4a34b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a34b8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x4a34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x4a34bc: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x4a34bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4a34c0: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x4a34c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a34c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a34c8: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x4a34c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a34cc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a34ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a34d0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4a34d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a34d4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x4a34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a34d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a34dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4a34dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4a34e0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a34e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a34e8: 0xb1502b  sltu        $t2, $a1, $s1
    ctx->pc = 0x4a34e8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4a34ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a34f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A34F0u;
    {
        const bool branch_taken_0x4a34f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A34F0u;
        // 0x4a34f4: 0x223382b  sltu        $a3, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a34f0) {
            ctx->pc = 0x4A3538u;
            goto label_4a3538;
        }
    }
    ctx->pc = 0x4A34F8u;
    // 0x4a34f8: 0x11090029  beq         $t0, $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x4A34F8u;
    {
        const bool branch_taken_0x4a34f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x4A34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A34F8u;
        // 0x4a34fc: 0x2642f940  addiu       $v0, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a34f8) {
            ctx->pc = 0x4A35A0u;
            goto label_4a35a0;
        }
    }
    ctx->pc = 0x4A3500u;
    // 0x4a3500: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4A3500u;
    {
        const bool branch_taken_0x4a3500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3500u;
        // 0x4a3504: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3500) {
            ctx->pc = 0x4A3580u;
            goto label_4a3580;
        }
    }
    ctx->pc = 0x4A3508u;
label_4a3508:
    // 0x4a3508: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A3508u;
    {
        const bool branch_taken_0x4a3508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3508) {
            ctx->pc = 0x4A3518u;
            goto label_4a3518;
        }
    }
    ctx->pc = 0x4A3510u;
    // 0x4a3510: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A3510u;
    {
        const bool branch_taken_0x4a3510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3510) {
            ctx->pc = 0x4A3514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3510u;
            // 0x4a3514: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3524u;
            goto label_4a3524;
        }
    }
    ctx->pc = 0x4A3518u;
label_4a3518:
    // 0x4a3518: 0x15400021  bnez        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x4A3518u;
    {
        const bool branch_taken_0x4a3518 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3518u;
        // 0x4a351c: 0x2642f940  addiu       $v0, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3518) {
            ctx->pc = 0x4A35A0u;
            goto label_4a35a0;
        }
    }
    ctx->pc = 0x4A3520u;
    // 0x4a3520: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a3520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a3524:
    // 0x4a3524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A3524u;
    {
        const bool branch_taken_0x4a3524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3524u;
        // 0x4a3528: 0x4b2021  addu        $a0, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3524) {
            ctx->pc = 0x4A3538u;
            goto label_4a3538;
        }
    }
    ctx->pc = 0x4A352Cu;
    // 0x4a352c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x4a352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4a3530: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4a3530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4a3534: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x4a3534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_4a3538:
    // 0x4a3538: 0x25a4f940  addiu       $a0, $t5, -0x6C0
    ctx->pc = 0x4a3538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965568));
label_4a353c:
    // 0x4a353c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a3540: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4a3540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a3544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a3544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a3548: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A3548u;
    {
        const bool branch_taken_0x4a3548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3548u;
        // 0x4a354c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3548) {
            ctx->pc = 0x4A3554u;
            goto label_4a3554;
        }
    }
    ctx->pc = 0x4A3550u;
    // 0x4a3550: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4a3550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_4a3554:
    // 0x4a3554: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a3558: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x4a3558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a355c: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x4a355cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3560: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a3560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a3564: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a3564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a3568: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A3568u;
    {
        const bool branch_taken_0x4a3568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3568) {
            ctx->pc = 0x4A356Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3568u;
            // 0x4a356c: 0x25a4f940  addiu       $a0, $t5, -0x6C0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A353Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a353c;
        }
    }
    ctx->pc = 0x4A3570u;
    // 0x4a3570: 0x8dc20008  lw          $v0, 0x8($t6)
    ctx->pc = 0x4a3570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x4a3574: 0x1102000a  beq         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A3574u;
    {
        const bool branch_taken_0x4a3574 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3574u;
        // 0x4a3578: 0x2642f940  addiu       $v0, $s2, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3574) {
            ctx->pc = 0x4A35A0u;
            goto label_4a35a0;
        }
    }
    ctx->pc = 0x4A357Cu;
    // 0x4a357c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4a357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4a3580:
    // 0x4a3580: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x4a3580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a3584: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4A3584u;
    {
        const bool branch_taken_0x4a3584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3584u;
        // 0x4a3588: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3584) {
            ctx->pc = 0x4A3508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3508;
        }
    }
    ctx->pc = 0x4A358Cu;
    // 0x4a358c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A358Cu;
    {
        const bool branch_taken_0x4a358c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A358Cu;
        // 0x4a3590: 0x71102b  sltu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a358c) {
            ctx->pc = 0x4A359Cu;
            goto label_4a359c;
        }
    }
    ctx->pc = 0x4A3594u;
    // 0x4a3594: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4A3594u;
    {
        const bool branch_taken_0x4a3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3594) {
            ctx->pc = 0x4A3598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3594u;
            // 0x4a3598: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3524;
        }
    }
    ctx->pc = 0x4A359Cu;
label_4a359c:
    // 0x4a359c: 0x2642f940  addiu       $v0, $s2, -0x6C0
    ctx->pc = 0x4a359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965568));
label_4a35a0:
    // 0x4a35a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A35A0u;
    {
        const bool branch_taken_0x4a35a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A35A0u;
        // 0x4a35a4: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a35a0) {
            ctx->pc = 0x4A35E4u;
            goto label_4a35e4;
        }
    }
    ctx->pc = 0x4A35A8u;
label_4a35a8:
    // 0x4a35a8: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x4a35a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4a35ac: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a35acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a35b0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x4a35b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x4a35b4: 0x3484f800  ori         $a0, $a0, 0xF800
    ctx->pc = 0x4a35b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63488);
    // 0x4a35b8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x4a35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x4a35bc: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x4a35bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x4a35c0: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x4a35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4a35c4: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x4a35c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x4a35c8: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x4a35c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4a35cc: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x4a35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x4a35d0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4a35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4a35d4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x4a35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4a35d8: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x4a35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x4a35dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a35dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a35e0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4a35e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_4a35e4:
    // 0x4a35e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a35e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a35e8:
    // 0x4a35e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a35e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a35ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a35ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a35f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a35f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a35f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a35f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a35f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A35F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A35F8u;
        // 0x4a35fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A35F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A3600u;
}
