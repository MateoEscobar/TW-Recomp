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

// Function: sub_003213D8
// Address: 0x3213d8 - 0x3214d0
void sub_003213D8_0x3213d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003213D8_0x3213d8");
#endif

    switch (ctx->pc) {
        case 0x3213d8u: goto label_3213d8;
        case 0x3213dcu: goto label_3213dc;
        case 0x3213e0u: goto label_3213e0;
        case 0x3213e4u: goto label_3213e4;
        case 0x3213e8u: goto label_3213e8;
        case 0x3213ecu: goto label_3213ec;
        case 0x3213f0u: goto label_3213f0;
        case 0x3213f4u: goto label_3213f4;
        case 0x3213f8u: goto label_3213f8;
        case 0x3213fcu: goto label_3213fc;
        case 0x321400u: goto label_321400;
        case 0x321404u: goto label_321404;
        case 0x321408u: goto label_321408;
        case 0x32140cu: goto label_32140c;
        case 0x321410u: goto label_321410;
        case 0x321414u: goto label_321414;
        case 0x321418u: goto label_321418;
        case 0x32141cu: goto label_32141c;
        case 0x321420u: goto label_321420;
        case 0x321424u: goto label_321424;
        case 0x321428u: goto label_321428;
        case 0x32142cu: goto label_32142c;
        case 0x321430u: goto label_321430;
        case 0x321434u: goto label_321434;
        case 0x321438u: goto label_321438;
        case 0x32143cu: goto label_32143c;
        case 0x321440u: goto label_321440;
        case 0x321444u: goto label_321444;
        case 0x321448u: goto label_321448;
        case 0x32144cu: goto label_32144c;
        case 0x321450u: goto label_321450;
        case 0x321454u: goto label_321454;
        case 0x321458u: goto label_321458;
        case 0x32145cu: goto label_32145c;
        case 0x321460u: goto label_321460;
        case 0x321464u: goto label_321464;
        case 0x321468u: goto label_321468;
        case 0x32146cu: goto label_32146c;
        case 0x321470u: goto label_321470;
        case 0x321474u: goto label_321474;
        case 0x321478u: goto label_321478;
        case 0x32147cu: goto label_32147c;
        case 0x321480u: goto label_321480;
        case 0x321484u: goto label_321484;
        case 0x321488u: goto label_321488;
        case 0x32148cu: goto label_32148c;
        case 0x321490u: goto label_321490;
        case 0x321494u: goto label_321494;
        case 0x321498u: goto label_321498;
        case 0x32149cu: goto label_32149c;
        case 0x3214a0u: goto label_3214a0;
        case 0x3214a4u: goto label_3214a4;
        case 0x3214a8u: goto label_3214a8;
        case 0x3214acu: goto label_3214ac;
        case 0x3214b0u: goto label_3214b0;
        case 0x3214b4u: goto label_3214b4;
        case 0x3214b8u: goto label_3214b8;
        case 0x3214bcu: goto label_3214bc;
        case 0x3214c0u: goto label_3214c0;
        case 0x3214c4u: goto label_3214c4;
        case 0x3214c8u: goto label_3214c8;
        case 0x3214ccu: goto label_3214cc;
        default: break;
    }

    ctx->pc = 0x3213d8u;

label_3213d8:
    // 0x3213d8: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x3213d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_3213dc:
    // 0x3213dc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x3213dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3213e0:
    // 0x3213e0: 0x8d221650  lw          $v0, 0x1650($t1)
    ctx->pc = 0x3213e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 5712)));
label_3213e4:
    // 0x3213e4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3213e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3213e8:
    // 0x3213e8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3213e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_3213ec:
    // 0x3213ec: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x3213ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_3213f0:
    // 0x3213f0: 0x484018  mult        $t0, $v0, $t0
    ctx->pc = 0x3213f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3213f4:
    // 0x3213f4: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x3213f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3213f8:
    // 0x3213f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3213f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3213fc:
    // 0x3213fc: 0x24e7b318  addiu       $a3, $a3, -0x4CE8
    ctx->pc = 0x3213fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947608));
label_321400:
    // 0x321400: 0x246355d8  addiu       $v1, $v1, 0x55D8
    ctx->pc = 0x321400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21976));
label_321404:
    // 0x321404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_321408:
    // 0x321408: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x321408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_32140c:
    // 0x32140c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x32140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_321410:
    // 0x321410: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x321410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_321414:
    // 0x321414: 0x1079821  addu        $s3, $t0, $a3
    ctx->pc = 0x321414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_321418:
    // 0x321418: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x321418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_32141c:
    // 0x32141c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32141cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_321420:
    // 0x321420: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x321420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_321424:
    // 0x321424: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x321424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321428:
    // 0x321428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32142c:
    // 0x32142c: 0xad221650  sw          $v0, 0x1650($t1)
    ctx->pc = 0x32142cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 5712), GPR_U32(ctx, 2));
label_321430:
    // 0x321430: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x321430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
label_321434:
    // 0x321434: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x321434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_321438:
    // 0x321438: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_32143c:
    if (ctx->pc == 0x32143Cu) {
        ctx->pc = 0x32143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321438u;
        // 0x32143c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321440u;
        goto label_321440;
    }
    ctx->pc = 0x321438u;
    {
        const bool branch_taken_0x321438 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321438u;
        // 0x32143c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321438) {
            ctx->pc = 0x32147Cu;
            goto label_32147c;
        }
    }
    ctx->pc = 0x321440u;
label_321440:
    // 0x321440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321444:
    // 0x321444: 0x26710008  addiu       $s1, $s3, 0x8
    ctx->pc = 0x321444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_321448:
    // 0x321448: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x321448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32144c:
    // 0x32144c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32144cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_321450:
    // 0x321450: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x321450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_321454:
    // 0x321454: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x321454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_321458:
    // 0x321458: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x321458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32145c:
    // 0x32145c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x32145cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_321460:
    // 0x321460: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x321460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_321464:
    // 0x321464: 0x40f809  jalr        $v0
label_321468:
    if (ctx->pc == 0x321468u) {
        ctx->pc = 0x321468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321464u;
        // 0x321468: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32146Cu;
        goto label_32146c;
    }
    ctx->pc = 0x321464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32146Cu);
        ctx->pc = 0x321468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321464u;
        // 0x321468: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321464u, 0x32146Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32146Cu;
label_32146c:
    // 0x32146c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32146cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_321470:
    // 0x321470: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x321470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_321474:
    // 0x321474: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_321478:
    if (ctx->pc == 0x321478u) {
        ctx->pc = 0x321478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321474u;
        // 0x321478: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32147Cu;
        goto label_32147c;
    }
    ctx->pc = 0x321474u;
    {
        const bool branch_taken_0x321474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321474u;
        // 0x321478: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321474) {
            ctx->pc = 0x321448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321448;
        }
    }
    ctx->pc = 0x32147Cu;
label_32147c:
    // 0x32147c: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x32147cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_321480:
    // 0x321480: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_321484:
    if (ctx->pc == 0x321484u) {
        ctx->pc = 0x321484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321480u;
        // 0x321484: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321488u;
        goto label_321488;
    }
    ctx->pc = 0x321480u;
    {
        const bool branch_taken_0x321480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321480u;
        // 0x321484: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321480) {
            ctx->pc = 0x3214B0u;
            goto label_3214b0;
        }
    }
    ctx->pc = 0x321488u;
label_321488:
    // 0x321488: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x321488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32148c:
    // 0x32148c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_321490:
    // 0x321490: 0x8c63bd30  lw          $v1, -0x42D0($v1)
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_321494:
    // 0x321494: 0x534021  addu        $t0, $v0, $s3
    ctx->pc = 0x321494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_321498:
    // 0x321498: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x321498u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_32149c:
    // 0x32149c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32149cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3214a0:
    // 0x3214a0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3214a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3214a4:
    // 0x3214a4: 0x0  nop
    ctx->pc = 0x3214a4u;
    // NOP
label_3214a8:
    // 0x3214a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_3214ac:
    if (ctx->pc == 0x3214ACu) {
        ctx->pc = 0x3214ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214A8u;
        // 0x3214ac: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214B0u;
        goto label_3214b0;
    }
    ctx->pc = 0x3214A8u;
    {
        const bool branch_taken_0x3214a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3214ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214A8u;
        // 0x3214ac: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214a8) {
            ctx->pc = 0x321498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321498;
        }
    }
    ctx->pc = 0x3214B0u;
label_3214b0:
    // 0x3214b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3214b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3214b4:
    // 0x3214b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3214b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3214b8:
    // 0x3214b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3214b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3214bc:
    // 0x3214bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3214bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3214c0:
    // 0x3214c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3214c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3214c4:
    // 0x3214c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3214c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3214c8:
    // 0x3214c8: 0x3e00008  jr          $ra
label_3214cc:
    if (ctx->pc == 0x3214CCu) {
        ctx->pc = 0x3214CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214C8u;
        // 0x3214cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214D0u;
        goto label_fallthrough_0x3214c8;
    }
    ctx->pc = 0x3214C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3214CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214C8u;
        // 0x3214cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3214c8:
    ctx->pc = 0x3214D0u;
}
