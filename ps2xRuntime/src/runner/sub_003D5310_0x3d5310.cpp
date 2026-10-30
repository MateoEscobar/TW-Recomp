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

// Function: sub_003D5310
// Address: 0x3d5310 - 0x3d53b0
void sub_003D5310_0x3d5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5310_0x3d5310");
#endif

    switch (ctx->pc) {
        case 0x3d5310u: goto label_3d5310;
        case 0x3d5314u: goto label_3d5314;
        case 0x3d5318u: goto label_3d5318;
        case 0x3d531cu: goto label_3d531c;
        case 0x3d5320u: goto label_3d5320;
        case 0x3d5324u: goto label_3d5324;
        case 0x3d5328u: goto label_3d5328;
        case 0x3d532cu: goto label_3d532c;
        case 0x3d5330u: goto label_3d5330;
        case 0x3d5334u: goto label_3d5334;
        case 0x3d5338u: goto label_3d5338;
        case 0x3d533cu: goto label_3d533c;
        case 0x3d5340u: goto label_3d5340;
        case 0x3d5344u: goto label_3d5344;
        case 0x3d5348u: goto label_3d5348;
        case 0x3d534cu: goto label_3d534c;
        case 0x3d5350u: goto label_3d5350;
        case 0x3d5354u: goto label_3d5354;
        case 0x3d5358u: goto label_3d5358;
        case 0x3d535cu: goto label_3d535c;
        case 0x3d5360u: goto label_3d5360;
        case 0x3d5364u: goto label_3d5364;
        case 0x3d5368u: goto label_3d5368;
        case 0x3d536cu: goto label_3d536c;
        case 0x3d5370u: goto label_3d5370;
        case 0x3d5374u: goto label_3d5374;
        case 0x3d5378u: goto label_3d5378;
        case 0x3d537cu: goto label_3d537c;
        case 0x3d5380u: goto label_3d5380;
        case 0x3d5384u: goto label_3d5384;
        case 0x3d5388u: goto label_3d5388;
        case 0x3d538cu: goto label_3d538c;
        case 0x3d5390u: goto label_3d5390;
        case 0x3d5394u: goto label_3d5394;
        case 0x3d5398u: goto label_3d5398;
        case 0x3d539cu: goto label_3d539c;
        case 0x3d53a0u: goto label_3d53a0;
        case 0x3d53a4u: goto label_3d53a4;
        case 0x3d53a8u: goto label_3d53a8;
        case 0x3d53acu: goto label_3d53ac;
        default: break;
    }

    ctx->pc = 0x3d5310u;

label_3d5310:
    // 0x3d5310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d5310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d5314:
    // 0x3d5314: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d5314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d5318:
    // 0x3d5318: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d5318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d531c:
    // 0x3d531c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d531cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d5320:
    // 0x3d5320: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d5320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d5324:
    // 0x3d5324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d5324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d5328:
    // 0x3d5328: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d5328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d532c:
    // 0x3d532c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d532cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d5330:
    // 0x3d5330: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d5334:
    // 0x3d5334: 0x40f809  jalr        $v0
label_3d5338:
    if (ctx->pc == 0x3D5338u) {
        ctx->pc = 0x3D5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5334u;
        // 0x3d5338: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D533Cu;
        goto label_3d533c;
    }
    ctx->pc = 0x3D5334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D533Cu);
        ctx->pc = 0x3D5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5334u;
        // 0x3d5338: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5334u, 0x3D533Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D533Cu;
label_3d533c:
    // 0x3d533c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d5340:
    // 0x3d5340: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d5340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d5344:
    // 0x3d5344: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3d5344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3d5348:
    // 0x3d5348: 0xc0e858c  jal         func_3A1630
label_3d534c:
    if (ctx->pc == 0x3D534Cu) {
        ctx->pc = 0x3D534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5348u;
        // 0x3d534c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5350u;
        goto label_3d5350;
    }
    ctx->pc = 0x3D5348u;
    SET_GPR_U32(ctx, 31, 0x3D5350u);
    ctx->pc = 0x3D534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5348u;
    // 0x3d534c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D5348u, 0x3D5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5350u;
label_3d5350:
    // 0x3d5350: 0xc0ea14c  jal         func_3A8530
label_3d5354:
    if (ctx->pc == 0x3D5354u) {
        ctx->pc = 0x3D5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5350u;
        // 0x3d5354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5358u;
        goto label_3d5358;
    }
    ctx->pc = 0x3D5350u;
    SET_GPR_U32(ctx, 31, 0x3D5358u);
    ctx->pc = 0x3D5354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5350u;
    // 0x3d5354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D5350u, 0x3D5358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5358u;
label_3d5358:
    // 0x3d5358: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d5358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d535c:
    // 0x3d535c: 0xc0ea12a  jal         func_3A84A8
label_3d5360:
    if (ctx->pc == 0x3D5360u) {
        ctx->pc = 0x3D5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D535Cu;
        // 0x3d5360: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5364u;
        goto label_3d5364;
    }
    ctx->pc = 0x3D535Cu;
    SET_GPR_U32(ctx, 31, 0x3D5364u);
    ctx->pc = 0x3D5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D535Cu;
    // 0x3d5360: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D535Cu, 0x3D5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5364u;
label_3d5364:
    // 0x3d5364: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d5364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d5368:
    // 0x3d5368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d5368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d536c:
    // 0x3d536c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d536cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d5370:
    // 0x3d5370: 0xc0ea12a  jal         func_3A84A8
label_3d5374:
    if (ctx->pc == 0x3D5374u) {
        ctx->pc = 0x3D5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5370u;
        // 0x3d5374: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5378u;
        goto label_3d5378;
    }
    ctx->pc = 0x3D5370u;
    SET_GPR_U32(ctx, 31, 0x3D5378u);
    ctx->pc = 0x3D5374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5370u;
    // 0x3d5374: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D5370u, 0x3D5378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5378u;
label_3d5378:
    // 0x3d5378: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d5378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d537c:
    // 0x3d537c: 0x3c056581  lui         $a1, 0x6581
    ctx->pc = 0x3d537cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25985 << 16));
label_3d5380:
    // 0x3d5380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d5380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d5384:
    // 0x3d5384: 0x34a5183e  ori         $a1, $a1, 0x183E
    ctx->pc = 0x3d5384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6206);
label_3d5388:
    // 0x3d5388: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d5388u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d538c:
    // 0x3d538c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3d538cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d5390:
    // 0x3d5390: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d5390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d5394:
    // 0x3d5394: 0xc045cb2  jal         func_1172C8
label_3d5398:
    if (ctx->pc == 0x3D5398u) {
        ctx->pc = 0x3D5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5394u;
        // 0x3d5398: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D539Cu;
        goto label_3d539c;
    }
    ctx->pc = 0x3D5394u;
    SET_GPR_U32(ctx, 31, 0x3D539Cu);
    ctx->pc = 0x3D5398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5394u;
    // 0x3d5398: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3D5394u, 0x3D539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D539Cu;
label_3d539c:
    // 0x3d539c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d539cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d53a0:
    // 0x3d53a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d53a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d53a4:
    // 0x3d53a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d53a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d53a8:
    // 0x3d53a8: 0x3e00008  jr          $ra
label_3d53ac:
    if (ctx->pc == 0x3D53ACu) {
        ctx->pc = 0x3D53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D53A8u;
        // 0x3d53ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D53B0u;
        goto label_fallthrough_0x3d53a8;
    }
    ctx->pc = 0x3D53A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D53A8u;
        // 0x3d53ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D53A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d53a8:
    ctx->pc = 0x3D53B0u;
}
