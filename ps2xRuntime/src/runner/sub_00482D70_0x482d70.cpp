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

// Function: sub_00482D70
// Address: 0x482d70 - 0x482df0
void sub_00482D70_0x482d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482D70_0x482d70");
#endif

    switch (ctx->pc) {
        case 0x482dacu: goto label_482dac;
        default: break;
    }

    ctx->pc = 0x482d70u;

    // 0x482d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x482d74: 0xaf858958  sw          $a1, -0x76A8($gp)
    ctx->pc = 0x482d74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 5));
    // 0x482d78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x482d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x482d7c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x482d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x482d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482d84: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x482d84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x482d88: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x482d88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x52EA90u));
    // 0x482d8c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x482d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x482d90: 0x8f858610  lw          $a1, -0x79F0($gp)
    ctx->pc = 0x482d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x482d94: 0x2508acf0  addiu       $t0, $t0, -0x5310
    ctx->pc = 0x482d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946032));
    // 0x482d98: 0x8f878614  lw          $a3, -0x79EC($gp)
    ctx->pc = 0x482d98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936084)));
    // 0x482d9c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x482d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x482da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482da4: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x482DA4u;
    SET_GPR_U32(ctx, 31, 0x482DACu);
    ctx->pc = 0x482DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482DA4u;
    // 0x482da8: 0x35290005  ori         $t1, $t1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x482DA4u, 0x482DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482DACu;
label_482dac:
    // 0x482dac: 0x8f848958  lw          $a0, -0x76A8($gp)
    ctx->pc = 0x482dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
    // 0x482db0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x482db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x482db4: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x482db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x482db8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x482db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x482dbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x482DBCu;
    {
        const bool branch_taken_0x482dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x482DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482DBCu;
        // 0x482dc0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482dbc) {
            ctx->pc = 0x482DD8u;
            goto label_482dd8;
        }
    }
    ctx->pc = 0x482DC4u;
    // 0x482dc4: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x482dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x482dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x482dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x482dcc: 0xaf83895c  sw          $v1, -0x76A4($gp)
    ctx->pc = 0x482dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936924), GPR_U32(ctx, 3));
    // 0x482dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x482DD0u;
    {
        const bool branch_taken_0x482dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482DD0u;
        // 0x482dd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482dd0) {
            ctx->pc = 0x482DDCu;
            goto label_482ddc;
        }
    }
    ctx->pc = 0x482DD8u;
label_482dd8:
    // 0x482dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x482dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482ddc:
    // 0x482ddc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x482ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482de4: 0x3e00008  jr          $ra
    ctx->pc = 0x482DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482DE4u;
        // 0x482de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482DECu;
    // 0x482dec: 0x0  nop
    ctx->pc = 0x482decu;
    // NOP
    ctx->pc = 0x482df0u;
}
