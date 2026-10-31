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

// Function: sub_003FC2B0
// Address: 0x3fc2b0 - 0x3fc408
void sub_003FC2B0_0x3fc2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC2B0_0x3fc2b0");
#endif

    switch (ctx->pc) {
        case 0x3fc2b0u: goto label_3fc2b0;
        case 0x3fc2b4u: goto label_3fc2b4;
        case 0x3fc2b8u: goto label_3fc2b8;
        case 0x3fc2bcu: goto label_3fc2bc;
        case 0x3fc2c0u: goto label_3fc2c0;
        case 0x3fc2c4u: goto label_3fc2c4;
        case 0x3fc2c8u: goto label_3fc2c8;
        case 0x3fc2ccu: goto label_3fc2cc;
        case 0x3fc2d0u: goto label_3fc2d0;
        case 0x3fc2d4u: goto label_3fc2d4;
        case 0x3fc2d8u: goto label_3fc2d8;
        case 0x3fc2dcu: goto label_3fc2dc;
        case 0x3fc2e0u: goto label_3fc2e0;
        case 0x3fc2e4u: goto label_3fc2e4;
        case 0x3fc2e8u: goto label_3fc2e8;
        case 0x3fc2ecu: goto label_3fc2ec;
        case 0x3fc2f0u: goto label_3fc2f0;
        case 0x3fc2f4u: goto label_3fc2f4;
        case 0x3fc2f8u: goto label_3fc2f8;
        case 0x3fc2fcu: goto label_3fc2fc;
        case 0x3fc300u: goto label_3fc300;
        case 0x3fc304u: goto label_3fc304;
        case 0x3fc308u: goto label_3fc308;
        case 0x3fc30cu: goto label_3fc30c;
        case 0x3fc310u: goto label_3fc310;
        case 0x3fc314u: goto label_3fc314;
        case 0x3fc318u: goto label_3fc318;
        case 0x3fc31cu: goto label_3fc31c;
        case 0x3fc320u: goto label_3fc320;
        case 0x3fc324u: goto label_3fc324;
        case 0x3fc328u: goto label_3fc328;
        case 0x3fc32cu: goto label_3fc32c;
        case 0x3fc330u: goto label_3fc330;
        case 0x3fc334u: goto label_3fc334;
        case 0x3fc338u: goto label_3fc338;
        case 0x3fc33cu: goto label_3fc33c;
        case 0x3fc340u: goto label_3fc340;
        case 0x3fc344u: goto label_3fc344;
        case 0x3fc348u: goto label_3fc348;
        case 0x3fc34cu: goto label_3fc34c;
        case 0x3fc350u: goto label_3fc350;
        case 0x3fc354u: goto label_3fc354;
        case 0x3fc358u: goto label_3fc358;
        case 0x3fc35cu: goto label_3fc35c;
        case 0x3fc360u: goto label_3fc360;
        case 0x3fc364u: goto label_3fc364;
        case 0x3fc368u: goto label_3fc368;
        case 0x3fc36cu: goto label_3fc36c;
        case 0x3fc370u: goto label_3fc370;
        case 0x3fc374u: goto label_3fc374;
        case 0x3fc378u: goto label_3fc378;
        case 0x3fc37cu: goto label_3fc37c;
        case 0x3fc380u: goto label_3fc380;
        case 0x3fc384u: goto label_3fc384;
        case 0x3fc388u: goto label_3fc388;
        case 0x3fc38cu: goto label_3fc38c;
        case 0x3fc390u: goto label_3fc390;
        case 0x3fc394u: goto label_3fc394;
        case 0x3fc398u: goto label_3fc398;
        case 0x3fc39cu: goto label_3fc39c;
        case 0x3fc3a0u: goto label_3fc3a0;
        case 0x3fc3a4u: goto label_3fc3a4;
        case 0x3fc3a8u: goto label_3fc3a8;
        case 0x3fc3acu: goto label_3fc3ac;
        case 0x3fc3b0u: goto label_3fc3b0;
        case 0x3fc3b4u: goto label_3fc3b4;
        case 0x3fc3b8u: goto label_3fc3b8;
        case 0x3fc3bcu: goto label_3fc3bc;
        case 0x3fc3c0u: goto label_3fc3c0;
        case 0x3fc3c4u: goto label_3fc3c4;
        case 0x3fc3c8u: goto label_3fc3c8;
        case 0x3fc3ccu: goto label_3fc3cc;
        case 0x3fc3d0u: goto label_3fc3d0;
        case 0x3fc3d4u: goto label_3fc3d4;
        case 0x3fc3d8u: goto label_3fc3d8;
        case 0x3fc3dcu: goto label_3fc3dc;
        case 0x3fc3e0u: goto label_3fc3e0;
        case 0x3fc3e4u: goto label_3fc3e4;
        case 0x3fc3e8u: goto label_3fc3e8;
        case 0x3fc3ecu: goto label_3fc3ec;
        case 0x3fc3f0u: goto label_3fc3f0;
        case 0x3fc3f4u: goto label_3fc3f4;
        case 0x3fc3f8u: goto label_3fc3f8;
        case 0x3fc3fcu: goto label_3fc3fc;
        case 0x3fc400u: goto label_3fc400;
        case 0x3fc404u: goto label_3fc404;
        default: break;
    }

    ctx->pc = 0x3fc2b0u;

label_3fc2b0:
    // 0x3fc2b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3fc2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3fc2b4:
    // 0x3fc2b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3fc2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3fc2b8:
    // 0x3fc2b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fc2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fc2bc:
    // 0x3fc2bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fc2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc2c0:
    // 0x3fc2c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3fc2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3fc2c4:
    // 0x3fc2c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fc2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fc2c8:
    // 0x3fc2c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fc2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fc2cc:
    // 0x3fc2cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fc2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fc2d0:
    // 0x3fc2d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3fc2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fc2d4:
    // 0x3fc2d4: 0xc0e90ca  jal         func_3A4328
label_3fc2d8:
    if (ctx->pc == 0x3FC2D8u) {
        ctx->pc = 0x3FC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC2D4u;
        // 0x3fc2d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC2DCu;
        goto label_3fc2dc;
    }
    ctx->pc = 0x3FC2D4u;
    SET_GPR_U32(ctx, 31, 0x3FC2DCu);
    ctx->pc = 0x3FC2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC2D4u;
    // 0x3fc2d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FC2D4u, 0x3FC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC2DCu;
label_3fc2dc:
    // 0x3fc2dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fc2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fc2e0:
    // 0x3fc2e0: 0xc0e91f0  jal         func_3A47C0
label_3fc2e4:
    if (ctx->pc == 0x3FC2E4u) {
        ctx->pc = 0x3FC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC2E0u;
        // 0x3fc2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC2E8u;
        goto label_3fc2e8;
    }
    ctx->pc = 0x3FC2E0u;
    SET_GPR_U32(ctx, 31, 0x3FC2E8u);
    ctx->pc = 0x3FC2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC2E0u;
    // 0x3fc2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3FC2E0u, 0x3FC2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC2E8u;
label_3fc2e8:
    // 0x3fc2e8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3fc2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3fc2ec:
    // 0x3fc2ec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3fc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3fc2f0:
    // 0x3fc2f0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_3fc2f4:
    if (ctx->pc == 0x3FC2F4u) {
        ctx->pc = 0x3FC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC2F0u;
        // 0x3fc2f4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC2F8u;
        goto label_3fc2f8;
    }
    ctx->pc = 0x3FC2F0u;
    {
        const bool branch_taken_0x3fc2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC2F0u;
        // 0x3fc2f4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc2f0) {
            ctx->pc = 0x3FC324u;
            goto label_3fc324;
        }
    }
    ctx->pc = 0x3FC2F8u;
label_3fc2f8:
    // 0x3fc2f8: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x3fc2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc2fc:
    // 0x3fc2fc: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_3fc300:
    if (ctx->pc == 0x3FC300u) {
        ctx->pc = 0x3FC304u;
        goto label_3fc304;
    }
    ctx->pc = 0x3FC2FCu;
    {
        const bool branch_taken_0x3fc2fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc2fc) {
            ctx->pc = 0x3FC324u;
            goto label_3fc324;
        }
    }
    ctx->pc = 0x3FC304u;
label_3fc304:
    // 0x3fc304: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3fc304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fc308:
    // 0x3fc308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fc308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fc30c:
    // 0x3fc30c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fc30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fc310:
    // 0x3fc310: 0x0  nop
    ctx->pc = 0x3fc310u;
    // NOP
label_3fc314:
    // 0x3fc314: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fc314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fc318:
    // 0x3fc318: 0x0  nop
    ctx->pc = 0x3fc318u;
    // NOP
label_3fc31c:
    // 0x3fc31c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_3fc320:
    if (ctx->pc == 0x3FC320u) {
        ctx->pc = 0x3FC324u;
        goto label_3fc324;
    }
    ctx->pc = 0x3FC31Cu;
    {
        const bool branch_taken_0x3fc31c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fc31c) {
            ctx->pc = 0x3FC350u;
            goto label_3fc350;
        }
    }
    ctx->pc = 0x3FC324u;
label_3fc324:
    // 0x3fc324: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_3fc328:
    if (ctx->pc == 0x3FC328u) {
        ctx->pc = 0x3FC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC324u;
        // 0x3fc328: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC32Cu;
        goto label_3fc32c;
    }
    ctx->pc = 0x3FC324u;
    {
        const bool branch_taken_0x3fc324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC324u;
        // 0x3fc328: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc324) {
            ctx->pc = 0x3FC3D0u;
            goto label_3fc3d0;
        }
    }
    ctx->pc = 0x3FC32Cu;
label_3fc32c:
    // 0x3fc32c: 0x50e00031  beql        $a3, $zero, . + 4 + (0x31 << 2)
label_3fc330:
    if (ctx->pc == 0x3FC330u) {
        ctx->pc = 0x3FC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC32Cu;
        // 0x3fc330: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC334u;
        goto label_3fc334;
    }
    ctx->pc = 0x3FC32Cu;
    {
        const bool branch_taken_0x3fc32c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc32c) {
            ctx->pc = 0x3FC330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC32Cu;
            // 0x3fc330: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC3F4u;
            goto label_3fc3f4;
        }
    }
    ctx->pc = 0x3FC334u;
label_3fc334:
    // 0x3fc334: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3fc334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fc338:
    // 0x3fc338: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fc338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fc33c:
    // 0x3fc33c: 0x0  nop
    ctx->pc = 0x3fc33cu;
    // NOP
label_3fc340:
    // 0x3fc340: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3fc340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fc344:
    // 0x3fc344: 0x0  nop
    ctx->pc = 0x3fc344u;
    // NOP
label_3fc348:
    // 0x3fc348: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_3fc34c:
    if (ctx->pc == 0x3FC34Cu) {
        ctx->pc = 0x3FC350u;
        goto label_3fc350;
    }
    ctx->pc = 0x3FC348u;
    {
        const bool branch_taken_0x3fc348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fc348) {
            ctx->pc = 0x3FC3D0u;
            goto label_3fc3d0;
        }
    }
    ctx->pc = 0x3FC350u;
label_3fc350:
    // 0x3fc350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fc350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fc354:
    // 0x3fc354: 0xc0ea164  jal         func_3A8590
label_3fc358:
    if (ctx->pc == 0x3FC358u) {
        ctx->pc = 0x3FC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC354u;
        // 0x3fc358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC35Cu;
        goto label_3fc35c;
    }
    ctx->pc = 0x3FC354u;
    SET_GPR_U32(ctx, 31, 0x3FC35Cu);
    ctx->pc = 0x3FC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC354u;
    // 0x3fc358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3FC354u, 0x3FC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC35Cu;
label_3fc35c:
    // 0x3fc35c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fc35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fc360:
    // 0x3fc360: 0xc0e90ca  jal         func_3A4328
label_3fc364:
    if (ctx->pc == 0x3FC364u) {
        ctx->pc = 0x3FC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC360u;
        // 0x3fc364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC368u;
        goto label_3fc368;
    }
    ctx->pc = 0x3FC360u;
    SET_GPR_U32(ctx, 31, 0x3FC368u);
    ctx->pc = 0x3FC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC360u;
    // 0x3fc364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FC360u, 0x3FC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC368u;
label_3fc368:
    // 0x3fc368: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fc368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fc36c:
    // 0x3fc36c: 0xc0ea158  jal         func_3A8560
label_3fc370:
    if (ctx->pc == 0x3FC370u) {
        ctx->pc = 0x3FC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC36Cu;
        // 0x3fc370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC374u;
        goto label_3fc374;
    }
    ctx->pc = 0x3FC36Cu;
    SET_GPR_U32(ctx, 31, 0x3FC374u);
    ctx->pc = 0x3FC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC36Cu;
    // 0x3fc370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3FC36Cu, 0x3FC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC374u;
label_3fc374:
    // 0x3fc374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc378:
    // 0x3fc378: 0xc0ea16a  jal         func_3A85A8
label_3fc37c:
    if (ctx->pc == 0x3FC37Cu) {
        ctx->pc = 0x3FC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC378u;
        // 0x3fc37c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC380u;
        goto label_3fc380;
    }
    ctx->pc = 0x3FC378u;
    SET_GPR_U32(ctx, 31, 0x3FC380u);
    ctx->pc = 0x3FC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC378u;
    // 0x3fc37c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FC378u, 0x3FC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC380u;
label_3fc380:
    // 0x3fc380: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x3fc380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc384:
    // 0x3fc384: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fc384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc388:
    // 0x3fc388: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3fc388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3fc38c:
    // 0x3fc38c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3fc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3fc390:
    // 0x3fc390: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fc390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fc394:
    // 0x3fc394: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fc394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fc398:
    // 0x3fc398: 0x60f809  jalr        $v1
label_3fc39c:
    if (ctx->pc == 0x3FC39Cu) {
        ctx->pc = 0x3FC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC398u;
        // 0x3fc39c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC3A0u;
        goto label_3fc3a0;
    }
    ctx->pc = 0x3FC398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FC3A0u);
        ctx->pc = 0x3FC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC398u;
        // 0x3fc39c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC398u, 0x3FC3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC3A0u;
label_3fc3a0:
    // 0x3fc3a0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3fc3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3fc3a4:
    // 0x3fc3a4: 0xc0ea16a  jal         func_3A85A8
label_3fc3a8:
    if (ctx->pc == 0x3FC3A8u) {
        ctx->pc = 0x3FC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3A4u;
        // 0x3fc3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC3ACu;
        goto label_3fc3ac;
    }
    ctx->pc = 0x3FC3A4u;
    SET_GPR_U32(ctx, 31, 0x3FC3ACu);
    ctx->pc = 0x3FC3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC3A4u;
    // 0x3fc3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FC3A4u, 0x3FC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC3ACu;
label_3fc3ac:
    // 0x3fc3ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc3b0:
    // 0x3fc3b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fc3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc3b4:
    // 0x3fc3b4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3fc3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3fc3b8:
    // 0x3fc3b8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3fc3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3fc3bc:
    // 0x3fc3bc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3fc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3fc3c0:
    // 0x3fc3c0: 0x40f809  jalr        $v0
label_3fc3c4:
    if (ctx->pc == 0x3FC3C4u) {
        ctx->pc = 0x3FC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3C0u;
        // 0x3fc3c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC3C8u;
        goto label_3fc3c8;
    }
    ctx->pc = 0x3FC3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FC3C8u);
        ctx->pc = 0x3FC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3C0u;
        // 0x3fc3c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC3C0u, 0x3FC3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC3C8u;
label_3fc3c8:
    // 0x3fc3c8: 0x1000000a  b           . + 4 + (0xA << 2)
label_3fc3cc:
    if (ctx->pc == 0x3FC3CCu) {
        ctx->pc = 0x3FC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3C8u;
        // 0x3fc3cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC3D0u;
        goto label_3fc3d0;
    }
    ctx->pc = 0x3FC3C8u;
    {
        const bool branch_taken_0x3fc3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3C8u;
        // 0x3fc3cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc3c8) {
            ctx->pc = 0x3FC3F4u;
            goto label_3fc3f4;
        }
    }
    ctx->pc = 0x3FC3D0u;
label_3fc3d0:
    // 0x3fc3d0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3fc3d4:
    if (ctx->pc == 0x3FC3D4u) {
        ctx->pc = 0x3FC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3D0u;
        // 0x3fc3d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC3D8u;
        goto label_3fc3d8;
    }
    ctx->pc = 0x3FC3D0u;
    {
        const bool branch_taken_0x3fc3d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3D0u;
        // 0x3fc3d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc3d0) {
            ctx->pc = 0x3FC3F0u;
            goto label_3fc3f0;
        }
    }
    ctx->pc = 0x3FC3D8u;
label_3fc3d8:
    // 0x3fc3d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3fc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3fc3dc:
    // 0x3fc3dc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3fc3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3fc3e0:
    // 0x3fc3e0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fc3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fc3e4:
    // 0x3fc3e4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fc3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fc3e8:
    // 0x3fc3e8: 0x60f809  jalr        $v1
label_3fc3ec:
    if (ctx->pc == 0x3FC3ECu) {
        ctx->pc = 0x3FC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3E8u;
        // 0x3fc3ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC3F0u;
        goto label_3fc3f0;
    }
    ctx->pc = 0x3FC3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FC3F0u);
        ctx->pc = 0x3FC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC3E8u;
        // 0x3fc3ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC3E8u, 0x3FC3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC3F0u;
label_3fc3f0:
    // 0x3fc3f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3fc3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fc3f4:
    // 0x3fc3f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3fc3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fc3f8:
    // 0x3fc3f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fc3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc3fc:
    // 0x3fc3fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fc3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fc400:
    // 0x3fc400: 0x3e00008  jr          $ra
label_3fc404:
    if (ctx->pc == 0x3FC404u) {
        ctx->pc = 0x3FC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC400u;
        // 0x3fc404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC408u;
        goto label_fallthrough_0x3fc400;
    }
    ctx->pc = 0x3FC400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC400u;
        // 0x3fc404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fc400:
    ctx->pc = 0x3FC408u;
}
