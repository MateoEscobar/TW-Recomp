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

// Function: sub_00291D48
// Address: 0x291d48 - 0x291db8
void sub_00291D48_0x291d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291D48_0x291d48");
#endif

    switch (ctx->pc) {
        case 0x291d98u: goto label_291d98;
        default: break;
    }

    ctx->pc = 0x291d48u;

    // 0x291d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291d50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x291d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x291d54: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x291d54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x291d58: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291D58u;
    {
        const bool branch_taken_0x291d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D58u;
        // 0x291d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d58) {
            ctx->pc = 0x291D70u;
            goto label_291d70;
        }
    }
    ctx->pc = 0x291D60u;
    // 0x291d60: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x291D60u;
    {
        const bool branch_taken_0x291d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x291D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D60u;
        // 0x291d64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d60) {
            ctx->pc = 0x291D8Cu;
            goto label_291d8c;
        }
    }
    ctx->pc = 0x291D68u;
    // 0x291d68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x291D68u;
    {
        const bool branch_taken_0x291d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D68u;
        // 0x291d6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d68) {
            ctx->pc = 0x291DACu;
            goto label_291dac;
        }
    }
    ctx->pc = 0x291D70u;
label_291d70:
    // 0x291d70: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x291d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x291d74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x291d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x291d78: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x291d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x291d7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x291d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d80: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x291d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x291d84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x291D84u;
    {
        const bool branch_taken_0x291d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D84u;
        // 0x291d88: 0xa3800a  movz        $s0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d84) {
            ctx->pc = 0x291DA4u;
            goto label_291da4;
        }
    }
    ctx->pc = 0x291D8Cu;
label_291d8c:
    // 0x291d8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x291d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291d90: 0xc08a200  jal         func_228800
    ctx->pc = 0x291D90u;
    SET_GPR_U32(ctx, 31, 0x291D98u);
    ctx->pc = 0x291D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D90u;
    // 0x291d94: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x291D90u, 0x291D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D98u;
label_291d98:
    // 0x291d98: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x291d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x291d9c: 0x3863000d  xori        $v1, $v1, 0xD
    ctx->pc = 0x291d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
    // 0x291da0: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x291da0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_291da4:
    // 0x291da4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291dac:
    // 0x291dac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x291dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291db0: 0x3e00008  jr          $ra
    ctx->pc = 0x291DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DB0u;
        // 0x291db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291DB8u;
}
