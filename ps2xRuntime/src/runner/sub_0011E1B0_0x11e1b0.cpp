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

// Function: sub_0011E1B0
// Address: 0x11e1b0 - 0x11e440
void sub_0011E1B0_0x11e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E1B0_0x11e1b0");
#endif

    switch (ctx->pc) {
        case 0x11e1b0u: goto label_11e1b0;
        case 0x11e1b4u: goto label_11e1b4;
        case 0x11e1b8u: goto label_11e1b8;
        case 0x11e1bcu: goto label_11e1bc;
        case 0x11e1c0u: goto label_11e1c0;
        case 0x11e1c4u: goto label_11e1c4;
        case 0x11e1c8u: goto label_11e1c8;
        case 0x11e1ccu: goto label_11e1cc;
        case 0x11e1d0u: goto label_11e1d0;
        case 0x11e1d4u: goto label_11e1d4;
        case 0x11e1d8u: goto label_11e1d8;
        case 0x11e1dcu: goto label_11e1dc;
        case 0x11e1e0u: goto label_11e1e0;
        case 0x11e1e4u: goto label_11e1e4;
        case 0x11e1e8u: goto label_11e1e8;
        case 0x11e1ecu: goto label_11e1ec;
        case 0x11e1f0u: goto label_11e1f0;
        case 0x11e1f4u: goto label_11e1f4;
        case 0x11e1f8u: goto label_11e1f8;
        case 0x11e1fcu: goto label_11e1fc;
        case 0x11e200u: goto label_11e200;
        case 0x11e204u: goto label_11e204;
        case 0x11e208u: goto label_11e208;
        case 0x11e20cu: goto label_11e20c;
        case 0x11e210u: goto label_11e210;
        case 0x11e214u: goto label_11e214;
        case 0x11e218u: goto label_11e218;
        case 0x11e21cu: goto label_11e21c;
        case 0x11e220u: goto label_11e220;
        case 0x11e224u: goto label_11e224;
        case 0x11e228u: goto label_11e228;
        case 0x11e22cu: goto label_11e22c;
        case 0x11e230u: goto label_11e230;
        case 0x11e234u: goto label_11e234;
        case 0x11e238u: goto label_11e238;
        case 0x11e23cu: goto label_11e23c;
        case 0x11e240u: goto label_11e240;
        case 0x11e244u: goto label_11e244;
        case 0x11e248u: goto label_11e248;
        case 0x11e24cu: goto label_11e24c;
        case 0x11e250u: goto label_11e250;
        case 0x11e254u: goto label_11e254;
        case 0x11e258u: goto label_11e258;
        case 0x11e25cu: goto label_11e25c;
        case 0x11e260u: goto label_11e260;
        case 0x11e264u: goto label_11e264;
        case 0x11e268u: goto label_11e268;
        case 0x11e26cu: goto label_11e26c;
        case 0x11e270u: goto label_11e270;
        case 0x11e274u: goto label_11e274;
        case 0x11e278u: goto label_11e278;
        case 0x11e27cu: goto label_11e27c;
        case 0x11e280u: goto label_11e280;
        case 0x11e284u: goto label_11e284;
        case 0x11e288u: goto label_11e288;
        case 0x11e28cu: goto label_11e28c;
        case 0x11e290u: goto label_11e290;
        case 0x11e294u: goto label_11e294;
        case 0x11e298u: goto label_11e298;
        case 0x11e29cu: goto label_11e29c;
        case 0x11e2a0u: goto label_11e2a0;
        case 0x11e2a4u: goto label_11e2a4;
        case 0x11e2a8u: goto label_11e2a8;
        case 0x11e2acu: goto label_11e2ac;
        case 0x11e2b0u: goto label_11e2b0;
        case 0x11e2b4u: goto label_11e2b4;
        case 0x11e2b8u: goto label_11e2b8;
        case 0x11e2bcu: goto label_11e2bc;
        case 0x11e2c0u: goto label_11e2c0;
        case 0x11e2c4u: goto label_11e2c4;
        case 0x11e2c8u: goto label_11e2c8;
        case 0x11e2ccu: goto label_11e2cc;
        case 0x11e2d0u: goto label_11e2d0;
        case 0x11e2d4u: goto label_11e2d4;
        case 0x11e2d8u: goto label_11e2d8;
        case 0x11e2dcu: goto label_11e2dc;
        case 0x11e2e0u: goto label_11e2e0;
        case 0x11e2e4u: goto label_11e2e4;
        case 0x11e2e8u: goto label_11e2e8;
        case 0x11e2ecu: goto label_11e2ec;
        case 0x11e2f0u: goto label_11e2f0;
        case 0x11e2f4u: goto label_11e2f4;
        case 0x11e2f8u: goto label_11e2f8;
        case 0x11e2fcu: goto label_11e2fc;
        case 0x11e300u: goto label_11e300;
        case 0x11e304u: goto label_11e304;
        case 0x11e308u: goto label_11e308;
        case 0x11e30cu: goto label_11e30c;
        case 0x11e310u: goto label_11e310;
        case 0x11e314u: goto label_11e314;
        case 0x11e318u: goto label_11e318;
        case 0x11e31cu: goto label_11e31c;
        case 0x11e320u: goto label_11e320;
        case 0x11e324u: goto label_11e324;
        case 0x11e328u: goto label_11e328;
        case 0x11e32cu: goto label_11e32c;
        case 0x11e330u: goto label_11e330;
        case 0x11e334u: goto label_11e334;
        case 0x11e338u: goto label_11e338;
        case 0x11e33cu: goto label_11e33c;
        case 0x11e340u: goto label_11e340;
        case 0x11e344u: goto label_11e344;
        case 0x11e348u: goto label_11e348;
        case 0x11e34cu: goto label_11e34c;
        case 0x11e350u: goto label_11e350;
        case 0x11e354u: goto label_11e354;
        case 0x11e358u: goto label_11e358;
        case 0x11e35cu: goto label_11e35c;
        case 0x11e360u: goto label_11e360;
        case 0x11e364u: goto label_11e364;
        case 0x11e368u: goto label_11e368;
        case 0x11e36cu: goto label_11e36c;
        case 0x11e370u: goto label_11e370;
        case 0x11e374u: goto label_11e374;
        case 0x11e378u: goto label_11e378;
        case 0x11e37cu: goto label_11e37c;
        case 0x11e380u: goto label_11e380;
        case 0x11e384u: goto label_11e384;
        case 0x11e388u: goto label_11e388;
        case 0x11e38cu: goto label_11e38c;
        case 0x11e390u: goto label_11e390;
        case 0x11e394u: goto label_11e394;
        case 0x11e398u: goto label_11e398;
        case 0x11e39cu: goto label_11e39c;
        case 0x11e3a0u: goto label_11e3a0;
        case 0x11e3a4u: goto label_11e3a4;
        case 0x11e3a8u: goto label_11e3a8;
        case 0x11e3acu: goto label_11e3ac;
        case 0x11e3b0u: goto label_11e3b0;
        case 0x11e3b4u: goto label_11e3b4;
        case 0x11e3b8u: goto label_11e3b8;
        case 0x11e3bcu: goto label_11e3bc;
        case 0x11e3c0u: goto label_11e3c0;
        case 0x11e3c4u: goto label_11e3c4;
        case 0x11e3c8u: goto label_11e3c8;
        case 0x11e3ccu: goto label_11e3cc;
        case 0x11e3d0u: goto label_11e3d0;
        case 0x11e3d4u: goto label_11e3d4;
        case 0x11e3d8u: goto label_11e3d8;
        case 0x11e3dcu: goto label_11e3dc;
        case 0x11e3e0u: goto label_11e3e0;
        case 0x11e3e4u: goto label_11e3e4;
        case 0x11e3e8u: goto label_11e3e8;
        case 0x11e3ecu: goto label_11e3ec;
        case 0x11e3f0u: goto label_11e3f0;
        case 0x11e3f4u: goto label_11e3f4;
        case 0x11e3f8u: goto label_11e3f8;
        case 0x11e3fcu: goto label_11e3fc;
        case 0x11e400u: goto label_11e400;
        case 0x11e404u: goto label_11e404;
        case 0x11e408u: goto label_11e408;
        case 0x11e40cu: goto label_11e40c;
        case 0x11e410u: goto label_11e410;
        case 0x11e414u: goto label_11e414;
        case 0x11e418u: goto label_11e418;
        case 0x11e41cu: goto label_11e41c;
        case 0x11e420u: goto label_11e420;
        case 0x11e424u: goto label_11e424;
        case 0x11e428u: goto label_11e428;
        case 0x11e42cu: goto label_11e42c;
        case 0x11e430u: goto label_11e430;
        case 0x11e434u: goto label_11e434;
        case 0x11e438u: goto label_11e438;
        case 0x11e43cu: goto label_11e43c;
        default: break;
    }

    ctx->pc = 0x11e1b0u;

label_11e1b0:
    // 0x11e1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11e1b4:
    // 0x11e1b4: 0x2c820011  sltiu       $v0, $a0, 0x11
    ctx->pc = 0x11e1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_11e1b8:
    // 0x11e1b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_11e1bc:
    // 0x11e1bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11e1c0:
    // 0x11e1c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11e1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e1c4:
    // 0x11e1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e1c8:
    // 0x11e1c8: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_11e1cc:
    if (ctx->pc == 0x11E1CCu) {
        ctx->pc = 0x11E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1C8u;
        // 0x11e1cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E1D0u;
        goto label_11e1d0;
    }
    ctx->pc = 0x11E1C8u;
    {
        const bool branch_taken_0x11e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1C8u;
        // 0x11e1cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1c8) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E1D0u;
label_11e1d0:
    // 0x11e1d0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x11e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_11e1d4:
    // 0x11e1d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11e1d8:
    // 0x11e1d8: 0x244285b0  addiu       $v0, $v0, -0x7A50
    ctx->pc = 0x11e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935984));
label_11e1dc:
    // 0x11e1dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11e1e0:
    // 0x11e1e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11e1e4:
    // 0x11e1e4: 0x800008  jr          $a0
label_11e1e8:
    if (ctx->pc == 0x11E1E8u) {
        ctx->pc = 0x11E1ECu;
        goto label_11e1ec;
    }
    ctx->pc = 0x11E1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E1ECu: goto label_11e1ec;
            case 0x11E1FCu: goto label_11e1fc;
            case 0x11E258u: goto label_11e258;
            case 0x11E26Cu: goto label_11e26c;
            case 0x11E2C8u: goto label_11e2c8;
            case 0x11E324u: goto label_11e324;
            case 0x11E338u: goto label_11e338;
            case 0x11E34Cu: goto label_11e34c;
            case 0x11E360u: goto label_11e360;
            case 0x11E370u: goto label_11e370;
            case 0x11E3CCu: goto label_11e3cc;
            case 0x11E3D8u: goto label_11e3d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11E1ECu;
label_11e1ec:
    // 0x11e1ec: 0xc04800e  jal         func_120038
label_11e1f0:
    if (ctx->pc == 0x11E1F0u) {
        ctx->pc = 0x11E1F4u;
        goto label_11e1f4;
    }
    ctx->pc = 0x11E1ECu;
    SET_GPR_U32(ctx, 31, 0x11E1F4u);
    ctx->pc = 0x120038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120038u, 0x11E1ECu, 0x11E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1F4u;
label_11e1f4:
    // 0x11e1f4: 0x10000078  b           . + 4 + (0x78 << 2)
label_11e1f8:
    if (ctx->pc == 0x11E1F8u) {
        ctx->pc = 0x11E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1F4u;
        // 0x11e1f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E1FCu;
        goto label_11e1fc;
    }
    ctx->pc = 0x11E1F4u;
    {
        const bool branch_taken_0x11e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1F4u;
        // 0x11e1f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1f4) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E1FCu;
label_11e1fc:
    // 0x11e1fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11e200:
    // 0x11e200: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11e200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11e204:
    // 0x11e204: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11e204u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11e208:
    // 0x11e208: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11e208u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11e20c:
    // 0x11e20c: 0x24a58540  addiu       $a1, $a1, -0x7AC0
    ctx->pc = 0x11e20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935872));
label_11e210:
    // 0x11e210: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11e210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11e214:
    // 0x11e214: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11e218:
    // 0x11e218: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_11e21c:
    // 0x11e21c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11e220:
    // 0x11e220: 0x24090067  addiu       $t1, $zero, 0x67
    ctx->pc = 0x11e220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_11e224:
    // 0x11e224: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11e224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11e228:
    // 0x11e228: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11e228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e22c:
    // 0x11e22c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11e230:
    // 0x11e230: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11e230u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e234:
    // 0x11e234: 0x40f809  jalr        $v0
label_11e238:
    if (ctx->pc == 0x11E238u) {
        ctx->pc = 0x11E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E234u;
        // 0x11e238: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E23Cu;
        goto label_11e23c;
    }
    ctx->pc = 0x11E234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E23Cu);
        ctx->pc = 0x11E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E234u;
        // 0x11e238: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E234u, 0x11E23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E23Cu;
label_11e23c:
    // 0x11e23c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e240:
    // 0x11e240: 0x52000066  beql        $s0, $zero, . + 4 + (0x66 << 2)
label_11e244:
    if (ctx->pc == 0x11E244u) {
        ctx->pc = 0x11E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E240u;
        // 0x11e244: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E248u;
        goto label_11e248;
    }
    ctx->pc = 0x11E240u;
    {
        const bool branch_taken_0x11e240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e240) {
            ctx->pc = 0x11E244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E240u;
            // 0x11e244: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3DCu;
            goto label_11e3dc;
        }
    }
    ctx->pc = 0x11E248u;
label_11e248:
    // 0x11e248: 0xc05086e  jal         func_1421B8
label_11e24c:
    if (ctx->pc == 0x11E24Cu) {
        ctx->pc = 0x11E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E248u;
        // 0x11e24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E250u;
        goto label_11e250;
    }
    ctx->pc = 0x11E248u;
    SET_GPR_U32(ctx, 31, 0x11E250u);
    ctx->pc = 0x11E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E248u;
    // 0x11e24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421B8u, 0x11E248u, 0x11E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E250u;
label_11e250:
    // 0x11e250: 0x10000061  b           . + 4 + (0x61 << 2)
label_11e254:
    if (ctx->pc == 0x11E254u) {
        ctx->pc = 0x11E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E250u;
        // 0x11e254: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E258u;
        goto label_11e258;
    }
    ctx->pc = 0x11E250u;
    {
        const bool branch_taken_0x11e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E250u;
        // 0x11e254: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e250) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E258u;
label_11e258:
    // 0x11e258: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11e258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11e25c:
    // 0x11e25c: 0xc047eb2  jal         func_11FAC8
label_11e260:
    if (ctx->pc == 0x11E260u) {
        ctx->pc = 0x11E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E25Cu;
        // 0x11e260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E264u;
        goto label_11e264;
    }
    ctx->pc = 0x11E25Cu;
    SET_GPR_U32(ctx, 31, 0x11E264u);
    ctx->pc = 0x11E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E25Cu;
    // 0x11e260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC8u, 0x11E25Cu, 0x11E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E264u;
label_11e264:
    // 0x11e264: 0x1000005c  b           . + 4 + (0x5C << 2)
label_11e268:
    if (ctx->pc == 0x11E268u) {
        ctx->pc = 0x11E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E264u;
        // 0x11e268: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E26Cu;
        goto label_11e26c;
    }
    ctx->pc = 0x11E264u;
    {
        const bool branch_taken_0x11e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E264u;
        // 0x11e268: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e264) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E26Cu;
label_11e26c:
    // 0x11e26c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11e270:
    // 0x11e270: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11e270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11e274:
    // 0x11e274: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11e274u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11e278:
    // 0x11e278: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11e278u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11e27c:
    // 0x11e27c: 0x24a58580  addiu       $a1, $a1, -0x7A80
    ctx->pc = 0x11e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935936));
label_11e280:
    // 0x11e280: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11e280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11e284:
    // 0x11e284: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11e288:
    // 0x11e288: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x11e288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_11e28c:
    // 0x11e28c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11e28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11e290:
    // 0x11e290: 0x24090073  addiu       $t1, $zero, 0x73
    ctx->pc = 0x11e290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_11e294:
    // 0x11e294: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11e294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11e298:
    // 0x11e298: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11e298u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e29c:
    // 0x11e29c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11e2a0:
    // 0x11e2a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11e2a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e2a4:
    // 0x11e2a4: 0x40f809  jalr        $v0
label_11e2a8:
    if (ctx->pc == 0x11E2A8u) {
        ctx->pc = 0x11E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2A4u;
        // 0x11e2a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E2ACu;
        goto label_11e2ac;
    }
    ctx->pc = 0x11E2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E2ACu);
        ctx->pc = 0x11E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2A4u;
        // 0x11e2a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E2A4u, 0x11E2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E2ACu;
label_11e2ac:
    // 0x11e2ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e2b0:
    // 0x11e2b0: 0x5200004a  beql        $s0, $zero, . + 4 + (0x4A << 2)
label_11e2b4:
    if (ctx->pc == 0x11E2B4u) {
        ctx->pc = 0x11E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2B0u;
        // 0x11e2b4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E2B8u;
        goto label_11e2b8;
    }
    ctx->pc = 0x11E2B0u;
    {
        const bool branch_taken_0x11e2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2b0) {
            ctx->pc = 0x11E2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E2B0u;
            // 0x11e2b4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3DCu;
            goto label_11e3dc;
        }
    }
    ctx->pc = 0x11E2B8u;
label_11e2b8:
    // 0x11e2b8: 0xc04d4bc  jal         func_1352F0
label_11e2bc:
    if (ctx->pc == 0x11E2BCu) {
        ctx->pc = 0x11E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2B8u;
        // 0x11e2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E2C0u;
        goto label_11e2c0;
    }
    ctx->pc = 0x11E2B8u;
    SET_GPR_U32(ctx, 31, 0x11E2C0u);
    ctx->pc = 0x11E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2B8u;
    // 0x11e2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1352F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1352F0u, 0x11E2B8u, 0x11E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2C0u;
label_11e2c0:
    // 0x11e2c0: 0x10000045  b           . + 4 + (0x45 << 2)
label_11e2c4:
    if (ctx->pc == 0x11E2C4u) {
        ctx->pc = 0x11E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2C0u;
        // 0x11e2c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E2C8u;
        goto label_11e2c8;
    }
    ctx->pc = 0x11E2C0u;
    {
        const bool branch_taken_0x11e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2C0u;
        // 0x11e2c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2c0) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E2C8u;
label_11e2c8:
    // 0x11e2c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11e2cc:
    // 0x11e2cc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11e2d0:
    // 0x11e2d0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11e2d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11e2d4:
    // 0x11e2d4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11e2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11e2d8:
    // 0x11e2d8: 0x24a58590  addiu       $a1, $a1, -0x7A70
    ctx->pc = 0x11e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935952));
label_11e2dc:
    // 0x11e2dc: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11e2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11e2e0:
    // 0x11e2e0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11e2e4:
    // 0x11e2e4: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x11e2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_11e2e8:
    // 0x11e2e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11e2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11e2ec:
    // 0x11e2ec: 0x24090081  addiu       $t1, $zero, 0x81
    ctx->pc = 0x11e2ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_11e2f0:
    // 0x11e2f0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11e2f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11e2f4:
    // 0x11e2f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11e2f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e2f8:
    // 0x11e2f8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11e2fc:
    // 0x11e2fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11e2fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e300:
    // 0x11e300: 0x40f809  jalr        $v0
label_11e304:
    if (ctx->pc == 0x11E304u) {
        ctx->pc = 0x11E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E300u;
        // 0x11e304: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E308u;
        goto label_11e308;
    }
    ctx->pc = 0x11E300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E308u);
        ctx->pc = 0x11E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E300u;
        // 0x11e304: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E300u, 0x11E308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E308u;
label_11e308:
    // 0x11e308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e30c:
    // 0x11e30c: 0x52000033  beql        $s0, $zero, . + 4 + (0x33 << 2)
label_11e310:
    if (ctx->pc == 0x11E310u) {
        ctx->pc = 0x11E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E30Cu;
        // 0x11e310: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E314u;
        goto label_11e314;
    }
    ctx->pc = 0x11E30Cu;
    {
        const bool branch_taken_0x11e30c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e30c) {
            ctx->pc = 0x11E310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E30Cu;
            // 0x11e310: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3DCu;
            goto label_11e3dc;
        }
    }
    ctx->pc = 0x11E314u;
label_11e314:
    // 0x11e314: 0xc048fa8  jal         func_123EA0
label_11e318:
    if (ctx->pc == 0x11E318u) {
        ctx->pc = 0x11E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E314u;
        // 0x11e318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E31Cu;
        goto label_11e31c;
    }
    ctx->pc = 0x11E314u;
    SET_GPR_U32(ctx, 31, 0x11E31Cu);
    ctx->pc = 0x11E318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E314u;
    // 0x11e318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123EA0u, 0x11E314u, 0x11E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E31Cu;
label_11e31c:
    // 0x11e31c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_11e320:
    if (ctx->pc == 0x11E320u) {
        ctx->pc = 0x11E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E31Cu;
        // 0x11e320: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E324u;
        goto label_11e324;
    }
    ctx->pc = 0x11E31Cu;
    {
        const bool branch_taken_0x11e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E31Cu;
        // 0x11e320: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e31c) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E324u;
label_11e324:
    // 0x11e324: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11e324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11e328:
    // 0x11e328: 0xc047f60  jal         func_11FD80
label_11e32c:
    if (ctx->pc == 0x11E32Cu) {
        ctx->pc = 0x11E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E328u;
        // 0x11e32c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E330u;
        goto label_11e330;
    }
    ctx->pc = 0x11E328u;
    SET_GPR_U32(ctx, 31, 0x11E330u);
    ctx->pc = 0x11E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E328u;
    // 0x11e32c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x11E328u, 0x11E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E330u;
label_11e330:
    // 0x11e330: 0x10000029  b           . + 4 + (0x29 << 2)
label_11e334:
    if (ctx->pc == 0x11E334u) {
        ctx->pc = 0x11E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E330u;
        // 0x11e334: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E338u;
        goto label_11e338;
    }
    ctx->pc = 0x11E330u;
    {
        const bool branch_taken_0x11e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E330u;
        // 0x11e334: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e330) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E338u;
label_11e338:
    // 0x11e338: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11e338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11e33c:
    // 0x11e33c: 0xc047f9a  jal         func_11FE68
label_11e340:
    if (ctx->pc == 0x11E340u) {
        ctx->pc = 0x11E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E33Cu;
        // 0x11e340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E344u;
        goto label_11e344;
    }
    ctx->pc = 0x11E33Cu;
    SET_GPR_U32(ctx, 31, 0x11E344u);
    ctx->pc = 0x11E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E33Cu;
    // 0x11e340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE68u, 0x11E33Cu, 0x11E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E344u;
label_11e344:
    // 0x11e344: 0x10000024  b           . + 4 + (0x24 << 2)
label_11e348:
    if (ctx->pc == 0x11E348u) {
        ctx->pc = 0x11E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E344u;
        // 0x11e348: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E34Cu;
        goto label_11e34c;
    }
    ctx->pc = 0x11E344u;
    {
        const bool branch_taken_0x11e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E344u;
        // 0x11e348: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e344) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E34Cu;
label_11e34c:
    // 0x11e34c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11e34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11e350:
    // 0x11e350: 0xc047e78  jal         func_11F9E0
label_11e354:
    if (ctx->pc == 0x11E354u) {
        ctx->pc = 0x11E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E350u;
        // 0x11e354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E358u;
        goto label_11e358;
    }
    ctx->pc = 0x11E350u;
    SET_GPR_U32(ctx, 31, 0x11E358u);
    ctx->pc = 0x11E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E350u;
    // 0x11e354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11E350u, 0x11E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E358u;
label_11e358:
    // 0x11e358: 0x1000001f  b           . + 4 + (0x1F << 2)
label_11e35c:
    if (ctx->pc == 0x11E35Cu) {
        ctx->pc = 0x11E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E358u;
        // 0x11e35c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E360u;
        goto label_11e360;
    }
    ctx->pc = 0x11E358u;
    {
        const bool branch_taken_0x11e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E358u;
        // 0x11e35c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e358) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E360u;
label_11e360:
    // 0x11e360: 0xc048038  jal         func_1200E0
label_11e364:
    if (ctx->pc == 0x11E364u) {
        ctx->pc = 0x11E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E360u;
        // 0x11e364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E368u;
        goto label_11e368;
    }
    ctx->pc = 0x11E360u;
    SET_GPR_U32(ctx, 31, 0x11E368u);
    ctx->pc = 0x11E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E360u;
    // 0x11e364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11E360u, 0x11E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E368u;
label_11e368:
    // 0x11e368: 0x1000001b  b           . + 4 + (0x1B << 2)
label_11e36c:
    if (ctx->pc == 0x11E36Cu) {
        ctx->pc = 0x11E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E368u;
        // 0x11e36c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E370u;
        goto label_11e370;
    }
    ctx->pc = 0x11E368u;
    {
        const bool branch_taken_0x11e368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E368u;
        // 0x11e36c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e368) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E370u;
label_11e370:
    // 0x11e370: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11e374:
    // 0x11e374: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11e374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11e378:
    // 0x11e378: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11e378u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11e37c:
    // 0x11e37c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11e37cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11e380:
    // 0x11e380: 0x24a585a0  addiu       $a1, $a1, -0x7A60
    ctx->pc = 0x11e380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935968));
label_11e384:
    // 0x11e384: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11e384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11e388:
    // 0x11e388: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11e388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11e38c:
    // 0x11e38c: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x11e38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_11e390:
    // 0x11e390: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11e390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11e394:
    // 0x11e394: 0x240900ba  addiu       $t1, $zero, 0xBA
    ctx->pc = 0x11e394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_11e398:
    // 0x11e398: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11e398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11e39c:
    // 0x11e39c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11e39cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e3a0:
    // 0x11e3a0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11e3a4:
    // 0x11e3a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11e3a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e3a8:
    // 0x11e3a8: 0x40f809  jalr        $v0
label_11e3ac:
    if (ctx->pc == 0x11E3ACu) {
        ctx->pc = 0x11E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3A8u;
        // 0x11e3ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E3B0u;
        goto label_11e3b0;
    }
    ctx->pc = 0x11E3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E3B0u);
        ctx->pc = 0x11E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3A8u;
        // 0x11e3ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E3A8u, 0x11E3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E3B0u;
label_11e3b0:
    // 0x11e3b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e3b4:
    // 0x11e3b4: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_11e3b8:
    if (ctx->pc == 0x11E3B8u) {
        ctx->pc = 0x11E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3B4u;
        // 0x11e3b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E3BCu;
        goto label_11e3bc;
    }
    ctx->pc = 0x11E3B4u;
    {
        const bool branch_taken_0x11e3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e3b4) {
            ctx->pc = 0x11E3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3B4u;
            // 0x11e3b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3DCu;
            goto label_11e3dc;
        }
    }
    ctx->pc = 0x11E3BCu;
label_11e3bc:
    // 0x11e3bc: 0xc04813c  jal         func_1204F0
label_11e3c0:
    if (ctx->pc == 0x11E3C0u) {
        ctx->pc = 0x11E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3BCu;
        // 0x11e3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E3C4u;
        goto label_11e3c4;
    }
    ctx->pc = 0x11E3BCu;
    SET_GPR_U32(ctx, 31, 0x11E3C4u);
    ctx->pc = 0x11E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3BCu;
    // 0x11e3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1204F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204F0u, 0x11E3BCu, 0x11E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3C4u;
label_11e3c4:
    // 0x11e3c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_11e3c8:
    if (ctx->pc == 0x11E3C8u) {
        ctx->pc = 0x11E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3C4u;
        // 0x11e3c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E3CCu;
        goto label_11e3cc;
    }
    ctx->pc = 0x11E3C4u;
    {
        const bool branch_taken_0x11e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3C4u;
        // 0x11e3c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3c4) {
            ctx->pc = 0x11E3D8u;
            goto label_11e3d8;
        }
    }
    ctx->pc = 0x11E3CCu;
label_11e3cc:
    // 0x11e3cc: 0xc048062  jal         func_120188
label_11e3d0:
    if (ctx->pc == 0x11E3D0u) {
        ctx->pc = 0x11E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3CCu;
        // 0x11e3d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E3D4u;
        goto label_11e3d4;
    }
    ctx->pc = 0x11E3CCu;
    SET_GPR_U32(ctx, 31, 0x11E3D4u);
    ctx->pc = 0x11E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3CCu;
    // 0x11e3d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120188u, 0x11E3CCu, 0x11E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3D4u;
label_11e3d4:
    // 0x11e3d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e3d8:
    // 0x11e3d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e3dc:
    // 0x11e3dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e3e0:
    // 0x11e3e0: 0x84440188  lh          $a0, 0x188($v0)
    ctx->pc = 0x11e3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 392)));
label_11e3e4:
    // 0x11e3e4: 0x8c46018c  lw          $a2, 0x18C($v0)
    ctx->pc = 0x11e3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_11e3e8:
    // 0x11e3e8: 0xc0f809  jalr        $a2
label_11e3ec:
    if (ctx->pc == 0x11E3ECu) {
        ctx->pc = 0x11E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3E8u;
        // 0x11e3ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E3F0u;
        goto label_11e3f0;
    }
    ctx->pc = 0x11E3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11E3F0u);
        ctx->pc = 0x11E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3E8u;
        // 0x11e3ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E3E8u, 0x11E3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E3F0u;
label_11e3f0:
    // 0x11e3f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e3f4:
    // 0x11e3f4: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e3f8:
    // 0x11e3f8: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e3fc:
    // 0x11e3fc: 0x40f809  jalr        $v0
label_11e400:
    if (ctx->pc == 0x11E400u) {
        ctx->pc = 0x11E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3FCu;
        // 0x11e400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E404u;
        goto label_11e404;
    }
    ctx->pc = 0x11E3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E404u);
        ctx->pc = 0x11E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3FCu;
        // 0x11e400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E3FCu, 0x11E404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E404u;
label_11e404:
    // 0x11e404: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_11e408:
    if (ctx->pc == 0x11E408u) {
        ctx->pc = 0x11E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E404u;
        // 0x11e408: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E40Cu;
        goto label_11e40c;
    }
    ctx->pc = 0x11E404u;
    {
        const bool branch_taken_0x11e404 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E404u;
        // 0x11e408: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e404) {
            ctx->pc = 0x11E428u;
            goto label_11e428;
        }
    }
    ctx->pc = 0x11E40Cu;
label_11e40c:
    // 0x11e40c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e410:
    // 0x11e410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e414:
    // 0x11e414: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11e414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_11e418:
    // 0x11e418: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x11e418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_11e41c:
    // 0x11e41c: 0x60f809  jalr        $v1
label_11e420:
    if (ctx->pc == 0x11E420u) {
        ctx->pc = 0x11E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E41Cu;
        // 0x11e420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E424u;
        goto label_11e424;
    }
    ctx->pc = 0x11E41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11E424u);
        ctx->pc = 0x11E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E41Cu;
        // 0x11e420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E41Cu, 0x11E424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E424u;
label_11e424:
    // 0x11e424: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e428:
    // 0x11e428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11e42c:
    // 0x11e42c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11e42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11e430:
    // 0x11e430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e434:
    // 0x11e434: 0x3e00008  jr          $ra
label_11e438:
    if (ctx->pc == 0x11E438u) {
        ctx->pc = 0x11E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E434u;
        // 0x11e438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E43Cu;
        goto label_11e43c;
    }
    ctx->pc = 0x11E434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E434u;
        // 0x11e438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E43Cu;
label_11e43c:
    // 0x11e43c: 0x0  nop
    ctx->pc = 0x11e43cu;
    // NOP
    ctx->pc = 0x11e440u;
}
