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

// Function: sub_001AB270
// Address: 0x1ab270 - 0x1ab348
void sub_001AB270_0x1ab270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB270_0x1ab270");
#endif

    switch (ctx->pc) {
        case 0x1ab270u: goto label_1ab270;
        case 0x1ab274u: goto label_1ab274;
        case 0x1ab278u: goto label_1ab278;
        case 0x1ab27cu: goto label_1ab27c;
        case 0x1ab280u: goto label_1ab280;
        case 0x1ab284u: goto label_1ab284;
        case 0x1ab288u: goto label_1ab288;
        case 0x1ab28cu: goto label_1ab28c;
        case 0x1ab290u: goto label_1ab290;
        case 0x1ab294u: goto label_1ab294;
        case 0x1ab298u: goto label_1ab298;
        case 0x1ab29cu: goto label_1ab29c;
        case 0x1ab2a0u: goto label_1ab2a0;
        case 0x1ab2a4u: goto label_1ab2a4;
        case 0x1ab2a8u: goto label_1ab2a8;
        case 0x1ab2acu: goto label_1ab2ac;
        case 0x1ab2b0u: goto label_1ab2b0;
        case 0x1ab2b4u: goto label_1ab2b4;
        case 0x1ab2b8u: goto label_1ab2b8;
        case 0x1ab2bcu: goto label_1ab2bc;
        case 0x1ab2c0u: goto label_1ab2c0;
        case 0x1ab2c4u: goto label_1ab2c4;
        case 0x1ab2c8u: goto label_1ab2c8;
        case 0x1ab2ccu: goto label_1ab2cc;
        case 0x1ab2d0u: goto label_1ab2d0;
        case 0x1ab2d4u: goto label_1ab2d4;
        case 0x1ab2d8u: goto label_1ab2d8;
        case 0x1ab2dcu: goto label_1ab2dc;
        case 0x1ab2e0u: goto label_1ab2e0;
        case 0x1ab2e4u: goto label_1ab2e4;
        case 0x1ab2e8u: goto label_1ab2e8;
        case 0x1ab2ecu: goto label_1ab2ec;
        case 0x1ab2f0u: goto label_1ab2f0;
        case 0x1ab2f4u: goto label_1ab2f4;
        case 0x1ab2f8u: goto label_1ab2f8;
        case 0x1ab2fcu: goto label_1ab2fc;
        case 0x1ab300u: goto label_1ab300;
        case 0x1ab304u: goto label_1ab304;
        case 0x1ab308u: goto label_1ab308;
        case 0x1ab30cu: goto label_1ab30c;
        case 0x1ab310u: goto label_1ab310;
        case 0x1ab314u: goto label_1ab314;
        case 0x1ab318u: goto label_1ab318;
        case 0x1ab31cu: goto label_1ab31c;
        case 0x1ab320u: goto label_1ab320;
        case 0x1ab324u: goto label_1ab324;
        case 0x1ab328u: goto label_1ab328;
        case 0x1ab32cu: goto label_1ab32c;
        case 0x1ab330u: goto label_1ab330;
        case 0x1ab334u: goto label_1ab334;
        case 0x1ab338u: goto label_1ab338;
        case 0x1ab33cu: goto label_1ab33c;
        case 0x1ab340u: goto label_1ab340;
        case 0x1ab344u: goto label_1ab344;
        default: break;
    }

    ctx->pc = 0x1ab270u;

label_1ab270:
    // 0x1ab270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ab270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ab274:
    // 0x1ab274: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ab274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ab278:
    // 0x1ab278: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ab278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ab27c:
    // 0x1ab27c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab280:
    // 0x1ab280: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ab280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ab284:
    // 0x1ab284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab288:
    // 0x1ab288: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ab288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ab28c:
    // 0x1ab28c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1ab28cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1ab290:
    // 0x1ab290: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1ab290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1ab294:
    // 0x1ab294: 0x40f809  jalr        $v0
label_1ab298:
    if (ctx->pc == 0x1AB298u) {
        ctx->pc = 0x1AB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB294u;
        // 0x1ab298: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB29Cu;
        goto label_1ab29c;
    }
    ctx->pc = 0x1AB294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB29Cu);
        ctx->pc = 0x1AB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB294u;
        // 0x1ab298: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB294u, 0x1AB29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB29Cu;
label_1ab29c:
    // 0x1ab29c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1ab2a0:
    if (ctx->pc == 0x1AB2A0u) {
        ctx->pc = 0x1AB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB29Cu;
        // 0x1ab2a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2A4u;
        goto label_1ab2a4;
    }
    ctx->pc = 0x1AB29Cu;
    {
        const bool branch_taken_0x1ab29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB29Cu;
        // 0x1ab2a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab29c) {
            ctx->pc = 0x1AB330u;
            goto label_1ab330;
        }
    }
    ctx->pc = 0x1AB2A4u;
label_1ab2a4:
    // 0x1ab2a4: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1ab2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1ab2a8:
    // 0x1ab2a8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1ab2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1ab2ac:
    // 0x1ab2ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ab2acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ab2b0:
    // 0x1ab2b0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1ab2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1ab2b4:
    // 0x1ab2b4: 0xc0e409a  jal         func_390268
label_1ab2b8:
    if (ctx->pc == 0x1AB2B8u) {
        ctx->pc = 0x1AB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2B4u;
        // 0x1ab2b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2BCu;
        goto label_1ab2bc;
    }
    ctx->pc = 0x1AB2B4u;
    SET_GPR_U32(ctx, 31, 0x1AB2BCu);
    ctx->pc = 0x1AB2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB2B4u;
    // 0x1ab2b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1AB2B4u, 0x1AB2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2BCu;
label_1ab2bc:
    // 0x1ab2bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ab2bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab2c0:
    // 0x1ab2c0: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_1ab2c4:
    if (ctx->pc == 0x1AB2C4u) {
        ctx->pc = 0x1AB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2C0u;
        // 0x1ab2c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2C8u;
        goto label_1ab2c8;
    }
    ctx->pc = 0x1AB2C0u;
    {
        const bool branch_taken_0x1ab2c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2C0u;
        // 0x1ab2c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2c0) {
            ctx->pc = 0x1AB330u;
            goto label_1ab330;
        }
    }
    ctx->pc = 0x1AB2C8u;
label_1ab2c8:
    // 0x1ab2c8: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1ab2cc:
    // 0x1ab2cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ab2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab2d0:
    // 0x1ab2d0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ab2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ab2d4:
    // 0x1ab2d4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ab2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ab2d8:
    // 0x1ab2d8: 0x40f809  jalr        $v0
label_1ab2dc:
    if (ctx->pc == 0x1AB2DCu) {
        ctx->pc = 0x1AB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2D8u;
        // 0x1ab2dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2E0u;
        goto label_1ab2e0;
    }
    ctx->pc = 0x1AB2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB2E0u);
        ctx->pc = 0x1AB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2D8u;
        // 0x1ab2dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB2D8u, 0x1AB2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB2E0u;
label_1ab2e0:
    // 0x1ab2e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ab2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab2e4:
    // 0x1ab2e4: 0xc088ac6  jal         func_222B18
label_1ab2e8:
    if (ctx->pc == 0x1AB2E8u) {
        ctx->pc = 0x1AB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2E4u;
        // 0x1ab2e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2ECu;
        goto label_1ab2ec;
    }
    ctx->pc = 0x1AB2E4u;
    SET_GPR_U32(ctx, 31, 0x1AB2ECu);
    ctx->pc = 0x1AB2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB2E4u;
    // 0x1ab2e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x1AB2E4u, 0x1AB2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2ECu;
label_1ab2ec:
    // 0x1ab2ec: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1ab2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1ab2f0:
    // 0x1ab2f0: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x1ab2f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1ab2f4:
    // 0x1ab2f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1ab2f8:
    if (ctx->pc == 0x1AB2F8u) {
        ctx->pc = 0x1AB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2F4u;
        // 0x1ab2f8: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB2FCu;
        goto label_1ab2fc;
    }
    ctx->pc = 0x1AB2F4u;
    {
        const bool branch_taken_0x1ab2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2F4u;
        // 0x1ab2f8: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2f4) {
            ctx->pc = 0x1AB330u;
            goto label_1ab330;
        }
    }
    ctx->pc = 0x1AB2FCu;
label_1ab2fc:
    // 0x1ab2fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ab2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab300:
    // 0x1ab300: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ab300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab304:
    // 0x1ab304: 0x0  nop
    ctx->pc = 0x1ab304u;
    // NOP
label_1ab308:
    // 0x1ab308: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ab308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab30c:
    // 0x1ab30c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ab30cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ab310:
    // 0x1ab310: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1ab310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1ab314:
    // 0x1ab314: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1ab314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1ab318:
    // 0x1ab318: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1ab318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1ab31c:
    // 0x1ab31c: 0x40f809  jalr        $v0
label_1ab320:
    if (ctx->pc == 0x1AB320u) {
        ctx->pc = 0x1AB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB31Cu;
        // 0x1ab320: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB324u;
        goto label_1ab324;
    }
    ctx->pc = 0x1AB31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB324u);
        ctx->pc = 0x1AB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB31Cu;
        // 0x1ab320: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB31Cu, 0x1AB324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB324u;
label_1ab324:
    // 0x1ab324: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1ab324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ab328:
    // 0x1ab328: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1ab32c:
    if (ctx->pc == 0x1AB32Cu) {
        ctx->pc = 0x1AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB328u;
        // 0x1ab32c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB330u;
        goto label_1ab330;
    }
    ctx->pc = 0x1AB328u;
    {
        const bool branch_taken_0x1ab328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB328u;
        // 0x1ab32c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab328) {
            ctx->pc = 0x1AB308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab308;
        }
    }
    ctx->pc = 0x1AB330u;
label_1ab330:
    // 0x1ab330: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ab330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab334:
    // 0x1ab334: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ab334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab338:
    // 0x1ab338: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ab338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab33c:
    // 0x1ab33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab340:
    // 0x1ab340: 0x3e00008  jr          $ra
label_1ab344:
    if (ctx->pc == 0x1AB344u) {
        ctx->pc = 0x1AB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB340u;
        // 0x1ab344: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB348u;
        goto label_fallthrough_0x1ab340;
    }
    ctx->pc = 0x1AB340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB340u;
        // 0x1ab344: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab340:
    ctx->pc = 0x1AB348u;
}
