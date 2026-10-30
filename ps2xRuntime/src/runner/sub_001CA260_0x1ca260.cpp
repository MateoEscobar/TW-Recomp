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

// Function: sub_001CA260
// Address: 0x1ca260 - 0x1ca2d0
void sub_001CA260_0x1ca260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA260_0x1ca260");
#endif

    switch (ctx->pc) {
        case 0x1ca260u: goto label_1ca260;
        case 0x1ca264u: goto label_1ca264;
        case 0x1ca268u: goto label_1ca268;
        case 0x1ca26cu: goto label_1ca26c;
        case 0x1ca270u: goto label_1ca270;
        case 0x1ca274u: goto label_1ca274;
        case 0x1ca278u: goto label_1ca278;
        case 0x1ca27cu: goto label_1ca27c;
        case 0x1ca280u: goto label_1ca280;
        case 0x1ca284u: goto label_1ca284;
        case 0x1ca288u: goto label_1ca288;
        case 0x1ca28cu: goto label_1ca28c;
        case 0x1ca290u: goto label_1ca290;
        case 0x1ca294u: goto label_1ca294;
        case 0x1ca298u: goto label_1ca298;
        case 0x1ca29cu: goto label_1ca29c;
        case 0x1ca2a0u: goto label_1ca2a0;
        case 0x1ca2a4u: goto label_1ca2a4;
        case 0x1ca2a8u: goto label_1ca2a8;
        case 0x1ca2acu: goto label_1ca2ac;
        case 0x1ca2b0u: goto label_1ca2b0;
        case 0x1ca2b4u: goto label_1ca2b4;
        case 0x1ca2b8u: goto label_1ca2b8;
        case 0x1ca2bcu: goto label_1ca2bc;
        case 0x1ca2c0u: goto label_1ca2c0;
        case 0x1ca2c4u: goto label_1ca2c4;
        case 0x1ca2c8u: goto label_1ca2c8;
        case 0x1ca2ccu: goto label_1ca2cc;
        default: break;
    }

    ctx->pc = 0x1ca260u;

label_1ca260:
    // 0x1ca260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ca264:
    // 0x1ca264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ca264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ca268:
    // 0x1ca268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ca26c:
    // 0x1ca26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca270:
    // 0x1ca270: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca274:
    // 0x1ca274: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ca274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ca278:
    // 0x1ca278: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ca278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ca27c:
    // 0x1ca27c: 0x40f809  jalr        $v0
label_1ca280:
    if (ctx->pc == 0x1CA280u) {
        ctx->pc = 0x1CA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA27Cu;
        // 0x1ca280: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA284u;
        goto label_1ca284;
    }
    ctx->pc = 0x1CA27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA284u);
        ctx->pc = 0x1CA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA27Cu;
        // 0x1ca280: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA27Cu, 0x1CA284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA284u;
label_1ca284:
    // 0x1ca284: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1ca288:
    if (ctx->pc == 0x1CA288u) {
        ctx->pc = 0x1CA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA284u;
        // 0x1ca288: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA28Cu;
        goto label_1ca28c;
    }
    ctx->pc = 0x1CA284u;
    {
        const bool branch_taken_0x1ca284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca284) {
            ctx->pc = 0x1CA288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA284u;
            // 0x1ca288: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA2C4u;
            goto label_1ca2c4;
        }
    }
    ctx->pc = 0x1CA28Cu;
label_1ca28c:
    // 0x1ca28c: 0xc068998  jal         func_1A2660
label_1ca290:
    if (ctx->pc == 0x1CA290u) {
        ctx->pc = 0x1CA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA28Cu;
        // 0x1ca290: 0x260409f0  addiu       $a0, $s0, 0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA294u;
        goto label_1ca294;
    }
    ctx->pc = 0x1CA28Cu;
    SET_GPR_U32(ctx, 31, 0x1CA294u);
    ctx->pc = 0x1CA290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA28Cu;
    // 0x1ca290: 0x260409f0  addiu       $a0, $s0, 0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1CA28Cu, 0x1CA294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA294u;
label_1ca294:
    // 0x1ca294: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1ca294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1ca298:
    // 0x1ca298: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1ca29c:
    if (ctx->pc == 0x1CA29Cu) {
        ctx->pc = 0x1CA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA298u;
        // 0x1ca29c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2A0u;
        goto label_1ca2a0;
    }
    ctx->pc = 0x1CA298u;
    {
        const bool branch_taken_0x1ca298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca298) {
            ctx->pc = 0x1CA29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA298u;
            // 0x1ca29c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA2C4u;
            goto label_1ca2c4;
        }
    }
    ctx->pc = 0x1CA2A0u;
label_1ca2a0:
    // 0x1ca2a0: 0xc068998  jal         func_1A2660
label_1ca2a4:
    if (ctx->pc == 0x1CA2A4u) {
        ctx->pc = 0x1CA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2A0u;
        // 0x1ca2a4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2A8u;
        goto label_1ca2a8;
    }
    ctx->pc = 0x1CA2A0u;
    SET_GPR_U32(ctx, 31, 0x1CA2A8u);
    ctx->pc = 0x1CA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2A0u;
    // 0x1ca2a4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1CA2A0u, 0x1CA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2A8u;
label_1ca2a8:
    // 0x1ca2a8: 0xc068998  jal         func_1A2660
label_1ca2ac:
    if (ctx->pc == 0x1CA2ACu) {
        ctx->pc = 0x1CA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2A8u;
        // 0x1ca2ac: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2B0u;
        goto label_1ca2b0;
    }
    ctx->pc = 0x1CA2A8u;
    SET_GPR_U32(ctx, 31, 0x1CA2B0u);
    ctx->pc = 0x1CA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2A8u;
    // 0x1ca2ac: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1CA2A8u, 0x1CA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2B0u;
label_1ca2b0:
    // 0x1ca2b0: 0xc068998  jal         func_1A2660
label_1ca2b4:
    if (ctx->pc == 0x1CA2B4u) {
        ctx->pc = 0x1CA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2B0u;
        // 0x1ca2b4: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2B8u;
        goto label_1ca2b8;
    }
    ctx->pc = 0x1CA2B0u;
    SET_GPR_U32(ctx, 31, 0x1CA2B8u);
    ctx->pc = 0x1CA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2B0u;
    // 0x1ca2b4: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1CA2B0u, 0x1CA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2B8u;
label_1ca2b8:
    // 0x1ca2b8: 0xc068998  jal         func_1A2660
label_1ca2bc:
    if (ctx->pc == 0x1CA2BCu) {
        ctx->pc = 0x1CA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2B8u;
        // 0x1ca2bc: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2C0u;
        goto label_1ca2c0;
    }
    ctx->pc = 0x1CA2B8u;
    SET_GPR_U32(ctx, 31, 0x1CA2C0u);
    ctx->pc = 0x1CA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2B8u;
    // 0x1ca2bc: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1CA2B8u, 0x1CA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2C0u;
label_1ca2c0:
    // 0x1ca2c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca2c4:
    // 0x1ca2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca2c8:
    // 0x1ca2c8: 0x3e00008  jr          $ra
label_1ca2cc:
    if (ctx->pc == 0x1CA2CCu) {
        ctx->pc = 0x1CA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2C8u;
        // 0x1ca2cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2D0u;
        goto label_fallthrough_0x1ca2c8;
    }
    ctx->pc = 0x1CA2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2C8u;
        // 0x1ca2cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ca2c8:
    ctx->pc = 0x1CA2D0u;
}
