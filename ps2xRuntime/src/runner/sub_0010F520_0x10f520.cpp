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

// Function: sub_0010F520
// Address: 0x10f520 - 0x10f558
void sub_0010F520_0x10f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F520_0x10f520");
#endif

    switch (ctx->pc) {
        case 0x10f540u: goto label_10f540;
        default: break;
    }

    ctx->pc = 0x10f520u;

    // 0x10f520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10f524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f528: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10f528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10f52c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f530: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x10f530u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x10f534: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10f534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x10f538: 0xc043d56  jal         func_10F558
    ctx->pc = 0x10F538u;
    SET_GPR_U32(ctx, 31, 0x10F540u);
    ctx->pc = 0x10F53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F538u;
    // 0x10f53c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F558u, 0x10F538u, 0x10F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F540u;
label_10f540:
    // 0x10f540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f544: 0x3e00008  jr          $ra
    ctx->pc = 0x10F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F544u;
        // 0x10f548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F54Cu;
    // 0x10f54c: 0x0  nop
    ctx->pc = 0x10f54cu;
    // NOP
    // 0x10f550: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f554: 0x0  nop
    ctx->pc = 0x10f554u;
    // NOP
    ctx->pc = 0x10f558u;
}
