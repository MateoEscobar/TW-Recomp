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

// Function: sub_003ED3D0
// Address: 0x3ed3d0 - 0x3ed5a0
void sub_003ED3D0_0x3ed3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED3D0_0x3ed3d0");
#endif

    switch (ctx->pc) {
        case 0x3ed3d0u: goto label_3ed3d0;
        case 0x3ed3d4u: goto label_3ed3d4;
        case 0x3ed3d8u: goto label_3ed3d8;
        case 0x3ed3dcu: goto label_3ed3dc;
        case 0x3ed3e0u: goto label_3ed3e0;
        case 0x3ed3e4u: goto label_3ed3e4;
        case 0x3ed3e8u: goto label_3ed3e8;
        case 0x3ed3ecu: goto label_3ed3ec;
        case 0x3ed3f0u: goto label_3ed3f0;
        case 0x3ed3f4u: goto label_3ed3f4;
        case 0x3ed3f8u: goto label_3ed3f8;
        case 0x3ed3fcu: goto label_3ed3fc;
        case 0x3ed400u: goto label_3ed400;
        case 0x3ed404u: goto label_3ed404;
        case 0x3ed408u: goto label_3ed408;
        case 0x3ed40cu: goto label_3ed40c;
        case 0x3ed410u: goto label_3ed410;
        case 0x3ed414u: goto label_3ed414;
        case 0x3ed418u: goto label_3ed418;
        case 0x3ed41cu: goto label_3ed41c;
        case 0x3ed420u: goto label_3ed420;
        case 0x3ed424u: goto label_3ed424;
        case 0x3ed428u: goto label_3ed428;
        case 0x3ed42cu: goto label_3ed42c;
        case 0x3ed430u: goto label_3ed430;
        case 0x3ed434u: goto label_3ed434;
        case 0x3ed438u: goto label_3ed438;
        case 0x3ed43cu: goto label_3ed43c;
        case 0x3ed440u: goto label_3ed440;
        case 0x3ed444u: goto label_3ed444;
        case 0x3ed448u: goto label_3ed448;
        case 0x3ed44cu: goto label_3ed44c;
        case 0x3ed450u: goto label_3ed450;
        case 0x3ed454u: goto label_3ed454;
        case 0x3ed458u: goto label_3ed458;
        case 0x3ed45cu: goto label_3ed45c;
        case 0x3ed460u: goto label_3ed460;
        case 0x3ed464u: goto label_3ed464;
        case 0x3ed468u: goto label_3ed468;
        case 0x3ed46cu: goto label_3ed46c;
        case 0x3ed470u: goto label_3ed470;
        case 0x3ed474u: goto label_3ed474;
        case 0x3ed478u: goto label_3ed478;
        case 0x3ed47cu: goto label_3ed47c;
        case 0x3ed480u: goto label_3ed480;
        case 0x3ed484u: goto label_3ed484;
        case 0x3ed488u: goto label_3ed488;
        case 0x3ed48cu: goto label_3ed48c;
        case 0x3ed490u: goto label_3ed490;
        case 0x3ed494u: goto label_3ed494;
        case 0x3ed498u: goto label_3ed498;
        case 0x3ed49cu: goto label_3ed49c;
        case 0x3ed4a0u: goto label_3ed4a0;
        case 0x3ed4a4u: goto label_3ed4a4;
        case 0x3ed4a8u: goto label_3ed4a8;
        case 0x3ed4acu: goto label_3ed4ac;
        case 0x3ed4b0u: goto label_3ed4b0;
        case 0x3ed4b4u: goto label_3ed4b4;
        case 0x3ed4b8u: goto label_3ed4b8;
        case 0x3ed4bcu: goto label_3ed4bc;
        case 0x3ed4c0u: goto label_3ed4c0;
        case 0x3ed4c4u: goto label_3ed4c4;
        case 0x3ed4c8u: goto label_3ed4c8;
        case 0x3ed4ccu: goto label_3ed4cc;
        case 0x3ed4d0u: goto label_3ed4d0;
        case 0x3ed4d4u: goto label_3ed4d4;
        case 0x3ed4d8u: goto label_3ed4d8;
        case 0x3ed4dcu: goto label_3ed4dc;
        case 0x3ed4e0u: goto label_3ed4e0;
        case 0x3ed4e4u: goto label_3ed4e4;
        case 0x3ed4e8u: goto label_3ed4e8;
        case 0x3ed4ecu: goto label_3ed4ec;
        case 0x3ed4f0u: goto label_3ed4f0;
        case 0x3ed4f4u: goto label_3ed4f4;
        case 0x3ed4f8u: goto label_3ed4f8;
        case 0x3ed4fcu: goto label_3ed4fc;
        case 0x3ed500u: goto label_3ed500;
        case 0x3ed504u: goto label_3ed504;
        case 0x3ed508u: goto label_3ed508;
        case 0x3ed50cu: goto label_3ed50c;
        case 0x3ed510u: goto label_3ed510;
        case 0x3ed514u: goto label_3ed514;
        case 0x3ed518u: goto label_3ed518;
        case 0x3ed51cu: goto label_3ed51c;
        case 0x3ed520u: goto label_3ed520;
        case 0x3ed524u: goto label_3ed524;
        case 0x3ed528u: goto label_3ed528;
        case 0x3ed52cu: goto label_3ed52c;
        case 0x3ed530u: goto label_3ed530;
        case 0x3ed534u: goto label_3ed534;
        case 0x3ed538u: goto label_3ed538;
        case 0x3ed53cu: goto label_3ed53c;
        case 0x3ed540u: goto label_3ed540;
        case 0x3ed544u: goto label_3ed544;
        case 0x3ed548u: goto label_3ed548;
        case 0x3ed54cu: goto label_3ed54c;
        case 0x3ed550u: goto label_3ed550;
        case 0x3ed554u: goto label_3ed554;
        case 0x3ed558u: goto label_3ed558;
        case 0x3ed55cu: goto label_3ed55c;
        case 0x3ed560u: goto label_3ed560;
        case 0x3ed564u: goto label_3ed564;
        case 0x3ed568u: goto label_3ed568;
        case 0x3ed56cu: goto label_3ed56c;
        case 0x3ed570u: goto label_3ed570;
        case 0x3ed574u: goto label_3ed574;
        case 0x3ed578u: goto label_3ed578;
        case 0x3ed57cu: goto label_3ed57c;
        case 0x3ed580u: goto label_3ed580;
        case 0x3ed584u: goto label_3ed584;
        case 0x3ed588u: goto label_3ed588;
        case 0x3ed58cu: goto label_3ed58c;
        case 0x3ed590u: goto label_3ed590;
        case 0x3ed594u: goto label_3ed594;
        case 0x3ed598u: goto label_3ed598;
        case 0x3ed59cu: goto label_3ed59c;
        default: break;
    }

    ctx->pc = 0x3ed3d0u;

label_3ed3d0:
    // 0x3ed3d0: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x3ed3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_3ed3d4:
    // 0x3ed3d4: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x3ed3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_3ed3d8:
    // 0x3ed3d8: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x3ed3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_3ed3dc:
    // 0x3ed3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ed3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed3e0:
    // 0x3ed3e0: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x3ed3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_3ed3e4:
    // 0x3ed3e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ed3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed3e8:
    // 0x3ed3e8: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x3ed3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_3ed3ec:
    // 0x3ed3ec: 0xffbf04d0  sd          $ra, 0x4D0($sp)
    ctx->pc = 0x3ed3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 31));
label_3ed3f0:
    // 0x3ed3f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ed3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed3f4:
    // 0x3ed3f4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ed3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed3f8:
    // 0x3ed3f8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed3fc:
    // 0x3ed3fc: 0x40f809  jalr        $v0
label_3ed400:
    if (ctx->pc == 0x3ED400u) {
        ctx->pc = 0x3ED400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3FCu;
        // 0x3ed400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED404u;
        goto label_3ed404;
    }
    ctx->pc = 0x3ED3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED404u);
        ctx->pc = 0x3ED400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3FCu;
        // 0x3ed400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED3FCu, 0x3ED404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED404u;
label_3ed404:
    // 0x3ed404: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ed404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed408:
    // 0x3ed408: 0xc0ea14c  jal         func_3A8530
label_3ed40c:
    if (ctx->pc == 0x3ED40Cu) {
        ctx->pc = 0x3ED40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED408u;
        // 0x3ed40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED410u;
        goto label_3ed410;
    }
    ctx->pc = 0x3ED408u;
    SET_GPR_U32(ctx, 31, 0x3ED410u);
    ctx->pc = 0x3ED40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED408u;
    // 0x3ed40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3ED408u, 0x3ED410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED410u;
label_3ed410:
    // 0x3ed410: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ed410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ed414:
    // 0x3ed414: 0xc0ea12a  jal         func_3A84A8
label_3ed418:
    if (ctx->pc == 0x3ED418u) {
        ctx->pc = 0x3ED418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED414u;
        // 0x3ed418: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED41Cu;
        goto label_3ed41c;
    }
    ctx->pc = 0x3ED414u;
    SET_GPR_U32(ctx, 31, 0x3ED41Cu);
    ctx->pc = 0x3ED418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED414u;
    // 0x3ed418: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ED414u, 0x3ED41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED41Cu;
label_3ed41c:
    // 0x3ed41c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ed41cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed420:
    // 0x3ed420: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ed420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ed424:
    // 0x3ed424: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ed424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ed428:
    // 0x3ed428: 0xc0ea12a  jal         func_3A84A8
label_3ed42c:
    if (ctx->pc == 0x3ED42Cu) {
        ctx->pc = 0x3ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED428u;
        // 0x3ed42c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED430u;
        goto label_3ed430;
    }
    ctx->pc = 0x3ED428u;
    SET_GPR_U32(ctx, 31, 0x3ED430u);
    ctx->pc = 0x3ED42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED428u;
    // 0x3ed42c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ED428u, 0x3ED430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED430u;
label_3ed430:
    // 0x3ed430: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ed430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed434:
    // 0x3ed434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed438:
    // 0x3ed438: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3ed438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3ed43c:
    // 0x3ed43c: 0xc0e858c  jal         func_3A1630
label_3ed440:
    if (ctx->pc == 0x3ED440u) {
        ctx->pc = 0x3ED440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED43Cu;
        // 0x3ed440: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED444u;
        goto label_3ed444;
    }
    ctx->pc = 0x3ED43Cu;
    SET_GPR_U32(ctx, 31, 0x3ED444u);
    ctx->pc = 0x3ED440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED43Cu;
    // 0x3ed440: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ED43Cu, 0x3ED444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED444u;
label_3ed444:
    // 0x3ed444: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ed444u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed448:
    // 0x3ed448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ed448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed44c:
    // 0x3ed44c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ed44cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed450:
    // 0x3ed450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed454:
    // 0x3ed454: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x3ed454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_3ed458:
    // 0x3ed458: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ed458u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ed45c:
    // 0x3ed45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ed45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ed460:
    // 0x3ed460: 0xc0e9132  jal         func_3A44C8
label_3ed464:
    if (ctx->pc == 0x3ED464u) {
        ctx->pc = 0x3ED464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED460u;
        // 0x3ed464: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED468u;
        goto label_3ed468;
    }
    ctx->pc = 0x3ED460u;
    SET_GPR_U32(ctx, 31, 0x3ED468u);
    ctx->pc = 0x3ED464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED460u;
    // 0x3ed464: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3ED460u, 0x3ED468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED468u;
label_3ed468:
    // 0x3ed468: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ed468u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed46c:
    // 0x3ed46c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ed46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3ed470:
    // 0x3ed470: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3ed470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3ed474:
    // 0x3ed474: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ed474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ed478:
    // 0x3ed478: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3ed478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3ed47c:
    // 0x3ed47c: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3ed47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3ed480:
    // 0x3ed480: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3ed480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3ed484:
    // 0x3ed484: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3ed484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3ed488:
    // 0x3ed488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ed488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ed48c:
    // 0x3ed48c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ed48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed490:
    // 0x3ed490: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3ed490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3ed494:
    // 0x3ed494: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3ed494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3ed498:
    // 0x3ed498: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3ed498u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ed49c:
    // 0x3ed49c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ed49cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ed4a0:
    // 0x3ed4a0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3ed4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3ed4a4:
    // 0x3ed4a4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3ed4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3ed4a8:
    // 0x3ed4a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ed4a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ed4ac:
    // 0x3ed4ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3ed4acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ed4b0:
    // 0x3ed4b0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3ed4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ed4b4:
    // 0x3ed4b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3ed4b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ed4b8:
    // 0x3ed4b8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3ed4b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ed4bc:
    // 0x3ed4bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ed4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ed4c0:
    // 0x3ed4c0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3ed4c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ed4c4:
    // 0x3ed4c4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3ed4c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ed4c8:
    // 0x3ed4c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ed4c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ed4cc:
    // 0x3ed4cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3ed4ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ed4d0:
    // 0x3ed4d0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3ed4d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ed4d4:
    // 0x3ed4d4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3ed4d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ed4d8:
    // 0x3ed4d8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3ed4d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ed4dc:
    // 0x3ed4dc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3ed4dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ed4e0:
    // 0x3ed4e0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3ed4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ed4e4:
    // 0x3ed4e4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3ed4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ed4e8:
    // 0x3ed4e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3ed4e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ed4ec:
    // 0x3ed4ec: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ed4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ed4f0:
    // 0x3ed4f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ed4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ed4f4:
    // 0x3ed4f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3ed4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ed4f8:
    // 0x3ed4f8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3ed4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3ed4fc:
    // 0x3ed4fc: 0xc136b18  jal         func_4DAC60
label_3ed500:
    if (ctx->pc == 0x3ED500u) {
        ctx->pc = 0x3ED500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED4FCu;
        // 0x3ed500: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED504u;
        goto label_3ed504;
    }
    ctx->pc = 0x3ED4FCu;
    SET_GPR_U32(ctx, 31, 0x3ED504u);
    ctx->pc = 0x3ED500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED4FCu;
    // 0x3ed500: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3ED4FCu, 0x3ED504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED504u;
label_3ed504:
    // 0x3ed504: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3ed504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ed508:
    // 0x3ed508: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x3ed508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3ed50c:
    // 0x3ed50c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3ed50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3ed510:
    // 0x3ed510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ed510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed514:
    // 0x3ed514: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3ed514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3ed518:
    // 0x3ed518: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ed518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ed51c:
    // 0x3ed51c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3ed51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ed520:
    // 0x3ed520: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3ed520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3ed524:
    // 0x3ed524: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3ed524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ed528:
    // 0x3ed528: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3ed528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ed52c:
    // 0x3ed52c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3ed52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3ed530:
    // 0x3ed530: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ed530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed534:
    // 0x3ed534: 0x26105bd0  addiu       $s0, $s0, 0x5BD0
    ctx->pc = 0x3ed534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23504));
label_3ed538:
    // 0x3ed538: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3ed538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3ed53c:
    // 0x3ed53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ed53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed540:
    // 0x3ed540: 0xc0e9fa6  jal         func_3A7E98
label_3ed544:
    if (ctx->pc == 0x3ED544u) {
        ctx->pc = 0x3ED544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED540u;
        // 0x3ed544: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED548u;
        goto label_3ed548;
    }
    ctx->pc = 0x3ED540u;
    SET_GPR_U32(ctx, 31, 0x3ED548u);
    ctx->pc = 0x3ED544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED540u;
    // 0x3ed544: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3ED540u, 0x3ED548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED548u;
label_3ed548:
    // 0x3ed548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed54c:
    // 0x3ed54c: 0xc0f15bc  jal         func_3C56F0
label_3ed550:
    if (ctx->pc == 0x3ED550u) {
        ctx->pc = 0x3ED550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED54Cu;
        // 0x3ed550: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED554u;
        goto label_3ed554;
    }
    ctx->pc = 0x3ED54Cu;
    SET_GPR_U32(ctx, 31, 0x3ED554u);
    ctx->pc = 0x3ED550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED54Cu;
    // 0x3ed550: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3ED54Cu, 0x3ED554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED554u;
label_3ed554:
    // 0x3ed554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ed554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ed558:
    // 0x3ed558: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3ed558u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3ed55c:
    // 0x3ed55c: 0xc0ea16a  jal         func_3A85A8
label_3ed560:
    if (ctx->pc == 0x3ED560u) {
        ctx->pc = 0x3ED560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED55Cu;
        // 0x3ed560: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED564u;
        goto label_3ed564;
    }
    ctx->pc = 0x3ED55Cu;
    SET_GPR_U32(ctx, 31, 0x3ED564u);
    ctx->pc = 0x3ED560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED55Cu;
    // 0x3ed560: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3ED55Cu, 0x3ED564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED564u;
label_3ed564:
    // 0x3ed564: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x3ed564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3ed568:
    // 0x3ed568: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ed568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ed56c:
    // 0x3ed56c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x3ed56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3ed570:
    // 0x3ed570: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ed570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ed574:
    // 0x3ed574: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ed574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ed578:
    // 0x3ed578: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ed578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ed57c:
    // 0x3ed57c: 0x60f809  jalr        $v1
label_3ed580:
    if (ctx->pc == 0x3ED580u) {
        ctx->pc = 0x3ED580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED57Cu;
        // 0x3ed580: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED584u;
        goto label_3ed584;
    }
    ctx->pc = 0x3ED57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ED584u);
        ctx->pc = 0x3ED580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED57Cu;
        // 0x3ed580: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED57Cu, 0x3ED584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED584u;
label_3ed584:
    // 0x3ed584: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x3ed584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3ed588:
    // 0x3ed588: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x3ed588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3ed58c:
    // 0x3ed58c: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x3ed58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3ed590:
    // 0x3ed590: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x3ed590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3ed594:
    // 0x3ed594: 0xdfbf04d0  ld          $ra, 0x4D0($sp)
    ctx->pc = 0x3ed594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
label_3ed598:
    // 0x3ed598: 0x3e00008  jr          $ra
label_3ed59c:
    if (ctx->pc == 0x3ED59Cu) {
        ctx->pc = 0x3ED59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED598u;
        // 0x3ed59c: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED5A0u;
        goto label_fallthrough_0x3ed598;
    }
    ctx->pc = 0x3ED598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED598u;
        // 0x3ed59c: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ed598:
    ctx->pc = 0x3ED5A0u;
}
