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

// Function: sub_0041B2F8
// Address: 0x41b2f8 - 0x41b3d8
void sub_0041B2F8_0x41b2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B2F8_0x41b2f8");
#endif

    switch (ctx->pc) {
        case 0x41b2f8u: goto label_41b2f8;
        case 0x41b2fcu: goto label_41b2fc;
        case 0x41b300u: goto label_41b300;
        case 0x41b304u: goto label_41b304;
        case 0x41b308u: goto label_41b308;
        case 0x41b30cu: goto label_41b30c;
        case 0x41b310u: goto label_41b310;
        case 0x41b314u: goto label_41b314;
        case 0x41b318u: goto label_41b318;
        case 0x41b31cu: goto label_41b31c;
        case 0x41b320u: goto label_41b320;
        case 0x41b324u: goto label_41b324;
        case 0x41b328u: goto label_41b328;
        case 0x41b32cu: goto label_41b32c;
        case 0x41b330u: goto label_41b330;
        case 0x41b334u: goto label_41b334;
        case 0x41b338u: goto label_41b338;
        case 0x41b33cu: goto label_41b33c;
        case 0x41b340u: goto label_41b340;
        case 0x41b344u: goto label_41b344;
        case 0x41b348u: goto label_41b348;
        case 0x41b34cu: goto label_41b34c;
        case 0x41b350u: goto label_41b350;
        case 0x41b354u: goto label_41b354;
        case 0x41b358u: goto label_41b358;
        case 0x41b35cu: goto label_41b35c;
        case 0x41b360u: goto label_41b360;
        case 0x41b364u: goto label_41b364;
        case 0x41b368u: goto label_41b368;
        case 0x41b36cu: goto label_41b36c;
        case 0x41b370u: goto label_41b370;
        case 0x41b374u: goto label_41b374;
        case 0x41b378u: goto label_41b378;
        case 0x41b37cu: goto label_41b37c;
        case 0x41b380u: goto label_41b380;
        case 0x41b384u: goto label_41b384;
        case 0x41b388u: goto label_41b388;
        case 0x41b38cu: goto label_41b38c;
        case 0x41b390u: goto label_41b390;
        case 0x41b394u: goto label_41b394;
        case 0x41b398u: goto label_41b398;
        case 0x41b39cu: goto label_41b39c;
        case 0x41b3a0u: goto label_41b3a0;
        case 0x41b3a4u: goto label_41b3a4;
        case 0x41b3a8u: goto label_41b3a8;
        case 0x41b3acu: goto label_41b3ac;
        case 0x41b3b0u: goto label_41b3b0;
        case 0x41b3b4u: goto label_41b3b4;
        case 0x41b3b8u: goto label_41b3b8;
        case 0x41b3bcu: goto label_41b3bc;
        case 0x41b3c0u: goto label_41b3c0;
        case 0x41b3c4u: goto label_41b3c4;
        case 0x41b3c8u: goto label_41b3c8;
        case 0x41b3ccu: goto label_41b3cc;
        case 0x41b3d0u: goto label_41b3d0;
        case 0x41b3d4u: goto label_41b3d4;
        default: break;
    }

    ctx->pc = 0x41b2f8u;

label_41b2f8:
    // 0x41b2f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41b2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41b2fc:
    // 0x41b2fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_41b300:
    // 0x41b300: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_41b304:
    // 0x41b304: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41b304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b308:
    // 0x41b308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41b30c:
    // 0x41b30c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41b310:
    // 0x41b310: 0xc106caa  jal         func_41B2A8
label_41b314:
    if (ctx->pc == 0x41B314u) {
        ctx->pc = 0x41B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B310u;
        // 0x41b314: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B318u;
        goto label_41b318;
    }
    ctx->pc = 0x41B310u;
    SET_GPR_U32(ctx, 31, 0x41B318u);
    ctx->pc = 0x41B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B310u;
    // 0x41b314: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B2A8u, 0x41B310u, 0x41B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B318u;
label_41b318:
    // 0x41b318: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_41b31c:
    if (ctx->pc == 0x41B31Cu) {
        ctx->pc = 0x41B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B318u;
        // 0x41b31c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B320u;
        goto label_41b320;
    }
    ctx->pc = 0x41B318u;
    {
        const bool branch_taken_0x41b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b318) {
            ctx->pc = 0x41B31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B318u;
            // 0x41b31c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B3C0u;
            goto label_41b3c0;
        }
    }
    ctx->pc = 0x41B320u;
label_41b320:
    // 0x41b320: 0x52000027  beql        $s0, $zero, . + 4 + (0x27 << 2)
label_41b324:
    if (ctx->pc == 0x41B324u) {
        ctx->pc = 0x41B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B320u;
        // 0x41b324: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B328u;
        goto label_41b328;
    }
    ctx->pc = 0x41B320u;
    {
        const bool branch_taken_0x41b320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b320) {
            ctx->pc = 0x41B324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B320u;
            // 0x41b324: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B3C0u;
            goto label_41b3c0;
        }
    }
    ctx->pc = 0x41B328u;
label_41b328:
    // 0x41b328: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41b32c:
    // 0x41b32c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41b32cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41b330:
    // 0x41b330: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41b330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41b334:
    // 0x41b334: 0x40f809  jalr        $v0
label_41b338:
    if (ctx->pc == 0x41B338u) {
        ctx->pc = 0x41B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B334u;
        // 0x41b338: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B33Cu;
        goto label_41b33c;
    }
    ctx->pc = 0x41B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B33Cu);
        ctx->pc = 0x41B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B334u;
        // 0x41b338: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B334u, 0x41B33Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B33Cu;
label_41b33c:
    // 0x41b33c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41b340:
    // 0x41b340: 0xc0e4060  jal         func_390180
label_41b344:
    if (ctx->pc == 0x41B344u) {
        ctx->pc = 0x41B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B340u;
        // 0x41b344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B348u;
        goto label_41b348;
    }
    ctx->pc = 0x41B340u;
    SET_GPR_U32(ctx, 31, 0x41B348u);
    ctx->pc = 0x41B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B340u;
    // 0x41b344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41B340u, 0x41B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B348u;
label_41b348:
    // 0x41b348: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_41b34c:
    if (ctx->pc == 0x41B34Cu) {
        ctx->pc = 0x41B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B348u;
        // 0x41b34c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B350u;
        goto label_41b350;
    }
    ctx->pc = 0x41B348u;
    {
        const bool branch_taken_0x41b348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B348u;
        // 0x41b34c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b348) {
            ctx->pc = 0x41B3BCu;
            goto label_41b3bc;
        }
    }
    ctx->pc = 0x41B350u;
label_41b350:
    // 0x41b350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41b350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b354:
    // 0x41b354: 0x8e512b04  lw          $s1, 0x2B04($s2)
    ctx->pc = 0x41b354u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b358:
    // 0x41b358: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x41b358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41b35c:
    // 0x41b35c: 0x86020048  lh          $v0, 0x48($s0)
    ctx->pc = 0x41b35cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_41b360:
    // 0x41b360: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x41b360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_41b364:
    // 0x41b364: 0xc106caa  jal         func_41B2A8
label_41b368:
    if (ctx->pc == 0x41B368u) {
        ctx->pc = 0x41B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B364u;
        // 0x41b368: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B36Cu;
        goto label_41b36c;
    }
    ctx->pc = 0x41B364u;
    SET_GPR_U32(ctx, 31, 0x41B36Cu);
    ctx->pc = 0x41B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B364u;
    // 0x41b368: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B2A8u, 0x41B364u, 0x41B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B36Cu;
label_41b36c:
    // 0x41b36c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41b370:
    // 0x41b370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b374:
    // 0x41b374: 0x60f809  jalr        $v1
label_41b378:
    if (ctx->pc == 0x41B378u) {
        ctx->pc = 0x41B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B374u;
        // 0x41b378: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B37Cu;
        goto label_41b37c;
    }
    ctx->pc = 0x41B374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B37Cu);
        ctx->pc = 0x41B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B374u;
        // 0x41b378: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B374u, 0x41B37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B37Cu;
label_41b37c:
    // 0x41b37c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_41b380:
    if (ctx->pc == 0x41B380u) {
        ctx->pc = 0x41B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B37Cu;
        // 0x41b380: 0x8e462b04  lw          $a2, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B384u;
        goto label_41b384;
    }
    ctx->pc = 0x41B37Cu;
    {
        const bool branch_taken_0x41b37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B37Cu;
        // 0x41b380: 0x8e462b04  lw          $a2, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b37c) {
            ctx->pc = 0x41B3BCu;
            goto label_41b3bc;
        }
    }
    ctx->pc = 0x41B384u;
label_41b384:
    // 0x41b384: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41b384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41b388:
    // 0x41b388: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b38c:
    // 0x41b38c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x41b38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_41b390:
    // 0x41b390: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x41b390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_41b394:
    // 0x41b394: 0x60f809  jalr        $v1
label_41b398:
    if (ctx->pc == 0x41B398u) {
        ctx->pc = 0x41B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B394u;
        // 0x41b398: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B39Cu;
        goto label_41b39c;
    }
    ctx->pc = 0x41B394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B39Cu);
        ctx->pc = 0x41B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B394u;
        // 0x41b398: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B394u, 0x41B39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B39Cu;
label_41b39c:
    // 0x41b39c: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x41b39cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b3a0:
    // 0x41b3a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b3a4:
    // 0x41b3a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41b3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b3a8:
    // 0x41b3a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41b3ac:
    // 0x41b3ac: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41b3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41b3b0:
    // 0x41b3b0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41b3b4:
    // 0x41b3b4: 0x60f809  jalr        $v1
label_41b3b8:
    if (ctx->pc == 0x41B3B8u) {
        ctx->pc = 0x41B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3B4u;
        // 0x41b3b8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B3BCu;
        goto label_41b3bc;
    }
    ctx->pc = 0x41B3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B3BCu);
        ctx->pc = 0x41B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3B4u;
        // 0x41b3b8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B3B4u, 0x41B3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B3BCu;
label_41b3bc:
    // 0x41b3bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41b3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b3c0:
    // 0x41b3c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41b3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b3c4:
    // 0x41b3c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41b3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b3c8:
    // 0x41b3c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b3cc:
    // 0x41b3cc: 0x3e00008  jr          $ra
label_41b3d0:
    if (ctx->pc == 0x41B3D0u) {
        ctx->pc = 0x41B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3CCu;
        // 0x41b3d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B3D4u;
        goto label_41b3d4;
    }
    ctx->pc = 0x41B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3CCu;
        // 0x41b3d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B3D4u;
label_41b3d4:
    // 0x41b3d4: 0x0  nop
    ctx->pc = 0x41b3d4u;
    // NOP
    ctx->pc = 0x41b3d8u;
}
