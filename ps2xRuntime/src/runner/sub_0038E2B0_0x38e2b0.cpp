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

// Function: sub_0038E2B0
// Address: 0x38e2b0 - 0x38e430
void sub_0038E2B0_0x38e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E2B0_0x38e2b0");
#endif

    switch (ctx->pc) {
        case 0x38e2b0u: goto label_38e2b0;
        case 0x38e2b4u: goto label_38e2b4;
        case 0x38e2b8u: goto label_38e2b8;
        case 0x38e2bcu: goto label_38e2bc;
        case 0x38e2c0u: goto label_38e2c0;
        case 0x38e2c4u: goto label_38e2c4;
        case 0x38e2c8u: goto label_38e2c8;
        case 0x38e2ccu: goto label_38e2cc;
        case 0x38e2d0u: goto label_38e2d0;
        case 0x38e2d4u: goto label_38e2d4;
        case 0x38e2d8u: goto label_38e2d8;
        case 0x38e2dcu: goto label_38e2dc;
        case 0x38e2e0u: goto label_38e2e0;
        case 0x38e2e4u: goto label_38e2e4;
        case 0x38e2e8u: goto label_38e2e8;
        case 0x38e2ecu: goto label_38e2ec;
        case 0x38e2f0u: goto label_38e2f0;
        case 0x38e2f4u: goto label_38e2f4;
        case 0x38e2f8u: goto label_38e2f8;
        case 0x38e2fcu: goto label_38e2fc;
        case 0x38e300u: goto label_38e300;
        case 0x38e304u: goto label_38e304;
        case 0x38e308u: goto label_38e308;
        case 0x38e30cu: goto label_38e30c;
        case 0x38e310u: goto label_38e310;
        case 0x38e314u: goto label_38e314;
        case 0x38e318u: goto label_38e318;
        case 0x38e31cu: goto label_38e31c;
        case 0x38e320u: goto label_38e320;
        case 0x38e324u: goto label_38e324;
        case 0x38e328u: goto label_38e328;
        case 0x38e32cu: goto label_38e32c;
        case 0x38e330u: goto label_38e330;
        case 0x38e334u: goto label_38e334;
        case 0x38e338u: goto label_38e338;
        case 0x38e33cu: goto label_38e33c;
        case 0x38e340u: goto label_38e340;
        case 0x38e344u: goto label_38e344;
        case 0x38e348u: goto label_38e348;
        case 0x38e34cu: goto label_38e34c;
        case 0x38e350u: goto label_38e350;
        case 0x38e354u: goto label_38e354;
        case 0x38e358u: goto label_38e358;
        case 0x38e35cu: goto label_38e35c;
        case 0x38e360u: goto label_38e360;
        case 0x38e364u: goto label_38e364;
        case 0x38e368u: goto label_38e368;
        case 0x38e36cu: goto label_38e36c;
        case 0x38e370u: goto label_38e370;
        case 0x38e374u: goto label_38e374;
        case 0x38e378u: goto label_38e378;
        case 0x38e37cu: goto label_38e37c;
        case 0x38e380u: goto label_38e380;
        case 0x38e384u: goto label_38e384;
        case 0x38e388u: goto label_38e388;
        case 0x38e38cu: goto label_38e38c;
        case 0x38e390u: goto label_38e390;
        case 0x38e394u: goto label_38e394;
        case 0x38e398u: goto label_38e398;
        case 0x38e39cu: goto label_38e39c;
        case 0x38e3a0u: goto label_38e3a0;
        case 0x38e3a4u: goto label_38e3a4;
        case 0x38e3a8u: goto label_38e3a8;
        case 0x38e3acu: goto label_38e3ac;
        case 0x38e3b0u: goto label_38e3b0;
        case 0x38e3b4u: goto label_38e3b4;
        case 0x38e3b8u: goto label_38e3b8;
        case 0x38e3bcu: goto label_38e3bc;
        case 0x38e3c0u: goto label_38e3c0;
        case 0x38e3c4u: goto label_38e3c4;
        case 0x38e3c8u: goto label_38e3c8;
        case 0x38e3ccu: goto label_38e3cc;
        case 0x38e3d0u: goto label_38e3d0;
        case 0x38e3d4u: goto label_38e3d4;
        case 0x38e3d8u: goto label_38e3d8;
        case 0x38e3dcu: goto label_38e3dc;
        case 0x38e3e0u: goto label_38e3e0;
        case 0x38e3e4u: goto label_38e3e4;
        case 0x38e3e8u: goto label_38e3e8;
        case 0x38e3ecu: goto label_38e3ec;
        case 0x38e3f0u: goto label_38e3f0;
        case 0x38e3f4u: goto label_38e3f4;
        case 0x38e3f8u: goto label_38e3f8;
        case 0x38e3fcu: goto label_38e3fc;
        case 0x38e400u: goto label_38e400;
        case 0x38e404u: goto label_38e404;
        case 0x38e408u: goto label_38e408;
        case 0x38e40cu: goto label_38e40c;
        case 0x38e410u: goto label_38e410;
        case 0x38e414u: goto label_38e414;
        case 0x38e418u: goto label_38e418;
        case 0x38e41cu: goto label_38e41c;
        case 0x38e420u: goto label_38e420;
        case 0x38e424u: goto label_38e424;
        case 0x38e428u: goto label_38e428;
        case 0x38e42cu: goto label_38e42c;
        default: break;
    }

    ctx->pc = 0x38e2b0u;

label_38e2b0:
    // 0x38e2b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38e2b4:
    // 0x38e2b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38e2b8:
    // 0x38e2b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38e2bc:
    // 0x38e2bc: 0x24424db0  addiu       $v0, $v0, 0x4DB0
    ctx->pc = 0x38e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19888));
label_38e2c0:
    // 0x38e2c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38e2c4:
    // 0x38e2c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38e2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e2c8:
    // 0x38e2c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_38e2cc:
    // 0x38e2cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38e2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38e2d0:
    // 0x38e2d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38e2d4:
    // 0x38e2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38e2d8:
    // 0x38e2d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38e2dc:
    // 0x38e2dc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x38e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38e2e0:
    // 0x38e2e0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_38e2e4:
    if (ctx->pc == 0x38E2E4u) {
        ctx->pc = 0x38E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2E0u;
        // 0x38e2e4: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E2E8u;
        goto label_38e2e8;
    }
    ctx->pc = 0x38E2E0u;
    {
        const bool branch_taken_0x38e2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2E0u;
        // 0x38e2e4: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2e0) {
            ctx->pc = 0x38E388u;
            goto label_38e388;
        }
    }
    ctx->pc = 0x38E2E8u;
label_38e2e8:
    // 0x38e2e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38e2ec:
    // 0x38e2ec: 0x0  nop
    ctx->pc = 0x38e2ecu;
    // NOP
label_38e2f0:
    // 0x38e2f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x38e2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38e2f4:
    // 0x38e2f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e2f8:
    // 0x38e2f8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x38e2f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_38e2fc:
    // 0x38e2fc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x38e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_38e300:
    // 0x38e300: 0x40f809  jalr        $v0
label_38e304:
    if (ctx->pc == 0x38E304u) {
        ctx->pc = 0x38E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E300u;
        // 0x38e304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E308u;
        goto label_38e308;
    }
    ctx->pc = 0x38E300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E308u);
        ctx->pc = 0x38E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E300u;
        // 0x38e304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E300u, 0x38E308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E308u;
label_38e308:
    // 0x38e308: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_38e30c:
    if (ctx->pc == 0x38E30Cu) {
        ctx->pc = 0x38E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E308u;
        // 0x38e30c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E310u;
        goto label_38e310;
    }
    ctx->pc = 0x38E308u;
    {
        const bool branch_taken_0x38e308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e308) {
            ctx->pc = 0x38E30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E308u;
            // 0x38e30c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E380u;
            goto label_38e380;
        }
    }
    ctx->pc = 0x38E310u;
label_38e310:
    // 0x38e310: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x38e310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38e314:
    // 0x38e314: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38e314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e318:
    // 0x38e318: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_38e31c:
    if (ctx->pc == 0x38E31Cu) {
        ctx->pc = 0x38E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E318u;
        // 0x38e31c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E320u;
        goto label_38e320;
    }
    ctx->pc = 0x38E318u;
    {
        const bool branch_taken_0x38e318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E318u;
        // 0x38e31c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e318) {
            ctx->pc = 0x38E37Cu;
            goto label_38e37c;
        }
    }
    ctx->pc = 0x38E320u;
label_38e320:
    // 0x38e320: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x38e320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38e324:
    // 0x38e324: 0x0  nop
    ctx->pc = 0x38e324u;
    // NOP
label_38e328:
    // 0x38e328: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x38e328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38e32c:
    // 0x38e32c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x38e32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_38e330:
    // 0x38e330: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x38e330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_38e334:
    // 0x38e334: 0x1470000d  bne         $v1, $s0, . + 4 + (0xD << 2)
label_38e338:
    if (ctx->pc == 0x38E338u) {
        ctx->pc = 0x38E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E334u;
        // 0x38e338: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E33Cu;
        goto label_38e33c;
    }
    ctx->pc = 0x38E334u;
    {
        const bool branch_taken_0x38e334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x38E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E334u;
        // 0x38e338: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e334) {
            ctx->pc = 0x38E36Cu;
            goto label_38e36c;
        }
    }
    ctx->pc = 0x38E33Cu;
label_38e33c:
    // 0x38e33c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x38e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38e340:
    // 0x38e340: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x38e340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_38e344:
    // 0x38e344: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x38e344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38e348:
    // 0x38e348: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x38e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_38e34c:
    // 0x38e34c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38e350:
    // 0x38e350: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x38e350u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_38e354:
    // 0x38e354: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x38e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38e358:
    // 0x38e358: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38e35c:
    // 0x38e35c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38e360:
    // 0x38e360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38e364:
    // 0x38e364: 0x10000005  b           . + 4 + (0x5 << 2)
label_38e368:
    if (ctx->pc == 0x38E368u) {
        ctx->pc = 0x38E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E364u;
        // 0x38e368: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E36Cu;
        goto label_38e36c;
    }
    ctx->pc = 0x38E364u;
    {
        const bool branch_taken_0x38e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E364u;
        // 0x38e368: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e364) {
            ctx->pc = 0x38E37Cu;
            goto label_38e37c;
        }
    }
    ctx->pc = 0x38E36Cu;
label_38e36c:
    // 0x38e36c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x38e36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_38e370:
    // 0x38e370: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x38e370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_38e374:
    // 0x38e374: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_38e378:
    if (ctx->pc == 0x38E378u) {
        ctx->pc = 0x38E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E374u;
        // 0x38e378: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E37Cu;
        goto label_38e37c;
    }
    ctx->pc = 0x38E374u;
    {
        const bool branch_taken_0x38e374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e374) {
            ctx->pc = 0x38E378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E374u;
            // 0x38e378: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e328;
        }
    }
    ctx->pc = 0x38E37Cu;
label_38e37c:
    // 0x38e37c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x38e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38e380:
    // 0x38e380: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_38e384:
    if (ctx->pc == 0x38E384u) {
        ctx->pc = 0x38E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E380u;
        // 0x38e384: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E388u;
        goto label_38e388;
    }
    ctx->pc = 0x38E380u;
    {
        const bool branch_taken_0x38e380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e380) {
            ctx->pc = 0x38E384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E380u;
            // 0x38e384: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e2f0;
        }
    }
    ctx->pc = 0x38E388u;
label_38e388:
    // 0x38e388: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38e388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38e38c:
    // 0x38e38c: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x38e38cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_38e390:
    // 0x38e390: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x38e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
label_38e394:
    // 0x38e394: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x38e394u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_38e398:
    // 0x38e398: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38e398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38e39c:
    // 0x38e39c: 0x26100948  addiu       $s0, $s0, 0x948
    ctx->pc = 0x38e39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2376));
label_38e3a0:
    // 0x38e3a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x38e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38e3a4:
    // 0x38e3a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e3a8:
    // 0x38e3a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x38e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_38e3ac:
    // 0x38e3ac: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x38e3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_38e3b0:
    // 0x38e3b0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x38e3b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_38e3b4:
    // 0x38e3b4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x38e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_38e3b8:
    // 0x38e3b8: 0x60f809  jalr        $v1
label_38e3bc:
    if (ctx->pc == 0x38E3BCu) {
        ctx->pc = 0x38E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3B8u;
        // 0x38e3bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E3C0u;
        goto label_38e3c0;
    }
    ctx->pc = 0x38E3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38E3C0u);
        ctx->pc = 0x38E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3B8u;
        // 0x38e3bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E3B8u, 0x38E3C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E3C0u;
label_38e3c0:
    // 0x38e3c0: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x38e3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_38e3c4:
    // 0x38e3c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e3c8:
    // 0x38e3c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x38e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_38e3cc:
    // 0x38e3cc: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x38e3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_38e3d0:
    // 0x38e3d0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x38e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38e3d4:
    // 0x38e3d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x38e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_38e3d8:
    // 0x38e3d8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x38e3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_38e3dc:
    // 0x38e3dc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x38e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_38e3e0:
    // 0x38e3e0: 0x60f809  jalr        $v1
label_38e3e4:
    if (ctx->pc == 0x38E3E4u) {
        ctx->pc = 0x38E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3E0u;
        // 0x38e3e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E3E8u;
        goto label_38e3e8;
    }
    ctx->pc = 0x38E3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38E3E8u);
        ctx->pc = 0x38E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3E0u;
        // 0x38e3e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E3E0u, 0x38E3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E3E8u;
label_38e3e8:
    // 0x38e3e8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38e3ec:
    // 0x38e3ec: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x38e3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_38e3f0:
    // 0x38e3f0: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x38e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_38e3f4:
    // 0x38e3f4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x38e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_38e3f8:
    // 0x38e3f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38e3fc:
    // 0x38e3fc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x38e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_38e400:
    // 0x38e400: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_38e404:
    if (ctx->pc == 0x38E404u) {
        ctx->pc = 0x38E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E400u;
        // 0x38e404: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E408u;
        goto label_38e408;
    }
    ctx->pc = 0x38E400u;
    {
        const bool branch_taken_0x38e400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E400u;
        // 0x38e404: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e400) {
            ctx->pc = 0x38E410u;
            goto label_38e410;
        }
    }
    ctx->pc = 0x38E408u;
label_38e408:
    // 0x38e408: 0xc10b208  jal         func_42C820
label_38e40c:
    if (ctx->pc == 0x38E40Cu) {
        ctx->pc = 0x38E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E408u;
        // 0x38e40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E410u;
        goto label_38e410;
    }
    ctx->pc = 0x38E408u;
    SET_GPR_U32(ctx, 31, 0x38E410u);
    ctx->pc = 0x38E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E408u;
    // 0x38e40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x38E408u, 0x38E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E410u;
label_38e410:
    // 0x38e410: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38e410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38e414:
    // 0x38e414: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38e414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38e418:
    // 0x38e418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38e418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e41c:
    // 0x38e41c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38e41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e420:
    // 0x38e420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e424:
    // 0x38e424: 0x3e00008  jr          $ra
label_38e428:
    if (ctx->pc == 0x38E428u) {
        ctx->pc = 0x38E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E424u;
        // 0x38e428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E42Cu;
        goto label_38e42c;
    }
    ctx->pc = 0x38E424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E424u;
        // 0x38e428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E42Cu;
label_38e42c:
    // 0x38e42c: 0x0  nop
    ctx->pc = 0x38e42cu;
    // NOP
    ctx->pc = 0x38e430u;
}
