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

// Function: sub_004CD2B8
// Address: 0x4cd2b8 - 0x4cd3d0
void sub_004CD2B8_0x4cd2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD2B8_0x4cd2b8");
#endif

    switch (ctx->pc) {
        case 0x4cd2b8u: goto label_4cd2b8;
        case 0x4cd2bcu: goto label_4cd2bc;
        case 0x4cd2c0u: goto label_4cd2c0;
        case 0x4cd2c4u: goto label_4cd2c4;
        case 0x4cd2c8u: goto label_4cd2c8;
        case 0x4cd2ccu: goto label_4cd2cc;
        case 0x4cd2d0u: goto label_4cd2d0;
        case 0x4cd2d4u: goto label_4cd2d4;
        case 0x4cd2d8u: goto label_4cd2d8;
        case 0x4cd2dcu: goto label_4cd2dc;
        case 0x4cd2e0u: goto label_4cd2e0;
        case 0x4cd2e4u: goto label_4cd2e4;
        case 0x4cd2e8u: goto label_4cd2e8;
        case 0x4cd2ecu: goto label_4cd2ec;
        case 0x4cd2f0u: goto label_4cd2f0;
        case 0x4cd2f4u: goto label_4cd2f4;
        case 0x4cd2f8u: goto label_4cd2f8;
        case 0x4cd2fcu: goto label_4cd2fc;
        case 0x4cd300u: goto label_4cd300;
        case 0x4cd304u: goto label_4cd304;
        case 0x4cd308u: goto label_4cd308;
        case 0x4cd30cu: goto label_4cd30c;
        case 0x4cd310u: goto label_4cd310;
        case 0x4cd314u: goto label_4cd314;
        case 0x4cd318u: goto label_4cd318;
        case 0x4cd31cu: goto label_4cd31c;
        case 0x4cd320u: goto label_4cd320;
        case 0x4cd324u: goto label_4cd324;
        case 0x4cd328u: goto label_4cd328;
        case 0x4cd32cu: goto label_4cd32c;
        case 0x4cd330u: goto label_4cd330;
        case 0x4cd334u: goto label_4cd334;
        case 0x4cd338u: goto label_4cd338;
        case 0x4cd33cu: goto label_4cd33c;
        case 0x4cd340u: goto label_4cd340;
        case 0x4cd344u: goto label_4cd344;
        case 0x4cd348u: goto label_4cd348;
        case 0x4cd34cu: goto label_4cd34c;
        case 0x4cd350u: goto label_4cd350;
        case 0x4cd354u: goto label_4cd354;
        case 0x4cd358u: goto label_4cd358;
        case 0x4cd35cu: goto label_4cd35c;
        case 0x4cd360u: goto label_4cd360;
        case 0x4cd364u: goto label_4cd364;
        case 0x4cd368u: goto label_4cd368;
        case 0x4cd36cu: goto label_4cd36c;
        case 0x4cd370u: goto label_4cd370;
        case 0x4cd374u: goto label_4cd374;
        case 0x4cd378u: goto label_4cd378;
        case 0x4cd37cu: goto label_4cd37c;
        case 0x4cd380u: goto label_4cd380;
        case 0x4cd384u: goto label_4cd384;
        case 0x4cd388u: goto label_4cd388;
        case 0x4cd38cu: goto label_4cd38c;
        case 0x4cd390u: goto label_4cd390;
        case 0x4cd394u: goto label_4cd394;
        case 0x4cd398u: goto label_4cd398;
        case 0x4cd39cu: goto label_4cd39c;
        case 0x4cd3a0u: goto label_4cd3a0;
        case 0x4cd3a4u: goto label_4cd3a4;
        case 0x4cd3a8u: goto label_4cd3a8;
        case 0x4cd3acu: goto label_4cd3ac;
        case 0x4cd3b0u: goto label_4cd3b0;
        case 0x4cd3b4u: goto label_4cd3b4;
        case 0x4cd3b8u: goto label_4cd3b8;
        case 0x4cd3bcu: goto label_4cd3bc;
        case 0x4cd3c0u: goto label_4cd3c0;
        case 0x4cd3c4u: goto label_4cd3c4;
        case 0x4cd3c8u: goto label_4cd3c8;
        case 0x4cd3ccu: goto label_4cd3cc;
        default: break;
    }

    ctx->pc = 0x4cd2b8u;

label_4cd2b8:
    // 0x4cd2b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cd2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4cd2bc:
    // 0x4cd2bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cd2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4cd2c0:
    // 0x4cd2c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4cd2c4:
    // 0x4cd2c4: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x4cd2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
label_4cd2c8:
    // 0x4cd2c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cd2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4cd2cc:
    // 0x4cd2cc: 0x26504580  addiu       $s0, $s2, 0x4580
    ctx->pc = 0x4cd2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 17792));
label_4cd2d0:
    // 0x4cd2d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cd2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4cd2d4:
    // 0x4cd2d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4cd2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cd2d8:
    // 0x4cd2d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cd2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4cd2dc:
    // 0x4cd2dc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4cd2dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4cd2e0:
    // 0x4cd2e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cd2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4cd2e4:
    // 0x4cd2e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4cd2e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4cd2e8:
    // 0x4cd2e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cd2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4cd2ec:
    // 0x4cd2ec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4cd2ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4cd2f0:
    // 0x4cd2f0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cd2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4cd2f4:
    // 0x4cd2f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4cd2f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4cd2f8:
    // 0x4cd2f8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4cd2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4cd2fc:
    // 0x4cd2fc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4cd2fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cd300:
    // 0x4cd300: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4cd300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4cd304:
    // 0x4cd304: 0x3c1e0044  lui         $fp, 0x44
    ctx->pc = 0x4cd304u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
label_4cd308:
    // 0x4cd308: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cd308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cd30c:
    // 0x4cd30c: 0x0  nop
    ctx->pc = 0x4cd30cu;
    // NOP
label_4cd310:
    // 0x4cd310: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cd310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18092)));
label_4cd314:
    // 0x4cd314: 0x0  nop
    ctx->pc = 0x4cd314u;
    // NOP
label_4cd318:
    // 0x4cd318: 0x0  nop
    ctx->pc = 0x4cd318u;
    // NOP
label_4cd31c:
    // 0x4cd31c: 0x0  nop
    ctx->pc = 0x4cd31cu;
    // NOP
label_4cd320:
    // 0x4cd320: 0x0  nop
    ctx->pc = 0x4cd320u;
    // NOP
label_4cd324:
    // 0x4cd324: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4cd328:
    if (ctx->pc == 0x4CD328u) {
        ctx->pc = 0x4CD32Cu;
        goto label_4cd32c;
    }
    ctx->pc = 0x4CD324u;
    {
        const bool branch_taken_0x4cd324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd324) {
            ctx->pc = 0x4CD310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd310;
        }
    }
    ctx->pc = 0x4CD32Cu;
label_4cd32c:
    // 0x4cd32c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4cd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4cd330:
    // 0x4cd330: 0x8c623968  lw          $v0, 0x3968($v1)
    ctx->pc = 0x4cd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14696)));
label_4cd334:
    // 0x4cd334: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4cd334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4cd338:
    // 0x4cd338: 0xae170010  sw          $s7, 0x10($s0)
    ctx->pc = 0x4cd338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 23));
label_4cd33c:
    // 0x4cd33c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4cd33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4cd340:
    // 0x4cd340: 0xae160014  sw          $s6, 0x14($s0)
    ctx->pc = 0x4cd340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 22));
label_4cd344:
    // 0x4cd344: 0xae150018  sw          $s5, 0x18($s0)
    ctx->pc = 0x4cd344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
label_4cd348:
    // 0x4cd348: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x4cd348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
label_4cd34c:
    // 0x4cd34c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4cd350:
    if (ctx->pc == 0x4CD350u) {
        ctx->pc = 0x4CD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD34Cu;
        // 0x4cd350: 0xae130020  sw          $s3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD354u;
        goto label_4cd354;
    }
    ctx->pc = 0x4CD34Cu;
    {
        const bool branch_taken_0x4cd34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD34Cu;
        // 0x4cd350: 0xae130020  sw          $s3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd34c) {
            ctx->pc = 0x4CD360u;
            goto label_4cd360;
        }
    }
    ctx->pc = 0x4CD354u;
label_4cd354:
    // 0x4cd354: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x4cd354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_4cd358:
    // 0x4cd358: 0x10000002  b           . + 4 + (0x2 << 2)
label_4cd35c:
    if (ctx->pc == 0x4CD35Cu) {
        ctx->pc = 0x4CD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD358u;
        // 0x4cd35c: 0x2462fed8  addiu       $v0, $v1, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD360u;
        goto label_4cd360;
    }
    ctx->pc = 0x4CD358u;
    {
        const bool branch_taken_0x4cd358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD358u;
        // 0x4cd35c: 0x2462fed8  addiu       $v0, $v1, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd358) {
            ctx->pc = 0x4CD364u;
            goto label_4cd364;
        }
    }
    ctx->pc = 0x4CD360u;
label_4cd360:
    // 0x4cd360: 0x27c2fe98  addiu       $v0, $fp, -0x168
    ctx->pc = 0x4cd360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966936));
label_4cd364:
    // 0x4cd364: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cd364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cd368:
    // 0x4cd368: 0x26454580  addiu       $a1, $s2, 0x4580
    ctx->pc = 0x4cd368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17792));
label_4cd36c:
    // 0x4cd36c: 0x8c6446a0  lw          $a0, 0x46A0($v1)
    ctx->pc = 0x4cd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18080)));
label_4cd370:
    // 0x4cd370: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x4cd370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4cd374:
    // 0x4cd374: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4cd374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cd378:
    // 0x4cd378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4cd378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cd37c:
    // 0x4cd37c: 0x40f809  jalr        $v0
label_4cd380:
    if (ctx->pc == 0x4CD380u) {
        ctx->pc = 0x4CD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD37Cu;
        // 0x4cd380: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD384u;
        goto label_4cd384;
    }
    ctx->pc = 0x4CD37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4CD384u);
        ctx->pc = 0x4CD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD37Cu;
        // 0x4cd380: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD37Cu, 0x4CD384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CD384u;
label_4cd384:
    // 0x4cd384: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4cd388:
    if (ctx->pc == 0x4CD388u) {
        ctx->pc = 0x4CD388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD384u;
        // 0x4cd388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD38Cu;
        goto label_4cd38c;
    }
    ctx->pc = 0x4CD384u;
    {
        const bool branch_taken_0x4cd384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD384u;
        // 0x4cd388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd384) {
            ctx->pc = 0x4CD3A0u;
            goto label_4cd3a0;
        }
    }
    ctx->pc = 0x4CD38Cu;
label_4cd38c:
    // 0x4cd38c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4cd38cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4cd390:
    // 0x4cd390: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x4cd390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_4cd394:
    // 0x4cd394: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_4cd398:
    if (ctx->pc == 0x4CD398u) {
        ctx->pc = 0x4CD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD394u;
        // 0x4cd398: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD39Cu;
        goto label_4cd39c;
    }
    ctx->pc = 0x4CD394u;
    {
        const bool branch_taken_0x4cd394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD394u;
        // 0x4cd398: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd394) {
            ctx->pc = 0x4CD310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd310;
        }
    }
    ctx->pc = 0x4CD39Cu;
label_4cd39c:
    // 0x4cd39c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4cd39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cd3a0:
    // 0x4cd3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cd3a4:
    // 0x4cd3a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4cd3a8:
    // 0x4cd3a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cd3a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cd3ac:
    // 0x4cd3ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cd3acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4cd3b0:
    // 0x4cd3b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cd3b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cd3b4:
    // 0x4cd3b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cd3b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4cd3b8:
    // 0x4cd3b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cd3b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4cd3bc:
    // 0x4cd3bc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cd3bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4cd3c0:
    // 0x4cd3c0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cd3c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cd3c4:
    // 0x4cd3c4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cd3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4cd3c8:
    // 0x4cd3c8: 0x3e00008  jr          $ra
label_4cd3cc:
    if (ctx->pc == 0x4CD3CCu) {
        ctx->pc = 0x4CD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD3C8u;
        // 0x4cd3cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD3D0u;
        goto label_fallthrough_0x4cd3c8;
    }
    ctx->pc = 0x4CD3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD3C8u;
        // 0x4cd3cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4cd3c8:
    ctx->pc = 0x4CD3D0u;
}
