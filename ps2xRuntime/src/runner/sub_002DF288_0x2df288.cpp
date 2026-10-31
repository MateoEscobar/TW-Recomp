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

// Function: sub_002DF288
// Address: 0x2df288 - 0x2df320
void sub_002DF288_0x2df288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF288_0x2df288");
#endif

    switch (ctx->pc) {
        case 0x2df288u: goto label_2df288;
        case 0x2df28cu: goto label_2df28c;
        case 0x2df290u: goto label_2df290;
        case 0x2df294u: goto label_2df294;
        case 0x2df298u: goto label_2df298;
        case 0x2df29cu: goto label_2df29c;
        case 0x2df2a0u: goto label_2df2a0;
        case 0x2df2a4u: goto label_2df2a4;
        case 0x2df2a8u: goto label_2df2a8;
        case 0x2df2acu: goto label_2df2ac;
        case 0x2df2b0u: goto label_2df2b0;
        case 0x2df2b4u: goto label_2df2b4;
        case 0x2df2b8u: goto label_2df2b8;
        case 0x2df2bcu: goto label_2df2bc;
        case 0x2df2c0u: goto label_2df2c0;
        case 0x2df2c4u: goto label_2df2c4;
        case 0x2df2c8u: goto label_2df2c8;
        case 0x2df2ccu: goto label_2df2cc;
        case 0x2df2d0u: goto label_2df2d0;
        case 0x2df2d4u: goto label_2df2d4;
        case 0x2df2d8u: goto label_2df2d8;
        case 0x2df2dcu: goto label_2df2dc;
        case 0x2df2e0u: goto label_2df2e0;
        case 0x2df2e4u: goto label_2df2e4;
        case 0x2df2e8u: goto label_2df2e8;
        case 0x2df2ecu: goto label_2df2ec;
        case 0x2df2f0u: goto label_2df2f0;
        case 0x2df2f4u: goto label_2df2f4;
        case 0x2df2f8u: goto label_2df2f8;
        case 0x2df2fcu: goto label_2df2fc;
        case 0x2df300u: goto label_2df300;
        case 0x2df304u: goto label_2df304;
        case 0x2df308u: goto label_2df308;
        case 0x2df30cu: goto label_2df30c;
        case 0x2df310u: goto label_2df310;
        case 0x2df314u: goto label_2df314;
        case 0x2df318u: goto label_2df318;
        case 0x2df31cu: goto label_2df31c;
        default: break;
    }

    ctx->pc = 0x2df288u;

label_2df288:
    // 0x2df288: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2df288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2df28c:
    // 0x2df28c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2df28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2df290:
    // 0x2df290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2df294:
    // 0x2df294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df298:
    // 0x2df298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2df29c:
    // 0x2df29c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2df2a0:
    // 0x2df2a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2df2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2df2a4:
    // 0x2df2a4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2df2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df2a8:
    // 0x2df2a8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2df2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2df2ac:
    // 0x2df2ac: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2df2acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2df2b0:
    // 0x2df2b0: 0xc0e409a  jal         func_390268
label_2df2b4:
    if (ctx->pc == 0x2DF2B4u) {
        ctx->pc = 0x2DF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2B0u;
        // 0x2df2b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2B8u;
        goto label_2df2b8;
    }
    ctx->pc = 0x2DF2B0u;
    SET_GPR_U32(ctx, 31, 0x2DF2B8u);
    ctx->pc = 0x2DF2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2B0u;
    // 0x2df2b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DF2B0u, 0x2DF2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2B8u;
label_2df2b8:
    // 0x2df2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df2bc:
    // 0x2df2bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df2c0:
    // 0x2df2c0: 0xc0a352c  jal         func_28D4B0
label_2df2c4:
    if (ctx->pc == 0x2DF2C4u) {
        ctx->pc = 0x2DF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2C0u;
        // 0x2df2c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2C8u;
        goto label_2df2c8;
    }
    ctx->pc = 0x2DF2C0u;
    SET_GPR_U32(ctx, 31, 0x2DF2C8u);
    ctx->pc = 0x2DF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2C0u;
    // 0x2df2c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2DF2C0u, 0x2DF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2C8u;
label_2df2c8:
    // 0x2df2c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2df2cc:
    if (ctx->pc == 0x2DF2CCu) {
        ctx->pc = 0x2DF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2C8u;
        // 0x2df2cc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2D0u;
        goto label_2df2d0;
    }
    ctx->pc = 0x2DF2C8u;
    {
        const bool branch_taken_0x2df2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df2c8) {
            ctx->pc = 0x2DF2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF2C8u;
            // 0x2df2cc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF2F4u;
            goto label_2df2f4;
        }
    }
    ctx->pc = 0x2DF2D0u;
label_2df2d0:
    // 0x2df2d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2df2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df2d4:
    // 0x2df2d4: 0xc08750a  jal         func_21D428
label_2df2d8:
    if (ctx->pc == 0x2DF2D8u) {
        ctx->pc = 0x2DF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2D4u;
        // 0x2df2d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2DCu;
        goto label_2df2dc;
    }
    ctx->pc = 0x2DF2D4u;
    SET_GPR_U32(ctx, 31, 0x2DF2DCu);
    ctx->pc = 0x2DF2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2D4u;
    // 0x2df2d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2DF2D4u, 0x2DF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2DCu;
label_2df2dc:
    // 0x2df2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2df2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df2e0:
    // 0x2df2e0: 0xc0a57ca  jal         func_295F28
label_2df2e4:
    if (ctx->pc == 0x2DF2E4u) {
        ctx->pc = 0x2DF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2E0u;
        // 0x2df2e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2E8u;
        goto label_2df2e8;
    }
    ctx->pc = 0x2DF2E0u;
    SET_GPR_U32(ctx, 31, 0x2DF2E8u);
    ctx->pc = 0x2DF2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2E0u;
    // 0x2df2e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2DF2E0u, 0x2DF2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2E8u;
label_2df2e8:
    // 0x2df2e8: 0xc08bfa0  jal         func_22FE80
label_2df2ec:
    if (ctx->pc == 0x2DF2ECu) {
        ctx->pc = 0x2DF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2E8u;
        // 0x2df2ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2F0u;
        goto label_2df2f0;
    }
    ctx->pc = 0x2DF2E8u;
    SET_GPR_U32(ctx, 31, 0x2DF2F0u);
    ctx->pc = 0x2DF2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2E8u;
    // 0x2df2ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2DF2E8u, 0x2DF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2F0u;
label_2df2f0:
    // 0x2df2f0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2df2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2df2f4:
    // 0x2df2f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2df2f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2df2f8:
    // 0x2df2f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2df2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2df2fc:
    // 0x2df2fc: 0x60f809  jalr        $v1
label_2df300:
    if (ctx->pc == 0x2DF300u) {
        ctx->pc = 0x2DF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2FCu;
        // 0x2df300: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF304u;
        goto label_2df304;
    }
    ctx->pc = 0x2DF2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DF304u);
        ctx->pc = 0x2DF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2FCu;
        // 0x2df300: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF2FCu, 0x2DF304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF304u;
label_2df304:
    // 0x2df304: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2df304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2df308:
    // 0x2df308: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2df308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2df30c:
    // 0x2df30c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2df310:
    // 0x2df310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2df314:
    // 0x2df314: 0x3e00008  jr          $ra
label_2df318:
    if (ctx->pc == 0x2DF318u) {
        ctx->pc = 0x2DF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF314u;
        // 0x2df318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF31Cu;
        goto label_2df31c;
    }
    ctx->pc = 0x2DF314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF314u;
        // 0x2df318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF31Cu;
label_2df31c:
    // 0x2df31c: 0x0  nop
    ctx->pc = 0x2df31cu;
    // NOP
    ctx->pc = 0x2df320u;
}
