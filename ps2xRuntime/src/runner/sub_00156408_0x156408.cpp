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

// Function: sub_00156408
// Address: 0x156408 - 0x156540
void sub_00156408_0x156408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156408_0x156408");
#endif

    switch (ctx->pc) {
        case 0x156408u: goto label_156408;
        case 0x15640cu: goto label_15640c;
        case 0x156410u: goto label_156410;
        case 0x156414u: goto label_156414;
        case 0x156418u: goto label_156418;
        case 0x15641cu: goto label_15641c;
        case 0x156420u: goto label_156420;
        case 0x156424u: goto label_156424;
        case 0x156428u: goto label_156428;
        case 0x15642cu: goto label_15642c;
        case 0x156430u: goto label_156430;
        case 0x156434u: goto label_156434;
        case 0x156438u: goto label_156438;
        case 0x15643cu: goto label_15643c;
        case 0x156440u: goto label_156440;
        case 0x156444u: goto label_156444;
        case 0x156448u: goto label_156448;
        case 0x15644cu: goto label_15644c;
        case 0x156450u: goto label_156450;
        case 0x156454u: goto label_156454;
        case 0x156458u: goto label_156458;
        case 0x15645cu: goto label_15645c;
        case 0x156460u: goto label_156460;
        case 0x156464u: goto label_156464;
        case 0x156468u: goto label_156468;
        case 0x15646cu: goto label_15646c;
        case 0x156470u: goto label_156470;
        case 0x156474u: goto label_156474;
        case 0x156478u: goto label_156478;
        case 0x15647cu: goto label_15647c;
        case 0x156480u: goto label_156480;
        case 0x156484u: goto label_156484;
        case 0x156488u: goto label_156488;
        case 0x15648cu: goto label_15648c;
        case 0x156490u: goto label_156490;
        case 0x156494u: goto label_156494;
        case 0x156498u: goto label_156498;
        case 0x15649cu: goto label_15649c;
        case 0x1564a0u: goto label_1564a0;
        case 0x1564a4u: goto label_1564a4;
        case 0x1564a8u: goto label_1564a8;
        case 0x1564acu: goto label_1564ac;
        case 0x1564b0u: goto label_1564b0;
        case 0x1564b4u: goto label_1564b4;
        case 0x1564b8u: goto label_1564b8;
        case 0x1564bcu: goto label_1564bc;
        case 0x1564c0u: goto label_1564c0;
        case 0x1564c4u: goto label_1564c4;
        case 0x1564c8u: goto label_1564c8;
        case 0x1564ccu: goto label_1564cc;
        case 0x1564d0u: goto label_1564d0;
        case 0x1564d4u: goto label_1564d4;
        case 0x1564d8u: goto label_1564d8;
        case 0x1564dcu: goto label_1564dc;
        case 0x1564e0u: goto label_1564e0;
        case 0x1564e4u: goto label_1564e4;
        case 0x1564e8u: goto label_1564e8;
        case 0x1564ecu: goto label_1564ec;
        case 0x1564f0u: goto label_1564f0;
        case 0x1564f4u: goto label_1564f4;
        case 0x1564f8u: goto label_1564f8;
        case 0x1564fcu: goto label_1564fc;
        case 0x156500u: goto label_156500;
        case 0x156504u: goto label_156504;
        case 0x156508u: goto label_156508;
        case 0x15650cu: goto label_15650c;
        case 0x156510u: goto label_156510;
        case 0x156514u: goto label_156514;
        case 0x156518u: goto label_156518;
        case 0x15651cu: goto label_15651c;
        case 0x156520u: goto label_156520;
        case 0x156524u: goto label_156524;
        case 0x156528u: goto label_156528;
        case 0x15652cu: goto label_15652c;
        case 0x156530u: goto label_156530;
        case 0x156534u: goto label_156534;
        case 0x156538u: goto label_156538;
        case 0x15653cu: goto label_15653c;
        default: break;
    }

    ctx->pc = 0x156408u;

label_156408:
    // 0x156408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x156408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15640c:
    // 0x15640c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_156410:
    // 0x156410: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x156410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_156414:
    // 0x156414: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x156414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_156418:
    // 0x156418: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x156418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_15641c:
    // 0x15641c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_156420:
    // 0x156420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_156424:
    // 0x156424: 0xc047ab8  jal         func_11EAE0
label_156428:
    if (ctx->pc == 0x156428u) {
        ctx->pc = 0x15642Cu;
        goto label_15642c;
    }
    ctx->pc = 0x156424u;
    SET_GPR_U32(ctx, 31, 0x15642Cu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x156424u, 0x15642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15642Cu;
label_15642c:
    // 0x15642c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15642cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156430:
    // 0x156430: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_156434:
    if (ctx->pc == 0x156434u) {
        ctx->pc = 0x156434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156430u;
        // 0x156434: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156438u;
        goto label_156438;
    }
    ctx->pc = 0x156430u;
    {
        const bool branch_taken_0x156430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x156434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156430u;
        // 0x156434: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156430) {
            ctx->pc = 0x156520u;
            goto label_156520;
        }
    }
    ctx->pc = 0x156438u;
label_156438:
    // 0x156438: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_15643c:
    if (ctx->pc == 0x15643Cu) {
        ctx->pc = 0x15643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156438u;
        // 0x15643c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156440u;
        goto label_156440;
    }
    ctx->pc = 0x156438u;
    {
        const bool branch_taken_0x156438 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156438u;
        // 0x15643c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156438) {
            ctx->pc = 0x156470u;
            goto label_156470;
        }
    }
    ctx->pc = 0x156440u;
label_156440:
    // 0x156440: 0x8e86cdb4  lw          $a2, -0x324C($s4)
    ctx->pc = 0x156440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
label_156444:
    // 0x156444: 0x0  nop
    ctx->pc = 0x156444u;
    // NOP
label_156448:
    // 0x156448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15644c:
    // 0x15644c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15644cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_156450:
    // 0x156450: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x156450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_156454:
    // 0x156454: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x156454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_156458:
    // 0x156458: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x156458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_15645c:
    // 0x15645c: 0x40f809  jalr        $v0
label_156460:
    if (ctx->pc == 0x156460u) {
        ctx->pc = 0x156460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15645Cu;
        // 0x156460: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156464u;
        goto label_156464;
    }
    ctx->pc = 0x15645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156464u);
        ctx->pc = 0x156460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15645Cu;
        // 0x156460: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15645Cu, 0x156464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156464u;
label_156464:
    // 0x156464: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x156464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_156468:
    // 0x156468: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_15646c:
    if (ctx->pc == 0x15646Cu) {
        ctx->pc = 0x15646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156468u;
        // 0x15646c: 0x8e86cdb4  lw          $a2, -0x324C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156470u;
        goto label_156470;
    }
    ctx->pc = 0x156468u;
    {
        const bool branch_taken_0x156468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156468u;
        // 0x15646c: 0x8e86cdb4  lw          $a2, -0x324C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156468) {
            ctx->pc = 0x156448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156448;
        }
    }
    ctx->pc = 0x156470u;
label_156470:
    // 0x156470: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_156474:
    if (ctx->pc == 0x156474u) {
        ctx->pc = 0x156474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156470u;
        // 0x156474: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156478u;
        goto label_156478;
    }
    ctx->pc = 0x156470u;
    {
        const bool branch_taken_0x156470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x156474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156470u;
        // 0x156474: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156470) {
            ctx->pc = 0x1564B0u;
            goto label_1564b0;
        }
    }
    ctx->pc = 0x156478u;
label_156478:
    // 0x156478: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x156478u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_15647c:
    // 0x15647c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15647cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_156480:
    // 0x156480: 0x8e64cce4  lw          $a0, -0x331C($s3)
    ctx->pc = 0x156480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
label_156484:
    // 0x156484: 0x0  nop
    ctx->pc = 0x156484u;
    // NOP
label_156488:
    // 0x156488: 0xc05fa98  jal         func_17EA60
label_15648c:
    if (ctx->pc == 0x15648Cu) {
        ctx->pc = 0x15648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156488u;
        // 0x15648c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156490u;
        goto label_156490;
    }
    ctx->pc = 0x156488u;
    SET_GPR_U32(ctx, 31, 0x156490u);
    ctx->pc = 0x15648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156488u;
    // 0x15648c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA60u, 0x156488u, 0x156490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156490u;
label_156490:
    // 0x156490: 0x8e4247c4  lw          $v0, 0x47C4($s2)
    ctx->pc = 0x156490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
label_156494:
    // 0x156494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156498:
    // 0x156498: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15649c:
    // 0x15649c: 0xc10342a  jal         func_40D0A8
label_1564a0:
    if (ctx->pc == 0x1564A0u) {
        ctx->pc = 0x1564A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15649Cu;
        // 0x1564a0: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564A4u;
        goto label_1564a4;
    }
    ctx->pc = 0x15649Cu;
    SET_GPR_U32(ctx, 31, 0x1564A4u);
    ctx->pc = 0x1564A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15649Cu;
    // 0x1564a0: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D0A8u, 0x15649Cu, 0x1564A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564A4u;
label_1564a4:
    // 0x1564a4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1564a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1564a8:
    // 0x1564a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1564ac:
    if (ctx->pc == 0x1564ACu) {
        ctx->pc = 0x1564ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A8u;
        // 0x1564ac: 0x8e64cce4  lw          $a0, -0x331C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564B0u;
        goto label_1564b0;
    }
    ctx->pc = 0x1564A8u;
    {
        const bool branch_taken_0x1564a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1564a8) {
            ctx->pc = 0x1564ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1564A8u;
            // 0x1564ac: 0x8e64cce4  lw          $a0, -0x331C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156488;
        }
    }
    ctx->pc = 0x1564B0u;
label_1564b0:
    // 0x1564b0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1564b4:
    if (ctx->pc == 0x1564B4u) {
        ctx->pc = 0x1564B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564B0u;
        // 0x1564b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564B8u;
        goto label_1564b8;
    }
    ctx->pc = 0x1564B0u;
    {
        const bool branch_taken_0x1564b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564B0u;
        // 0x1564b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564b0) {
            ctx->pc = 0x1564D8u;
            goto label_1564d8;
        }
    }
    ctx->pc = 0x1564B8u;
label_1564b8:
    // 0x1564b8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1564b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1564bc:
    // 0x1564bc: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x1564bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
label_1564c0:
    // 0x1564c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1564c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1564c4:
    // 0x1564c4: 0xc103a36  jal         func_40E8D8
label_1564c8:
    if (ctx->pc == 0x1564C8u) {
        ctx->pc = 0x1564C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564C4u;
        // 0x1564c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564CCu;
        goto label_1564cc;
    }
    ctx->pc = 0x1564C4u;
    SET_GPR_U32(ctx, 31, 0x1564CCu);
    ctx->pc = 0x1564C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564C4u;
    // 0x1564c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D8u, 0x1564C4u, 0x1564CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564CCu;
label_1564cc:
    // 0x1564cc: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1564ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1564d0:
    // 0x1564d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1564d4:
    if (ctx->pc == 0x1564D4u) {
        ctx->pc = 0x1564D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564D0u;
        // 0x1564d4: 0x8e4447c4  lw          $a0, 0x47C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564D8u;
        goto label_1564d8;
    }
    ctx->pc = 0x1564D0u;
    {
        const bool branch_taken_0x1564d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564D0u;
        // 0x1564d4: 0x8e4447c4  lw          $a0, 0x47C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564d0) {
            ctx->pc = 0x1564C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1564c0;
        }
    }
    ctx->pc = 0x1564D8u;
label_1564d8:
    // 0x1564d8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1564dc:
    if (ctx->pc == 0x1564DCu) {
        ctx->pc = 0x1564DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564D8u;
        // 0x1564dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564E0u;
        goto label_1564e0;
    }
    ctx->pc = 0x1564D8u;
    {
        const bool branch_taken_0x1564d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564D8u;
        // 0x1564dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564d8) {
            ctx->pc = 0x156500u;
            goto label_156500;
        }
    }
    ctx->pc = 0x1564E0u;
label_1564e0:
    // 0x1564e0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1564e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1564e4:
    // 0x1564e4: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x1564e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
label_1564e8:
    // 0x1564e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1564e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1564ec:
    // 0x1564ec: 0xc0616ce  jal         func_185B38
label_1564f0:
    if (ctx->pc == 0x1564F0u) {
        ctx->pc = 0x1564F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564ECu;
        // 0x1564f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564F4u;
        goto label_1564f4;
    }
    ctx->pc = 0x1564ECu;
    SET_GPR_U32(ctx, 31, 0x1564F4u);
    ctx->pc = 0x1564F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564ECu;
    // 0x1564f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185B38u, 0x1564ECu, 0x1564F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564F4u;
label_1564f4:
    // 0x1564f4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1564f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1564f8:
    // 0x1564f8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
label_1564fc:
    if (ctx->pc == 0x1564FCu) {
        ctx->pc = 0x1564FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564F8u;
        // 0x1564fc: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156500u;
        goto label_156500;
    }
    ctx->pc = 0x1564F8u;
    {
        const bool branch_taken_0x1564f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1564f8) {
            ctx->pc = 0x1564FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1564F8u;
            // 0x1564fc: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1564E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1564e8;
        }
    }
    ctx->pc = 0x156500u;
label_156500:
    // 0x156500: 0xc05ecb8  jal         func_17B2E0
label_156504:
    if (ctx->pc == 0x156504u) {
        ctx->pc = 0x156508u;
        goto label_156508;
    }
    ctx->pc = 0x156500u;
    SET_GPR_U32(ctx, 31, 0x156508u);
    ctx->pc = 0x17B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B2E0u, 0x156500u, 0x156508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156508u;
label_156508:
    // 0x156508: 0x8e85cdb4  lw          $a1, -0x324C($s4)
    ctx->pc = 0x156508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
label_15650c:
    // 0x15650c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_156510:
    // 0x156510: 0x84440118  lh          $a0, 0x118($v0)
    ctx->pc = 0x156510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_156514:
    // 0x156514: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x156514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_156518:
    // 0x156518: 0x60f809  jalr        $v1
label_15651c:
    if (ctx->pc == 0x15651Cu) {
        ctx->pc = 0x15651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156518u;
        // 0x15651c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156520u;
        goto label_156520;
    }
    ctx->pc = 0x156518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156520u);
        ctx->pc = 0x15651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156518u;
        // 0x15651c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156518u, 0x156520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156520u;
label_156520:
    // 0x156520: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x156520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_156524:
    // 0x156524: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x156524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_156528:
    // 0x156528: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x156528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15652c:
    // 0x15652c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15652cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156530:
    // 0x156530: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x156530u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156534:
    // 0x156534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156538:
    // 0x156538: 0x3e00008  jr          $ra
label_15653c:
    if (ctx->pc == 0x15653Cu) {
        ctx->pc = 0x15653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156538u;
        // 0x15653c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156540u;
        goto label_fallthrough_0x156538;
    }
    ctx->pc = 0x156538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156538u;
        // 0x15653c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156538:
    ctx->pc = 0x156540u;
}
