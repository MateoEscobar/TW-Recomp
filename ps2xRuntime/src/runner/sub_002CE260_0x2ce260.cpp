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

// Function: sub_002CE260
// Address: 0x2ce260 - 0x2ce2f8
void sub_002CE260_0x2ce260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE260_0x2ce260");
#endif

    switch (ctx->pc) {
        case 0x2ce260u: goto label_2ce260;
        case 0x2ce264u: goto label_2ce264;
        case 0x2ce268u: goto label_2ce268;
        case 0x2ce26cu: goto label_2ce26c;
        case 0x2ce270u: goto label_2ce270;
        case 0x2ce274u: goto label_2ce274;
        case 0x2ce278u: goto label_2ce278;
        case 0x2ce27cu: goto label_2ce27c;
        case 0x2ce280u: goto label_2ce280;
        case 0x2ce284u: goto label_2ce284;
        case 0x2ce288u: goto label_2ce288;
        case 0x2ce28cu: goto label_2ce28c;
        case 0x2ce290u: goto label_2ce290;
        case 0x2ce294u: goto label_2ce294;
        case 0x2ce298u: goto label_2ce298;
        case 0x2ce29cu: goto label_2ce29c;
        case 0x2ce2a0u: goto label_2ce2a0;
        case 0x2ce2a4u: goto label_2ce2a4;
        case 0x2ce2a8u: goto label_2ce2a8;
        case 0x2ce2acu: goto label_2ce2ac;
        case 0x2ce2b0u: goto label_2ce2b0;
        case 0x2ce2b4u: goto label_2ce2b4;
        case 0x2ce2b8u: goto label_2ce2b8;
        case 0x2ce2bcu: goto label_2ce2bc;
        case 0x2ce2c0u: goto label_2ce2c0;
        case 0x2ce2c4u: goto label_2ce2c4;
        case 0x2ce2c8u: goto label_2ce2c8;
        case 0x2ce2ccu: goto label_2ce2cc;
        case 0x2ce2d0u: goto label_2ce2d0;
        case 0x2ce2d4u: goto label_2ce2d4;
        case 0x2ce2d8u: goto label_2ce2d8;
        case 0x2ce2dcu: goto label_2ce2dc;
        case 0x2ce2e0u: goto label_2ce2e0;
        case 0x2ce2e4u: goto label_2ce2e4;
        case 0x2ce2e8u: goto label_2ce2e8;
        case 0x2ce2ecu: goto label_2ce2ec;
        case 0x2ce2f0u: goto label_2ce2f0;
        case 0x2ce2f4u: goto label_2ce2f4;
        default: break;
    }

    ctx->pc = 0x2ce260u;

label_2ce260:
    // 0x2ce260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ce264:
    // 0x2ce264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce268:
    // 0x2ce268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ce26c:
    // 0x2ce26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce270:
    // 0x2ce270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ce270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ce274:
    // 0x2ce274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ce274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce278:
    // 0x2ce278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ce27c:
    // 0x2ce27c: 0xc0a33f8  jal         func_28CFE0
label_2ce280:
    if (ctx->pc == 0x2CE280u) {
        ctx->pc = 0x2CE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE27Cu;
        // 0x2ce280: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE284u;
        goto label_2ce284;
    }
    ctx->pc = 0x2CE27Cu;
    SET_GPR_U32(ctx, 31, 0x2CE284u);
    ctx->pc = 0x2CE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE27Cu;
    // 0x2ce280: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2CE27Cu, 0x2CE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE284u;
label_2ce284:
    // 0x2ce284: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ce284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce288:
    // 0x2ce288: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2ce288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ce28c:
    // 0x2ce28c: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2ce28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2ce290:
    // 0x2ce290: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_2ce294:
    if (ctx->pc == 0x2CE294u) {
        ctx->pc = 0x2CE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE290u;
        // 0x2ce294: 0x96250020  lhu         $a1, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE298u;
        goto label_2ce298;
    }
    ctx->pc = 0x2CE290u;
    {
        const bool branch_taken_0x2ce290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce290) {
            ctx->pc = 0x2CE294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE290u;
            // 0x2ce294: 0x96250020  lhu         $a1, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE2BCu;
            goto label_2ce2bc;
        }
    }
    ctx->pc = 0x2CE298u;
label_2ce298:
    // 0x2ce298: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2ce298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2ce29c:
    // 0x2ce29c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2ce29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2ce2a0:
    // 0x2ce2a0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2ce2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2ce2a4:
    // 0x2ce2a4: 0x40f809  jalr        $v0
label_2ce2a8:
    if (ctx->pc == 0x2CE2A8u) {
        ctx->pc = 0x2CE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2A4u;
        // 0x2ce2a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE2ACu;
        goto label_2ce2ac;
    }
    ctx->pc = 0x2CE2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CE2ACu);
        ctx->pc = 0x2CE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2A4u;
        // 0x2ce2a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE2A4u, 0x2CE2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE2ACu;
label_2ce2ac:
    // 0x2ce2ac: 0x3842001d  xori        $v0, $v0, 0x1D
    ctx->pc = 0x2ce2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)29);
label_2ce2b0:
    // 0x2ce2b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ce2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ce2b4:
    // 0x2ce2b4: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x2ce2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_2ce2b8:
    // 0x2ce2b8: 0x96250020  lhu         $a1, 0x20($s1)
    ctx->pc = 0x2ce2b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_2ce2bc:
    // 0x2ce2bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ce2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ce2c0:
    // 0x2ce2c0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2ce2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ce2c4:
    // 0x2ce2c4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ce2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2ce2c8:
    // 0x2ce2c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ce2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ce2cc:
    // 0x2ce2cc: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x2ce2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
label_2ce2d0:
    // 0x2ce2d0: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2ce2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2ce2d4:
    // 0x2ce2d4: 0xc0cd4fc  jal         func_3353F0
label_2ce2d8:
    if (ctx->pc == 0x2CE2D8u) {
        ctx->pc = 0x2CE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2D4u;
        // 0x2ce2d8: 0x52842  srl         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE2DCu;
        goto label_2ce2dc;
    }
    ctx->pc = 0x2CE2D4u;
    SET_GPR_U32(ctx, 31, 0x2CE2DCu);
    ctx->pc = 0x2CE2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE2D4u;
    // 0x2ce2d8: 0x52842  srl         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2CE2D4u, 0x2CE2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2DCu;
label_2ce2dc:
    // 0x2ce2dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ce2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ce2e0:
    // 0x2ce2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce2e4:
    // 0x2ce2e4: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x2ce2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_2ce2e8:
    // 0x2ce2e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ce2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce2ec:
    // 0x2ce2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce2f0:
    // 0x2ce2f0: 0x3e00008  jr          $ra
label_2ce2f4:
    if (ctx->pc == 0x2CE2F4u) {
        ctx->pc = 0x2CE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2F0u;
        // 0x2ce2f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE2F8u;
        goto label_fallthrough_0x2ce2f0;
    }
    ctx->pc = 0x2CE2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2F0u;
        // 0x2ce2f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ce2f0:
    ctx->pc = 0x2CE2F8u;
}
