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

// Function: sub_0024B2A8
// Address: 0x24b2a8 - 0x24b3d8
void sub_0024B2A8_0x24b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B2A8_0x24b2a8");
#endif

    switch (ctx->pc) {
        case 0x24b2a8u: goto label_24b2a8;
        case 0x24b2acu: goto label_24b2ac;
        case 0x24b2b0u: goto label_24b2b0;
        case 0x24b2b4u: goto label_24b2b4;
        case 0x24b2b8u: goto label_24b2b8;
        case 0x24b2bcu: goto label_24b2bc;
        case 0x24b2c0u: goto label_24b2c0;
        case 0x24b2c4u: goto label_24b2c4;
        case 0x24b2c8u: goto label_24b2c8;
        case 0x24b2ccu: goto label_24b2cc;
        case 0x24b2d0u: goto label_24b2d0;
        case 0x24b2d4u: goto label_24b2d4;
        case 0x24b2d8u: goto label_24b2d8;
        case 0x24b2dcu: goto label_24b2dc;
        case 0x24b2e0u: goto label_24b2e0;
        case 0x24b2e4u: goto label_24b2e4;
        case 0x24b2e8u: goto label_24b2e8;
        case 0x24b2ecu: goto label_24b2ec;
        case 0x24b2f0u: goto label_24b2f0;
        case 0x24b2f4u: goto label_24b2f4;
        case 0x24b2f8u: goto label_24b2f8;
        case 0x24b2fcu: goto label_24b2fc;
        case 0x24b300u: goto label_24b300;
        case 0x24b304u: goto label_24b304;
        case 0x24b308u: goto label_24b308;
        case 0x24b30cu: goto label_24b30c;
        case 0x24b310u: goto label_24b310;
        case 0x24b314u: goto label_24b314;
        case 0x24b318u: goto label_24b318;
        case 0x24b31cu: goto label_24b31c;
        case 0x24b320u: goto label_24b320;
        case 0x24b324u: goto label_24b324;
        case 0x24b328u: goto label_24b328;
        case 0x24b32cu: goto label_24b32c;
        case 0x24b330u: goto label_24b330;
        case 0x24b334u: goto label_24b334;
        case 0x24b338u: goto label_24b338;
        case 0x24b33cu: goto label_24b33c;
        case 0x24b340u: goto label_24b340;
        case 0x24b344u: goto label_24b344;
        case 0x24b348u: goto label_24b348;
        case 0x24b34cu: goto label_24b34c;
        case 0x24b350u: goto label_24b350;
        case 0x24b354u: goto label_24b354;
        case 0x24b358u: goto label_24b358;
        case 0x24b35cu: goto label_24b35c;
        case 0x24b360u: goto label_24b360;
        case 0x24b364u: goto label_24b364;
        case 0x24b368u: goto label_24b368;
        case 0x24b36cu: goto label_24b36c;
        case 0x24b370u: goto label_24b370;
        case 0x24b374u: goto label_24b374;
        case 0x24b378u: goto label_24b378;
        case 0x24b37cu: goto label_24b37c;
        case 0x24b380u: goto label_24b380;
        case 0x24b384u: goto label_24b384;
        case 0x24b388u: goto label_24b388;
        case 0x24b38cu: goto label_24b38c;
        case 0x24b390u: goto label_24b390;
        case 0x24b394u: goto label_24b394;
        case 0x24b398u: goto label_24b398;
        case 0x24b39cu: goto label_24b39c;
        case 0x24b3a0u: goto label_24b3a0;
        case 0x24b3a4u: goto label_24b3a4;
        case 0x24b3a8u: goto label_24b3a8;
        case 0x24b3acu: goto label_24b3ac;
        case 0x24b3b0u: goto label_24b3b0;
        case 0x24b3b4u: goto label_24b3b4;
        case 0x24b3b8u: goto label_24b3b8;
        case 0x24b3bcu: goto label_24b3bc;
        case 0x24b3c0u: goto label_24b3c0;
        case 0x24b3c4u: goto label_24b3c4;
        case 0x24b3c8u: goto label_24b3c8;
        case 0x24b3ccu: goto label_24b3cc;
        case 0x24b3d0u: goto label_24b3d0;
        case 0x24b3d4u: goto label_24b3d4;
        default: break;
    }

    ctx->pc = 0x24b2a8u;

label_24b2a8:
    // 0x24b2a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24b2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24b2ac:
    // 0x24b2ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_24b2b0:
    // 0x24b2b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24b2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_24b2b4:
    // 0x24b2b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24b2b8:
    // 0x24b2b8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x24b2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_24b2bc:
    // 0x24b2bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24b2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24b2c0:
    // 0x24b2c0: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x24b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_24b2c4:
    // 0x24b2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24b2c8:
    // 0x24b2c8: 0xc107458  jal         func_41D160
label_24b2cc:
    if (ctx->pc == 0x24B2CCu) {
        ctx->pc = 0x24B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2C8u;
        // 0x24b2cc: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B2D0u;
        goto label_24b2d0;
    }
    ctx->pc = 0x24B2C8u;
    SET_GPR_U32(ctx, 31, 0x24B2D0u);
    ctx->pc = 0x24B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2C8u;
    // 0x24b2cc: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24B2C8u, 0x24B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2D0u;
label_24b2d0:
    // 0x24b2d0: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
label_24b2d4:
    if (ctx->pc == 0x24B2D4u) {
        ctx->pc = 0x24B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2D0u;
        // 0x24b2d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B2D8u;
        goto label_24b2d8;
    }
    ctx->pc = 0x24B2D0u;
    {
        const bool branch_taken_0x24b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b2d0) {
            ctx->pc = 0x24B2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B2D0u;
            // 0x24b2d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B3C0u;
            goto label_24b3c0;
        }
    }
    ctx->pc = 0x24B2D8u;
label_24b2d8:
    // 0x24b2d8: 0xc047ab8  jal         func_11EAE0
label_24b2dc:
    if (ctx->pc == 0x24B2DCu) {
        ctx->pc = 0x24B2E0u;
        goto label_24b2e0;
    }
    ctx->pc = 0x24B2D8u;
    SET_GPR_U32(ctx, 31, 0x24B2E0u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x24B2D8u, 0x24B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2E0u;
label_24b2e0:
    // 0x24b2e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24b2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24b2e4:
    // 0x24b2e4: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_24b2e8:
    if (ctx->pc == 0x24B2E8u) {
        ctx->pc = 0x24B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2E4u;
        // 0x24b2e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B2ECu;
        goto label_24b2ec;
    }
    ctx->pc = 0x24B2E4u;
    {
        const bool branch_taken_0x24b2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2e4) {
            ctx->pc = 0x24B2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B2E4u;
            // 0x24b2e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B3C0u;
            goto label_24b3c0;
        }
    }
    ctx->pc = 0x24B2ECu;
label_24b2ec:
    // 0x24b2ec: 0x820401b0  lb          $a0, 0x1B0($s0)
    ctx->pc = 0x24b2ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_24b2f0:
    // 0x24b2f0: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x24b2f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_24b2f4:
    // 0x24b2f4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_24b2f8:
    if (ctx->pc == 0x24B2F8u) {
        ctx->pc = 0x24B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2F4u;
        // 0x24b2f8: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B2FCu;
        goto label_24b2fc;
    }
    ctx->pc = 0x24B2F4u;
    {
        const bool branch_taken_0x24b2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2F4u;
        // 0x24b2f8: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2f4) {
            ctx->pc = 0x24B3BCu;
            goto label_24b3bc;
        }
    }
    ctx->pc = 0x24B2FCu;
label_24b2fc:
    // 0x24b2fc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x24b2fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_24b300:
    // 0x24b300: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x24b300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_24b304:
    // 0x24b304: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24b304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_24b308:
    // 0x24b308: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_24b30c:
    if (ctx->pc == 0x24B30Cu) {
        ctx->pc = 0x24B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B308u;
        // 0x24b30c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B310u;
        goto label_24b310;
    }
    ctx->pc = 0x24B308u;
    {
        const bool branch_taken_0x24b308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b308) {
            ctx->pc = 0x24B30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B308u;
            // 0x24b30c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B3C0u;
            goto label_24b3c0;
        }
    }
    ctx->pc = 0x24B310u;
label_24b310:
    // 0x24b310: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_24b314:
    if (ctx->pc == 0x24B314u) {
        ctx->pc = 0x24B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B310u;
        // 0x24b314: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B318u;
        goto label_24b318;
    }
    ctx->pc = 0x24B310u;
    {
        const bool branch_taken_0x24b310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B310u;
        // 0x24b314: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b310) {
            ctx->pc = 0x24B344u;
            goto label_24b344;
        }
    }
    ctx->pc = 0x24B318u;
label_24b318:
    // 0x24b318: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24b318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24b31c:
    // 0x24b31c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24b320:
    // 0x24b320: 0x40f809  jalr        $v0
label_24b324:
    if (ctx->pc == 0x24B324u) {
        ctx->pc = 0x24B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B320u;
        // 0x24b324: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B328u;
        goto label_24b328;
    }
    ctx->pc = 0x24B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B328u);
        ctx->pc = 0x24B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B320u;
        // 0x24b324: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B320u, 0x24B328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B328u;
label_24b328:
    // 0x24b328: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24b328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_24b32c:
    // 0x24b32c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b330:
    // 0x24b330: 0x24a5ce88  addiu       $a1, $a1, -0x3178
    ctx->pc = 0x24b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954632));
label_24b334:
    // 0x24b334: 0xc08e2a2  jal         func_238A88
label_24b338:
    if (ctx->pc == 0x24B338u) {
        ctx->pc = 0x24B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B334u;
        // 0x24b338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B33Cu;
        goto label_24b33c;
    }
    ctx->pc = 0x24B334u;
    SET_GPR_U32(ctx, 31, 0x24B33Cu);
    ctx->pc = 0x24B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B334u;
    // 0x24b338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x24B334u, 0x24B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B33Cu;
label_24b33c:
    // 0x24b33c: 0x1000000b  b           . + 4 + (0xB << 2)
label_24b340:
    if (ctx->pc == 0x24B340u) {
        ctx->pc = 0x24B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B33Cu;
        // 0x24b340: 0x8e030360  lw          $v1, 0x360($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B344u;
        goto label_24b344;
    }
    ctx->pc = 0x24B33Cu;
    {
        const bool branch_taken_0x24b33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B33Cu;
        // 0x24b340: 0x8e030360  lw          $v1, 0x360($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b33c) {
            ctx->pc = 0x24B36Cu;
            goto label_24b36c;
        }
    }
    ctx->pc = 0x24B344u;
label_24b344:
    // 0x24b344: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24b344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24b348:
    // 0x24b348: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24b34c:
    // 0x24b34c: 0x40f809  jalr        $v0
label_24b350:
    if (ctx->pc == 0x24B350u) {
        ctx->pc = 0x24B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B34Cu;
        // 0x24b350: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B354u;
        goto label_24b354;
    }
    ctx->pc = 0x24B34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B354u);
        ctx->pc = 0x24B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B34Cu;
        // 0x24b350: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B34Cu, 0x24B354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B354u;
label_24b354:
    // 0x24b354: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24b354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_24b358:
    // 0x24b358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b35c:
    // 0x24b35c: 0x24a5ce98  addiu       $a1, $a1, -0x3168
    ctx->pc = 0x24b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954648));
label_24b360:
    // 0x24b360: 0xc08e2a2  jal         func_238A88
label_24b364:
    if (ctx->pc == 0x24B364u) {
        ctx->pc = 0x24B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B360u;
        // 0x24b364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B368u;
        goto label_24b368;
    }
    ctx->pc = 0x24B360u;
    SET_GPR_U32(ctx, 31, 0x24B368u);
    ctx->pc = 0x24B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B360u;
    // 0x24b364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x24B360u, 0x24B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B368u;
label_24b368:
    // 0x24b368: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x24b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_24b36c:
    // 0x24b36c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_24b370:
    // 0x24b370: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x24b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_24b374:
    // 0x24b374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24b374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24b378:
    // 0x24b378: 0x2428825  or          $s1, $s2, $v0
    ctx->pc = 0x24b378u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_24b37c:
    // 0x24b37c: 0xc0e4080  jal         func_390200
label_24b380:
    if (ctx->pc == 0x24B380u) {
        ctx->pc = 0x24B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B37Cu;
        // 0x24b380: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B384u;
        goto label_24b384;
    }
    ctx->pc = 0x24B37Cu;
    SET_GPR_U32(ctx, 31, 0x24B384u);
    ctx->pc = 0x24B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B37Cu;
    // 0x24b380: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x24B37Cu, 0x24B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B384u;
label_24b384:
    // 0x24b384: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24b388:
    if (ctx->pc == 0x24B388u) {
        ctx->pc = 0x24B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B384u;
        // 0x24b388: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B38Cu;
        goto label_24b38c;
    }
    ctx->pc = 0x24B384u;
    {
        const bool branch_taken_0x24b384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b384) {
            ctx->pc = 0x24B388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B384u;
            // 0x24b388: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B398u;
            goto label_24b398;
        }
    }
    ctx->pc = 0x24B38Cu;
label_24b38c:
    // 0x24b38c: 0xac5100cc  sw          $s1, 0xCC($v0)
    ctx->pc = 0x24b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 17));
label_24b390:
    // 0x24b390: 0xac5100c8  sw          $s1, 0xC8($v0)
    ctx->pc = 0x24b390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 17));
label_24b394:
    // 0x24b394: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24b398:
    // 0x24b398: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24b398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24b39c:
    // 0x24b39c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24b3a0:
    // 0x24b3a0: 0x40f809  jalr        $v0
label_24b3a4:
    if (ctx->pc == 0x24B3A4u) {
        ctx->pc = 0x24B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3A0u;
        // 0x24b3a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B3A8u;
        goto label_24b3a8;
    }
    ctx->pc = 0x24B3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B3A8u);
        ctx->pc = 0x24B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3A0u;
        // 0x24b3a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B3A0u, 0x24B3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B3A8u;
label_24b3a8:
    // 0x24b3a8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x24b3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_24b3ac:
    // 0x24b3ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b3b0:
    // 0x24b3b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24b3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24b3b4:
    // 0x24b3b4: 0xc08e2c6  jal         func_238B18
label_24b3b8:
    if (ctx->pc == 0x24B3B8u) {
        ctx->pc = 0x24B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3B4u;
        // 0x24b3b8: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B3BCu;
        goto label_24b3bc;
    }
    ctx->pc = 0x24B3B4u;
    SET_GPR_U32(ctx, 31, 0x24B3BCu);
    ctx->pc = 0x24B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B3B4u;
    // 0x24b3b8: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B18u, 0x24B3B4u, 0x24B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3BCu;
label_24b3bc:
    // 0x24b3bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24b3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24b3c0:
    // 0x24b3c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24b3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24b3c4:
    // 0x24b3c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24b3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24b3c8:
    // 0x24b3c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24b3cc:
    // 0x24b3cc: 0x3e00008  jr          $ra
label_24b3d0:
    if (ctx->pc == 0x24B3D0u) {
        ctx->pc = 0x24B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3CCu;
        // 0x24b3d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B3D4u;
        goto label_24b3d4;
    }
    ctx->pc = 0x24B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3CCu;
        // 0x24b3d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B3D4u;
label_24b3d4:
    // 0x24b3d4: 0x0  nop
    ctx->pc = 0x24b3d4u;
    // NOP
    ctx->pc = 0x24b3d8u;
}
