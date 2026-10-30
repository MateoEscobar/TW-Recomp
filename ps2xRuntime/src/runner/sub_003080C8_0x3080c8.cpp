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

// Function: sub_003080C8
// Address: 0x3080c8 - 0x308150
void sub_003080C8_0x3080c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003080C8_0x3080c8");
#endif

    switch (ctx->pc) {
        case 0x3080fcu: goto label_3080fc;
        case 0x308138u: goto label_308138;
        default: break;
    }

    ctx->pc = 0x3080c8u;

    // 0x3080c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3080c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3080cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3080ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3080d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3080d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3080d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3080d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3080d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3080d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3080dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3080dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3080e0: 0x906200df  lbu         $v0, 0xDF($v1)
    ctx->pc = 0x3080e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 223)));
    // 0x3080e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3080E4u;
    {
        const bool branch_taken_0x3080e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080E4u;
        // 0x3080e8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080e4) {
            ctx->pc = 0x308104u;
            goto label_308104;
        }
    }
    ctx->pc = 0x3080ECu;
    // 0x3080ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3080ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3080f0: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x3080f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3080f4: 0xc05916e  jal         func_1645B8
    ctx->pc = 0x3080F4u;
    SET_GPR_U32(ctx, 31, 0x3080FCu);
    ctx->pc = 0x3080F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3080F4u;
    // 0x3080f8: 0x8c44caa8  lw          $a0, -0x3558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1645B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1645B8u, 0x3080F4u, 0x3080FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3080FCu;
label_3080fc:
    // 0x3080fc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3080FCu;
    {
        const bool branch_taken_0x3080fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3080fc) {
            ctx->pc = 0x308100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3080FCu;
            // 0x308100: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30812Cu;
            goto label_30812c;
        }
    }
    ctx->pc = 0x308104u;
label_308104:
    // 0x308104: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x308104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308108: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x308108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30810c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x30810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x308110: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x308110u;
    {
        const bool branch_taken_0x308110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x308110) {
            ctx->pc = 0x308114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308110u;
            // 0x308114: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30813Cu;
            goto label_30813c;
        }
    }
    ctx->pc = 0x308118u;
    // 0x308118: 0x908200d9  lbu         $v0, 0xD9($a0)
    ctx->pc = 0x308118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 217)));
    // 0x30811c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30811cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308120: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x308120u;
    {
        const bool branch_taken_0x308120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x308120) {
            ctx->pc = 0x308124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308120u;
            // 0x308124: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30813Cu;
            goto label_30813c;
        }
    }
    ctx->pc = 0x308128u;
    // 0x308128: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x308128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30812c:
    // 0x30812c: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x30812cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x308130: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x308130u;
    SET_GPR_U32(ctx, 31, 0x308138u);
    ctx->pc = 0x308134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308130u;
    // 0x308134: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x308130u, 0x308138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308138u;
label_308138:
    // 0x308138: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x308138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30813c:
    // 0x30813c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30813cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308144: 0x3e00008  jr          $ra
    ctx->pc = 0x308144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308144u;
        // 0x308148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30814Cu;
    // 0x30814c: 0x0  nop
    ctx->pc = 0x30814cu;
    // NOP
    ctx->pc = 0x308150u;
}
