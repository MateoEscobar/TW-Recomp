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

// Function: sub_004AED08
// Address: 0x4aed08 - 0x4aedb0
void sub_004AED08_0x4aed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AED08_0x4aed08");
#endif

    switch (ctx->pc) {
        case 0x4aed2cu: goto label_4aed2c;
        case 0x4aed64u: goto label_4aed64;
        case 0x4aed9cu: goto label_4aed9c;
        default: break;
    }

    ctx->pc = 0x4aed08u;

    // 0x4aed08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aed0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aed10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4aed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4aed14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aed14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aed18: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x4aed18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4aed1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4aed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aed20: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x4aed20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x4aed24: 0xc12cc82  jal         func_4B3208
    ctx->pc = 0x4AED24u;
    SET_GPR_U32(ctx, 31, 0x4AED2Cu);
    ctx->pc = 0x4AED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AED24u;
    // 0x4aed28: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4AED24u, 0x4AED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AED2Cu;
label_4aed2c:
    // 0x4aed2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aed2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aed30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aed34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aed34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aed38: 0x3e00008  jr          $ra
    ctx->pc = 0x4AED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AED38u;
        // 0x4aed3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AED38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AED40u;
    // 0x4aed40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aed44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aed48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4aed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4aed4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aed4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aed50: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x4aed50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4aed54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4aed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aed58: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x4aed58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x4aed5c: 0xc12cc82  jal         func_4B3208
    ctx->pc = 0x4AED5Cu;
    SET_GPR_U32(ctx, 31, 0x4AED64u);
    ctx->pc = 0x4AED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AED5Cu;
    // 0x4aed60: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4AED5Cu, 0x4AED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AED64u;
label_4aed64:
    // 0x4aed64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aed64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aed68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aed68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aed6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aed6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aed70: 0x3e00008  jr          $ra
    ctx->pc = 0x4AED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AED70u;
        // 0x4aed74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AED70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AED78u;
    // 0x4aed78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aed7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aed7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aed80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4aed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4aed84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aed88: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x4aed88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4aed8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4aed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aed90: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x4aed90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x4aed94: 0xc12cc82  jal         func_4B3208
    ctx->pc = 0x4AED94u;
    SET_GPR_U32(ctx, 31, 0x4AED9Cu);
    ctx->pc = 0x4AED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AED94u;
    // 0x4aed98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4AED94u, 0x4AED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AED9Cu;
label_4aed9c:
    // 0x4aed9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aed9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeda0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aeda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aeda4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aeda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aeda8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEDA8u;
        // 0x4aedac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEDB0u;
}
