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

// Function: sub_003EB4D0
// Address: 0x3eb4d0 - 0x3eb5b8
void sub_003EB4D0_0x3eb4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB4D0_0x3eb4d0");
#endif

    switch (ctx->pc) {
        case 0x3eb4d0u: goto label_3eb4d0;
        case 0x3eb4d4u: goto label_3eb4d4;
        case 0x3eb4d8u: goto label_3eb4d8;
        case 0x3eb4dcu: goto label_3eb4dc;
        case 0x3eb4e0u: goto label_3eb4e0;
        case 0x3eb4e4u: goto label_3eb4e4;
        case 0x3eb4e8u: goto label_3eb4e8;
        case 0x3eb4ecu: goto label_3eb4ec;
        case 0x3eb4f0u: goto label_3eb4f0;
        case 0x3eb4f4u: goto label_3eb4f4;
        case 0x3eb4f8u: goto label_3eb4f8;
        case 0x3eb4fcu: goto label_3eb4fc;
        case 0x3eb500u: goto label_3eb500;
        case 0x3eb504u: goto label_3eb504;
        case 0x3eb508u: goto label_3eb508;
        case 0x3eb50cu: goto label_3eb50c;
        case 0x3eb510u: goto label_3eb510;
        case 0x3eb514u: goto label_3eb514;
        case 0x3eb518u: goto label_3eb518;
        case 0x3eb51cu: goto label_3eb51c;
        case 0x3eb520u: goto label_3eb520;
        case 0x3eb524u: goto label_3eb524;
        case 0x3eb528u: goto label_3eb528;
        case 0x3eb52cu: goto label_3eb52c;
        case 0x3eb530u: goto label_3eb530;
        case 0x3eb534u: goto label_3eb534;
        case 0x3eb538u: goto label_3eb538;
        case 0x3eb53cu: goto label_3eb53c;
        case 0x3eb540u: goto label_3eb540;
        case 0x3eb544u: goto label_3eb544;
        case 0x3eb548u: goto label_3eb548;
        case 0x3eb54cu: goto label_3eb54c;
        case 0x3eb550u: goto label_3eb550;
        case 0x3eb554u: goto label_3eb554;
        case 0x3eb558u: goto label_3eb558;
        case 0x3eb55cu: goto label_3eb55c;
        case 0x3eb560u: goto label_3eb560;
        case 0x3eb564u: goto label_3eb564;
        case 0x3eb568u: goto label_3eb568;
        case 0x3eb56cu: goto label_3eb56c;
        case 0x3eb570u: goto label_3eb570;
        case 0x3eb574u: goto label_3eb574;
        case 0x3eb578u: goto label_3eb578;
        case 0x3eb57cu: goto label_3eb57c;
        case 0x3eb580u: goto label_3eb580;
        case 0x3eb584u: goto label_3eb584;
        case 0x3eb588u: goto label_3eb588;
        case 0x3eb58cu: goto label_3eb58c;
        case 0x3eb590u: goto label_3eb590;
        case 0x3eb594u: goto label_3eb594;
        case 0x3eb598u: goto label_3eb598;
        case 0x3eb59cu: goto label_3eb59c;
        case 0x3eb5a0u: goto label_3eb5a0;
        case 0x3eb5a4u: goto label_3eb5a4;
        case 0x3eb5a8u: goto label_3eb5a8;
        case 0x3eb5acu: goto label_3eb5ac;
        case 0x3eb5b0u: goto label_3eb5b0;
        case 0x3eb5b4u: goto label_3eb5b4;
        default: break;
    }

    ctx->pc = 0x3eb4d0u;

label_3eb4d0:
    // 0x3eb4d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3eb4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3eb4d4:
    // 0x3eb4d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3eb4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3eb4d8:
    // 0x3eb4d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3eb4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3eb4dc:
    // 0x3eb4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eb4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb4e0:
    // 0x3eb4e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3eb4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3eb4e4:
    // 0x3eb4e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3eb4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3eb4e8:
    // 0x3eb4e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3eb4e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eb4ec:
    // 0x3eb4ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eb4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3eb4f0:
    // 0x3eb4f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3eb4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb4f4:
    // 0x3eb4f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3eb4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eb4f8:
    // 0x3eb4f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eb4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb4fc:
    // 0x3eb4fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb500:
    // 0x3eb500: 0x40f809  jalr        $v0
label_3eb504:
    if (ctx->pc == 0x3EB504u) {
        ctx->pc = 0x3EB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB500u;
        // 0x3eb504: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB508u;
        goto label_3eb508;
    }
    ctx->pc = 0x3EB500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB508u);
        ctx->pc = 0x3EB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB500u;
        // 0x3eb504: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB500u, 0x3EB508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB508u;
label_3eb508:
    // 0x3eb508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eb508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb50c:
    // 0x3eb50c: 0xc0ea14c  jal         func_3A8530
label_3eb510:
    if (ctx->pc == 0x3EB510u) {
        ctx->pc = 0x3EB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB50Cu;
        // 0x3eb510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB514u;
        goto label_3eb514;
    }
    ctx->pc = 0x3EB50Cu;
    SET_GPR_U32(ctx, 31, 0x3EB514u);
    ctx->pc = 0x3EB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB50Cu;
    // 0x3eb510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EB50Cu, 0x3EB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB514u;
label_3eb514:
    // 0x3eb514: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eb514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eb518:
    // 0x3eb518: 0xc0ea12a  jal         func_3A84A8
label_3eb51c:
    if (ctx->pc == 0x3EB51Cu) {
        ctx->pc = 0x3EB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB518u;
        // 0x3eb51c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB520u;
        goto label_3eb520;
    }
    ctx->pc = 0x3EB518u;
    SET_GPR_U32(ctx, 31, 0x3EB520u);
    ctx->pc = 0x3EB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB518u;
    // 0x3eb51c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EB518u, 0x3EB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB520u;
label_3eb520:
    // 0x3eb520: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eb520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb524:
    // 0x3eb524: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eb524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eb528:
    // 0x3eb528: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3eb528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eb52c:
    // 0x3eb52c: 0xc0ea12a  jal         func_3A84A8
label_3eb530:
    if (ctx->pc == 0x3EB530u) {
        ctx->pc = 0x3EB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB52Cu;
        // 0x3eb530: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB534u;
        goto label_3eb534;
    }
    ctx->pc = 0x3EB52Cu;
    SET_GPR_U32(ctx, 31, 0x3EB534u);
    ctx->pc = 0x3EB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB52Cu;
    // 0x3eb530: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EB52Cu, 0x3EB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB534u;
label_3eb534:
    // 0x3eb534: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eb534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb538:
    // 0x3eb538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb53c:
    // 0x3eb53c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eb53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eb540:
    // 0x3eb540: 0xc0e858c  jal         func_3A1630
label_3eb544:
    if (ctx->pc == 0x3EB544u) {
        ctx->pc = 0x3EB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB540u;
        // 0x3eb544: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB548u;
        goto label_3eb548;
    }
    ctx->pc = 0x3EB540u;
    SET_GPR_U32(ctx, 31, 0x3EB548u);
    ctx->pc = 0x3EB544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB540u;
    // 0x3eb544: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EB540u, 0x3EB548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB548u;
label_3eb548:
    // 0x3eb548: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3eb548u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb54c:
    // 0x3eb54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb550:
    // 0x3eb550: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3eb550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb554:
    // 0x3eb554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb558:
    // 0x3eb558: 0xae130054  sw          $s3, 0x54($s0)
    ctx->pc = 0x3eb558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
label_3eb55c:
    // 0x3eb55c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3eb55cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3eb560:
    // 0x3eb560: 0xc0e9132  jal         func_3A44C8
label_3eb564:
    if (ctx->pc == 0x3EB564u) {
        ctx->pc = 0x3EB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB560u;
        // 0x3eb564: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB568u;
        goto label_3eb568;
    }
    ctx->pc = 0x3EB560u;
    SET_GPR_U32(ctx, 31, 0x3EB568u);
    ctx->pc = 0x3EB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB560u;
    // 0x3eb564: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EB560u, 0x3EB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB568u;
label_3eb568:
    // 0x3eb568: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3eb568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3eb56c:
    // 0x3eb56c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3eb56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3eb570:
    // 0x3eb570: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3eb570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3eb574:
    // 0x3eb574: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3eb574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3eb578:
    // 0x3eb578: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eb578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eb57c:
    // 0x3eb57c: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x3eb57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
label_3eb580:
    // 0x3eb580: 0xa233000c  sb          $s3, 0xC($s1)
    ctx->pc = 0x3eb580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 19));
label_3eb584:
    // 0x3eb584: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3eb584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3eb588:
    // 0x3eb588: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3eb588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_3eb58c:
    // 0x3eb58c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3eb58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_3eb590:
    // 0x3eb590: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x3eb590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
label_3eb594:
    // 0x3eb594: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3eb594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3eb598:
    // 0x3eb598: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3eb598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3eb59c:
    // 0x3eb59c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3eb59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eb5a0:
    // 0x3eb5a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3eb5a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eb5a4:
    // 0x3eb5a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3eb5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eb5a8:
    // 0x3eb5a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eb5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3eb5ac:
    // 0x3eb5ac: 0x3e00008  jr          $ra
label_3eb5b0:
    if (ctx->pc == 0x3EB5B0u) {
        ctx->pc = 0x3EB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5ACu;
        // 0x3eb5b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5B4u;
        goto label_3eb5b4;
    }
    ctx->pc = 0x3EB5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5ACu;
        // 0x3eb5b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB5B4u;
label_3eb5b4:
    // 0x3eb5b4: 0x0  nop
    ctx->pc = 0x3eb5b4u;
    // NOP
    ctx->pc = 0x3eb5b8u;
}
