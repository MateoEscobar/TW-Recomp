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

// Function: sub_002E63E0
// Address: 0x2e63e0 - 0x2e65b0
void sub_002E63E0_0x2e63e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E63E0_0x2e63e0");
#endif

    switch (ctx->pc) {
        case 0x2e63e0u: goto label_2e63e0;
        case 0x2e63e4u: goto label_2e63e4;
        case 0x2e63e8u: goto label_2e63e8;
        case 0x2e63ecu: goto label_2e63ec;
        case 0x2e63f0u: goto label_2e63f0;
        case 0x2e63f4u: goto label_2e63f4;
        case 0x2e63f8u: goto label_2e63f8;
        case 0x2e63fcu: goto label_2e63fc;
        case 0x2e6400u: goto label_2e6400;
        case 0x2e6404u: goto label_2e6404;
        case 0x2e6408u: goto label_2e6408;
        case 0x2e640cu: goto label_2e640c;
        case 0x2e6410u: goto label_2e6410;
        case 0x2e6414u: goto label_2e6414;
        case 0x2e6418u: goto label_2e6418;
        case 0x2e641cu: goto label_2e641c;
        case 0x2e6420u: goto label_2e6420;
        case 0x2e6424u: goto label_2e6424;
        case 0x2e6428u: goto label_2e6428;
        case 0x2e642cu: goto label_2e642c;
        case 0x2e6430u: goto label_2e6430;
        case 0x2e6434u: goto label_2e6434;
        case 0x2e6438u: goto label_2e6438;
        case 0x2e643cu: goto label_2e643c;
        case 0x2e6440u: goto label_2e6440;
        case 0x2e6444u: goto label_2e6444;
        case 0x2e6448u: goto label_2e6448;
        case 0x2e644cu: goto label_2e644c;
        case 0x2e6450u: goto label_2e6450;
        case 0x2e6454u: goto label_2e6454;
        case 0x2e6458u: goto label_2e6458;
        case 0x2e645cu: goto label_2e645c;
        case 0x2e6460u: goto label_2e6460;
        case 0x2e6464u: goto label_2e6464;
        case 0x2e6468u: goto label_2e6468;
        case 0x2e646cu: goto label_2e646c;
        case 0x2e6470u: goto label_2e6470;
        case 0x2e6474u: goto label_2e6474;
        case 0x2e6478u: goto label_2e6478;
        case 0x2e647cu: goto label_2e647c;
        case 0x2e6480u: goto label_2e6480;
        case 0x2e6484u: goto label_2e6484;
        case 0x2e6488u: goto label_2e6488;
        case 0x2e648cu: goto label_2e648c;
        case 0x2e6490u: goto label_2e6490;
        case 0x2e6494u: goto label_2e6494;
        case 0x2e6498u: goto label_2e6498;
        case 0x2e649cu: goto label_2e649c;
        case 0x2e64a0u: goto label_2e64a0;
        case 0x2e64a4u: goto label_2e64a4;
        case 0x2e64a8u: goto label_2e64a8;
        case 0x2e64acu: goto label_2e64ac;
        case 0x2e64b0u: goto label_2e64b0;
        case 0x2e64b4u: goto label_2e64b4;
        case 0x2e64b8u: goto label_2e64b8;
        case 0x2e64bcu: goto label_2e64bc;
        case 0x2e64c0u: goto label_2e64c0;
        case 0x2e64c4u: goto label_2e64c4;
        case 0x2e64c8u: goto label_2e64c8;
        case 0x2e64ccu: goto label_2e64cc;
        case 0x2e64d0u: goto label_2e64d0;
        case 0x2e64d4u: goto label_2e64d4;
        case 0x2e64d8u: goto label_2e64d8;
        case 0x2e64dcu: goto label_2e64dc;
        case 0x2e64e0u: goto label_2e64e0;
        case 0x2e64e4u: goto label_2e64e4;
        case 0x2e64e8u: goto label_2e64e8;
        case 0x2e64ecu: goto label_2e64ec;
        case 0x2e64f0u: goto label_2e64f0;
        case 0x2e64f4u: goto label_2e64f4;
        case 0x2e64f8u: goto label_2e64f8;
        case 0x2e64fcu: goto label_2e64fc;
        case 0x2e6500u: goto label_2e6500;
        case 0x2e6504u: goto label_2e6504;
        case 0x2e6508u: goto label_2e6508;
        case 0x2e650cu: goto label_2e650c;
        case 0x2e6510u: goto label_2e6510;
        case 0x2e6514u: goto label_2e6514;
        case 0x2e6518u: goto label_2e6518;
        case 0x2e651cu: goto label_2e651c;
        case 0x2e6520u: goto label_2e6520;
        case 0x2e6524u: goto label_2e6524;
        case 0x2e6528u: goto label_2e6528;
        case 0x2e652cu: goto label_2e652c;
        case 0x2e6530u: goto label_2e6530;
        case 0x2e6534u: goto label_2e6534;
        case 0x2e6538u: goto label_2e6538;
        case 0x2e653cu: goto label_2e653c;
        case 0x2e6540u: goto label_2e6540;
        case 0x2e6544u: goto label_2e6544;
        case 0x2e6548u: goto label_2e6548;
        case 0x2e654cu: goto label_2e654c;
        case 0x2e6550u: goto label_2e6550;
        case 0x2e6554u: goto label_2e6554;
        case 0x2e6558u: goto label_2e6558;
        case 0x2e655cu: goto label_2e655c;
        case 0x2e6560u: goto label_2e6560;
        case 0x2e6564u: goto label_2e6564;
        case 0x2e6568u: goto label_2e6568;
        case 0x2e656cu: goto label_2e656c;
        case 0x2e6570u: goto label_2e6570;
        case 0x2e6574u: goto label_2e6574;
        case 0x2e6578u: goto label_2e6578;
        case 0x2e657cu: goto label_2e657c;
        case 0x2e6580u: goto label_2e6580;
        case 0x2e6584u: goto label_2e6584;
        case 0x2e6588u: goto label_2e6588;
        case 0x2e658cu: goto label_2e658c;
        case 0x2e6590u: goto label_2e6590;
        case 0x2e6594u: goto label_2e6594;
        case 0x2e6598u: goto label_2e6598;
        case 0x2e659cu: goto label_2e659c;
        case 0x2e65a0u: goto label_2e65a0;
        case 0x2e65a4u: goto label_2e65a4;
        case 0x2e65a8u: goto label_2e65a8;
        case 0x2e65acu: goto label_2e65ac;
        default: break;
    }

    ctx->pc = 0x2e63e0u;

label_2e63e0:
    // 0x2e63e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e63e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e63e4:
    // 0x2e63e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e63e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2e63e8:
    // 0x2e63e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e63e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2e63ec:
    // 0x2e63ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e63ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e63f0:
    // 0x2e63f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e63f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2e63f4:
    // 0x2e63f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e63f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e63f8:
    // 0x2e63f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e63f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e63fc:
    // 0x2e63fc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2e63fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2e6400:
    // 0x2e6400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e6400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e6404:
    // 0x2e6404: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e6404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6408:
    // 0x2e6408: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e6408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e640c:
    // 0x2e640c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2e640cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6410:
    // 0x2e6410: 0x54720060  bnel        $v1, $s2, . + 4 + (0x60 << 2)
label_2e6414:
    if (ctx->pc == 0x2E6414u) {
        ctx->pc = 0x2E6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6410u;
        // 0x2e6414: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6418u;
        goto label_2e6418;
    }
    ctx->pc = 0x2E6410u;
    {
        const bool branch_taken_0x2e6410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e6410) {
            ctx->pc = 0x2E6414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6410u;
            // 0x2e6414: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6594u;
            goto label_2e6594;
        }
    }
    ctx->pc = 0x2E6418u;
label_2e6418:
    // 0x2e6418: 0xc08a096  jal         func_228258
label_2e641c:
    if (ctx->pc == 0x2E641Cu) {
        ctx->pc = 0x2E641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6418u;
        // 0x2e641c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6420u;
        goto label_2e6420;
    }
    ctx->pc = 0x2E6418u;
    SET_GPR_U32(ctx, 31, 0x2E6420u);
    ctx->pc = 0x2E641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6418u;
    // 0x2e641c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2E6418u, 0x2E6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6420u;
label_2e6420:
    // 0x2e6420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e6420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6424:
    // 0x2e6424: 0x1043005a  beq         $v0, $v1, . + 4 + (0x5A << 2)
label_2e6428:
    if (ctx->pc == 0x2E6428u) {
        ctx->pc = 0x2E6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6424u;
        // 0x2e6428: 0x26450070  addiu       $a1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E642Cu;
        goto label_2e642c;
    }
    ctx->pc = 0x2E6424u;
    {
        const bool branch_taken_0x2e6424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6424u;
        // 0x2e6428: 0x26450070  addiu       $a1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6424) {
            ctx->pc = 0x2E6590u;
            goto label_2e6590;
        }
    }
    ctx->pc = 0x2E642Cu;
label_2e642c:
    // 0x2e642c: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2e642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2e6430:
    // 0x2e6430: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2e6430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2e6434:
    // 0x2e6434: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2e6434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2e6438:
    // 0x2e6438: 0x40f809  jalr        $v0
label_2e643c:
    if (ctx->pc == 0x2E643Cu) {
        ctx->pc = 0x2E643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6438u;
        // 0x2e643c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6440u;
        goto label_2e6440;
    }
    ctx->pc = 0x2E6438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6440u);
        ctx->pc = 0x2E643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6438u;
        // 0x2e643c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6438u, 0x2E6440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6440u;
label_2e6440:
    // 0x2e6440: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
label_2e6444:
    if (ctx->pc == 0x2E6444u) {
        ctx->pc = 0x2E6444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6440u;
        // 0x2e6444: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6448u;
        goto label_2e6448;
    }
    ctx->pc = 0x2E6440u;
    {
        const bool branch_taken_0x2e6440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6440) {
            ctx->pc = 0x2E6444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6440u;
            // 0x2e6444: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6594u;
            goto label_2e6594;
        }
    }
    ctx->pc = 0x2E6448u;
label_2e6448:
    // 0x2e6448: 0xc08a61a  jal         func_229868
label_2e644c:
    if (ctx->pc == 0x2E644Cu) {
        ctx->pc = 0x2E644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6448u;
        // 0x2e644c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6450u;
        goto label_2e6450;
    }
    ctx->pc = 0x2E6448u;
    SET_GPR_U32(ctx, 31, 0x2E6450u);
    ctx->pc = 0x2E644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6448u;
    // 0x2e644c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E6448u, 0x2E6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6450u;
label_2e6450:
    // 0x2e6450: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6454:
    // 0x2e6454: 0x5220004f  beql        $s1, $zero, . + 4 + (0x4F << 2)
label_2e6458:
    if (ctx->pc == 0x2E6458u) {
        ctx->pc = 0x2E6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6454u;
        // 0x2e6458: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E645Cu;
        goto label_2e645c;
    }
    ctx->pc = 0x2E6454u;
    {
        const bool branch_taken_0x2e6454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6454) {
            ctx->pc = 0x2E6458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6454u;
            // 0x2e6458: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6594u;
            goto label_2e6594;
        }
    }
    ctx->pc = 0x2E645Cu;
label_2e645c:
    // 0x2e645c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2e645cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_2e6460:
    // 0x2e6460: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2e6460u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2e6464:
    // 0x2e6464: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_2e6468:
    if (ctx->pc == 0x2E6468u) {
        ctx->pc = 0x2E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6464u;
        // 0x2e6468: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E646Cu;
        goto label_2e646c;
    }
    ctx->pc = 0x2E6464u;
    {
        const bool branch_taken_0x2e6464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6464) {
            ctx->pc = 0x2E6468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6464u;
            // 0x2e6468: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6594u;
            goto label_2e6594;
        }
    }
    ctx->pc = 0x2E646Cu;
label_2e646c:
    // 0x2e646c: 0xc087502  jal         func_21D408
label_2e6470:
    if (ctx->pc == 0x2E6470u) {
        ctx->pc = 0x2E6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E646Cu;
        // 0x2e6470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6474u;
        goto label_2e6474;
    }
    ctx->pc = 0x2E646Cu;
    SET_GPR_U32(ctx, 31, 0x2E6474u);
    ctx->pc = 0x2E6470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E646Cu;
    // 0x2e6470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E646Cu, 0x2E6474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6474u;
label_2e6474:
    // 0x2e6474: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2e6474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6478:
    // 0x2e6478: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e6478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e647c:
    // 0x2e647c: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x2e647cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2e6480:
    // 0x2e6480: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e6480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e6484:
    // 0x2e6484: 0x80a4002e  lb          $a0, 0x2E($a1)
    ctx->pc = 0x2e6484u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_2e6488:
    // 0x2e6488: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e6488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2e648c:
    // 0x2e648c: 0x1c80000e  bgtz        $a0, . + 4 + (0xE << 2)
label_2e6490:
    if (ctx->pc == 0x2E6490u) {
        ctx->pc = 0x2E6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E648Cu;
        // 0x2e6490: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6494u;
        goto label_2e6494;
    }
    ctx->pc = 0x2E648Cu;
    {
        const bool branch_taken_0x2e648c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2E6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E648Cu;
        // 0x2e6490: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e648c) {
            ctx->pc = 0x2E64C8u;
            goto label_2e64c8;
        }
    }
    ctx->pc = 0x2E6494u;
label_2e6494:
    // 0x2e6494: 0xc0a367c  jal         func_28D9F0
label_2e6498:
    if (ctx->pc == 0x2E6498u) {
        ctx->pc = 0x2E6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6494u;
        // 0x2e6498: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E649Cu;
        goto label_2e649c;
    }
    ctx->pc = 0x2E6494u;
    SET_GPR_U32(ctx, 31, 0x2E649Cu);
    ctx->pc = 0x2E6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6494u;
    // 0x2e6498: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E6494u, 0x2E649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E649Cu;
label_2e649c:
    // 0x2e649c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e649cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e64a0:
    // 0x2e64a0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2e64a4:
    if (ctx->pc == 0x2E64A4u) {
        ctx->pc = 0x2E64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64A0u;
        // 0x2e64a4: 0x8e630030  lw          $v1, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E64A8u;
        goto label_2e64a8;
    }
    ctx->pc = 0x2E64A0u;
    {
        const bool branch_taken_0x2e64a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e64a0) {
            ctx->pc = 0x2E64A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E64A0u;
            // 0x2e64a4: 0x8e630030  lw          $v1, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E64CCu;
            goto label_2e64cc;
        }
    }
    ctx->pc = 0x2E64A8u;
label_2e64a8:
    // 0x2e64a8: 0xc0884f6  jal         func_2213D8
label_2e64ac:
    if (ctx->pc == 0x2E64ACu) {
        ctx->pc = 0x2E64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64A8u;
        // 0x2e64ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E64B0u;
        goto label_2e64b0;
    }
    ctx->pc = 0x2E64A8u;
    SET_GPR_U32(ctx, 31, 0x2E64B0u);
    ctx->pc = 0x2E64ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E64A8u;
    // 0x2e64ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E64A8u, 0x2E64B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64B0u;
label_2e64b0:
    // 0x2e64b0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2e64b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e64b4:
    // 0x2e64b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e64b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e64b8:
    // 0x2e64b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e64b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e64bc:
    // 0x2e64bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e64bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e64c0:
    // 0x2e64c0: 0xc0bf800  jal         func_2FE000
label_2e64c4:
    if (ctx->pc == 0x2E64C4u) {
        ctx->pc = 0x2E64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64C0u;
        // 0x2e64c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E64C8u;
        goto label_2e64c8;
    }
    ctx->pc = 0x2E64C0u;
    SET_GPR_U32(ctx, 31, 0x2E64C8u);
    ctx->pc = 0x2E64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E64C0u;
    // 0x2e64c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E64C0u, 0x2E64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64C8u;
label_2e64c8:
    // 0x2e64c8: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x2e64c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_2e64cc:
    // 0x2e64cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e64d0:
    // 0x2e64d0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_2e64d4:
    if (ctx->pc == 0x2E64D4u) {
        ctx->pc = 0x2E64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64D0u;
        // 0x2e64d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E64D8u;
        goto label_2e64d8;
    }
    ctx->pc = 0x2E64D0u;
    {
        const bool branch_taken_0x2e64d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64D0u;
        // 0x2e64d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64d0) {
            ctx->pc = 0x2E6538u;
            goto label_2e6538;
        }
    }
    ctx->pc = 0x2E64D8u;
label_2e64d8:
    // 0x2e64d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e64dc:
    // 0x2e64dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e64dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e64e0:
    // 0x2e64e0: 0x8c50489c  lw          $s0, 0x489C($v0)
    ctx->pc = 0x2e64e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2e64e4:
    // 0x2e64e4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e64e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e64e8:
    // 0x2e64e8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2e64e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2e64ec:
    // 0x2e64ec: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x2e64ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2e64f0:
    // 0x2e64f0: 0xc0cd4fc  jal         func_3353F0
label_2e64f4:
    if (ctx->pc == 0x2E64F4u) {
        ctx->pc = 0x2E64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64F0u;
        // 0x2e64f4: 0x26100480  addiu       $s0, $s0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E64F8u;
        goto label_2e64f8;
    }
    ctx->pc = 0x2E64F0u;
    SET_GPR_U32(ctx, 31, 0x2E64F8u);
    ctx->pc = 0x2E64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E64F0u;
    // 0x2e64f4: 0x26100480  addiu       $s0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E64F0u, 0x2E64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64F8u;
label_2e64f8:
    // 0x2e64f8: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2e64f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_2e64fc:
    // 0x2e64fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e64fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6500:
    // 0x2e6500: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e6500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6504:
    // 0x2e6504: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e6504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e6508:
    // 0x2e6508: 0xc10796c  jal         func_41E5B0
label_2e650c:
    if (ctx->pc == 0x2E650Cu) {
        ctx->pc = 0x2E650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6508u;
        // 0x2e650c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6510u;
        goto label_2e6510;
    }
    ctx->pc = 0x2E6508u;
    SET_GPR_U32(ctx, 31, 0x2E6510u);
    ctx->pc = 0x2E650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6508u;
    // 0x2e650c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2E6508u, 0x2E6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6510u;
label_2e6510:
    // 0x2e6510: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6514:
    // 0x2e6514: 0xa24001b2  sb          $zero, 0x1B2($s2)
    ctx->pc = 0x2e6514u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
label_2e6518:
    // 0x2e6518: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2e6518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2e651c:
    // 0x2e651c: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2e651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2e6520:
    // 0x2e6520: 0x60f809  jalr        $v1
label_2e6524:
    if (ctx->pc == 0x2E6524u) {
        ctx->pc = 0x2E6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6520u;
        // 0x2e6524: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6528u;
        goto label_2e6528;
    }
    ctx->pc = 0x2E6520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E6528u);
        ctx->pc = 0x2E6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6520u;
        // 0x2e6524: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6520u, 0x2E6528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6528u;
label_2e6528:
    // 0x2e6528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e652c:
    // 0x2e652c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2e652cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2e6530:
    // 0x2e6530: 0x10000017  b           . + 4 + (0x17 << 2)
label_2e6534:
    if (ctx->pc == 0x2E6534u) {
        ctx->pc = 0x2E6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6530u;
        // 0x2e6534: 0xa2620055  sb          $v0, 0x55($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6538u;
        goto label_2e6538;
    }
    ctx->pc = 0x2E6530u;
    {
        const bool branch_taken_0x2e6530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6530u;
        // 0x2e6534: 0xa2620055  sb          $v0, 0x55($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6530) {
            ctx->pc = 0x2E6590u;
            goto label_2e6590;
        }
    }
    ctx->pc = 0x2E6538u;
label_2e6538:
    // 0x2e6538: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_2e653c:
    if (ctx->pc == 0x2E653Cu) {
        ctx->pc = 0x2E653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6538u;
        // 0x2e653c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6540u;
        goto label_2e6540;
    }
    ctx->pc = 0x2E6538u;
    {
        const bool branch_taken_0x2e6538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6538u;
        // 0x2e653c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6538) {
            ctx->pc = 0x2E6594u;
            goto label_2e6594;
        }
    }
    ctx->pc = 0x2E6540u;
label_2e6540:
    // 0x2e6540: 0xae710020  sw          $s1, 0x20($s3)
    ctx->pc = 0x2e6540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 17));
label_2e6544:
    // 0x2e6544: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e6544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e6548:
    // 0x2e6548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e654c:
    // 0x2e654c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e654cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6550:
    // 0x2e6550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6554:
    // 0x2e6554: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e6554u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e6558:
    // 0x2e6558: 0x240500c5  addiu       $a1, $zero, 0xC5
    ctx->pc = 0x2e6558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
label_2e655c:
    // 0x2e655c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e655cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6560:
    // 0x2e6560: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6564:
    // 0x2e6564: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6568:
    // 0x2e6568: 0xc088178  jal         func_2205E0
label_2e656c:
    if (ctx->pc == 0x2E656Cu) {
        ctx->pc = 0x2E656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6568u;
        // 0x2e656c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6570u;
        goto label_2e6570;
    }
    ctx->pc = 0x2E6568u;
    SET_GPR_U32(ctx, 31, 0x2E6570u);
    ctx->pc = 0x2E656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6568u;
    // 0x2e656c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E6568u, 0x2E6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6570u;
label_2e6570:
    // 0x2e6570: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e6570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6574:
    // 0x2e6574: 0xa24001b2  sb          $zero, 0x1B2($s2)
    ctx->pc = 0x2e6574u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
label_2e6578:
    // 0x2e6578: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2e6578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2e657c:
    // 0x2e657c: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2e657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2e6580:
    // 0x2e6580: 0x60f809  jalr        $v1
label_2e6584:
    if (ctx->pc == 0x2E6584u) {
        ctx->pc = 0x2E6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6580u;
        // 0x2e6584: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6588u;
        goto label_2e6588;
    }
    ctx->pc = 0x2E6580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E6588u);
        ctx->pc = 0x2E6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6580u;
        // 0x2e6584: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6580u, 0x2E6588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6588u;
label_2e6588:
    // 0x2e6588: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e658c:
    // 0x2e658c: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x2e658cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_2e6590:
    // 0x2e6590: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e6590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e6594:
    // 0x2e6594: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e6594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e6598:
    // 0x2e6598: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e659c:
    // 0x2e659c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e659cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e65a0:
    // 0x2e65a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2e65a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e65a4:
    // 0x2e65a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e65a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e65a8:
    // 0x2e65a8: 0x3e00008  jr          $ra
label_2e65ac:
    if (ctx->pc == 0x2E65ACu) {
        ctx->pc = 0x2E65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65A8u;
        // 0x2e65ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65B0u;
        goto label_fallthrough_0x2e65a8;
    }
    ctx->pc = 0x2E65A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65A8u;
        // 0x2e65ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E65A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e65a8:
    ctx->pc = 0x2E65B0u;
}
