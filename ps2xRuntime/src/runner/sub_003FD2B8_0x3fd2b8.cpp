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

// Function: sub_003FD2B8
// Address: 0x3fd2b8 - 0x3fd420
void sub_003FD2B8_0x3fd2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD2B8_0x3fd2b8");
#endif

    switch (ctx->pc) {
        case 0x3fd2b8u: goto label_3fd2b8;
        case 0x3fd2bcu: goto label_3fd2bc;
        case 0x3fd2c0u: goto label_3fd2c0;
        case 0x3fd2c4u: goto label_3fd2c4;
        case 0x3fd2c8u: goto label_3fd2c8;
        case 0x3fd2ccu: goto label_3fd2cc;
        case 0x3fd2d0u: goto label_3fd2d0;
        case 0x3fd2d4u: goto label_3fd2d4;
        case 0x3fd2d8u: goto label_3fd2d8;
        case 0x3fd2dcu: goto label_3fd2dc;
        case 0x3fd2e0u: goto label_3fd2e0;
        case 0x3fd2e4u: goto label_3fd2e4;
        case 0x3fd2e8u: goto label_3fd2e8;
        case 0x3fd2ecu: goto label_3fd2ec;
        case 0x3fd2f0u: goto label_3fd2f0;
        case 0x3fd2f4u: goto label_3fd2f4;
        case 0x3fd2f8u: goto label_3fd2f8;
        case 0x3fd2fcu: goto label_3fd2fc;
        case 0x3fd300u: goto label_3fd300;
        case 0x3fd304u: goto label_3fd304;
        case 0x3fd308u: goto label_3fd308;
        case 0x3fd30cu: goto label_3fd30c;
        case 0x3fd310u: goto label_3fd310;
        case 0x3fd314u: goto label_3fd314;
        case 0x3fd318u: goto label_3fd318;
        case 0x3fd31cu: goto label_3fd31c;
        case 0x3fd320u: goto label_3fd320;
        case 0x3fd324u: goto label_3fd324;
        case 0x3fd328u: goto label_3fd328;
        case 0x3fd32cu: goto label_3fd32c;
        case 0x3fd330u: goto label_3fd330;
        case 0x3fd334u: goto label_3fd334;
        case 0x3fd338u: goto label_3fd338;
        case 0x3fd33cu: goto label_3fd33c;
        case 0x3fd340u: goto label_3fd340;
        case 0x3fd344u: goto label_3fd344;
        case 0x3fd348u: goto label_3fd348;
        case 0x3fd34cu: goto label_3fd34c;
        case 0x3fd350u: goto label_3fd350;
        case 0x3fd354u: goto label_3fd354;
        case 0x3fd358u: goto label_3fd358;
        case 0x3fd35cu: goto label_3fd35c;
        case 0x3fd360u: goto label_3fd360;
        case 0x3fd364u: goto label_3fd364;
        case 0x3fd368u: goto label_3fd368;
        case 0x3fd36cu: goto label_3fd36c;
        case 0x3fd370u: goto label_3fd370;
        case 0x3fd374u: goto label_3fd374;
        case 0x3fd378u: goto label_3fd378;
        case 0x3fd37cu: goto label_3fd37c;
        case 0x3fd380u: goto label_3fd380;
        case 0x3fd384u: goto label_3fd384;
        case 0x3fd388u: goto label_3fd388;
        case 0x3fd38cu: goto label_3fd38c;
        case 0x3fd390u: goto label_3fd390;
        case 0x3fd394u: goto label_3fd394;
        case 0x3fd398u: goto label_3fd398;
        case 0x3fd39cu: goto label_3fd39c;
        case 0x3fd3a0u: goto label_3fd3a0;
        case 0x3fd3a4u: goto label_3fd3a4;
        case 0x3fd3a8u: goto label_3fd3a8;
        case 0x3fd3acu: goto label_3fd3ac;
        case 0x3fd3b0u: goto label_3fd3b0;
        case 0x3fd3b4u: goto label_3fd3b4;
        case 0x3fd3b8u: goto label_3fd3b8;
        case 0x3fd3bcu: goto label_3fd3bc;
        case 0x3fd3c0u: goto label_3fd3c0;
        case 0x3fd3c4u: goto label_3fd3c4;
        case 0x3fd3c8u: goto label_3fd3c8;
        case 0x3fd3ccu: goto label_3fd3cc;
        case 0x3fd3d0u: goto label_3fd3d0;
        case 0x3fd3d4u: goto label_3fd3d4;
        case 0x3fd3d8u: goto label_3fd3d8;
        case 0x3fd3dcu: goto label_3fd3dc;
        case 0x3fd3e0u: goto label_3fd3e0;
        case 0x3fd3e4u: goto label_3fd3e4;
        case 0x3fd3e8u: goto label_3fd3e8;
        case 0x3fd3ecu: goto label_3fd3ec;
        case 0x3fd3f0u: goto label_3fd3f0;
        case 0x3fd3f4u: goto label_3fd3f4;
        case 0x3fd3f8u: goto label_3fd3f8;
        case 0x3fd3fcu: goto label_3fd3fc;
        case 0x3fd400u: goto label_3fd400;
        case 0x3fd404u: goto label_3fd404;
        case 0x3fd408u: goto label_3fd408;
        case 0x3fd40cu: goto label_3fd40c;
        case 0x3fd410u: goto label_3fd410;
        case 0x3fd414u: goto label_3fd414;
        case 0x3fd418u: goto label_3fd418;
        case 0x3fd41cu: goto label_3fd41c;
        default: break;
    }

    ctx->pc = 0x3fd2b8u;

label_3fd2b8:
    // 0x3fd2b8: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x3fd2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_3fd2bc:
    // 0x3fd2bc: 0x7fb20460  sq          $s2, 0x460($sp)
    ctx->pc = 0x3fd2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 18));
label_3fd2c0:
    // 0x3fd2c0: 0x7fb30450  sq          $s3, 0x450($sp)
    ctx->pc = 0x3fd2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 19));
label_3fd2c4:
    // 0x3fd2c4: 0x7fb00480  sq          $s0, 0x480($sp)
    ctx->pc = 0x3fd2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 16));
label_3fd2c8:
    // 0x3fd2c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fd2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fd2cc:
    // 0x3fd2cc: 0x7fb10470  sq          $s1, 0x470($sp)
    ctx->pc = 0x3fd2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 17));
label_3fd2d0:
    // 0x3fd2d0: 0x7fb40440  sq          $s4, 0x440($sp)
    ctx->pc = 0x3fd2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 20));
label_3fd2d4:
    // 0x3fd2d4: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3fd2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
label_3fd2d8:
    // 0x3fd2d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3fd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fd2dc:
    // 0x3fd2dc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fd2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fd2e0:
    // 0x3fd2e0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fd2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fd2e4:
    // 0x3fd2e4: 0x40f809  jalr        $v0
label_3fd2e8:
    if (ctx->pc == 0x3FD2E8u) {
        ctx->pc = 0x3FD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2E4u;
        // 0x3fd2e8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD2ECu;
        goto label_3fd2ec;
    }
    ctx->pc = 0x3FD2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD2ECu);
        ctx->pc = 0x3FD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2E4u;
        // 0x3fd2e8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD2E4u, 0x3FD2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD2ECu;
label_3fd2ec:
    // 0x3fd2ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fd2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fd2f0:
    // 0x3fd2f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fd2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fd2f4:
    // 0x3fd2f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3fd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fd2f8:
    // 0x3fd2f8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3fd2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3fd2fc:
    // 0x3fd2fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fd300:
    // 0x3fd300: 0x0  nop
    ctx->pc = 0x3fd300u;
    // NOP
label_3fd304:
    // 0x3fd304: 0x0  nop
    ctx->pc = 0x3fd304u;
    // NOP
label_3fd308:
    // 0x3fd308: 0x0  nop
    ctx->pc = 0x3fd308u;
    // NOP
label_3fd30c:
    // 0x3fd30c: 0x0  nop
    ctx->pc = 0x3fd30cu;
    // NOP
label_3fd310:
    // 0x3fd310: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3fd314:
    if (ctx->pc == 0x3FD314u) {
        ctx->pc = 0x3FD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD310u;
        // 0x3fd314: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD318u;
        goto label_3fd318;
    }
    ctx->pc = 0x3FD310u;
    {
        const bool branch_taken_0x3fd310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD310u;
        // 0x3fd314: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd310) {
            ctx->pc = 0x3FD300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd300;
        }
    }
    ctx->pc = 0x3FD318u;
label_3fd318:
    // 0x3fd318: 0xc138ddc  jal         func_4E3770
label_3fd31c:
    if (ctx->pc == 0x3FD31Cu) {
        ctx->pc = 0x3FD320u;
        goto label_3fd320;
    }
    ctx->pc = 0x3FD318u;
    SET_GPR_U32(ctx, 31, 0x3FD320u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3FD318u, 0x3FD320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD320u;
label_3fd320:
    // 0x3fd320: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fd320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fd324:
    // 0x3fd324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fd324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fd328:
    // 0x3fd328: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
label_3fd32c:
    if (ctx->pc == 0x3FD32Cu) {
        ctx->pc = 0x3FD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD328u;
        // 0x3fd32c: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD330u;
        goto label_3fd330;
    }
    ctx->pc = 0x3FD328u;
    {
        const bool branch_taken_0x3fd328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD328u;
        // 0x3fd32c: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd328) {
            ctx->pc = 0x3FD3FCu;
            goto label_3fd3fc;
        }
    }
    ctx->pc = 0x3FD330u;
label_3fd330:
    // 0x3fd330: 0xc043d5e  jal         func_10F578
label_3fd334:
    if (ctx->pc == 0x3FD334u) {
        ctx->pc = 0x3FD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD330u;
        // 0x3fd334: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD338u;
        goto label_3fd338;
    }
    ctx->pc = 0x3FD330u;
    SET_GPR_U32(ctx, 31, 0x3FD338u);
    ctx->pc = 0x3FD334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD330u;
    // 0x3fd334: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3FD330u, 0x3FD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD338u;
label_3fd338:
    // 0x3fd338: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_3fd33c:
    if (ctx->pc == 0x3FD33Cu) {
        ctx->pc = 0x3FD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD338u;
        // 0x3fd33c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD340u;
        goto label_3fd340;
    }
    ctx->pc = 0x3FD338u;
    {
        const bool branch_taken_0x3fd338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd338) {
            ctx->pc = 0x3FD33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD338u;
            // 0x3fd33c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD3C8u;
            goto label_3fd3c8;
        }
    }
    ctx->pc = 0x3FD340u;
label_3fd340:
    // 0x3fd340: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3fd340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3fd344:
    // 0x3fd344: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x3fd344u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_3fd348:
    // 0x3fd348: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x3fd348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_3fd34c:
    // 0x3fd34c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x3fd34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3fd350:
    // 0x3fd350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3fd350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3fd354:
    // 0x3fd354: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3fd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3fd358:
    // 0x3fd358: 0xc0441ac  jal         func_1106B0
label_3fd35c:
    if (ctx->pc == 0x3FD35Cu) {
        ctx->pc = 0x3FD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD358u;
        // 0x3fd35c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD360u;
        goto label_3fd360;
    }
    ctx->pc = 0x3FD358u;
    SET_GPR_U32(ctx, 31, 0x3FD360u);
    ctx->pc = 0x3FD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD358u;
    // 0x3fd35c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1106B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1106B0u, 0x3FD358u, 0x3FD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD360u;
label_3fd360:
    // 0x3fd360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fd360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fd364:
    // 0x3fd364: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fd364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fd368:
    // 0x3fd368: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3fd368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3fd36c:
    // 0x3fd36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3fd370:
    // 0x3fd370: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_3fd374:
    if (ctx->pc == 0x3FD374u) {
        ctx->pc = 0x3FD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD370u;
        // 0x3fd374: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD378u;
        goto label_3fd378;
    }
    ctx->pc = 0x3FD370u;
    {
        const bool branch_taken_0x3fd370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD370u;
        // 0x3fd374: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd370) {
            ctx->pc = 0x3FD37Cu;
            goto label_3fd37c;
        }
    }
    ctx->pc = 0x3FD378u;
label_3fd378:
    // 0x3fd378: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3fd378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3fd37c:
    // 0x3fd37c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3fd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fd380:
    // 0x3fd380: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x3fd380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3fd384:
    // 0x3fd384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd388:
    // 0x3fd388: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x3fd388u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_3fd38c:
    // 0x3fd38c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x3fd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3fd390:
    // 0x3fd390: 0x40f809  jalr        $v0
label_3fd394:
    if (ctx->pc == 0x3FD394u) {
        ctx->pc = 0x3FD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD390u;
        // 0x3fd394: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD398u;
        goto label_3fd398;
    }
    ctx->pc = 0x3FD390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD398u);
        ctx->pc = 0x3FD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD390u;
        // 0x3fd394: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD390u, 0x3FD398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD398u;
label_3fd398:
    // 0x3fd398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fd398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fd39c:
    // 0x3fd39c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fd39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fd3a0:
    // 0x3fd3a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fd3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd3a4:
    // 0x3fd3a4: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x3fd3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_3fd3a8:
    // 0x3fd3a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3fd3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd3ac:
    // 0x3fd3ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3fd3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3fd3b0:
    // 0x3fd3b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fd3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fd3b4:
    // 0x3fd3b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3fd3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fd3b8:
    // 0x3fd3b8: 0xc043f8c  jal         func_10FE30
label_3fd3bc:
    if (ctx->pc == 0x3FD3BCu) {
        ctx->pc = 0x3FD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD3B8u;
        // 0x3fd3bc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD3C0u;
        goto label_3fd3c0;
    }
    ctx->pc = 0x3FD3B8u;
    SET_GPR_U32(ctx, 31, 0x3FD3C0u);
    ctx->pc = 0x3FD3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD3B8u;
    // 0x3fd3bc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE30u, 0x3FD3B8u, 0x3FD3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD3C0u;
label_3fd3c0:
    // 0x3fd3c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3fd3c4:
    if (ctx->pc == 0x3FD3C4u) {
        ctx->pc = 0x3FD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD3C0u;
        // 0x3fd3c4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD3C8u;
        goto label_3fd3c8;
    }
    ctx->pc = 0x3FD3C0u;
    {
        const bool branch_taken_0x3fd3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD3C0u;
        // 0x3fd3c4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd3c0) {
            ctx->pc = 0x3FD3F8u;
            goto label_3fd3f8;
        }
    }
    ctx->pc = 0x3FD3C8u;
label_3fd3c8:
    // 0x3fd3c8: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3fd3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3fd3cc:
    // 0x3fd3cc: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x3fd3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3fd3d0:
    // 0x3fd3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fd3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd3d4:
    // 0x3fd3d4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x3fd3d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_3fd3d8:
    // 0x3fd3d8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3fd3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3fd3dc:
    // 0x3fd3dc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x3fd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3fd3e0:
    // 0x3fd3e0: 0x40f809  jalr        $v0
label_3fd3e4:
    if (ctx->pc == 0x3FD3E4u) {
        ctx->pc = 0x3FD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD3E0u;
        // 0x3fd3e4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD3E8u;
        goto label_3fd3e8;
    }
    ctx->pc = 0x3FD3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD3E8u);
        ctx->pc = 0x3FD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD3E0u;
        // 0x3fd3e4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD3E0u, 0x3FD3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD3E8u;
label_3fd3e8:
    // 0x3fd3e8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3fd3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3fd3ec:
    // 0x3fd3ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fd3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd3f0:
    // 0x3fd3f0: 0xc0440f4  jal         func_1103D0
label_3fd3f4:
    if (ctx->pc == 0x3FD3F4u) {
        ctx->pc = 0x3FD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD3F0u;
        // 0x3fd3f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD3F8u;
        goto label_3fd3f8;
    }
    ctx->pc = 0x3FD3F0u;
    SET_GPR_U32(ctx, 31, 0x3FD3F8u);
    ctx->pc = 0x3FD3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD3F0u;
    // 0x3fd3f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103D0u, 0x3FD3F0u, 0x3FD3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD3F8u;
label_3fd3f8:
    // 0x3fd3f8: 0x7bb00480  lq          $s0, 0x480($sp)
    ctx->pc = 0x3fd3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3fd3fc:
    // 0x3fd3fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fd3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fd400:
    // 0x3fd400: 0x7bb10470  lq          $s1, 0x470($sp)
    ctx->pc = 0x3fd400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3fd404:
    // 0x3fd404: 0x7bb20460  lq          $s2, 0x460($sp)
    ctx->pc = 0x3fd404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3fd408:
    // 0x3fd408: 0x7bb30450  lq          $s3, 0x450($sp)
    ctx->pc = 0x3fd408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3fd40c:
    // 0x3fd40c: 0x7bb40440  lq          $s4, 0x440($sp)
    ctx->pc = 0x3fd40cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3fd410:
    // 0x3fd410: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3fd410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_3fd414:
    // 0x3fd414: 0x3e00008  jr          $ra
label_3fd418:
    if (ctx->pc == 0x3FD418u) {
        ctx->pc = 0x3FD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD414u;
        // 0x3fd418: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD41Cu;
        goto label_3fd41c;
    }
    ctx->pc = 0x3FD414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD414u;
        // 0x3fd418: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD41Cu;
label_3fd41c:
    // 0x3fd41c: 0x0  nop
    ctx->pc = 0x3fd41cu;
    // NOP
    ctx->pc = 0x3fd420u;
}
