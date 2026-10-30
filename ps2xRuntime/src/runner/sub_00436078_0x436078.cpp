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

// Function: sub_00436078
// Address: 0x436078 - 0x436608
void sub_00436078_0x436078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00436078_0x436078");
#endif

    switch (ctx->pc) {
        case 0x43615cu: goto label_43615c;
        case 0x436198u: goto label_436198;
        case 0x4361b4u: goto label_4361b4;
        case 0x4361ccu: goto label_4361cc;
        case 0x4361dcu: goto label_4361dc;
        case 0x4361e8u: goto label_4361e8;
        case 0x4361f8u: goto label_4361f8;
        case 0x436200u: goto label_436200;
        case 0x436218u: goto label_436218;
        case 0x436228u: goto label_436228;
        case 0x436234u: goto label_436234;
        case 0x436248u: goto label_436248;
        case 0x436268u: goto label_436268;
        case 0x4362b0u: goto label_4362b0;
        case 0x4362b8u: goto label_4362b8;
        case 0x4362c8u: goto label_4362c8;
        case 0x4362dcu: goto label_4362dc;
        case 0x436300u: goto label_436300;
        case 0x43631cu: goto label_43631c;
        case 0x436370u: goto label_436370;
        case 0x43637cu: goto label_43637c;
        case 0x436388u: goto label_436388;
        case 0x436394u: goto label_436394;
        case 0x4363a0u: goto label_4363a0;
        case 0x4363b0u: goto label_4363b0;
        case 0x4363c8u: goto label_4363c8;
        case 0x4363e0u: goto label_4363e0;
        case 0x4363ecu: goto label_4363ec;
        case 0x436414u: goto label_436414;
        case 0x436440u: goto label_436440;
        case 0x436464u: goto label_436464;
        case 0x4364b0u: goto label_4364b0;
        case 0x436500u: goto label_436500;
        case 0x4365c0u: goto label_4365c0;
        default: break;
    }

    ctx->pc = 0x436078u;

    // 0x436078: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x436078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x43607c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x43607cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x436080: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x436080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x436084: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x436084u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x436088: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x436088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x43608c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x43608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x436090: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x436090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436094: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x436094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x436098: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x436098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x43609c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x43609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4360a0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4360a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4360a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4360a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4360a8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4360a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4360ac: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4360acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4360b0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4360b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4360b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4360b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4360b8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4360b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4360bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4360bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4360c0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x4360c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4360c4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4360c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4360c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4360c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4360cc: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x4360ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x4360d0: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x4360d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4360d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4360d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4360d8: 0x30850800  andi        $a1, $a0, 0x800
    ctx->pc = 0x4360d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x4360dc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4360dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4360e0: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x4360e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x4360e4: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x4360e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x4360e8: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4360E8u;
    {
        const bool branch_taken_0x4360e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4360ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4360E8u;
        // 0x4360ec: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4360e8) {
            ctx->pc = 0x436148u;
            goto label_436148;
        }
    }
    ctx->pc = 0x4360F0u;
    // 0x4360f0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4360F0u;
    {
        const bool branch_taken_0x4360f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4360F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4360F0u;
        // 0x4360f4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4360f0) {
            ctx->pc = 0x436138u;
            goto label_436138;
        }
    }
    ctx->pc = 0x4360F8u;
    // 0x4360f8: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x4360F8u;
    {
        const bool branch_taken_0x4360f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4360FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4360F8u;
        // 0x4360fc: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4360f8) {
            ctx->pc = 0x43613Cu;
            goto label_43613c;
        }
    }
    ctx->pc = 0x436100u;
    // 0x436100: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x436100u;
    {
        const bool branch_taken_0x436100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x436104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436100u;
        // 0x436104: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436100) {
            ctx->pc = 0x436128u;
            goto label_436128;
        }
    }
    ctx->pc = 0x436108u;
    // 0x436108: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x436108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x43610c: 0x8c65cc00  lw          $a1, -0x3400($v1)
    ctx->pc = 0x43610cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953984)));
    // 0x436110: 0x2464cc00  addiu       $a0, $v1, -0x3400
    ctx->pc = 0x436110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x436114: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x436114u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x436118: 0x2443f2d8  addiu       $v1, $v0, -0xD28
    ctx->pc = 0x436118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
    // 0x43611c: 0xac45f2d8  sw          $a1, -0xD28($v0)
    ctx->pc = 0x43611cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6FF2D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FF2D8u, _value); } while (0);
    // 0x436120: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x436120u;
    {
        const bool branch_taken_0x436120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436120u;
        // 0x436124: 0xa0660004  sb          $a2, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436120) {
            ctx->pc = 0x4365CCu;
            goto label_4365cc;
        }
    }
    ctx->pc = 0x436128u;
label_436128:
    // 0x436128: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x436128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x43612c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x43612cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x436130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x436130u;
    {
        const bool branch_taken_0x436130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436130u;
        // 0x436134: 0x8c44cc08  lw          $a0, -0x33F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436130) {
            ctx->pc = 0x436140u;
            goto label_436140;
        }
    }
    ctx->pc = 0x436138u;
label_436138:
    // 0x436138: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x436138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_43613c:
    // 0x43613c: 0x8c44cc10  lw          $a0, -0x33F0($v0)
    ctx->pc = 0x43613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954000)));
label_436140:
    // 0x436140: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x436140u;
    {
        const bool branch_taken_0x436140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436140u;
        // 0x436144: 0xac64f2d8  sw          $a0, -0xD28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963928), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436140) {
            ctx->pc = 0x4365CCu;
            goto label_4365cc;
        }
    }
    ctx->pc = 0x436148u;
label_436148:
    // 0x436148: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x436148u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43614c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x43614cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x436150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436154: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x436154u;
    SET_GPR_U32(ctx, 31, 0x43615Cu);
    ctx->pc = 0x436158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436154u;
    // 0x436158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x436154u, 0x43615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43615Cu;
label_43615c:
    // 0x43615c: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x43615Cu;
    {
        const bool branch_taken_0x43615c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x436160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43615Cu;
        // 0x436160: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43615c) {
            ctx->pc = 0x4361A0u;
            goto label_4361a0;
        }
    }
    ctx->pc = 0x436164u;
    // 0x436164: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x436164u;
    {
        const bool branch_taken_0x436164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x436168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436164u;
        // 0x436168: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436164) {
            ctx->pc = 0x43617Cu;
            goto label_43617c;
        }
    }
    ctx->pc = 0x43616Cu;
    // 0x43616c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x43616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x436170: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x436170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x436174: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x436174u;
    {
        const bool branch_taken_0x436174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436174u;
        // 0x436178: 0x2476f2d8  addiu       $s6, $v1, -0xD28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436174) {
            ctx->pc = 0x43618Cu;
            goto label_43618c;
        }
    }
    ctx->pc = 0x43617Cu;
label_43617c:
    // 0x43617c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x43617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x436180: 0x2444f2d8  addiu       $a0, $v0, -0xD28
    ctx->pc = 0x436180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
    // 0x436184: 0xa043f2d8  sb          $v1, -0xD28($v0)
    ctx->pc = 0x436184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294963928), (uint8_t)GPR_U32(ctx, 3));
    // 0x436188: 0x24960001  addiu       $s6, $a0, 0x1
    ctx->pc = 0x436188u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_43618c:
    // 0x43618c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43618cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436190: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x436190u;
    SET_GPR_U32(ctx, 31, 0x436198u);
    ctx->pc = 0x436194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436190u;
    // 0x436194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x436190u, 0x436198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436198u;
label_436198:
    // 0x436198: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x436198u;
    {
        const bool branch_taken_0x436198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436198u;
        // 0x43619c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436198) {
            ctx->pc = 0x4361A4u;
            goto label_4361a4;
        }
    }
    ctx->pc = 0x4361A0u;
label_4361a0:
    // 0x4361a0: 0x2456f2d8  addiu       $s6, $v0, -0xD28
    ctx->pc = 0x4361a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
label_4361a4:
    // 0x4361a4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4361a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4361a8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4361a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4361ac: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4361ACu;
    SET_GPR_U32(ctx, 31, 0x4361B4u);
    ctx->pc = 0x4361B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4361ACu;
    // 0x4361b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4361ACu, 0x4361B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4361B4u;
label_4361b4:
    // 0x4361b4: 0x4400037  bltz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4361B4u;
    {
        const bool branch_taken_0x4361b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4361B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4361B4u;
        // 0x4361b8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4361b4) {
            ctx->pc = 0x436294u;
            goto label_436294;
        }
    }
    ctx->pc = 0x4361BCu;
    // 0x4361bc: 0x34138048  ori         $s3, $zero, 0x8048
    ctx->pc = 0x4361bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x4361c0: 0x139bfc  dsll32      $s3, $s3, 15
    ctx->pc = 0x4361c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 15));
    // 0x4361c4: 0xc10e6b4  jal         func_439AD0
    ctx->pc = 0x4361C4u;
    SET_GPR_U32(ctx, 31, 0x4361CCu);
    ctx->pc = 0x4361C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4361C4u;
    // 0x4361c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439AD0u, 0x4361C4u, 0x4361CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4361CCu;
label_4361cc:
    // 0x4361cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4361ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4361d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4361d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4361d4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4361D4u;
    SET_GPR_U32(ctx, 31, 0x4361DCu);
    ctx->pc = 0x4361D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4361D4u;
    // 0x4361d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4361D4u, 0x4361DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4361DCu;
label_4361dc:
    // 0x4361dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4361dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4361e0: 0x2a8200a3  slti        $v0, $s4, 0xA3
    ctx->pc = 0x4361e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
    // 0x4361e4: 0x0  nop
    ctx->pc = 0x4361e4u;
    // NOP
label_4361e8:
    // 0x4361e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4361E8u;
    {
        const bool branch_taken_0x4361e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4361ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4361E8u;
        // 0x4361ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4361e8) {
            ctx->pc = 0x436250u;
            goto label_436250;
        }
    }
    ctx->pc = 0x4361F0u;
    // 0x4361f0: 0xc10e730  jal         func_439CC0
    ctx->pc = 0x4361F0u;
    SET_GPR_U32(ctx, 31, 0x4361F8u);
    ctx->pc = 0x4361F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4361F0u;
    // 0x4361f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439CC0u, 0x4361F0u, 0x4361F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4361F8u;
label_4361f8:
    // 0x4361f8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4361F8u;
    SET_GPR_U32(ctx, 31, 0x436200u);
    ctx->pc = 0x4361FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4361F8u;
    // 0x4361fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4361F8u, 0x436200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436200u;
label_436200:
    // 0x436200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x436200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436204: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x436204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x436208: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x436208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x43620c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x43620cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x436210: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x436210u;
    SET_GPR_U32(ctx, 31, 0x436218u);
    ctx->pc = 0x436214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436210u;
    // 0x436214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x436210u, 0x436218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436218u;
label_436218:
    // 0x436218: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x436218u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x43621c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436220: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x436220u;
    SET_GPR_U32(ctx, 31, 0x436228u);
    ctx->pc = 0x436224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436220u;
    // 0x436224: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x436220u, 0x436228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436228u;
label_436228:
    // 0x436228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x436228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43622c: 0xc10b000  jal         func_42C000
    ctx->pc = 0x43622Cu;
    SET_GPR_U32(ctx, 31, 0x436234u);
    ctx->pc = 0x436230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43622Cu;
    // 0x436230: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x43622Cu, 0x436234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436234u;
label_436234:
    // 0x436234: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x436234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436238: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x436238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x43623c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x43623cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x436240: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x436240u;
    SET_GPR_U32(ctx, 31, 0x436248u);
    ctx->pc = 0x436244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436240u;
    // 0x436244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x436240u, 0x436248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436248u;
label_436248:
    // 0x436248: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x436248u;
    {
        const bool branch_taken_0x436248 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x43624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436248u;
        // 0x43624c: 0x2a8200a3  slti        $v0, $s4, 0xA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436248) {
            ctx->pc = 0x4361E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4361e8;
        }
    }
    ctx->pc = 0x436250u;
label_436250:
    // 0x436250: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x436250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x436254: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x436254u;
    {
        const bool branch_taken_0x436254 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x436258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436254u;
        // 0x436258: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436254) {
            ctx->pc = 0x436290u;
            goto label_436290;
        }
    }
    ctx->pc = 0x43625Cu;
    // 0x43625c: 0xf63021  addu        $a2, $a3, $s6
    ctx->pc = 0x43625cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x436260: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x436260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436264: 0x0  nop
    ctx->pc = 0x436264u;
    // NOP
label_436268:
    // 0x436268: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x436268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43626c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43626cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x436270: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x436270u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x436274: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x436274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x436278: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x436278u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x43627c: 0x207202a  slt         $a0, $s0, $a3
    ctx->pc = 0x43627cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x436280: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x436280u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x436284: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x436284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x436288: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x436288u;
    {
        const bool branch_taken_0x436288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x43628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436288u;
        // 0x43628c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436288) {
            ctx->pc = 0x436268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436268;
        }
    }
    ctx->pc = 0x436290u;
label_436290:
    // 0x436290: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x436290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_436294:
    // 0x436294: 0x16600026  bnez        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x436294u;
    {
        const bool branch_taken_0x436294 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x436298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436294u;
        // 0x436298: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436294) {
            ctx->pc = 0x436330u;
            goto label_436330;
        }
    }
    ctx->pc = 0x43629Cu;
    // 0x43629c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x43629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x4362a0: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4362A0u;
    {
        const bool branch_taken_0x4362a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4362A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4362A0u;
        // 0x4362a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4362a0) {
            ctx->pc = 0x436324u;
            goto label_436324;
        }
    }
    ctx->pc = 0x4362A8u;
    // 0x4362a8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4362A8u;
    SET_GPR_U32(ctx, 31, 0x4362B0u);
    ctx->pc = 0x4362ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4362A8u;
    // 0x4362ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4362A8u, 0x4362B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4362B0u;
label_4362b0:
    // 0x4362b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4362B0u;
    {
        const bool branch_taken_0x4362b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4362b0) {
            ctx->pc = 0x4362F0u;
            goto label_4362f0;
        }
    }
    ctx->pc = 0x4362B8u;
label_4362b8:
    // 0x4362b8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x4362b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x4362bc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4362bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4362c0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4362C0u;
    SET_GPR_U32(ctx, 31, 0x4362C8u);
    ctx->pc = 0x4362C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4362C0u;
    // 0x4362c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4362C0u, 0x4362C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4362C8u;
label_4362c8:
    // 0x4362c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4362c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4362cc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4362ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4362d0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4362d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4362d4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4362D4u;
    SET_GPR_U32(ctx, 31, 0x4362DCu);
    ctx->pc = 0x4362D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4362D4u;
    // 0x4362d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4362D4u, 0x4362DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4362DCu;
label_4362dc:
    // 0x4362dc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4362DCu;
    {
        const bool branch_taken_0x4362dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4362E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4362DCu;
        // 0x4362e0: 0x2a62fc04  slti        $v0, $s3, -0x3FC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966276) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4362dc) {
            ctx->pc = 0x4362ECu;
            goto label_4362ec;
        }
    }
    ctx->pc = 0x4362E4u;
    // 0x4362e4: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x4362E4u;
    {
        const bool branch_taken_0x4362e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4362e4) {
            ctx->pc = 0x4362E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4362E4u;
            // 0x4362e8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4362B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4362b8;
        }
    }
    ctx->pc = 0x4362ECu;
label_4362ec:
    // 0x4362ec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4362ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4362f0:
    // 0x4362f0: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4362f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4362f4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4362f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4362f8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4362F8u;
    SET_GPR_U32(ctx, 31, 0x436300u);
    ctx->pc = 0x4362FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4362F8u;
    // 0x4362fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4362F8u, 0x436300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436300u;
label_436300:
    // 0x436300: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x436300u;
    {
        const bool branch_taken_0x436300 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x436304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436300u;
        // 0x436304: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436300) {
            ctx->pc = 0x436330u;
            goto label_436330;
        }
    }
    ctx->pc = 0x436308u;
    // 0x436308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x436308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43630c: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x43630cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x436310: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x436310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x436314: 0xc10b000  jal         func_42C000
    ctx->pc = 0x436314u;
    SET_GPR_U32(ctx, 31, 0x43631Cu);
    ctx->pc = 0x436318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436314u;
    // 0x436318: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x436314u, 0x43631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43631Cu;
label_43631c:
    // 0x43631c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x43631Cu;
    {
        const bool branch_taken_0x43631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43631Cu;
        // 0x436320: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43631c) {
            ctx->pc = 0x436330u;
            goto label_436330;
        }
    }
    ctx->pc = 0x436324u;
label_436324:
    // 0x436324: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x436324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x436328: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x436328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43632c: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x43632cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_436330:
    // 0x436330: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x436330u;
    {
        const bool branch_taken_0x436330 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x436334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436330u;
        // 0x436334: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436330) {
            ctx->pc = 0x436340u;
            goto label_436340;
        }
    }
    ctx->pc = 0x436338u;
    // 0x436338: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x436338u;
    {
        const bool branch_taken_0x436338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436338u;
        // 0x43633c: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436338) {
            ctx->pc = 0x43635Cu;
            goto label_43635c;
        }
    }
    ctx->pc = 0x436340u;
label_436340:
    // 0x436340: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x436340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x436344: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x436344u;
    {
        const bool branch_taken_0x436344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x436348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436344u;
        // 0x436348: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436344) {
            ctx->pc = 0x43635Cu;
            goto label_43635c;
        }
    }
    ctx->pc = 0x43634Cu;
    // 0x43634c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x436350: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x436350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x436354: 0x263100b  movn        $v0, $s3, $v1
    ctx->pc = 0x436354u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x436358: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x436358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_43635c:
    // 0x43635c: 0x3415f240  ori         $s5, $zero, 0xF240
    ctx->pc = 0x43635cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x436360: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x436360u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x436364: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x436364u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x436368: 0x34178048  ori         $s7, $zero, 0x8048
    ctx->pc = 0x436368u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x43636c: 0x17bbfc  dsll32      $s7, $s7, 15
    ctx->pc = 0x43636cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 15));
label_436370:
    // 0x436370: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x436370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436374: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x436374u;
    SET_GPR_U32(ctx, 31, 0x43637Cu);
    ctx->pc = 0x436378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436374u;
    // 0x436378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x436374u, 0x43637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43637Cu;
label_43637c:
    // 0x43637c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43637cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436380: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x436380u;
    SET_GPR_U32(ctx, 31, 0x436388u);
    ctx->pc = 0x436384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436380u;
    // 0x436384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x436380u, 0x436388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436388u;
label_436388:
    // 0x436388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x436388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43638c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x43638Cu;
    SET_GPR_U32(ctx, 31, 0x436394u);
    ctx->pc = 0x436390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43638Cu;
    // 0x436390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x43638Cu, 0x436394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436394u;
label_436394:
    // 0x436394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x436394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436398: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x436398u;
    SET_GPR_U32(ctx, 31, 0x4363A0u);
    ctx->pc = 0x43639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436398u;
    // 0x43639c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x436398u, 0x4363A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4363A0u;
label_4363a0:
    // 0x4363a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4363a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4363a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4363a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4363a8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4363A8u;
    SET_GPR_U32(ctx, 31, 0x4363B0u);
    ctx->pc = 0x4363ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4363A8u;
    // 0x4363ac: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4363A8u, 0x4363B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4363B0u;
label_4363b0:
    // 0x4363b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4363b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4363b4: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x4363b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4363b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4363B8u;
    {
        const bool branch_taken_0x4363b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4363BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4363B8u;
        // 0x4363bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4363b8) {
            ctx->pc = 0x436404u;
            goto label_436404;
        }
    }
    ctx->pc = 0x4363C0u;
    // 0x4363c0: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4363C0u;
    SET_GPR_U32(ctx, 31, 0x4363C8u);
    ctx->pc = 0x4363C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4363C0u;
    // 0x4363c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4363C0u, 0x4363C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4363C8u;
label_4363c8:
    // 0x4363c8: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4363C8u;
    {
        const bool branch_taken_0x4363c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4363c8) {
            ctx->pc = 0x436404u;
            goto label_436404;
        }
    }
    ctx->pc = 0x4363D0u;
    // 0x4363d0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x4363d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4363d4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4363d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4363d8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4363D8u;
    SET_GPR_U32(ctx, 31, 0x4363E0u);
    ctx->pc = 0x4363DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4363D8u;
    // 0x4363dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4363D8u, 0x4363E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4363E0u;
label_4363e0:
    // 0x4363e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4363e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4363e4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4363E4u;
    SET_GPR_U32(ctx, 31, 0x4363ECu);
    ctx->pc = 0x4363E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4363E4u;
    // 0x4363e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4363E4u, 0x4363ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4363ECu;
label_4363ec:
    // 0x4363ec: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4363ECu;
    {
        const bool branch_taken_0x4363ec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4363F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4363ECu;
        // 0x4363f0: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4363ec) {
            ctx->pc = 0x436404u;
            goto label_436404;
        }
    }
    ctx->pc = 0x4363F4u;
    // 0x4363f4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x4363f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4363f8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4363f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4363fc: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x4363FCu;
    {
        const bool branch_taken_0x4363fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4363FCu;
        // 0x436400: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4363fc) {
            ctx->pc = 0x436370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436370;
        }
    }
    ctx->pc = 0x436404u;
label_436404:
    // 0x436404: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x436404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x436408: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x436408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x43640c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x43640Cu;
    SET_GPR_U32(ctx, 31, 0x436414u);
    ctx->pc = 0x436410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43640Cu;
    // 0x436410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43640Cu, 0x436414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436414u;
label_436414:
    // 0x436414: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x436414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x436418: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x436418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43641c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x43641cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x436420: 0x2d42021  addu        $a0, $s6, $s4
    ctx->pc = 0x436420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x436424: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x436424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x436428: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x436428u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x43642c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x43642cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x436430: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x436430u;
    {
        const bool branch_taken_0x436430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x436434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436430u;
        // 0x436434: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436430) {
            ctx->pc = 0x436458u;
            goto label_436458;
        }
    }
    ctx->pc = 0x436438u;
    // 0x436438: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x436438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x43643c: 0x0  nop
    ctx->pc = 0x43643cu;
    // NOP
label_436440:
    // 0x436440: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x436440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x436444: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x436444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x436448: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x436448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x43644c: 0x0  nop
    ctx->pc = 0x43644cu;
    // NOP
    // 0x436450: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x436450u;
    {
        const bool branch_taken_0x436450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436450u;
        // 0x436454: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436450) {
            ctx->pc = 0x436440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436440;
        }
    }
    ctx->pc = 0x436458u;
label_436458:
    // 0x436458: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x436458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43645c: 0xc10d7bc  jal         func_435EF0
    ctx->pc = 0x43645Cu;
    SET_GPR_U32(ctx, 31, 0x436464u);
    ctx->pc = 0x436460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43645Cu;
    // 0x436460: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435EF0u, 0x43645Cu, 0x436464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436464u;
label_436464:
    // 0x436464: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x436464u;
    {
        const bool branch_taken_0x436464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x436468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436464u;
        // 0x436468: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436464) {
            ctx->pc = 0x436480u;
            goto label_436480;
        }
    }
    ctx->pc = 0x43646Cu;
    // 0x43646c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x43646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x436470: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x436470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436474: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x436474u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x436478: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x436478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x43647c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x43647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_436480:
    // 0x436480: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x436480u;
    {
        const bool branch_taken_0x436480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436480u;
        // 0x436484: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436480) {
            ctx->pc = 0x4364D4u;
            goto label_4364d4;
        }
    }
    ctx->pc = 0x436488u;
    // 0x436488: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x436488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x43648c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43648Cu;
    {
        const bool branch_taken_0x43648c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x436490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43648Cu;
        // 0x436490: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43648c) {
            ctx->pc = 0x43649Cu;
            goto label_43649c;
        }
    }
    ctx->pc = 0x436494u;
    // 0x436494: 0x2a620001  slti        $v0, $s3, 0x1
    ctx->pc = 0x436494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x436498: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x436498u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_43649c:
    // 0x43649c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x43649cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4364a0: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x4364a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4364a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4364A4u;
    {
        const bool branch_taken_0x4364a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4364A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4364A4u;
        // 0x4364a8: 0x2c53021  addu        $a2, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364a4) {
            ctx->pc = 0x4364C8u;
            goto label_4364c8;
        }
    }
    ctx->pc = 0x4364ACu;
    // 0x4364ac: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x4364acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_4364b0:
    // 0x4364b0: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x4364b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x4364b4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4364b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4364b8: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x4364b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x4364bc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4364bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4364c0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4364C0u;
    {
        const bool branch_taken_0x4364c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4364C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4364C0u;
        // 0x4364c4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364c0) {
            ctx->pc = 0x4364B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4364b0;
        }
    }
    ctx->pc = 0x4364C8u;
label_4364c8:
    // 0x4364c8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x4364c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x4364cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4364CCu;
    {
        const bool branch_taken_0x4364cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4364CCu;
        // 0x4364d0: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364cc) {
            ctx->pc = 0x4364D8u;
            goto label_4364d8;
        }
    }
    ctx->pc = 0x4364D4u;
label_4364d4:
    // 0x4364d4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4364d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4364d8:
    // 0x4364d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4364d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4364dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4364DCu;
    {
        const bool branch_taken_0x4364dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4364E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4364DCu;
        // 0x4364e0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364dc) {
            ctx->pc = 0x436530u;
            goto label_436530;
        }
    }
    ctx->pc = 0x4364E4u;
    // 0x4364e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x4364E4u;
    {
        const bool branch_taken_0x4364e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4364E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4364E4u;
        // 0x4364e8: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364e4) {
            ctx->pc = 0x436518u;
            goto label_436518;
        }
    }
    ctx->pc = 0x4364ECu;
    // 0x4364ec: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x4364ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4364f0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x4364f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4364f4: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4364F4u;
    {
        const bool branch_taken_0x4364f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4364f4) {
            ctx->pc = 0x4364F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4364F4u;
            // 0x4364f8: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436524u;
            goto label_436524;
        }
    }
    ctx->pc = 0x4364FCu;
    // 0x4364fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4364fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_436500:
    // 0x436500: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x436500u;
    {
        const bool branch_taken_0x436500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x436504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436500u;
        // 0x436504: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436500) {
            ctx->pc = 0x436518u;
            goto label_436518;
        }
    }
    ctx->pc = 0x436508u;
    // 0x436508: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x436508u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43650c: 0x0  nop
    ctx->pc = 0x43650cu;
    // NOP
    // 0x436510: 0x5064fffb  beql        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x436510u;
    {
        const bool branch_taken_0x436510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x436510) {
            ctx->pc = 0x436514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436510u;
            // 0x436514: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436500;
        }
    }
    ctx->pc = 0x436518u;
label_436518:
    // 0x436518: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x436518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x43651c: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x43651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x436520: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x436520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_436524:
    // 0x436524: 0x3863002e  xori        $v1, $v1, 0x2E
    ctx->pc = 0x436524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)46);
    // 0x436528: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x436528u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x43652c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x43652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_436530:
    // 0x436530: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x436530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x436534: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x436534u;
    {
        const bool branch_taken_0x436534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x436538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436534u;
        // 0x436538: 0x2361021  addu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436534) {
            ctx->pc = 0x4365C8u;
            goto label_4365c8;
        }
    }
    ctx->pc = 0x43653Cu;
    // 0x43653c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43653cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x436540: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x436540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x436544: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x436544u;
    {
        const bool branch_taken_0x436544 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x436548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436544u;
        // 0x436548: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436544) {
            ctx->pc = 0x436580u;
            goto label_436580;
        }
    }
    ctx->pc = 0x43654Cu;
    // 0x43654c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x43654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x436550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x436550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x436554: 0x53980b  movn        $s3, $v0, $s3
    ctx->pc = 0x436554u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x436558: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x436558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x43655c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x43655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x436560: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x436560u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x436564: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x436564u;
    {
        const bool branch_taken_0x436564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436564u;
        // 0x436568: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436564) {
            ctx->pc = 0x4365ACu;
            goto label_4365ac;
        }
    }
    ctx->pc = 0x43656Cu;
    // 0x43656c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43656cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x436570: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x436570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x436574: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x436574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x436578: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x436578u;
    {
        const bool branch_taken_0x436578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436578u;
        // 0x43657c: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436578) {
            ctx->pc = 0x4365ACu;
            goto label_4365ac;
        }
    }
    ctx->pc = 0x436580u;
label_436580:
    // 0x436580: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x436580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x436584: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x436584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x436588: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x436588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x43658c: 0x2a64fff7  slti        $a0, $s3, -0x9
    ctx->pc = 0x43658cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x436590: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x436590u;
    {
        const bool branch_taken_0x436590 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x436594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436590u;
        // 0x436594: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436590) {
            ctx->pc = 0x4365A8u;
            goto label_4365a8;
        }
    }
    ctx->pc = 0x436598u;
    // 0x436598: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x436598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x43659c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x43659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4365a0: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x4365a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x4365a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4365a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_4365a8:
    // 0x4365a8: 0x139823  negu        $s3, $s3
    ctx->pc = 0x4365a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_4365ac:
    // 0x4365ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4365acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4365b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4365b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4365b4: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x4365b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x4365b8: 0xc10d7f6  jal         func_435FD8
    ctx->pc = 0x4365B8u;
    SET_GPR_U32(ctx, 31, 0x4365C0u);
    ctx->pc = 0x4365BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4365B8u;
    // 0x4365bc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435FD8u, 0x4365B8u, 0x4365C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4365C0u;
label_4365c0:
    // 0x4365c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4365C0u;
    {
        const bool branch_taken_0x4365c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4365C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4365C0u;
        // 0x4365c4: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4365c0) {
            ctx->pc = 0x4365D0u;
            goto label_4365d0;
        }
    }
    ctx->pc = 0x4365C8u;
label_4365c8:
    // 0x4365c8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x4365c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_4365cc:
    // 0x4365cc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x4365ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_4365d0:
    // 0x4365d0: 0x2462f2d8  addiu       $v0, $v1, -0xD28
    ctx->pc = 0x4365d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963928));
    // 0x4365d4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4365d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4365d8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4365d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4365dc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4365dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4365e0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4365e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4365e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4365e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4365e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4365e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4365ec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4365ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4365f0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4365f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4365f4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4365f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4365f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4365f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4365fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4365FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4365FCu;
        // 0x436600: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4365FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x436604u;
    // 0x436604: 0x0  nop
    ctx->pc = 0x436604u;
    // NOP
    ctx->pc = 0x436608u;
}
