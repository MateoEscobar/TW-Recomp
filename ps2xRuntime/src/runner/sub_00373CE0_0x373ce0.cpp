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

// Function: sub_00373CE0
// Address: 0x373ce0 - 0x373d58
void sub_00373CE0_0x373ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373CE0_0x373ce0");
#endif

    switch (ctx->pc) {
        case 0x373d08u: goto label_373d08;
        case 0x373d10u: goto label_373d10;
        case 0x373d28u: goto label_373d28;
        case 0x373d30u: goto label_373d30;
        case 0x373d3cu: goto label_373d3c;
        default: break;
    }

    ctx->pc = 0x373ce0u;

    // 0x373ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373ce4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373ce8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373cec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373cf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373cf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x373cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373cf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373d00: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373D00u;
    SET_GPR_U32(ctx, 31, 0x373D08u);
    ctx->pc = 0x373D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D00u;
    // 0x373d04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373D00u, 0x373D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D08u;
label_373d08:
    // 0x373d08: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373D08u;
    SET_GPR_U32(ctx, 31, 0x373D10u);
    ctx->pc = 0x373D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D08u;
    // 0x373d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373D08u, 0x373D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D10u;
label_373d10:
    // 0x373d10: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373d10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373d14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d18: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373d18u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x373d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373D20u;
    SET_GPR_U32(ctx, 31, 0x373D28u);
    ctx->pc = 0x373D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D20u;
    // 0x373d24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373D20u, 0x373D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D28u;
label_373d28:
    // 0x373d28: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373D28u;
    SET_GPR_U32(ctx, 31, 0x373D30u);
    ctx->pc = 0x373D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D28u;
    // 0x373d2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373D28u, 0x373D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D30u;
label_373d30:
    // 0x373d30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d34: 0xc05aba4  jal         func_16AE90
    ctx->pc = 0x373D34u;
    SET_GPR_U32(ctx, 31, 0x373D3Cu);
    ctx->pc = 0x373D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D34u;
    // 0x373d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AE90u, 0x373D34u, 0x373D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D3Cu;
label_373d3c:
    // 0x373d3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373d48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373d50: 0x3e00008  jr          $ra
    ctx->pc = 0x373D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373D50u;
        // 0x373d54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373D58u;
}
