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

// Function: sub_002FA510
// Address: 0x2fa510 - 0x2fa5a0
void sub_002FA510_0x2fa510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA510_0x2fa510");
#endif

    switch (ctx->pc) {
        case 0x2fa558u: goto label_2fa558;
        case 0x2fa584u: goto label_2fa584;
        default: break;
    }

    ctx->pc = 0x2fa510u;

    // 0x2fa510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa520: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2fa520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fa524: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FA524u;
    {
        const bool branch_taken_0x2fa524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA524u;
        // 0x2fa528: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa524) {
            ctx->pc = 0x2FA578u;
            goto label_2fa578;
        }
    }
    ctx->pc = 0x2FA52Cu;
    // 0x2fa52c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fa52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa530: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2fa530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fa534: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fa534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa538: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fa538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa53c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2fa53cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa540: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2fa540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fa544: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2fa544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2fa548: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2fa548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2fa54c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2fa54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2fa550: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2FA550u;
    SET_GPR_U32(ctx, 31, 0x2FA558u);
    ctx->pc = 0x2FA554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA550u;
    // 0x2fa554: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2FA550u, 0x2FA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA558u;
label_2fa558:
    // 0x2fa558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA558u;
    {
        const bool branch_taken_0x2fa558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA558u;
        // 0x2fa55c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa558) {
            ctx->pc = 0x2FA568u;
            goto label_2fa568;
        }
    }
    ctx->pc = 0x2FA560u;
    // 0x2fa560: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FA560u;
    {
        const bool branch_taken_0x2fa560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA560u;
        // 0x2fa564: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa560) {
            ctx->pc = 0x2FA590u;
            goto label_2fa590;
        }
    }
    ctx->pc = 0x2FA568u;
label_2fa568:
    // 0x2fa568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa56c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa570: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA570u;
    {
        const bool branch_taken_0x2fa570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA570u;
        // 0x2fa574: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa570) {
            ctx->pc = 0x2FA590u;
            goto label_2fa590;
        }
    }
    ctx->pc = 0x2FA578u;
label_2fa578:
    // 0x2fa578: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2fa578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fa57c: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA57Cu;
    SET_GPR_U32(ctx, 31, 0x2FA584u);
    ctx->pc = 0x2FA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA57Cu;
    // 0x2fa580: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA57Cu, 0x2FA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA584u;
label_2fa584:
    // 0x2fa584: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fa584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fa588: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa58c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2fa58cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2fa590:
    // 0x2fa590: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa598: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA598u;
        // 0x2fa59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA5A0u;
}
