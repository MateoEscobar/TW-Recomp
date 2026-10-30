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

// Function: sub_00206D88
// Address: 0x206d88 - 0x206e08
void sub_00206D88_0x206d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206D88_0x206d88");
#endif

    switch (ctx->pc) {
        case 0x206dd0u: goto label_206dd0;
        case 0x206df4u: goto label_206df4;
        default: break;
    }

    ctx->pc = 0x206d88u;

    // 0x206d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206d8c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x206d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206d90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x206d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206d98: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x206D98u;
    {
        const bool branch_taken_0x206d98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x206D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D98u;
        // 0x206d9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d98) {
            ctx->pc = 0x206DBCu;
            goto label_206dbc;
        }
    }
    ctx->pc = 0x206DA0u;
    // 0x206da0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x206da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x206da4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x206da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x206da8: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x206da8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x206dac: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x206dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
    // 0x206db0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x206db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x206db4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206DB4u;
    {
        const bool branch_taken_0x206db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DB4u;
        // 0x206db8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206db4) {
            ctx->pc = 0x206DECu;
            goto label_206dec;
        }
    }
    ctx->pc = 0x206DBCu;
label_206dbc:
    // 0x206dbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x206dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x206dc0: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x206DC0u;
    {
        const bool branch_taken_0x206dc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x206DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DC0u;
        // 0x206dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206dc0) {
            ctx->pc = 0x206DF8u;
            goto label_206df8;
        }
    }
    ctx->pc = 0x206DC8u;
    // 0x206dc8: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x206DC8u;
    SET_GPR_U32(ctx, 31, 0x206DD0u);
    ctx->pc = 0x206DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DC8u;
    // 0x206dcc: 0x8e040090  lw          $a0, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x206DC8u, 0x206DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DD0u;
label_206dd0:
    // 0x206dd0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x206dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x206dd4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x206dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x206dd8: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x206dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x206ddc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x206ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206de0: 0xa082043c  sb          $v0, 0x43C($a0)
    ctx->pc = 0x206de0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1084), (uint8_t)GPR_U32(ctx, 2));
    // 0x206de4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x206de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x206de8: 0x8cc4aa84  lw          $a0, -0x557C($a2)
    ctx->pc = 0x206de8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
label_206dec:
    // 0x206dec: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x206DECu;
    SET_GPR_U32(ctx, 31, 0x206DF4u);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x206DECu, 0x206DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DF4u;
label_206df4:
    // 0x206df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206df8:
    // 0x206df8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x206df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206e00: 0x3e00008  jr          $ra
    ctx->pc = 0x206E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E00u;
        // 0x206e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206E08u;
}
