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

// Function: sub_0047F2A8
// Address: 0x47f2a8 - 0x47f3b8
void sub_0047F2A8_0x47f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F2A8_0x47f2a8");
#endif

    switch (ctx->pc) {
        case 0x47f2a8u: goto label_47f2a8;
        case 0x47f2acu: goto label_47f2ac;
        case 0x47f2b0u: goto label_47f2b0;
        case 0x47f2b4u: goto label_47f2b4;
        case 0x47f2b8u: goto label_47f2b8;
        case 0x47f2bcu: goto label_47f2bc;
        case 0x47f2c0u: goto label_47f2c0;
        case 0x47f2c4u: goto label_47f2c4;
        case 0x47f2c8u: goto label_47f2c8;
        case 0x47f2ccu: goto label_47f2cc;
        case 0x47f2d0u: goto label_47f2d0;
        case 0x47f2d4u: goto label_47f2d4;
        case 0x47f2d8u: goto label_47f2d8;
        case 0x47f2dcu: goto label_47f2dc;
        case 0x47f2e0u: goto label_47f2e0;
        case 0x47f2e4u: goto label_47f2e4;
        case 0x47f2e8u: goto label_47f2e8;
        case 0x47f2ecu: goto label_47f2ec;
        case 0x47f2f0u: goto label_47f2f0;
        case 0x47f2f4u: goto label_47f2f4;
        case 0x47f2f8u: goto label_47f2f8;
        case 0x47f2fcu: goto label_47f2fc;
        case 0x47f300u: goto label_47f300;
        case 0x47f304u: goto label_47f304;
        case 0x47f308u: goto label_47f308;
        case 0x47f30cu: goto label_47f30c;
        case 0x47f310u: goto label_47f310;
        case 0x47f314u: goto label_47f314;
        case 0x47f318u: goto label_47f318;
        case 0x47f31cu: goto label_47f31c;
        case 0x47f320u: goto label_47f320;
        case 0x47f324u: goto label_47f324;
        case 0x47f328u: goto label_47f328;
        case 0x47f32cu: goto label_47f32c;
        case 0x47f330u: goto label_47f330;
        case 0x47f334u: goto label_47f334;
        case 0x47f338u: goto label_47f338;
        case 0x47f33cu: goto label_47f33c;
        case 0x47f340u: goto label_47f340;
        case 0x47f344u: goto label_47f344;
        case 0x47f348u: goto label_47f348;
        case 0x47f34cu: goto label_47f34c;
        case 0x47f350u: goto label_47f350;
        case 0x47f354u: goto label_47f354;
        case 0x47f358u: goto label_47f358;
        case 0x47f35cu: goto label_47f35c;
        case 0x47f360u: goto label_47f360;
        case 0x47f364u: goto label_47f364;
        case 0x47f368u: goto label_47f368;
        case 0x47f36cu: goto label_47f36c;
        case 0x47f370u: goto label_47f370;
        case 0x47f374u: goto label_47f374;
        case 0x47f378u: goto label_47f378;
        case 0x47f37cu: goto label_47f37c;
        case 0x47f380u: goto label_47f380;
        case 0x47f384u: goto label_47f384;
        case 0x47f388u: goto label_47f388;
        case 0x47f38cu: goto label_47f38c;
        case 0x47f390u: goto label_47f390;
        case 0x47f394u: goto label_47f394;
        case 0x47f398u: goto label_47f398;
        case 0x47f39cu: goto label_47f39c;
        case 0x47f3a0u: goto label_47f3a0;
        case 0x47f3a4u: goto label_47f3a4;
        case 0x47f3a8u: goto label_47f3a8;
        case 0x47f3acu: goto label_47f3ac;
        case 0x47f3b0u: goto label_47f3b0;
        case 0x47f3b4u: goto label_47f3b4;
        default: break;
    }

    ctx->pc = 0x47f2a8u;

label_47f2a8:
    // 0x47f2a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47f2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47f2ac:
    // 0x47f2ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47f2b0:
    // 0x47f2b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47f2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47f2b4:
    // 0x47f2b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47f2b8:
    // 0x47f2b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47f2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f2bc:
    // 0x47f2bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47f2c0:
    // 0x47f2c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f2c4:
    // 0x47f2c4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_47f2c8:
    if (ctx->pc == 0x47F2C8u) {
        ctx->pc = 0x47F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2C4u;
        // 0x47f2c8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F2CCu;
        goto label_47f2cc;
    }
    ctx->pc = 0x47F2C4u;
    {
        const bool branch_taken_0x47f2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2C4u;
        // 0x47f2c8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f2c4) {
            ctx->pc = 0x47F300u;
            goto label_47f300;
        }
    }
    ctx->pc = 0x47F2CCu;
label_47f2cc:
    // 0x47f2cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_47f2d0:
    if (ctx->pc == 0x47F2D0u) {
        ctx->pc = 0x47F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2CCu;
        // 0x47f2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F2D4u;
        goto label_47f2d4;
    }
    ctx->pc = 0x47F2CCu;
    {
        const bool branch_taken_0x47f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2CCu;
        // 0x47f2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f2cc) {
            ctx->pc = 0x47F2E4u;
            goto label_47f2e4;
        }
    }
    ctx->pc = 0x47F2D4u;
label_47f2d4:
    // 0x47f2d4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_47f2d8:
    if (ctx->pc == 0x47F2D8u) {
        ctx->pc = 0x47F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2D4u;
        // 0x47f2d8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F2DCu;
        goto label_47f2dc;
    }
    ctx->pc = 0x47F2D4u;
    {
        const bool branch_taken_0x47f2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2D4u;
        // 0x47f2d8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f2d4) {
            ctx->pc = 0x47F350u;
            goto label_47f350;
        }
    }
    ctx->pc = 0x47F2DCu;
label_47f2dc:
    // 0x47f2dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_47f2e0:
    if (ctx->pc == 0x47F2E0u) {
        ctx->pc = 0x47F2E4u;
        goto label_47f2e4;
    }
    ctx->pc = 0x47F2DCu;
    {
        const bool branch_taken_0x47f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f2dc) {
            ctx->pc = 0x47F358u;
            goto label_47f358;
        }
    }
    ctx->pc = 0x47F2E4u;
label_47f2e4:
    // 0x47f2e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47f2e8:
    // 0x47f2e8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_47f2ec:
    if (ctx->pc == 0x47F2ECu) {
        ctx->pc = 0x47F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2E8u;
        // 0x47f2ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F2F0u;
        goto label_47f2f0;
    }
    ctx->pc = 0x47F2E8u;
    {
        const bool branch_taken_0x47f2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2E8u;
        // 0x47f2ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f2e8) {
            ctx->pc = 0x47F310u;
            goto label_47f310;
        }
    }
    ctx->pc = 0x47F2F0u;
label_47f2f0:
    // 0x47f2f0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_47f2f4:
    if (ctx->pc == 0x47F2F4u) {
        ctx->pc = 0x47F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2F0u;
        // 0x47f2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F2F8u;
        goto label_47f2f8;
    }
    ctx->pc = 0x47F2F0u;
    {
        const bool branch_taken_0x47f2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2F0u;
        // 0x47f2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f2f0) {
            ctx->pc = 0x47F33Cu;
            goto label_47f33c;
        }
    }
    ctx->pc = 0x47F2F8u;
label_47f2f8:
    // 0x47f2f8: 0x10000017  b           . + 4 + (0x17 << 2)
label_47f2fc:
    if (ctx->pc == 0x47F2FCu) {
        ctx->pc = 0x47F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2F8u;
        // 0x47f2fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F300u;
        goto label_47f300;
    }
    ctx->pc = 0x47F2F8u;
    {
        const bool branch_taken_0x47f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2F8u;
        // 0x47f2fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f2f8) {
            ctx->pc = 0x47F358u;
            goto label_47f358;
        }
    }
    ctx->pc = 0x47F300u;
label_47f300:
    // 0x47f300: 0xc1305b2  jal         func_4C16C8
label_47f304:
    if (ctx->pc == 0x47F304u) {
        ctx->pc = 0x47F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F300u;
        // 0x47f304: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F308u;
        goto label_47f308;
    }
    ctx->pc = 0x47F300u;
    SET_GPR_U32(ctx, 31, 0x47F308u);
    ctx->pc = 0x47F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F300u;
    // 0x47f304: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C16C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C16C8u, 0x47F300u, 0x47F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F308u;
label_47f308:
    // 0x47f308: 0x1000001a  b           . + 4 + (0x1A << 2)
label_47f30c:
    if (ctx->pc == 0x47F30Cu) {
        ctx->pc = 0x47F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F308u;
        // 0x47f30c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F310u;
        goto label_47f310;
    }
    ctx->pc = 0x47F308u;
    {
        const bool branch_taken_0x47f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F308u;
        // 0x47f30c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f308) {
            ctx->pc = 0x47F374u;
            goto label_47f374;
        }
    }
    ctx->pc = 0x47F310u;
label_47f310:
    // 0x47f310: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x47f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47f314:
    // 0x47f314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47f314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f318:
    // 0x47f318: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_47f31c:
    if (ctx->pc == 0x47F31Cu) {
        ctx->pc = 0x47F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F318u;
        // 0x47f31c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F320u;
        goto label_47f320;
    }
    ctx->pc = 0x47F318u;
    {
        const bool branch_taken_0x47f318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F318u;
        // 0x47f31c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f318) {
            ctx->pc = 0x47F374u;
            goto label_47f374;
        }
    }
    ctx->pc = 0x47F320u;
label_47f320:
    // 0x47f320: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
label_47f324:
    if (ctx->pc == 0x47F324u) {
        ctx->pc = 0x47F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F320u;
        // 0x47f324: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F328u;
        goto label_47f328;
    }
    ctx->pc = 0x47F320u;
    {
        const bool branch_taken_0x47f320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f320) {
            ctx->pc = 0x47F324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F320u;
            // 0x47f324: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F378u;
            goto label_47f378;
        }
    }
    ctx->pc = 0x47F328u;
label_47f328:
    // 0x47f328: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x47f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47f32c:
    // 0x47f32c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x47f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_47f330:
    // 0x47f330: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x47f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47f334:
    // 0x47f334: 0x1000000f  b           . + 4 + (0xF << 2)
label_47f338:
    if (ctx->pc == 0x47F338u) {
        ctx->pc = 0x47F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F334u;
        // 0x47f338: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F33Cu;
        goto label_47f33c;
    }
    ctx->pc = 0x47F334u;
    {
        const bool branch_taken_0x47f334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F334u;
        // 0x47f338: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f334) {
            ctx->pc = 0x47F374u;
            goto label_47f374;
        }
    }
    ctx->pc = 0x47F33Cu;
label_47f33c:
    // 0x47f33c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x47f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47f340:
    // 0x47f340: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_47f344:
    if (ctx->pc == 0x47F344u) {
        ctx->pc = 0x47F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F340u;
        // 0x47f344: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F348u;
        goto label_47f348;
    }
    ctx->pc = 0x47F340u;
    {
        const bool branch_taken_0x47f340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F340u;
        // 0x47f344: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f340) {
            ctx->pc = 0x47F374u;
            goto label_47f374;
        }
    }
    ctx->pc = 0x47F348u;
label_47f348:
    // 0x47f348: 0x40f809  jalr        $v0
label_47f34c:
    if (ctx->pc == 0x47F34Cu) {
        ctx->pc = 0x47F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F348u;
        // 0x47f34c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F350u;
        goto label_47f350;
    }
    ctx->pc = 0x47F348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F350u);
        ctx->pc = 0x47F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F348u;
        // 0x47f34c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F348u, 0x47F350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F350u;
label_47f350:
    // 0x47f350: 0x10000008  b           . + 4 + (0x8 << 2)
label_47f354:
    if (ctx->pc == 0x47F354u) {
        ctx->pc = 0x47F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F350u;
        // 0x47f354: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F358u;
        goto label_47f358;
    }
    ctx->pc = 0x47F350u;
    {
        const bool branch_taken_0x47f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F350u;
        // 0x47f354: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f350) {
            ctx->pc = 0x47F374u;
            goto label_47f374;
        }
    }
    ctx->pc = 0x47F358u;
label_47f358:
    // 0x47f358: 0xc11eff2  jal         func_47BFC8
label_47f35c:
    if (ctx->pc == 0x47F35Cu) {
        ctx->pc = 0x47F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F358u;
        // 0x47f35c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F360u;
        goto label_47f360;
    }
    ctx->pc = 0x47F358u;
    SET_GPR_U32(ctx, 31, 0x47F360u);
    ctx->pc = 0x47F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F358u;
    // 0x47f35c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47F358u, 0x47F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F360u;
label_47f360:
    // 0x47f360: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47f360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47f364:
    // 0x47f364: 0xc11f024  jal         func_47C090
label_47f368:
    if (ctx->pc == 0x47F368u) {
        ctx->pc = 0x47F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F364u;
        // 0x47f368: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F36Cu;
        goto label_47f36c;
    }
    ctx->pc = 0x47F364u;
    SET_GPR_U32(ctx, 31, 0x47F36Cu);
    ctx->pc = 0x47F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F364u;
    // 0x47f368: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47F364u, 0x47F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F36Cu;
label_47f36c:
    // 0x47f36c: 0x1000000c  b           . + 4 + (0xC << 2)
label_47f370:
    if (ctx->pc == 0x47F370u) {
        ctx->pc = 0x47F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F36Cu;
        // 0x47f370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F374u;
        goto label_47f374;
    }
    ctx->pc = 0x47F36Cu;
    {
        const bool branch_taken_0x47f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F36Cu;
        // 0x47f370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f36c) {
            ctx->pc = 0x47F3A0u;
            goto label_47f3a0;
        }
    }
    ctx->pc = 0x47F374u;
label_47f374:
    // 0x47f374: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x47f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_47f378:
    // 0x47f378: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_47f37c:
    if (ctx->pc == 0x47F37Cu) {
        ctx->pc = 0x47F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F378u;
        // 0x47f37c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F380u;
        goto label_47f380;
    }
    ctx->pc = 0x47F378u;
    {
        const bool branch_taken_0x47f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F378u;
        // 0x47f37c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f378) {
            ctx->pc = 0x47F39Cu;
            goto label_47f39c;
        }
    }
    ctx->pc = 0x47F380u;
label_47f380:
    // 0x47f380: 0x8f868940  lw          $a2, -0x76C0($gp)
    ctx->pc = 0x47f380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
label_47f384:
    // 0x47f384: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47f384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_47f388:
    // 0x47f388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47f388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f38c:
    // 0x47f38c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x47f38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_47f390:
    // 0x47f390: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x47f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_47f394:
    // 0x47f394: 0x40f809  jalr        $v0
label_47f398:
    if (ctx->pc == 0x47F398u) {
        ctx->pc = 0x47F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F394u;
        // 0x47f398: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F39Cu;
        goto label_47f39c;
    }
    ctx->pc = 0x47F394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F39Cu);
        ctx->pc = 0x47F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F394u;
        // 0x47f398: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F394u, 0x47F39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F39Cu;
label_47f39c:
    // 0x47f39c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47f39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f3a0:
    // 0x47f3a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47f3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f3a4:
    // 0x47f3a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47f3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f3a8:
    // 0x47f3a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47f3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47f3ac:
    // 0x47f3ac: 0x3e00008  jr          $ra
label_47f3b0:
    if (ctx->pc == 0x47F3B0u) {
        ctx->pc = 0x47F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F3ACu;
        // 0x47f3b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F3B4u;
        goto label_47f3b4;
    }
    ctx->pc = 0x47F3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F3ACu;
        // 0x47f3b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F3B4u;
label_47f3b4:
    // 0x47f3b4: 0x0  nop
    ctx->pc = 0x47f3b4u;
    // NOP
    ctx->pc = 0x47f3b8u;
}
