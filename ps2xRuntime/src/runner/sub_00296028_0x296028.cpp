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

// Function: sub_00296028
// Address: 0x296028 - 0x2960c8
void sub_00296028_0x296028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296028_0x296028");
#endif

    switch (ctx->pc) {
        case 0x296028u: goto label_296028;
        case 0x29602cu: goto label_29602c;
        case 0x296030u: goto label_296030;
        case 0x296034u: goto label_296034;
        case 0x296038u: goto label_296038;
        case 0x29603cu: goto label_29603c;
        case 0x296040u: goto label_296040;
        case 0x296044u: goto label_296044;
        case 0x296048u: goto label_296048;
        case 0x29604cu: goto label_29604c;
        case 0x296050u: goto label_296050;
        case 0x296054u: goto label_296054;
        case 0x296058u: goto label_296058;
        case 0x29605cu: goto label_29605c;
        case 0x296060u: goto label_296060;
        case 0x296064u: goto label_296064;
        case 0x296068u: goto label_296068;
        case 0x29606cu: goto label_29606c;
        case 0x296070u: goto label_296070;
        case 0x296074u: goto label_296074;
        case 0x296078u: goto label_296078;
        case 0x29607cu: goto label_29607c;
        case 0x296080u: goto label_296080;
        case 0x296084u: goto label_296084;
        case 0x296088u: goto label_296088;
        case 0x29608cu: goto label_29608c;
        case 0x296090u: goto label_296090;
        case 0x296094u: goto label_296094;
        case 0x296098u: goto label_296098;
        case 0x29609cu: goto label_29609c;
        case 0x2960a0u: goto label_2960a0;
        case 0x2960a4u: goto label_2960a4;
        case 0x2960a8u: goto label_2960a8;
        case 0x2960acu: goto label_2960ac;
        case 0x2960b0u: goto label_2960b0;
        case 0x2960b4u: goto label_2960b4;
        case 0x2960b8u: goto label_2960b8;
        case 0x2960bcu: goto label_2960bc;
        case 0x2960c0u: goto label_2960c0;
        case 0x2960c4u: goto label_2960c4;
        default: break;
    }

    ctx->pc = 0x296028u;

label_296028:
    // 0x296028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29602c:
    // 0x29602c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_296030:
    // 0x296030: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x296030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_296034:
    // 0x296034: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x296034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296038:
    // 0x296038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x296038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29603c:
    // 0x29603c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29603cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_296040:
    // 0x296040: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x296040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_296044:
    // 0x296044: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x296044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296048:
    // 0x296048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29604c:
    // 0x29604c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x29604cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_296050:
    // 0x296050: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x296050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_296054:
    // 0x296054: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x296054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_296058:
    // 0x296058: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x296058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29605c:
    // 0x29605c: 0x40f809  jalr        $v0
label_296060:
    if (ctx->pc == 0x296060u) {
        ctx->pc = 0x296060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29605Cu;
        // 0x296060: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296064u;
        goto label_296064;
    }
    ctx->pc = 0x29605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296064u);
        ctx->pc = 0x296060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29605Cu;
        // 0x296060: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29605Cu, 0x296064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296064u;
label_296064:
    // 0x296064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296068:
    // 0x296068: 0x264301b0  addiu       $v1, $s2, 0x1B0
    ctx->pc = 0x296068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_29606c:
    // 0x29606c: 0x0  nop
    ctx->pc = 0x29606cu;
    // NOP
label_296070:
    // 0x296070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x296070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_296074:
    // 0x296074: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
label_296078:
    if (ctx->pc == 0x296078u) {
        ctx->pc = 0x296078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296074u;
        // 0x296078: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29607Cu;
        goto label_29607c;
    }
    ctx->pc = 0x296074u;
    {
        const bool branch_taken_0x296074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x296074) {
            ctx->pc = 0x296078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296074u;
            // 0x296078: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29609Cu;
            goto label_29609c;
        }
    }
    ctx->pc = 0x29607Cu;
label_29607c:
    // 0x29607c: 0xc087502  jal         func_21D408
label_296080:
    if (ctx->pc == 0x296080u) {
        ctx->pc = 0x296080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29607Cu;
        // 0x296080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296084u;
        goto label_296084;
    }
    ctx->pc = 0x29607Cu;
    SET_GPR_U32(ctx, 31, 0x296084u);
    ctx->pc = 0x296080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29607Cu;
    // 0x296080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29607Cu, 0x296084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296084u;
label_296084:
    // 0x296084: 0xa0530212  sb          $s3, 0x212($v0)
    ctx->pc = 0x296084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 530), (uint8_t)GPR_U32(ctx, 19));
label_296088:
    // 0x296088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29608c:
    // 0x29608c: 0xc0a5326  jal         func_294C98
label_296090:
    if (ctx->pc == 0x296090u) {
        ctx->pc = 0x296090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29608Cu;
        // 0x296090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296094u;
        goto label_296094;
    }
    ctx->pc = 0x29608Cu;
    SET_GPR_U32(ctx, 31, 0x296094u);
    ctx->pc = 0x296090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29608Cu;
    // 0x296090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C98u, 0x29608Cu, 0x296094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296094u;
label_296094:
    // 0x296094: 0x10000005  b           . + 4 + (0x5 << 2)
label_296098:
    if (ctx->pc == 0x296098u) {
        ctx->pc = 0x296098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296094u;
        // 0x296098: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29609Cu;
        goto label_29609c;
    }
    ctx->pc = 0x296094u;
    {
        const bool branch_taken_0x296094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296094u;
        // 0x296098: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296094) {
            ctx->pc = 0x2960ACu;
            goto label_2960ac;
        }
    }
    ctx->pc = 0x29609Cu;
label_29609c:
    // 0x29609c: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x29609cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2960a0:
    // 0x2960a0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2960a4:
    if (ctx->pc == 0x2960A4u) {
        ctx->pc = 0x2960A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960A0u;
        // 0x2960a4: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2960A8u;
        goto label_2960a8;
    }
    ctx->pc = 0x2960A0u;
    {
        const bool branch_taken_0x2960a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2960A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960A0u;
        // 0x2960a4: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960a0) {
            ctx->pc = 0x296070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296070;
        }
    }
    ctx->pc = 0x2960A8u;
label_2960a8:
    // 0x2960a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2960a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2960ac:
    // 0x2960ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2960acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2960b0:
    // 0x2960b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2960b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2960b4:
    // 0x2960b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2960b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2960b8:
    // 0x2960b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2960b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2960bc:
    // 0x2960bc: 0x3e00008  jr          $ra
label_2960c0:
    if (ctx->pc == 0x2960C0u) {
        ctx->pc = 0x2960C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960BCu;
        // 0x2960c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2960C4u;
        goto label_2960c4;
    }
    ctx->pc = 0x2960BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2960C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960BCu;
        // 0x2960c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2960BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2960C4u;
label_2960c4:
    // 0x2960c4: 0x0  nop
    ctx->pc = 0x2960c4u;
    // NOP
    ctx->pc = 0x2960c8u;
}
