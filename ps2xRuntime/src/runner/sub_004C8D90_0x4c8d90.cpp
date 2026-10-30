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

// Function: sub_004C8D90
// Address: 0x4c8d90 - 0x4c8de0
void sub_004C8D90_0x4c8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8D90_0x4c8d90");
#endif

    switch (ctx->pc) {
        case 0x4c8d90u: goto label_4c8d90;
        case 0x4c8d94u: goto label_4c8d94;
        case 0x4c8d98u: goto label_4c8d98;
        case 0x4c8d9cu: goto label_4c8d9c;
        case 0x4c8da0u: goto label_4c8da0;
        case 0x4c8da4u: goto label_4c8da4;
        case 0x4c8da8u: goto label_4c8da8;
        case 0x4c8dacu: goto label_4c8dac;
        case 0x4c8db0u: goto label_4c8db0;
        case 0x4c8db4u: goto label_4c8db4;
        case 0x4c8db8u: goto label_4c8db8;
        case 0x4c8dbcu: goto label_4c8dbc;
        case 0x4c8dc0u: goto label_4c8dc0;
        case 0x4c8dc4u: goto label_4c8dc4;
        case 0x4c8dc8u: goto label_4c8dc8;
        case 0x4c8dccu: goto label_4c8dcc;
        case 0x4c8dd0u: goto label_4c8dd0;
        case 0x4c8dd4u: goto label_4c8dd4;
        case 0x4c8dd8u: goto label_4c8dd8;
        case 0x4c8ddcu: goto label_4c8ddc;
        default: break;
    }

    ctx->pc = 0x4c8d90u;

label_4c8d90:
    // 0x4c8d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c8d94:
    // 0x4c8d94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c8d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c8d98:
    // 0x4c8d98: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_4c8d9c:
    if (ctx->pc == 0x4C8D9Cu) {
        ctx->pc = 0x4C8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D98u;
        // 0x4c8d9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8DA0u;
        goto label_4c8da0;
    }
    ctx->pc = 0x4C8D98u;
    {
        const bool branch_taken_0x4c8d98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D98u;
        // 0x4c8d9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8d98) {
            ctx->pc = 0x4C8DD0u;
            goto label_4c8dd0;
        }
    }
    ctx->pc = 0x4C8DA0u;
label_4c8da0:
    // 0x4c8da0: 0x24c58000  addiu       $a1, $a2, -0x8000
    ctx->pc = 0x4c8da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
label_4c8da4:
    // 0x4c8da4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c8da8:
    // 0x4c8da8: 0x90a27ffe  lbu         $v0, 0x7FFE($a1)
    ctx->pc = 0x4c8da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32766)));
label_4c8dac:
    // 0x4c8dac: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_4c8db0:
    if (ctx->pc == 0x4C8DB0u) {
        ctx->pc = 0x4C8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DACu;
        // 0x4c8db0: 0x90a47fff  lbu         $a0, 0x7FFF($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32767)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8DB4u;
        goto label_4c8db4;
    }
    ctx->pc = 0x4C8DACu;
    {
        const bool branch_taken_0x4c8dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DACu;
        // 0x4c8db0: 0x90a47fff  lbu         $a0, 0x7FFF($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32767)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8dac) {
            ctx->pc = 0x4C8DC8u;
            goto label_4c8dc8;
        }
    }
    ctx->pc = 0x4C8DB4u;
label_4c8db4:
    // 0x4c8db4: 0x8ca27ff8  lw          $v0, 0x7FF8($a1)
    ctx->pc = 0x4c8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32760)));
label_4c8db8:
    // 0x4c8db8: 0x40f809  jalr        $v0
label_4c8dbc:
    if (ctx->pc == 0x4C8DBCu) {
        ctx->pc = 0x4C8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DB8u;
        // 0x4c8dbc: 0xc42023  subu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8DC0u;
        goto label_4c8dc0;
    }
    ctx->pc = 0x4C8DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C8DC0u);
        ctx->pc = 0x4C8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DB8u;
        // 0x4c8dbc: 0xc42023  subu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8DB8u, 0x4C8DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C8DC0u;
label_4c8dc0:
    // 0x4c8dc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_4c8dc4:
    if (ctx->pc == 0x4C8DC4u) {
        ctx->pc = 0x4C8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DC0u;
        // 0x4c8dc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8DC8u;
        goto label_4c8dc8;
    }
    ctx->pc = 0x4C8DC0u;
    {
        const bool branch_taken_0x4c8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DC0u;
        // 0x4c8dc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8dc0) {
            ctx->pc = 0x4C8DD4u;
            goto label_4c8dd4;
        }
    }
    ctx->pc = 0x4C8DC8u;
label_4c8dc8:
    // 0x4c8dc8: 0xc10ceec  jal         func_433BB0
label_4c8dcc:
    if (ctx->pc == 0x4C8DCCu) {
        ctx->pc = 0x4C8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DC8u;
        // 0x4c8dcc: 0xc42023  subu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8DD0u;
        goto label_4c8dd0;
    }
    ctx->pc = 0x4C8DC8u;
    SET_GPR_U32(ctx, 31, 0x4C8DD0u);
    ctx->pc = 0x4C8DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8DC8u;
    // 0x4c8dcc: 0xc42023  subu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x4C8DC8u, 0x4C8DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8DD0u;
label_4c8dd0:
    // 0x4c8dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c8dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c8dd4:
    // 0x4c8dd4: 0x3e00008  jr          $ra
label_4c8dd8:
    if (ctx->pc == 0x4C8DD8u) {
        ctx->pc = 0x4C8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DD4u;
        // 0x4c8dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8DDCu;
        goto label_4c8ddc;
    }
    ctx->pc = 0x4C8DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8DD4u;
        // 0x4c8dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8DDCu;
label_4c8ddc:
    // 0x4c8ddc: 0x0  nop
    ctx->pc = 0x4c8ddcu;
    // NOP
    ctx->pc = 0x4c8de0u;
}
