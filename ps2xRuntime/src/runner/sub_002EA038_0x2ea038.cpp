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

// Function: sub_002EA038
// Address: 0x2ea038 - 0x2ea0b8
void sub_002EA038_0x2ea038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA038_0x2ea038");
#endif

    switch (ctx->pc) {
        case 0x2ea074u: goto label_2ea074;
        case 0x2ea094u: goto label_2ea094;
        default: break;
    }

    ctx->pc = 0x2ea038u;

    // 0x2ea038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea03c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ea03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ea040: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ea040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ea044: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2ea044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ea048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea050: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EA050u;
    {
        const bool branch_taken_0x2ea050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA050u;
        // 0x2ea054: 0xa2050025  sb          $a1, 0x25($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea050) {
            ctx->pc = 0x2EA0A8u;
            goto label_2ea0a8;
        }
    }
    ctx->pc = 0x2EA058u;
    // 0x2ea058: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2ea058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2ea05c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2ea05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ea060: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea064: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ea064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ea068: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x2ea068u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2ea06c: 0xc0a447a  jal         func_2911E8
    ctx->pc = 0x2EA06Cu;
    SET_GPR_U32(ctx, 31, 0x2EA074u);
    ctx->pc = 0x2EA070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA06Cu;
    // 0x2ea070: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E8u, 0x2EA06Cu, 0x2EA074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA074u;
label_2ea074:
    // 0x2ea074: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x2ea074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x2ea078: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ea078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ea07c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2ea07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ea080: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea084: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2ea084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2ea088: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2ea088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ea08c: 0xc0a447a  jal         func_2911E8
    ctx->pc = 0x2EA08Cu;
    SET_GPR_U32(ctx, 31, 0x2EA094u);
    ctx->pc = 0x2EA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA08Cu;
    // 0x2ea090: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E8u, 0x2EA08Cu, 0x2EA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA094u;
label_2ea094:
    // 0x2ea094: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x2ea094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ea098: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA098u;
    {
        const bool branch_taken_0x2ea098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea098) {
            ctx->pc = 0x2EA09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA098u;
            // 0x2ea09c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0ACu;
            goto label_2ea0ac;
        }
    }
    ctx->pc = 0x2EA0A0u;
    // 0x2ea0a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ea0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea0a4: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x2ea0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
label_2ea0a8:
    // 0x2ea0a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ea0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea0ac:
    // 0x2ea0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0B0u;
        // 0x2ea0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA0B8u;
}
