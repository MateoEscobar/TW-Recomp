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

// Function: sub_0046CD48
// Address: 0x46cd48 - 0x46cdc8
void sub_0046CD48_0x46cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CD48_0x46cd48");
#endif

    switch (ctx->pc) {
        case 0x46cd84u: goto label_46cd84;
        default: break;
    }

    ctx->pc = 0x46cd48u;

    // 0x46cd48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46cd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46cd4c: 0xaf8588d8  sw          $a1, -0x7728($gp)
    ctx->pc = 0x46cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936792), GPR_U32(ctx, 5));
    // 0x46cd50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46cd54: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x46cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x46cd58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46cd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cd5c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x46cd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x46cd60: 0x8c44e710  lw          $a0, -0x18F0($v0)
    ctx->pc = 0x46cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x52E710u));
    // 0x46cd64: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x46cd64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x46cd68: 0x8f8584ec  lw          $a1, -0x7B14($gp)
    ctx->pc = 0x46cd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935788)));
    // 0x46cd6c: 0x2508a398  addiu       $t0, $t0, -0x5C68
    ctx->pc = 0x46cd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943640));
    // 0x46cd70: 0x8f8784f0  lw          $a3, -0x7B10($gp)
    ctx->pc = 0x46cd70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935792)));
    // 0x46cd74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46cd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46cd78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46cd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46cd7c: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x46CD7Cu;
    SET_GPR_U32(ctx, 31, 0x46CD84u);
    ctx->pc = 0x46CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CD7Cu;
    // 0x46cd80: 0x35290007  ori         $t1, $t1, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x46CD7Cu, 0x46CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CD84u;
label_46cd84:
    // 0x46cd84: 0x8f8488d8  lw          $a0, -0x7728($gp)
    ctx->pc = 0x46cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
    // 0x46cd88: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x46cd8c: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x46cd90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46cd94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46CD94u;
    {
        const bool branch_taken_0x46cd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CD94u;
        // 0x46cd98: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cd94) {
            ctx->pc = 0x46CDB0u;
            goto label_46cdb0;
        }
    }
    ctx->pc = 0x46CD9Cu;
    // 0x46cd9c: 0x8f8388dc  lw          $v1, -0x7724($gp)
    ctx->pc = 0x46cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936796)));
    // 0x46cda0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46cda4: 0xaf8388dc  sw          $v1, -0x7724($gp)
    ctx->pc = 0x46cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 3));
    // 0x46cda8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46CDA8u;
    {
        const bool branch_taken_0x46cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CDA8u;
        // 0x46cdac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cda8) {
            ctx->pc = 0x46CDB4u;
            goto label_46cdb4;
        }
    }
    ctx->pc = 0x46CDB0u;
label_46cdb0:
    // 0x46cdb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46cdb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46cdb4:
    // 0x46cdb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46cdb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cdb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46cdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x46CDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CDBCu;
        // 0x46cdc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CDC4u;
    // 0x46cdc4: 0x0  nop
    ctx->pc = 0x46cdc4u;
    // NOP
    ctx->pc = 0x46cdc8u;
}
