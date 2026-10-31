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

// Function: sub_0015F248
// Address: 0x15f248 - 0x15f308
void sub_0015F248_0x15f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F248_0x15f248");
#endif

    switch (ctx->pc) {
        case 0x15f248u: goto label_15f248;
        case 0x15f24cu: goto label_15f24c;
        case 0x15f250u: goto label_15f250;
        case 0x15f254u: goto label_15f254;
        case 0x15f258u: goto label_15f258;
        case 0x15f25cu: goto label_15f25c;
        case 0x15f260u: goto label_15f260;
        case 0x15f264u: goto label_15f264;
        case 0x15f268u: goto label_15f268;
        case 0x15f26cu: goto label_15f26c;
        case 0x15f270u: goto label_15f270;
        case 0x15f274u: goto label_15f274;
        case 0x15f278u: goto label_15f278;
        case 0x15f27cu: goto label_15f27c;
        case 0x15f280u: goto label_15f280;
        case 0x15f284u: goto label_15f284;
        case 0x15f288u: goto label_15f288;
        case 0x15f28cu: goto label_15f28c;
        case 0x15f290u: goto label_15f290;
        case 0x15f294u: goto label_15f294;
        case 0x15f298u: goto label_15f298;
        case 0x15f29cu: goto label_15f29c;
        case 0x15f2a0u: goto label_15f2a0;
        case 0x15f2a4u: goto label_15f2a4;
        case 0x15f2a8u: goto label_15f2a8;
        case 0x15f2acu: goto label_15f2ac;
        case 0x15f2b0u: goto label_15f2b0;
        case 0x15f2b4u: goto label_15f2b4;
        case 0x15f2b8u: goto label_15f2b8;
        case 0x15f2bcu: goto label_15f2bc;
        case 0x15f2c0u: goto label_15f2c0;
        case 0x15f2c4u: goto label_15f2c4;
        case 0x15f2c8u: goto label_15f2c8;
        case 0x15f2ccu: goto label_15f2cc;
        case 0x15f2d0u: goto label_15f2d0;
        case 0x15f2d4u: goto label_15f2d4;
        case 0x15f2d8u: goto label_15f2d8;
        case 0x15f2dcu: goto label_15f2dc;
        case 0x15f2e0u: goto label_15f2e0;
        case 0x15f2e4u: goto label_15f2e4;
        case 0x15f2e8u: goto label_15f2e8;
        case 0x15f2ecu: goto label_15f2ec;
        case 0x15f2f0u: goto label_15f2f0;
        case 0x15f2f4u: goto label_15f2f4;
        case 0x15f2f8u: goto label_15f2f8;
        case 0x15f2fcu: goto label_15f2fc;
        case 0x15f300u: goto label_15f300;
        case 0x15f304u: goto label_15f304;
        default: break;
    }

    ctx->pc = 0x15f248u;

label_15f248:
    // 0x15f248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15f248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15f24c:
    // 0x15f24c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15f250:
    // 0x15f250: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15f250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_15f254:
    // 0x15f254: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15f254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_15f258:
    // 0x15f258: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15f258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15f25c:
    // 0x15f25c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15f25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f260:
    // 0x15f260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15f264:
    // 0x15f264: 0x8c65ee94  lw          $a1, -0x116C($v1)
    ctx->pc = 0x15f264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962836)));
label_15f268:
    // 0x15f268: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15f26c:
    // 0x15f26c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15f270:
    // 0x15f270: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15f274:
    // 0x15f274: 0x60f809  jalr        $v1
label_15f278:
    if (ctx->pc == 0x15F278u) {
        ctx->pc = 0x15F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F274u;
        // 0x15f278: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F27Cu;
        goto label_15f27c;
    }
    ctx->pc = 0x15F274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F27Cu);
        ctx->pc = 0x15F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F274u;
        // 0x15f278: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F274u, 0x15F27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F27Cu;
label_15f27c:
    // 0x15f27c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f280:
    // 0x15f280: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x15f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_15f284:
    // 0x15f284: 0x8c700834  lw          $s0, 0x834($v1)
    ctx->pc = 0x15f284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2100)));
label_15f288:
    // 0x15f288: 0x1000000b  b           . + 4 + (0xB << 2)
label_15f28c:
    if (ctx->pc == 0x15F28Cu) {
        ctx->pc = 0x15F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F288u;
        // 0x15f28c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F290u;
        goto label_15f290;
    }
    ctx->pc = 0x15F288u;
    {
        const bool branch_taken_0x15f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F288u;
        // 0x15f28c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f288) {
            ctx->pc = 0x15F2B8u;
            goto label_15f2b8;
        }
    }
    ctx->pc = 0x15F290u;
label_15f290:
    // 0x15f290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f294:
    // 0x15f294: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x15f294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_15f298:
    // 0x15f298: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x15f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_15f29c:
    // 0x15f29c: 0x40f809  jalr        $v0
label_15f2a0:
    if (ctx->pc == 0x15F2A0u) {
        ctx->pc = 0x15F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F29Cu;
        // 0x15f2a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2A4u;
        goto label_15f2a4;
    }
    ctx->pc = 0x15F29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F2A4u);
        ctx->pc = 0x15F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F29Cu;
        // 0x15f2a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F29Cu, 0x15F2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F2A4u;
label_15f2a4:
    // 0x15f2a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15f2a8:
    // 0x15f2a8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15f2a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15f2ac:
    // 0x15f2ac: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x15f2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15f2b0:
    // 0x15f2b0: 0xa0f809  jalr        $a1
label_15f2b4:
    if (ctx->pc == 0x15F2B4u) {
        ctx->pc = 0x15F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2B0u;
        // 0x15f2b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2B8u;
        goto label_15f2b8;
    }
    ctx->pc = 0x15F2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15F2B8u);
        ctx->pc = 0x15F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2B0u;
        // 0x15f2b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F2B0u, 0x15F2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F2B8u;
label_15f2b8:
    // 0x15f2b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15f2bc:
    // 0x15f2bc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15f2bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15f2c0:
    // 0x15f2c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15f2c4:
    // 0x15f2c4: 0x40f809  jalr        $v0
label_15f2c8:
    if (ctx->pc == 0x15F2C8u) {
        ctx->pc = 0x15F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2C4u;
        // 0x15f2c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2CCu;
        goto label_15f2cc;
    }
    ctx->pc = 0x15F2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F2CCu);
        ctx->pc = 0x15F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2C4u;
        // 0x15f2c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F2C4u, 0x15F2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F2CCu;
label_15f2cc:
    // 0x15f2cc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_15f2d0:
    if (ctx->pc == 0x15F2D0u) {
        ctx->pc = 0x15F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2CCu;
        // 0x15f2d0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2D4u;
        goto label_15f2d4;
    }
    ctx->pc = 0x15F2CCu;
    {
        const bool branch_taken_0x15f2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f2cc) {
            ctx->pc = 0x15F2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F2CCu;
            // 0x15f2d0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f290;
        }
    }
    ctx->pc = 0x15F2D4u;
label_15f2d4:
    // 0x15f2d4: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x15f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_15f2d8:
    // 0x15f2d8: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x15f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_15f2dc:
    // 0x15f2dc: 0xc043e94  jal         func_10FA50
label_15f2e0:
    if (ctx->pc == 0x15F2E0u) {
        ctx->pc = 0x15F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2DCu;
        // 0x15f2e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2E4u;
        goto label_15f2e4;
    }
    ctx->pc = 0x15F2DCu;
    SET_GPR_U32(ctx, 31, 0x15F2E4u);
    ctx->pc = 0x15F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F2DCu;
    // 0x15f2e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15F2DCu, 0x15F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F2E4u;
label_15f2e4:
    // 0x15f2e4: 0xc043eda  jal         func_10FB68
label_15f2e8:
    if (ctx->pc == 0x15F2E8u) {
        ctx->pc = 0x15F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2E4u;
        // 0x15f2e8: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2ECu;
        goto label_15f2ec;
    }
    ctx->pc = 0x15F2E4u;
    SET_GPR_U32(ctx, 31, 0x15F2ECu);
    ctx->pc = 0x15F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F2E4u;
    // 0x15f2e8: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB68u, 0x15F2E4u, 0x15F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F2ECu;
label_15f2ec:
    // 0x15f2ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15f2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f2f0:
    // 0x15f2f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15f2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f2f4:
    // 0x15f2f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15f2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15f2f8:
    // 0x15f2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f2fc:
    // 0x15f2fc: 0x3e00008  jr          $ra
label_15f300:
    if (ctx->pc == 0x15F300u) {
        ctx->pc = 0x15F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2FCu;
        // 0x15f300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F304u;
        goto label_15f304;
    }
    ctx->pc = 0x15F2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2FCu;
        // 0x15f300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F304u;
label_15f304:
    // 0x15f304: 0x0  nop
    ctx->pc = 0x15f304u;
    // NOP
    ctx->pc = 0x15f308u;
}
