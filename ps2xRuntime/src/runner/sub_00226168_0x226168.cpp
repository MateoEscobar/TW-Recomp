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

// Function: sub_00226168
// Address: 0x226168 - 0x2262f0
void sub_00226168_0x226168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226168_0x226168");
#endif

    switch (ctx->pc) {
        case 0x226168u: goto label_226168;
        case 0x22616cu: goto label_22616c;
        case 0x226170u: goto label_226170;
        case 0x226174u: goto label_226174;
        case 0x226178u: goto label_226178;
        case 0x22617cu: goto label_22617c;
        case 0x226180u: goto label_226180;
        case 0x226184u: goto label_226184;
        case 0x226188u: goto label_226188;
        case 0x22618cu: goto label_22618c;
        case 0x226190u: goto label_226190;
        case 0x226194u: goto label_226194;
        case 0x226198u: goto label_226198;
        case 0x22619cu: goto label_22619c;
        case 0x2261a0u: goto label_2261a0;
        case 0x2261a4u: goto label_2261a4;
        case 0x2261a8u: goto label_2261a8;
        case 0x2261acu: goto label_2261ac;
        case 0x2261b0u: goto label_2261b0;
        case 0x2261b4u: goto label_2261b4;
        case 0x2261b8u: goto label_2261b8;
        case 0x2261bcu: goto label_2261bc;
        case 0x2261c0u: goto label_2261c0;
        case 0x2261c4u: goto label_2261c4;
        case 0x2261c8u: goto label_2261c8;
        case 0x2261ccu: goto label_2261cc;
        case 0x2261d0u: goto label_2261d0;
        case 0x2261d4u: goto label_2261d4;
        case 0x2261d8u: goto label_2261d8;
        case 0x2261dcu: goto label_2261dc;
        case 0x2261e0u: goto label_2261e0;
        case 0x2261e4u: goto label_2261e4;
        case 0x2261e8u: goto label_2261e8;
        case 0x2261ecu: goto label_2261ec;
        case 0x2261f0u: goto label_2261f0;
        case 0x2261f4u: goto label_2261f4;
        case 0x2261f8u: goto label_2261f8;
        case 0x2261fcu: goto label_2261fc;
        case 0x226200u: goto label_226200;
        case 0x226204u: goto label_226204;
        case 0x226208u: goto label_226208;
        case 0x22620cu: goto label_22620c;
        case 0x226210u: goto label_226210;
        case 0x226214u: goto label_226214;
        case 0x226218u: goto label_226218;
        case 0x22621cu: goto label_22621c;
        case 0x226220u: goto label_226220;
        case 0x226224u: goto label_226224;
        case 0x226228u: goto label_226228;
        case 0x22622cu: goto label_22622c;
        case 0x226230u: goto label_226230;
        case 0x226234u: goto label_226234;
        case 0x226238u: goto label_226238;
        case 0x22623cu: goto label_22623c;
        case 0x226240u: goto label_226240;
        case 0x226244u: goto label_226244;
        case 0x226248u: goto label_226248;
        case 0x22624cu: goto label_22624c;
        case 0x226250u: goto label_226250;
        case 0x226254u: goto label_226254;
        case 0x226258u: goto label_226258;
        case 0x22625cu: goto label_22625c;
        case 0x226260u: goto label_226260;
        case 0x226264u: goto label_226264;
        case 0x226268u: goto label_226268;
        case 0x22626cu: goto label_22626c;
        case 0x226270u: goto label_226270;
        case 0x226274u: goto label_226274;
        case 0x226278u: goto label_226278;
        case 0x22627cu: goto label_22627c;
        case 0x226280u: goto label_226280;
        case 0x226284u: goto label_226284;
        case 0x226288u: goto label_226288;
        case 0x22628cu: goto label_22628c;
        case 0x226290u: goto label_226290;
        case 0x226294u: goto label_226294;
        case 0x226298u: goto label_226298;
        case 0x22629cu: goto label_22629c;
        case 0x2262a0u: goto label_2262a0;
        case 0x2262a4u: goto label_2262a4;
        case 0x2262a8u: goto label_2262a8;
        case 0x2262acu: goto label_2262ac;
        case 0x2262b0u: goto label_2262b0;
        case 0x2262b4u: goto label_2262b4;
        case 0x2262b8u: goto label_2262b8;
        case 0x2262bcu: goto label_2262bc;
        case 0x2262c0u: goto label_2262c0;
        case 0x2262c4u: goto label_2262c4;
        case 0x2262c8u: goto label_2262c8;
        case 0x2262ccu: goto label_2262cc;
        case 0x2262d0u: goto label_2262d0;
        case 0x2262d4u: goto label_2262d4;
        case 0x2262d8u: goto label_2262d8;
        case 0x2262dcu: goto label_2262dc;
        case 0x2262e0u: goto label_2262e0;
        case 0x2262e4u: goto label_2262e4;
        case 0x2262e8u: goto label_2262e8;
        case 0x2262ecu: goto label_2262ec;
        default: break;
    }

    ctx->pc = 0x226168u;

label_226168:
    // 0x226168: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x226168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22616c:
    // 0x22616c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x22616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_226170:
    // 0x226170: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x226170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_226174:
    // 0x226174: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226178:
    // 0x226178: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x226178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_22617c:
    // 0x22617c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22617cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_226180:
    // 0x226180: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x226180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_226184:
    // 0x226184: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x226184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_226188:
    // 0x226188: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x226188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_22618c:
    // 0x22618c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22618cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_226190:
    // 0x226190: 0xc089d02  jal         func_227408
label_226194:
    if (ctx->pc == 0x226194u) {
        ctx->pc = 0x226194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226190u;
        // 0x226194: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226198u;
        goto label_226198;
    }
    ctx->pc = 0x226190u;
    SET_GPR_U32(ctx, 31, 0x226198u);
    ctx->pc = 0x226194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226190u;
    // 0x226194: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x226190u, 0x226198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226198u;
label_226198:
    // 0x226198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22619c:
    // 0x22619c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2261a0:
    // 0x2261a0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_2261a4:
    if (ctx->pc == 0x2261A4u) {
        ctx->pc = 0x2261A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261A0u;
        // 0x2261a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261A8u;
        goto label_2261a8;
    }
    ctx->pc = 0x2261A0u;
    {
        const bool branch_taken_0x2261a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2261A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261A0u;
        // 0x2261a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261a0) {
            ctx->pc = 0x2261CCu;
            goto label_2261cc;
        }
    }
    ctx->pc = 0x2261A8u;
label_2261a8:
    // 0x2261a8: 0x3c052a03  lui         $a1, 0x2A03
    ctx->pc = 0x2261a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10755 << 16));
label_2261ac:
    // 0x2261ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2261acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2261b0:
    // 0x2261b0: 0xc089d0a  jal         func_227428
label_2261b4:
    if (ctx->pc == 0x2261B4u) {
        ctx->pc = 0x2261B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261B0u;
        // 0x2261b4: 0x34a53cab  ori         $a1, $a1, 0x3CAB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15531);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261B8u;
        goto label_2261b8;
    }
    ctx->pc = 0x2261B0u;
    SET_GPR_U32(ctx, 31, 0x2261B8u);
    ctx->pc = 0x2261B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261B0u;
    // 0x2261b4: 0x34a53cab  ori         $a1, $a1, 0x3CAB (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15531);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227428u, 0x2261B0u, 0x2261B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261B8u;
label_2261b8:
    // 0x2261b8: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_2261bc:
    if (ctx->pc == 0x2261BCu) {
        ctx->pc = 0x2261BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261B8u;
        // 0x2261bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261C0u;
        goto label_2261c0;
    }
    ctx->pc = 0x2261B8u;
    {
        const bool branch_taken_0x2261b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2261BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261B8u;
        // 0x2261bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261b8) {
            ctx->pc = 0x2261CCu;
            goto label_2261cc;
        }
    }
    ctx->pc = 0x2261C0u;
label_2261c0:
    // 0x2261c0: 0xc089ce2  jal         func_227388
label_2261c4:
    if (ctx->pc == 0x2261C4u) {
        ctx->pc = 0x2261C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261C0u;
        // 0x2261c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261C8u;
        goto label_2261c8;
    }
    ctx->pc = 0x2261C0u;
    SET_GPR_U32(ctx, 31, 0x2261C8u);
    ctx->pc = 0x2261C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261C0u;
    // 0x2261c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x2261C0u, 0x2261C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261C8u;
label_2261c8:
    // 0x2261c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2261c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2261cc:
    // 0x2261cc: 0x8e4505a0  lw          $a1, 0x5A0($s2)
    ctx->pc = 0x2261ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
label_2261d0:
    // 0x2261d0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2261d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2261d4:
    // 0x2261d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2261d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2261d8:
    // 0x2261d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2261d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2261dc:
    // 0x2261dc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2261dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2261e0:
    // 0x2261e0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2261e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2261e4:
    // 0x2261e4: 0x40f809  jalr        $v0
label_2261e8:
    if (ctx->pc == 0x2261E8u) {
        ctx->pc = 0x2261E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261E4u;
        // 0x2261e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261ECu;
        goto label_2261ec;
    }
    ctx->pc = 0x2261E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2261ECu);
        ctx->pc = 0x2261E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261E4u;
        // 0x2261e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2261E4u, 0x2261ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2261ECu;
label_2261ec:
    // 0x2261ec: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2261f0:
    if (ctx->pc == 0x2261F0u) {
        ctx->pc = 0x2261F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261ECu;
        // 0x2261f0: 0x8e902b04  lw          $s0, 0x2B04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261F4u;
        goto label_2261f4;
    }
    ctx->pc = 0x2261ECu;
    {
        const bool branch_taken_0x2261ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2261F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261ECu;
        // 0x2261f0: 0x8e902b04  lw          $s0, 0x2B04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261ec) {
            ctx->pc = 0x2262B8u;
            goto label_2262b8;
        }
    }
    ctx->pc = 0x2261F4u;
label_2261f4:
    // 0x2261f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2261f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2261f8:
    // 0x2261f8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2261f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2261fc:
    // 0x2261fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2261fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226200:
    // 0x226200: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x226200u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_226204:
    // 0x226204: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226208:
    // 0x226208: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x226208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_22620c:
    // 0x22620c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x22620cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_226210:
    // 0x226210: 0x40f809  jalr        $v0
label_226214:
    if (ctx->pc == 0x226214u) {
        ctx->pc = 0x226214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226210u;
        // 0x226214: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226218u;
        goto label_226218;
    }
    ctx->pc = 0x226210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226218u);
        ctx->pc = 0x226214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226210u;
        // 0x226214: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226210u, 0x226218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226218u;
label_226218:
    // 0x226218: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x226218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22621c:
    // 0x22621c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226220:
    // 0x226220: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x226220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226224:
    // 0x226224: 0x40f809  jalr        $v0
label_226228:
    if (ctx->pc == 0x226228u) {
        ctx->pc = 0x226228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226224u;
        // 0x226228: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22622Cu;
        goto label_22622c;
    }
    ctx->pc = 0x226224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22622Cu);
        ctx->pc = 0x226228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226224u;
        // 0x226228: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226224u, 0x22622Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22622Cu;
label_22622c:
    // 0x22622c: 0x8e842b04  lw          $a0, 0x2B04($s4)
    ctx->pc = 0x22622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_226230:
    // 0x226230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x226230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226234:
    // 0x226234: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x226234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_226238:
    // 0x226238: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x226238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_22623c:
    // 0x22623c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_226240:
    if (ctx->pc == 0x226240u) {
        ctx->pc = 0x226240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22623Cu;
        // 0x226240: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226244u;
        goto label_226244;
    }
    ctx->pc = 0x22623Cu;
    {
        const bool branch_taken_0x22623c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x226240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22623Cu;
        // 0x226240: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22623c) {
            ctx->pc = 0x226260u;
            goto label_226260;
        }
    }
    ctx->pc = 0x226244u;
label_226244:
    // 0x226244: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x226244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_226248:
    // 0x226248: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x226248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22624c:
    // 0x22624c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226250:
    // 0x226250: 0x40f809  jalr        $v0
label_226254:
    if (ctx->pc == 0x226254u) {
        ctx->pc = 0x226254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226250u;
        // 0x226254: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226258u;
        goto label_226258;
    }
    ctx->pc = 0x226250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226258u);
        ctx->pc = 0x226254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226250u;
        // 0x226254: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226250u, 0x226258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226258u;
label_226258:
    // 0x226258: 0x10000004  b           . + 4 + (0x4 << 2)
label_22625c:
    if (ctx->pc == 0x22625Cu) {
        ctx->pc = 0x22625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226258u;
        // 0x22625c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226260u;
        goto label_226260;
    }
    ctx->pc = 0x226258u;
    {
        const bool branch_taken_0x226258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226258u;
        // 0x22625c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226258) {
            ctx->pc = 0x22626Cu;
            goto label_22626c;
        }
    }
    ctx->pc = 0x226260u;
label_226260:
    // 0x226260: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x226260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_226264:
    // 0x226264: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x226264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_226268:
    // 0x226268: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x226268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_22626c:
    // 0x22626c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226270:
    // 0x226270: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x226270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226274:
    // 0x226274: 0x40f809  jalr        $v0
label_226278:
    if (ctx->pc == 0x226278u) {
        ctx->pc = 0x226278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226274u;
        // 0x226278: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22627Cu;
        goto label_22627c;
    }
    ctx->pc = 0x226274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22627Cu);
        ctx->pc = 0x226278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226274u;
        // 0x226278: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226274u, 0x22627Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22627Cu;
label_22627c:
    // 0x22627c: 0x8e862b04  lw          $a2, 0x2B04($s4)
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_226280:
    // 0x226280: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x226280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_226284:
    // 0x226284: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x226284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_226288:
    // 0x226288: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x226288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_22628c:
    // 0x22628c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x22628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_226290:
    // 0x226290: 0x60f809  jalr        $v1
label_226294:
    if (ctx->pc == 0x226294u) {
        ctx->pc = 0x226294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226290u;
        // 0x226294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226298u;
        goto label_226298;
    }
    ctx->pc = 0x226290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x226298u);
        ctx->pc = 0x226294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226290u;
        // 0x226294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226290u, 0x226298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226298u;
label_226298:
    // 0x226298: 0x8e872b04  lw          $a3, 0x2B04($s4)
    ctx->pc = 0x226298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_22629c:
    // 0x22629c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2262a0:
    // 0x2262a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2262a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2262a4:
    // 0x2262a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2262a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2262a8:
    // 0x2262a8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2262a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2262ac:
    // 0x2262ac: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2262acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2262b0:
    // 0x2262b0: 0x60f809  jalr        $v1
label_2262b4:
    if (ctx->pc == 0x2262B4u) {
        ctx->pc = 0x2262B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262B0u;
        // 0x2262b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2262B8u;
        goto label_2262b8;
    }
    ctx->pc = 0x2262B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2262B8u);
        ctx->pc = 0x2262B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262B0u;
        // 0x2262b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2262B0u, 0x2262B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2262B8u;
label_2262b8:
    // 0x2262b8: 0xae40059c  sw          $zero, 0x59C($s2)
    ctx->pc = 0x2262b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1436), GPR_U32(ctx, 0));
label_2262bc:
    // 0x2262bc: 0xae4005a0  sw          $zero, 0x5A0($s2)
    ctx->pc = 0x2262bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1440), GPR_U32(ctx, 0));
label_2262c0:
    // 0x2262c0: 0xae400590  sw          $zero, 0x590($s2)
    ctx->pc = 0x2262c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1424), GPR_U32(ctx, 0));
label_2262c4:
    // 0x2262c4: 0xae400594  sw          $zero, 0x594($s2)
    ctx->pc = 0x2262c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1428), GPR_U32(ctx, 0));
label_2262c8:
    // 0x2262c8: 0xae400598  sw          $zero, 0x598($s2)
    ctx->pc = 0x2262c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1432), GPR_U32(ctx, 0));
label_2262cc:
    // 0x2262cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2262ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2262d0:
    // 0x2262d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2262d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2262d4:
    // 0x2262d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2262d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2262d8:
    // 0x2262d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2262d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2262dc:
    // 0x2262dc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2262dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2262e0:
    // 0x2262e0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2262e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2262e4:
    // 0x2262e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2262e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2262e8:
    // 0x2262e8: 0x3e00008  jr          $ra
label_2262ec:
    if (ctx->pc == 0x2262ECu) {
        ctx->pc = 0x2262ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262E8u;
        // 0x2262ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2262F0u;
        goto label_fallthrough_0x2262e8;
    }
    ctx->pc = 0x2262E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2262ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262E8u;
        // 0x2262ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2262E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2262e8:
    ctx->pc = 0x2262F0u;
}
