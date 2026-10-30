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

// Function: sub_00455108
// Address: 0x455108 - 0x4552e0
void sub_00455108_0x455108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455108_0x455108");
#endif

    switch (ctx->pc) {
        case 0x455108u: goto label_455108;
        case 0x45510cu: goto label_45510c;
        case 0x455110u: goto label_455110;
        case 0x455114u: goto label_455114;
        case 0x455118u: goto label_455118;
        case 0x45511cu: goto label_45511c;
        case 0x455120u: goto label_455120;
        case 0x455124u: goto label_455124;
        case 0x455128u: goto label_455128;
        case 0x45512cu: goto label_45512c;
        case 0x455130u: goto label_455130;
        case 0x455134u: goto label_455134;
        case 0x455138u: goto label_455138;
        case 0x45513cu: goto label_45513c;
        case 0x455140u: goto label_455140;
        case 0x455144u: goto label_455144;
        case 0x455148u: goto label_455148;
        case 0x45514cu: goto label_45514c;
        case 0x455150u: goto label_455150;
        case 0x455154u: goto label_455154;
        case 0x455158u: goto label_455158;
        case 0x45515cu: goto label_45515c;
        case 0x455160u: goto label_455160;
        case 0x455164u: goto label_455164;
        case 0x455168u: goto label_455168;
        case 0x45516cu: goto label_45516c;
        case 0x455170u: goto label_455170;
        case 0x455174u: goto label_455174;
        case 0x455178u: goto label_455178;
        case 0x45517cu: goto label_45517c;
        case 0x455180u: goto label_455180;
        case 0x455184u: goto label_455184;
        case 0x455188u: goto label_455188;
        case 0x45518cu: goto label_45518c;
        case 0x455190u: goto label_455190;
        case 0x455194u: goto label_455194;
        case 0x455198u: goto label_455198;
        case 0x45519cu: goto label_45519c;
        case 0x4551a0u: goto label_4551a0;
        case 0x4551a4u: goto label_4551a4;
        case 0x4551a8u: goto label_4551a8;
        case 0x4551acu: goto label_4551ac;
        case 0x4551b0u: goto label_4551b0;
        case 0x4551b4u: goto label_4551b4;
        case 0x4551b8u: goto label_4551b8;
        case 0x4551bcu: goto label_4551bc;
        case 0x4551c0u: goto label_4551c0;
        case 0x4551c4u: goto label_4551c4;
        case 0x4551c8u: goto label_4551c8;
        case 0x4551ccu: goto label_4551cc;
        case 0x4551d0u: goto label_4551d0;
        case 0x4551d4u: goto label_4551d4;
        case 0x4551d8u: goto label_4551d8;
        case 0x4551dcu: goto label_4551dc;
        case 0x4551e0u: goto label_4551e0;
        case 0x4551e4u: goto label_4551e4;
        case 0x4551e8u: goto label_4551e8;
        case 0x4551ecu: goto label_4551ec;
        case 0x4551f0u: goto label_4551f0;
        case 0x4551f4u: goto label_4551f4;
        case 0x4551f8u: goto label_4551f8;
        case 0x4551fcu: goto label_4551fc;
        case 0x455200u: goto label_455200;
        case 0x455204u: goto label_455204;
        case 0x455208u: goto label_455208;
        case 0x45520cu: goto label_45520c;
        case 0x455210u: goto label_455210;
        case 0x455214u: goto label_455214;
        case 0x455218u: goto label_455218;
        case 0x45521cu: goto label_45521c;
        case 0x455220u: goto label_455220;
        case 0x455224u: goto label_455224;
        case 0x455228u: goto label_455228;
        case 0x45522cu: goto label_45522c;
        case 0x455230u: goto label_455230;
        case 0x455234u: goto label_455234;
        case 0x455238u: goto label_455238;
        case 0x45523cu: goto label_45523c;
        case 0x455240u: goto label_455240;
        case 0x455244u: goto label_455244;
        case 0x455248u: goto label_455248;
        case 0x45524cu: goto label_45524c;
        case 0x455250u: goto label_455250;
        case 0x455254u: goto label_455254;
        case 0x455258u: goto label_455258;
        case 0x45525cu: goto label_45525c;
        case 0x455260u: goto label_455260;
        case 0x455264u: goto label_455264;
        case 0x455268u: goto label_455268;
        case 0x45526cu: goto label_45526c;
        case 0x455270u: goto label_455270;
        case 0x455274u: goto label_455274;
        case 0x455278u: goto label_455278;
        case 0x45527cu: goto label_45527c;
        case 0x455280u: goto label_455280;
        case 0x455284u: goto label_455284;
        case 0x455288u: goto label_455288;
        case 0x45528cu: goto label_45528c;
        case 0x455290u: goto label_455290;
        case 0x455294u: goto label_455294;
        case 0x455298u: goto label_455298;
        case 0x45529cu: goto label_45529c;
        case 0x4552a0u: goto label_4552a0;
        case 0x4552a4u: goto label_4552a4;
        case 0x4552a8u: goto label_4552a8;
        case 0x4552acu: goto label_4552ac;
        case 0x4552b0u: goto label_4552b0;
        case 0x4552b4u: goto label_4552b4;
        case 0x4552b8u: goto label_4552b8;
        case 0x4552bcu: goto label_4552bc;
        case 0x4552c0u: goto label_4552c0;
        case 0x4552c4u: goto label_4552c4;
        case 0x4552c8u: goto label_4552c8;
        case 0x4552ccu: goto label_4552cc;
        case 0x4552d0u: goto label_4552d0;
        case 0x4552d4u: goto label_4552d4;
        case 0x4552d8u: goto label_4552d8;
        case 0x4552dcu: goto label_4552dc;
        default: break;
    }

    ctx->pc = 0x455108u;

label_455108:
    // 0x455108: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x455108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_45510c:
    // 0x45510c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x45510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_455110:
    // 0x455110: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x455110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_455114:
    // 0x455114: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x455114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455118:
    // 0x455118: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x455118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_45511c:
    // 0x45511c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x45511cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_455120:
    // 0x455120: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x455120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_455124:
    // 0x455124: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x455124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_455128:
    // 0x455128: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x455128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_45512c:
    // 0x45512c: 0x30d40002  andi        $s4, $a2, 0x2
    ctx->pc = 0x45512cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_455130:
    // 0x455130: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x455130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_455134:
    // 0x455134: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x455134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_455138:
    // 0x455138: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_45513c:
    if (ctx->pc == 0x45513Cu) {
        ctx->pc = 0x45513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455138u;
        // 0x45513c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455140u;
        goto label_455140;
    }
    ctx->pc = 0x455138u;
    {
        const bool branch_taken_0x455138 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455138u;
        // 0x45513c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455138) {
            ctx->pc = 0x455148u;
            goto label_455148;
        }
    }
    ctx->pc = 0x455140u;
label_455140:
    // 0x455140: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x455140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_455144:
    // 0x455144: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x455144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_455148:
    // 0x455148: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x455148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_45514c:
    // 0x45514c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x45514cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_455150:
    // 0x455150: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x455150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_455154:
    // 0x455154: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x455154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_455158:
    // 0x455158: 0x40f809  jalr        $v0
label_45515c:
    if (ctx->pc == 0x45515Cu) {
        ctx->pc = 0x45515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455158u;
        // 0x45515c: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = 0x455160u;
        goto label_455160;
    }
    ctx->pc = 0x455158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455160u);
        ctx->pc = 0x45515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455158u;
        // 0x45515c: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455158u, 0x455160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455160u;
label_455160:
    // 0x455160: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x455160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455164:
    // 0x455164: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_455168:
    if (ctx->pc == 0x455168u) {
        ctx->pc = 0x455168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455164u;
        // 0x455168: 0x26b0000f  addiu       $s0, $s5, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x45516Cu;
        goto label_45516c;
    }
    ctx->pc = 0x455164u;
    {
        const bool branch_taken_0x455164 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x455168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455164u;
        // 0x455168: 0x26b0000f  addiu       $s0, $s5, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455164) {
            ctx->pc = 0x455174u;
            goto label_455174;
        }
    }
    ctx->pc = 0x45516Cu;
label_45516c:
    // 0x45516c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_455170:
    if (ctx->pc == 0x455170u) {
        ctx->pc = 0x455170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45516Cu;
        // 0x455170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455174u;
        goto label_455174;
    }
    ctx->pc = 0x45516Cu;
    {
        const bool branch_taken_0x45516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45516Cu;
        // 0x455170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45516c) {
            ctx->pc = 0x4552A8u;
            goto label_4552a8;
        }
    }
    ctx->pc = 0x455174u;
label_455174:
    // 0x455174: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x455174u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_455178:
    // 0x455178: 0x3631fff0  ori         $s1, $s1, 0xFFF0
    ctx->pc = 0x455178u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65520);
label_45517c:
    // 0x45517c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x45517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_455180:
    // 0x455180: 0x2118024  and         $s0, $s0, $s1
    ctx->pc = 0x455180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
label_455184:
    // 0x455184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x455184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455188:
    // 0x455188: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x455188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_45518c:
    // 0x45518c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x45518cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_455190:
    // 0x455190: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x455190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_455194:
    // 0x455194: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x455194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_455198:
    // 0x455198: 0xc10c1fa  jal         func_4307E8
label_45519c:
    if (ctx->pc == 0x45519Cu) {
        ctx->pc = 0x45519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455198u;
        // 0x45519c: 0xae50004c  sw          $s0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4551A0u;
        goto label_4551a0;
    }
    ctx->pc = 0x455198u;
    SET_GPR_U32(ctx, 31, 0x4551A0u);
    ctx->pc = 0x45519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455198u;
    // 0x45519c: 0xae50004c  sw          $s0, 0x4C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x455198u, 0x4551A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4551A0u;
label_4551a0:
    // 0x4551a0: 0x2610001b  addiu       $s0, $s0, 0x1B
    ctx->pc = 0x4551a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27));
label_4551a4:
    // 0x4551a4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x4551a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4551a8:
    // 0x4551a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4551a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4551ac:
    // 0x4551ac: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4551acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4551b0:
    // 0x4551b0: 0x2118024  and         $s0, $s0, $s1
    ctx->pc = 0x4551b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
label_4551b4:
    // 0x4551b4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x4551b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_4551b8:
    // 0x4551b8: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x4551b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_4551bc:
    // 0x4551bc: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x4551bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_4551c0:
    // 0x4551c0: 0xae440058  sw          $a0, 0x58($s2)
    ctx->pc = 0x4551c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 4));
label_4551c4:
    // 0x4551c4: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x4551c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_4551c8:
    // 0x4551c8: 0x6a420013  ldl         $v0, 0x13($s2)
    ctx->pc = 0x4551c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4551cc:
    // 0x4551cc: 0x6e42000c  ldr         $v0, 0xC($s2)
    ctx->pc = 0x4551ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4551d0:
    // 0x4551d0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4551d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4551d4:
    // 0x4551d4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4551d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4551d8:
    // 0x4551d8: 0x1a600021  blez        $s3, . + 4 + (0x21 << 2)
label_4551dc:
    if (ctx->pc == 0x4551DCu) {
        ctx->pc = 0x4551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4551D8u;
        // 0x4551dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4551E0u;
        goto label_4551e0;
    }
    ctx->pc = 0x4551D8u;
    {
        const bool branch_taken_0x4551d8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x4551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4551D8u;
        // 0x4551dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4551d8) {
            ctx->pc = 0x455260u;
            goto label_455260;
        }
    }
    ctx->pc = 0x4551E0u;
label_4551e0:
    // 0x4551e0: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x4551e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
label_4551e4:
    // 0x4551e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4551e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4551e8:
    // 0x4551e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4551e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4551ec:
    // 0x4551ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4551ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4551f0:
    // 0x4551f0: 0x34e70003  ori         $a3, $a3, 0x3
    ctx->pc = 0x4551f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
label_4551f4:
    // 0x4551f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4551f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4551f8:
    // 0x4551f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4551f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4551fc:
    // 0x4551fc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x4551fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_455200:
    // 0x455200: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x455200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_455204:
    // 0x455204: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x455204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_455208:
    // 0x455208: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x455208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_45520c:
    // 0x45520c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x45520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_455210:
    // 0x455210: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x455210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_455214:
    // 0x455214: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x455214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_455218:
    // 0x455218: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x455218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_45521c:
    // 0x45521c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x45521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_455220:
    // 0x455220: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x455220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_455224:
    // 0x455224: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x455224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_455228:
    // 0x455228: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x455228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_45522c:
    // 0x45522c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x45522cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_455230:
    // 0x455230: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x455230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_455234:
    // 0x455234: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x455234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_455238:
    // 0x455238: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x455238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_45523c:
    // 0x45523c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x45523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_455240:
    // 0x455240: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x455240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_455244:
    // 0x455244: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x455244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_455248:
    // 0x455248: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x455248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_45524c:
    // 0x45524c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x45524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_455250:
    // 0x455250: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x455250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_455254:
    // 0x455254: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x455254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_455258:
    // 0x455258: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
label_45525c:
    if (ctx->pc == 0x45525Cu) {
        ctx->pc = 0x45525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455258u;
        // 0x45525c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455260u;
        goto label_455260;
    }
    ctx->pc = 0x455258u;
    {
        const bool branch_taken_0x455258 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455258u;
        // 0x45525c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455258) {
            ctx->pc = 0x4551F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4551f8;
        }
    }
    ctx->pc = 0x455260u;
label_455260:
    // 0x455260: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_455264:
    if (ctx->pc == 0x455264u) {
        ctx->pc = 0x455264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455260u;
        // 0x455264: 0x133180  sll         $a2, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x455268u;
        goto label_455268;
    }
    ctx->pc = 0x455260u;
    {
        const bool branch_taken_0x455260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x455264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455260u;
        // 0x455264: 0x133180  sll         $a2, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455260) {
            ctx->pc = 0x4552A4u;
            goto label_4552a4;
        }
    }
    ctx->pc = 0x455268u;
label_455268:
    // 0x455268: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x455268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_45526c:
    // 0x45526c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x45526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_455270:
    // 0x455270: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x455270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_455274:
    // 0x455274: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x455274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_455278:
    // 0x455278: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x455278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_45527c:
    // 0x45527c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x45527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_455280:
    // 0x455280: 0xae450028  sw          $a1, 0x28($s2)
    ctx->pc = 0x455280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 5));
label_455284:
    // 0x455284: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x455284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_455288:
    // 0x455288: 0xae440050  sw          $a0, 0x50($s2)
    ctx->pc = 0x455288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 4));
label_45528c:
    // 0x45528c: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x45528cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_455290:
    // 0x455290: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x455290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_455294:
    // 0x455294: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x455294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_455298:
    // 0x455298: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x455298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_45529c:
    // 0x45529c: 0xc10c1fa  jal         func_4307E8
label_4552a0:
    if (ctx->pc == 0x4552A0u) {
        ctx->pc = 0x4552A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45529Cu;
        // 0x4552a0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4552A4u;
        goto label_4552a4;
    }
    ctx->pc = 0x45529Cu;
    SET_GPR_U32(ctx, 31, 0x4552A4u);
    ctx->pc = 0x4552A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45529Cu;
    // 0x4552a0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x45529Cu, 0x4552A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4552A4u;
label_4552a4:
    // 0x4552a4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4552a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4552a8:
    // 0x4552a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4552a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4552ac:
    // 0x4552ac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4552acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4552b0:
    // 0x4552b0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4552b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4552b4:
    // 0x4552b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4552b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4552b8:
    // 0x4552b8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4552b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4552bc:
    // 0x4552bc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4552bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4552c0:
    // 0x4552c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4552c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4552c4:
    // 0x4552c4: 0x3e00008  jr          $ra
label_4552c8:
    if (ctx->pc == 0x4552C8u) {
        ctx->pc = 0x4552C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4552C4u;
        // 0x4552c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4552CCu;
        goto label_4552cc;
    }
    ctx->pc = 0x4552C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4552C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4552C4u;
        // 0x4552c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4552C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4552CCu;
label_4552cc:
    // 0x4552cc: 0x0  nop
    ctx->pc = 0x4552ccu;
    // NOP
label_4552d0:
    // 0x4552d0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4552d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_4552d4:
    // 0x4552d4: 0x0  nop
    ctx->pc = 0x4552d4u;
    // NOP
label_4552d8:
    // 0x4552d8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x4552d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_4552dc:
    // 0x4552dc: 0x0  nop
    ctx->pc = 0x4552dcu;
    // NOP
    ctx->pc = 0x4552e0u;
}
