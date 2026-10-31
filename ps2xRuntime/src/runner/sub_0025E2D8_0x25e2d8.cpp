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

// Function: sub_0025E2D8
// Address: 0x25e2d8 - 0x25e5a8
void sub_0025E2D8_0x25e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E2D8_0x25e2d8");
#endif

    switch (ctx->pc) {
        case 0x25e2d8u: goto label_25e2d8;
        case 0x25e2dcu: goto label_25e2dc;
        case 0x25e2e0u: goto label_25e2e0;
        case 0x25e2e4u: goto label_25e2e4;
        case 0x25e2e8u: goto label_25e2e8;
        case 0x25e2ecu: goto label_25e2ec;
        case 0x25e2f0u: goto label_25e2f0;
        case 0x25e2f4u: goto label_25e2f4;
        case 0x25e2f8u: goto label_25e2f8;
        case 0x25e2fcu: goto label_25e2fc;
        case 0x25e300u: goto label_25e300;
        case 0x25e304u: goto label_25e304;
        case 0x25e308u: goto label_25e308;
        case 0x25e30cu: goto label_25e30c;
        case 0x25e310u: goto label_25e310;
        case 0x25e314u: goto label_25e314;
        case 0x25e318u: goto label_25e318;
        case 0x25e31cu: goto label_25e31c;
        case 0x25e320u: goto label_25e320;
        case 0x25e324u: goto label_25e324;
        case 0x25e328u: goto label_25e328;
        case 0x25e32cu: goto label_25e32c;
        case 0x25e330u: goto label_25e330;
        case 0x25e334u: goto label_25e334;
        case 0x25e338u: goto label_25e338;
        case 0x25e33cu: goto label_25e33c;
        case 0x25e340u: goto label_25e340;
        case 0x25e344u: goto label_25e344;
        case 0x25e348u: goto label_25e348;
        case 0x25e34cu: goto label_25e34c;
        case 0x25e350u: goto label_25e350;
        case 0x25e354u: goto label_25e354;
        case 0x25e358u: goto label_25e358;
        case 0x25e35cu: goto label_25e35c;
        case 0x25e360u: goto label_25e360;
        case 0x25e364u: goto label_25e364;
        case 0x25e368u: goto label_25e368;
        case 0x25e36cu: goto label_25e36c;
        case 0x25e370u: goto label_25e370;
        case 0x25e374u: goto label_25e374;
        case 0x25e378u: goto label_25e378;
        case 0x25e37cu: goto label_25e37c;
        case 0x25e380u: goto label_25e380;
        case 0x25e384u: goto label_25e384;
        case 0x25e388u: goto label_25e388;
        case 0x25e38cu: goto label_25e38c;
        case 0x25e390u: goto label_25e390;
        case 0x25e394u: goto label_25e394;
        case 0x25e398u: goto label_25e398;
        case 0x25e39cu: goto label_25e39c;
        case 0x25e3a0u: goto label_25e3a0;
        case 0x25e3a4u: goto label_25e3a4;
        case 0x25e3a8u: goto label_25e3a8;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3b0u: goto label_25e3b0;
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3b8u: goto label_25e3b8;
        case 0x25e3bcu: goto label_25e3bc;
        case 0x25e3c0u: goto label_25e3c0;
        case 0x25e3c4u: goto label_25e3c4;
        case 0x25e3c8u: goto label_25e3c8;
        case 0x25e3ccu: goto label_25e3cc;
        case 0x25e3d0u: goto label_25e3d0;
        case 0x25e3d4u: goto label_25e3d4;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e3dcu: goto label_25e3dc;
        case 0x25e3e0u: goto label_25e3e0;
        case 0x25e3e4u: goto label_25e3e4;
        case 0x25e3e8u: goto label_25e3e8;
        case 0x25e3ecu: goto label_25e3ec;
        case 0x25e3f0u: goto label_25e3f0;
        case 0x25e3f4u: goto label_25e3f4;
        case 0x25e3f8u: goto label_25e3f8;
        case 0x25e3fcu: goto label_25e3fc;
        case 0x25e400u: goto label_25e400;
        case 0x25e404u: goto label_25e404;
        case 0x25e408u: goto label_25e408;
        case 0x25e40cu: goto label_25e40c;
        case 0x25e410u: goto label_25e410;
        case 0x25e414u: goto label_25e414;
        case 0x25e418u: goto label_25e418;
        case 0x25e41cu: goto label_25e41c;
        case 0x25e420u: goto label_25e420;
        case 0x25e424u: goto label_25e424;
        case 0x25e428u: goto label_25e428;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e430u: goto label_25e430;
        case 0x25e434u: goto label_25e434;
        case 0x25e438u: goto label_25e438;
        case 0x25e43cu: goto label_25e43c;
        case 0x25e440u: goto label_25e440;
        case 0x25e444u: goto label_25e444;
        case 0x25e448u: goto label_25e448;
        case 0x25e44cu: goto label_25e44c;
        case 0x25e450u: goto label_25e450;
        case 0x25e454u: goto label_25e454;
        case 0x25e458u: goto label_25e458;
        case 0x25e45cu: goto label_25e45c;
        case 0x25e460u: goto label_25e460;
        case 0x25e464u: goto label_25e464;
        case 0x25e468u: goto label_25e468;
        case 0x25e46cu: goto label_25e46c;
        case 0x25e470u: goto label_25e470;
        case 0x25e474u: goto label_25e474;
        case 0x25e478u: goto label_25e478;
        case 0x25e47cu: goto label_25e47c;
        case 0x25e480u: goto label_25e480;
        case 0x25e484u: goto label_25e484;
        case 0x25e488u: goto label_25e488;
        case 0x25e48cu: goto label_25e48c;
        case 0x25e490u: goto label_25e490;
        case 0x25e494u: goto label_25e494;
        case 0x25e498u: goto label_25e498;
        case 0x25e49cu: goto label_25e49c;
        case 0x25e4a0u: goto label_25e4a0;
        case 0x25e4a4u: goto label_25e4a4;
        case 0x25e4a8u: goto label_25e4a8;
        case 0x25e4acu: goto label_25e4ac;
        case 0x25e4b0u: goto label_25e4b0;
        case 0x25e4b4u: goto label_25e4b4;
        case 0x25e4b8u: goto label_25e4b8;
        case 0x25e4bcu: goto label_25e4bc;
        case 0x25e4c0u: goto label_25e4c0;
        case 0x25e4c4u: goto label_25e4c4;
        case 0x25e4c8u: goto label_25e4c8;
        case 0x25e4ccu: goto label_25e4cc;
        case 0x25e4d0u: goto label_25e4d0;
        case 0x25e4d4u: goto label_25e4d4;
        case 0x25e4d8u: goto label_25e4d8;
        case 0x25e4dcu: goto label_25e4dc;
        case 0x25e4e0u: goto label_25e4e0;
        case 0x25e4e4u: goto label_25e4e4;
        case 0x25e4e8u: goto label_25e4e8;
        case 0x25e4ecu: goto label_25e4ec;
        case 0x25e4f0u: goto label_25e4f0;
        case 0x25e4f4u: goto label_25e4f4;
        case 0x25e4f8u: goto label_25e4f8;
        case 0x25e4fcu: goto label_25e4fc;
        case 0x25e500u: goto label_25e500;
        case 0x25e504u: goto label_25e504;
        case 0x25e508u: goto label_25e508;
        case 0x25e50cu: goto label_25e50c;
        case 0x25e510u: goto label_25e510;
        case 0x25e514u: goto label_25e514;
        case 0x25e518u: goto label_25e518;
        case 0x25e51cu: goto label_25e51c;
        case 0x25e520u: goto label_25e520;
        case 0x25e524u: goto label_25e524;
        case 0x25e528u: goto label_25e528;
        case 0x25e52cu: goto label_25e52c;
        case 0x25e530u: goto label_25e530;
        case 0x25e534u: goto label_25e534;
        case 0x25e538u: goto label_25e538;
        case 0x25e53cu: goto label_25e53c;
        case 0x25e540u: goto label_25e540;
        case 0x25e544u: goto label_25e544;
        case 0x25e548u: goto label_25e548;
        case 0x25e54cu: goto label_25e54c;
        case 0x25e550u: goto label_25e550;
        case 0x25e554u: goto label_25e554;
        case 0x25e558u: goto label_25e558;
        case 0x25e55cu: goto label_25e55c;
        case 0x25e560u: goto label_25e560;
        case 0x25e564u: goto label_25e564;
        case 0x25e568u: goto label_25e568;
        case 0x25e56cu: goto label_25e56c;
        case 0x25e570u: goto label_25e570;
        case 0x25e574u: goto label_25e574;
        case 0x25e578u: goto label_25e578;
        case 0x25e57cu: goto label_25e57c;
        case 0x25e580u: goto label_25e580;
        case 0x25e584u: goto label_25e584;
        case 0x25e588u: goto label_25e588;
        case 0x25e58cu: goto label_25e58c;
        case 0x25e590u: goto label_25e590;
        case 0x25e594u: goto label_25e594;
        case 0x25e598u: goto label_25e598;
        case 0x25e59cu: goto label_25e59c;
        case 0x25e5a0u: goto label_25e5a0;
        case 0x25e5a4u: goto label_25e5a4;
        default: break;
    }

    ctx->pc = 0x25e2d8u;

label_25e2d8:
    // 0x25e2d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25e2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25e2dc:
    // 0x25e2dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25e2e0:
    // 0x25e2e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25e2e4:
    // 0x25e2e4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25e2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25e2e8:
    // 0x25e2e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25e2ec:
    // 0x25e2ec: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25e2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25e2f0:
    // 0x25e2f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25e2f4:
    // 0x25e2f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e2f8:
    // 0x25e2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25e2fc:
    // 0x25e2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e300:
    // 0x25e300: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25e304:
    // 0x25e304: 0xc041532  jal         func_1054C8
label_25e308:
    if (ctx->pc == 0x25E308u) {
        ctx->pc = 0x25E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E304u;
        // 0x25e308: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E30Cu;
        goto label_25e30c;
    }
    ctx->pc = 0x25E304u;
    SET_GPR_U32(ctx, 31, 0x25E30Cu);
    ctx->pc = 0x25E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E304u;
    // 0x25e308: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E304u, 0x25E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E30Cu;
label_25e30c:
    // 0x25e30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e310:
    // 0x25e310: 0xc041532  jal         func_1054C8
label_25e314:
    if (ctx->pc == 0x25E314u) {
        ctx->pc = 0x25E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E310u;
        // 0x25e314: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E318u;
        goto label_25e318;
    }
    ctx->pc = 0x25E310u;
    SET_GPR_U32(ctx, 31, 0x25E318u);
    ctx->pc = 0x25E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E310u;
    // 0x25e314: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E310u, 0x25E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E318u;
label_25e318:
    // 0x25e318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e31c:
    // 0x25e31c: 0xc041532  jal         func_1054C8
label_25e320:
    if (ctx->pc == 0x25E320u) {
        ctx->pc = 0x25E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E31Cu;
        // 0x25e320: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E324u;
        goto label_25e324;
    }
    ctx->pc = 0x25E31Cu;
    SET_GPR_U32(ctx, 31, 0x25E324u);
    ctx->pc = 0x25E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E31Cu;
    // 0x25e320: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E31Cu, 0x25E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E324u;
label_25e324:
    // 0x25e324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e328:
    // 0x25e328: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_25e32c:
    if (ctx->pc == 0x25E32Cu) {
        ctx->pc = 0x25E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E328u;
        // 0x25e32c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E330u;
        goto label_25e330;
    }
    ctx->pc = 0x25E328u;
    {
        const bool branch_taken_0x25e328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E328u;
        // 0x25e32c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e328) {
            ctx->pc = 0x25E350u;
            goto label_25e350;
        }
    }
    ctx->pc = 0x25E330u;
label_25e330:
    // 0x25e330: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25e330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25e334:
    // 0x25e334: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e338:
    // 0x25e338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e33c:
    // 0x25e33c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25e33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25e340:
    // 0x25e340: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25e340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25e344:
    // 0x25e344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e348:
    // 0x25e348: 0xc041b20  jal         func_106C80
label_25e34c:
    if (ctx->pc == 0x25E34Cu) {
        ctx->pc = 0x25E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E348u;
        // 0x25e34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E350u;
        goto label_25e350;
    }
    ctx->pc = 0x25E348u;
    SET_GPR_U32(ctx, 31, 0x25E350u);
    ctx->pc = 0x25E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E348u;
    // 0x25e34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25E348u, 0x25E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E350u;
label_25e350:
    // 0x25e350: 0xc05d484  jal         func_175210
label_25e354:
    if (ctx->pc == 0x25E354u) {
        ctx->pc = 0x25E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E350u;
        // 0x25e354: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E358u;
        goto label_25e358;
    }
    ctx->pc = 0x25E350u;
    SET_GPR_U32(ctx, 31, 0x25E358u);
    ctx->pc = 0x25E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E350u;
    // 0x25e354: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25E350u, 0x25E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E358u;
label_25e358:
    // 0x25e358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e35c:
    // 0x25e35c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25e35cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25e360:
    // 0x25e360: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25e360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25e364:
    // 0x25e364: 0xa0f809  jalr        $a1
label_25e368:
    if (ctx->pc == 0x25E368u) {
        ctx->pc = 0x25E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E364u;
        // 0x25e368: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E36Cu;
        goto label_25e36c;
    }
    ctx->pc = 0x25E364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25E36Cu);
        ctx->pc = 0x25E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E364u;
        // 0x25e368: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E364u, 0x25E36Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E36Cu;
label_25e36c:
    // 0x25e36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e370:
    // 0x25e370: 0xc087016  jal         func_21C058
label_25e374:
    if (ctx->pc == 0x25E374u) {
        ctx->pc = 0x25E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E370u;
        // 0x25e374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E378u;
        goto label_25e378;
    }
    ctx->pc = 0x25E370u;
    SET_GPR_U32(ctx, 31, 0x25E378u);
    ctx->pc = 0x25E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E370u;
    // 0x25e374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25E370u, 0x25E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E378u;
label_25e378:
    // 0x25e378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e37c:
    // 0x25e37c: 0xc089990  jal         func_226640
label_25e380:
    if (ctx->pc == 0x25E380u) {
        ctx->pc = 0x25E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E37Cu;
        // 0x25e380: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E384u;
        goto label_25e384;
    }
    ctx->pc = 0x25E37Cu;
    SET_GPR_U32(ctx, 31, 0x25E384u);
    ctx->pc = 0x25E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E37Cu;
    // 0x25e380: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25E37Cu, 0x25E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E384u;
label_25e384:
    // 0x25e384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e388:
    // 0x25e388: 0xc08997c  jal         func_2265F0
label_25e38c:
    if (ctx->pc == 0x25E38Cu) {
        ctx->pc = 0x25E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E388u;
        // 0x25e38c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E390u;
        goto label_25e390;
    }
    ctx->pc = 0x25E388u;
    SET_GPR_U32(ctx, 31, 0x25E390u);
    ctx->pc = 0x25E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E388u;
    // 0x25e38c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25E388u, 0x25E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E390u;
label_25e390:
    // 0x25e390: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_25e394:
    if (ctx->pc == 0x25E394u) {
        ctx->pc = 0x25E398u;
        goto label_25e398;
    }
    ctx->pc = 0x25E390u;
    {
        const bool branch_taken_0x25e390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e390) {
            ctx->pc = 0x25E410u;
            goto label_25e410;
        }
    }
    ctx->pc = 0x25E398u;
label_25e398:
    // 0x25e398: 0xc095018  jal         func_254060
label_25e39c:
    if (ctx->pc == 0x25E39Cu) {
        ctx->pc = 0x25E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E398u;
        // 0x25e39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3A0u;
        goto label_25e3a0;
    }
    ctx->pc = 0x25E398u;
    SET_GPR_U32(ctx, 31, 0x25E3A0u);
    ctx->pc = 0x25E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E398u;
    // 0x25e39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x25E398u, 0x25E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3A0u;
label_25e3a0:
    // 0x25e3a0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x25e3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_25e3a4:
    // 0x25e3a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25e3a8:
    if (ctx->pc == 0x25E3A8u) {
        ctx->pc = 0x25E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3A4u;
        // 0x25e3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3ACu;
        goto label_25e3ac;
    }
    ctx->pc = 0x25E3A4u;
    {
        const bool branch_taken_0x25e3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3A4u;
        // 0x25e3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3a4) {
            ctx->pc = 0x25E3B4u;
            goto label_25e3b4;
        }
    }
    ctx->pc = 0x25E3ACu;
label_25e3ac:
    // 0x25e3ac: 0xc094fb4  jal         func_253ED0
label_25e3b0:
    if (ctx->pc == 0x25E3B0u) {
        ctx->pc = 0x25E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3ACu;
        // 0x25e3b0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3B4u;
        goto label_25e3b4;
    }
    ctx->pc = 0x25E3ACu;
    SET_GPR_U32(ctx, 31, 0x25E3B4u);
    ctx->pc = 0x25E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3ACu;
    // 0x25e3b0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x25E3ACu, 0x25E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3B4u;
label_25e3b4:
    // 0x25e3b4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25e3b8:
    if (ctx->pc == 0x25E3B8u) {
        ctx->pc = 0x25E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3B4u;
        // 0x25e3b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3BCu;
        goto label_25e3bc;
    }
    ctx->pc = 0x25E3B4u;
    {
        const bool branch_taken_0x25e3b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3B4u;
        // 0x25e3b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3b4) {
            ctx->pc = 0x25E3D8u;
            goto label_25e3d8;
        }
    }
    ctx->pc = 0x25E3BCu;
label_25e3bc:
    // 0x25e3bc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e3c0:
    // 0x25e3c0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e3c4:
    // 0x25e3c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25e3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e3c8:
    // 0x25e3c8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x25e3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_25e3cc:
    // 0x25e3cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e3ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e3d0:
    // 0x25e3d0: 0xc04159e  jal         func_105678
label_25e3d4:
    if (ctx->pc == 0x25E3D4u) {
        ctx->pc = 0x25E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3D0u;
        // 0x25e3d4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3D8u;
        goto label_25e3d8;
    }
    ctx->pc = 0x25E3D0u;
    SET_GPR_U32(ctx, 31, 0x25E3D8u);
    ctx->pc = 0x25E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3D0u;
    // 0x25e3d4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25E3D0u, 0x25E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3D8u;
label_25e3d8:
    // 0x25e3d8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e3dc:
    // 0x25e3dc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_25e3e0:
    // 0x25e3e0: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
label_25e3e4:
    if (ctx->pc == 0x25E3E4u) {
        ctx->pc = 0x25E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3E0u;
        // 0x25e3e4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3E8u;
        goto label_25e3e8;
    }
    ctx->pc = 0x25E3E0u;
    {
        const bool branch_taken_0x25e3e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3E0u;
        // 0x25e3e4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3e0) {
            ctx->pc = 0x25E4A4u;
            goto label_25e4a4;
        }
    }
    ctx->pc = 0x25E3E8u;
label_25e3e8:
    // 0x25e3e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25e3ec:
    // 0x25e3ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25e3ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25e3f0:
    // 0x25e3f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25e3f4:
    // 0x25e3f4: 0x40f809  jalr        $v0
label_25e3f8:
    if (ctx->pc == 0x25E3F8u) {
        ctx->pc = 0x25E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3F4u;
        // 0x25e3f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3FCu;
        goto label_25e3fc;
    }
    ctx->pc = 0x25E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E3FCu);
        ctx->pc = 0x25E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3F4u;
        // 0x25e3f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E3F4u, 0x25E3FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E3FCu;
label_25e3fc:
    // 0x25e3fc: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25e3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25e400:
    // 0x25e400: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25e400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25e404:
    // 0x25e404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e408:
    // 0x25e408: 0x1000001e  b           . + 4 + (0x1E << 2)
label_25e40c:
    if (ctx->pc == 0x25E40Cu) {
        ctx->pc = 0x25E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E408u;
        // 0x25e40c: 0x3c0a0026  lui         $t2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E410u;
        goto label_25e410;
    }
    ctx->pc = 0x25E408u;
    {
        const bool branch_taken_0x25e408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E408u;
        // 0x25e40c: 0x3c0a0026  lui         $t2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e408) {
            ctx->pc = 0x25E484u;
            goto label_25e484;
        }
    }
    ctx->pc = 0x25E410u;
label_25e410:
    // 0x25e410: 0xc08a0d0  jal         func_228340
label_25e414:
    if (ctx->pc == 0x25E414u) {
        ctx->pc = 0x25E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E410u;
        // 0x25e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E418u;
        goto label_25e418;
    }
    ctx->pc = 0x25E410u;
    SET_GPR_U32(ctx, 31, 0x25E418u);
    ctx->pc = 0x25E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E410u;
    // 0x25e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25E410u, 0x25E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E418u;
label_25e418:
    // 0x25e418: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_25e41c:
    if (ctx->pc == 0x25E41Cu) {
        ctx->pc = 0x25E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E418u;
        // 0x25e41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E420u;
        goto label_25e420;
    }
    ctx->pc = 0x25E418u;
    {
        const bool branch_taken_0x25e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E418u;
        // 0x25e41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e418) {
            ctx->pc = 0x25E4B4u;
            goto label_25e4b4;
        }
    }
    ctx->pc = 0x25E420u;
label_25e420:
    // 0x25e420: 0xc094fb4  jal         func_253ED0
label_25e424:
    if (ctx->pc == 0x25E424u) {
        ctx->pc = 0x25E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E420u;
        // 0x25e424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E428u;
        goto label_25e428;
    }
    ctx->pc = 0x25E420u;
    SET_GPR_U32(ctx, 31, 0x25E428u);
    ctx->pc = 0x25E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E420u;
    // 0x25e424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x25E420u, 0x25E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E428u;
label_25e428:
    // 0x25e428: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_25e42c:
    if (ctx->pc == 0x25E42Cu) {
        ctx->pc = 0x25E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E428u;
        // 0x25e42c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E430u;
        goto label_25e430;
    }
    ctx->pc = 0x25E428u;
    {
        const bool branch_taken_0x25e428 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E428u;
        // 0x25e42c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e428) {
            ctx->pc = 0x25E450u;
            goto label_25e450;
        }
    }
    ctx->pc = 0x25E430u;
label_25e430:
    // 0x25e430: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e434:
    // 0x25e434: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e438:
    // 0x25e438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25e438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e43c:
    // 0x25e43c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x25e43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_25e440:
    // 0x25e440: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e444:
    // 0x25e444: 0xc04159e  jal         func_105678
label_25e448:
    if (ctx->pc == 0x25E448u) {
        ctx->pc = 0x25E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E444u;
        // 0x25e448: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E44Cu;
        goto label_25e44c;
    }
    ctx->pc = 0x25E444u;
    SET_GPR_U32(ctx, 31, 0x25E44Cu);
    ctx->pc = 0x25E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E444u;
    // 0x25e448: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25E444u, 0x25E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E44Cu;
label_25e44c:
    // 0x25e44c: 0x0  nop
    ctx->pc = 0x25e44cu;
    // NOP
label_25e450:
    // 0x25e450: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e454:
    // 0x25e454: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25e454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_25e458:
    // 0x25e458: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_25e45c:
    if (ctx->pc == 0x25E45Cu) {
        ctx->pc = 0x25E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E458u;
        // 0x25e45c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E460u;
        goto label_25e460;
    }
    ctx->pc = 0x25E458u;
    {
        const bool branch_taken_0x25e458 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E458u;
        // 0x25e45c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e458) {
            ctx->pc = 0x25E4A4u;
            goto label_25e4a4;
        }
    }
    ctx->pc = 0x25E460u;
label_25e460:
    // 0x25e460: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25e460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25e464:
    // 0x25e464: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25e468:
    // 0x25e468: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25e46c:
    // 0x25e46c: 0x40f809  jalr        $v0
label_25e470:
    if (ctx->pc == 0x25E470u) {
        ctx->pc = 0x25E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E46Cu;
        // 0x25e470: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E474u;
        goto label_25e474;
    }
    ctx->pc = 0x25E46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E474u);
        ctx->pc = 0x25E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E46Cu;
        // 0x25e470: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E46Cu, 0x25E474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E474u;
label_25e474:
    // 0x25e474: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25e474u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25e478:
    // 0x25e478: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25e478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_25e47c:
    // 0x25e47c: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25e47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25e480:
    // 0x25e480: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e484:
    // 0x25e484: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25e484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e488:
    // 0x25e488: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25e488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e48c:
    // 0x25e48c: 0x254ae250  addiu       $t2, $t2, -0x1DB0
    ctx->pc = 0x25e48cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959696));
label_25e490:
    // 0x25e490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e494:
    // 0x25e494: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25e494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25e498:
    // 0x25e498: 0x240600c7  addiu       $a2, $zero, 0xC7
    ctx->pc = 0x25e498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_25e49c:
    // 0x25e49c: 0xc041664  jal         func_105990
label_25e4a0:
    if (ctx->pc == 0x25E4A0u) {
        ctx->pc = 0x25E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E49Cu;
        // 0x25e4a0: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4A4u;
        goto label_25e4a4;
    }
    ctx->pc = 0x25E49Cu;
    SET_GPR_U32(ctx, 31, 0x25E4A4u);
    ctx->pc = 0x25E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E49Cu;
    // 0x25e4a0: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25E49Cu, 0x25E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4A4u;
label_25e4a4:
    // 0x25e4a4: 0xc094fca  jal         func_253F28
label_25e4a8:
    if (ctx->pc == 0x25E4A8u) {
        ctx->pc = 0x25E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4A4u;
        // 0x25e4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4ACu;
        goto label_25e4ac;
    }
    ctx->pc = 0x25E4A4u;
    SET_GPR_U32(ctx, 31, 0x25E4ACu);
    ctx->pc = 0x25E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4A4u;
    // 0x25e4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x25E4A4u, 0x25E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4ACu;
label_25e4ac:
    // 0x25e4ac: 0x10000022  b           . + 4 + (0x22 << 2)
label_25e4b0:
    if (ctx->pc == 0x25E4B0u) {
        ctx->pc = 0x25E4B4u;
        goto label_25e4b4;
    }
    ctx->pc = 0x25E4ACu;
    {
        const bool branch_taken_0x25e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4ac) {
            ctx->pc = 0x25E538u;
            goto label_25e538;
        }
    }
    ctx->pc = 0x25E4B4u;
label_25e4b4:
    // 0x25e4b4: 0xc094fb4  jal         func_253ED0
label_25e4b8:
    if (ctx->pc == 0x25E4B8u) {
        ctx->pc = 0x25E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4B4u;
        // 0x25e4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4BCu;
        goto label_25e4bc;
    }
    ctx->pc = 0x25E4B4u;
    SET_GPR_U32(ctx, 31, 0x25E4BCu);
    ctx->pc = 0x25E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4B4u;
    // 0x25e4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x25E4B4u, 0x25E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4BCu;
label_25e4bc:
    // 0x25e4bc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25e4c0:
    if (ctx->pc == 0x25E4C0u) {
        ctx->pc = 0x25E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4BCu;
        // 0x25e4c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4C4u;
        goto label_25e4c4;
    }
    ctx->pc = 0x25E4BCu;
    {
        const bool branch_taken_0x25e4bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4BCu;
        // 0x25e4c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4bc) {
            ctx->pc = 0x25E4E0u;
            goto label_25e4e0;
        }
    }
    ctx->pc = 0x25E4C4u;
label_25e4c4:
    // 0x25e4c4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e4c8:
    // 0x25e4c8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e4cc:
    // 0x25e4cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25e4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e4d0:
    // 0x25e4d0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25e4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25e4d4:
    // 0x25e4d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e4d8:
    // 0x25e4d8: 0xc04159e  jal         func_105678
label_25e4dc:
    if (ctx->pc == 0x25E4DCu) {
        ctx->pc = 0x25E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4D8u;
        // 0x25e4dc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4E0u;
        goto label_25e4e0;
    }
    ctx->pc = 0x25E4D8u;
    SET_GPR_U32(ctx, 31, 0x25E4E0u);
    ctx->pc = 0x25E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4D8u;
    // 0x25e4dc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25E4D8u, 0x25E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4E0u;
label_25e4e0:
    // 0x25e4e0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e4e4:
    // 0x25e4e4: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_25e4e8:
    if (ctx->pc == 0x25E4E8u) {
        ctx->pc = 0x25E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4E4u;
        // 0x25e4e8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4ECu;
        goto label_25e4ec;
    }
    ctx->pc = 0x25E4E4u;
    {
        const bool branch_taken_0x25e4e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4E4u;
        // 0x25e4e8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4e4) {
            ctx->pc = 0x25E530u;
            goto label_25e530;
        }
    }
    ctx->pc = 0x25E4ECu;
label_25e4ec:
    // 0x25e4ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25e4f0:
    // 0x25e4f0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25e4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25e4f4:
    // 0x25e4f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25e4f8:
    // 0x25e4f8: 0x40f809  jalr        $v0
label_25e4fc:
    if (ctx->pc == 0x25E4FCu) {
        ctx->pc = 0x25E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4F8u;
        // 0x25e4fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E500u;
        goto label_25e500;
    }
    ctx->pc = 0x25E4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E500u);
        ctx->pc = 0x25E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4F8u;
        // 0x25e4fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E4F8u, 0x25E500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E500u;
label_25e500:
    // 0x25e500: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25e500u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25e504:
    // 0x25e504: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25e504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25e508:
    // 0x25e508: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25e508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25e50c:
    // 0x25e50c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e510:
    // 0x25e510: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25e510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e514:
    // 0x25e514: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25e514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e518:
    // 0x25e518: 0x254ae250  addiu       $t2, $t2, -0x1DB0
    ctx->pc = 0x25e518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959696));
label_25e51c:
    // 0x25e51c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e520:
    // 0x25e520: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25e520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25e524:
    // 0x25e524: 0x240600c7  addiu       $a2, $zero, 0xC7
    ctx->pc = 0x25e524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_25e528:
    // 0x25e528: 0xc041664  jal         func_105990
label_25e52c:
    if (ctx->pc == 0x25E52Cu) {
        ctx->pc = 0x25E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E528u;
        // 0x25e52c: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E530u;
        goto label_25e530;
    }
    ctx->pc = 0x25E528u;
    SET_GPR_U32(ctx, 31, 0x25E530u);
    ctx->pc = 0x25E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E528u;
    // 0x25e52c: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25E528u, 0x25E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E530u;
label_25e530:
    // 0x25e530: 0xc094fca  jal         func_253F28
label_25e534:
    if (ctx->pc == 0x25E534u) {
        ctx->pc = 0x25E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E530u;
        // 0x25e534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E538u;
        goto label_25e538;
    }
    ctx->pc = 0x25E530u;
    SET_GPR_U32(ctx, 31, 0x25E538u);
    ctx->pc = 0x25E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E530u;
    // 0x25e534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x25E530u, 0x25E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E538u;
label_25e538:
    // 0x25e538: 0xc0e4080  jal         func_390200
label_25e53c:
    if (ctx->pc == 0x25E53Cu) {
        ctx->pc = 0x25E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E538u;
        // 0x25e53c: 0x26240358  addiu       $a0, $s1, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E540u;
        goto label_25e540;
    }
    ctx->pc = 0x25E538u;
    SET_GPR_U32(ctx, 31, 0x25E540u);
    ctx->pc = 0x25E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E538u;
    // 0x25e53c: 0x26240358  addiu       $a0, $s1, 0x358 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x25E538u, 0x25E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E540u;
label_25e540:
    // 0x25e540: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25e544:
    if (ctx->pc == 0x25E544u) {
        ctx->pc = 0x25E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E540u;
        // 0x25e544: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E548u;
        goto label_25e548;
    }
    ctx->pc = 0x25E540u;
    {
        const bool branch_taken_0x25e540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E540u;
        // 0x25e544: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e540) {
            ctx->pc = 0x25E56Cu;
            goto label_25e56c;
        }
    }
    ctx->pc = 0x25E548u;
label_25e548:
    // 0x25e548: 0xc089fac  jal         func_227EB0
label_25e54c:
    if (ctx->pc == 0x25E54Cu) {
        ctx->pc = 0x25E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E548u;
        // 0x25e54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E550u;
        goto label_25e550;
    }
    ctx->pc = 0x25E548u;
    SET_GPR_U32(ctx, 31, 0x25E550u);
    ctx->pc = 0x25E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E548u;
    // 0x25e54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x25E548u, 0x25E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E550u;
label_25e550:
    // 0x25e550: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_25e554:
    if (ctx->pc == 0x25E554u) {
        ctx->pc = 0x25E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E550u;
        // 0x25e554: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E558u;
        goto label_25e558;
    }
    ctx->pc = 0x25E550u;
    {
        const bool branch_taken_0x25e550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e550) {
            ctx->pc = 0x25E554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E550u;
            // 0x25e554: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E56Cu;
            goto label_25e56c;
        }
    }
    ctx->pc = 0x25E558u;
label_25e558:
    // 0x25e558: 0xc0932b2  jal         func_24CAC8
label_25e55c:
    if (ctx->pc == 0x25E55Cu) {
        ctx->pc = 0x25E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E558u;
        // 0x25e55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E560u;
        goto label_25e560;
    }
    ctx->pc = 0x25E558u;
    SET_GPR_U32(ctx, 31, 0x25E560u);
    ctx->pc = 0x25E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E558u;
    // 0x25e55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CAC8u, 0x25E558u, 0x25E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E560u;
label_25e560:
    // 0x25e560: 0xc093290  jal         func_24CA40
label_25e564:
    if (ctx->pc == 0x25E564u) {
        ctx->pc = 0x25E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E560u;
        // 0x25e564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E568u;
        goto label_25e568;
    }
    ctx->pc = 0x25E560u;
    SET_GPR_U32(ctx, 31, 0x25E568u);
    ctx->pc = 0x25E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E560u;
    // 0x25e564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA40u, 0x25E560u, 0x25E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E568u;
label_25e568:
    // 0x25e568: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25e568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e56c:
    // 0x25e56c: 0xc05d53a  jal         func_1754E8
label_25e570:
    if (ctx->pc == 0x25E570u) {
        ctx->pc = 0x25E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E56Cu;
        // 0x25e570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E574u;
        goto label_25e574;
    }
    ctx->pc = 0x25E56Cu;
    SET_GPR_U32(ctx, 31, 0x25E574u);
    ctx->pc = 0x25E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E56Cu;
    // 0x25e570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25E56Cu, 0x25E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E574u;
label_25e574:
    // 0x25e574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25e574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25e578:
    // 0x25e578: 0xc05d4f6  jal         func_1753D8
label_25e57c:
    if (ctx->pc == 0x25E57Cu) {
        ctx->pc = 0x25E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E578u;
        // 0x25e57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E580u;
        goto label_25e580;
    }
    ctx->pc = 0x25E578u;
    SET_GPR_U32(ctx, 31, 0x25E580u);
    ctx->pc = 0x25E57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E578u;
    // 0x25e57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25E578u, 0x25E580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E580u;
label_25e580:
    // 0x25e580: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25e580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25e584:
    // 0x25e584: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25e584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25e588:
    // 0x25e588: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25e588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25e58c:
    // 0x25e58c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25e58cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25e590:
    // 0x25e590: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25e590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e594:
    // 0x25e594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e598:
    // 0x25e598: 0x3e00008  jr          $ra
label_25e59c:
    if (ctx->pc == 0x25E59Cu) {
        ctx->pc = 0x25E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E598u;
        // 0x25e59c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E5A0u;
        goto label_25e5a0;
    }
    ctx->pc = 0x25E598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E598u;
        // 0x25e59c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E5A0u;
label_25e5a0:
    // 0x25e5a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25e5a4:
    // 0x25e5a4: 0x0  nop
    ctx->pc = 0x25e5a4u;
    // NOP
    ctx->pc = 0x25e5a8u;
}
