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

// Function: sub_0041CE98
// Address: 0x41ce98 - 0x41cef0
void sub_0041CE98_0x41ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CE98_0x41ce98");
#endif

    switch (ctx->pc) {
        case 0x41cebcu: goto label_41cebc;
        case 0x41cec8u: goto label_41cec8;
        case 0x41cedcu: goto label_41cedc;
        default: break;
    }

    ctx->pc = 0x41ce98u;

    // 0x41ce98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41ce9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41ce9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41cea4: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x41cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x41cea8: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x41cea8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41ceac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ceb0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x41ceb0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x41ceb4: 0xc10782e  jal         func_41E0B8
    ctx->pc = 0x41CEB4u;
    SET_GPR_U32(ctx, 31, 0x41CEBCu);
    ctx->pc = 0x41CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CEB4u;
    // 0x41ceb8: 0xa450033a  sh          $s0, 0x33A($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 826), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E0B8u, 0x41CEB4u, 0x41CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CEBCu;
label_41cebc:
    // 0x41cebc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x41cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x41cec0: 0xc108b18  jal         func_422C60
    ctx->pc = 0x41CEC0u;
    SET_GPR_U32(ctx, 31, 0x41CEC8u);
    ctx->pc = 0x41CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CEC0u;
    // 0x41cec4: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422C60u, 0x41CEC0u, 0x41CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CEC8u;
label_41cec8:
    // 0x41cec8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41cecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41ceccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ced0: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x41ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x41ced4: 0xc0e5fa2  jal         func_397E88
    ctx->pc = 0x41CED4u;
    SET_GPR_U32(ctx, 31, 0x41CEDCu);
    ctx->pc = 0x41CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CED4u;
    // 0x41ced8: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397E88u, 0x41CED4u, 0x41CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CEDCu;
label_41cedc:
    // 0x41cedc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41cedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41cee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41cee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41cee4: 0x3e00008  jr          $ra
    ctx->pc = 0x41CEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CEE4u;
        // 0x41cee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CEECu;
    // 0x41ceec: 0x0  nop
    ctx->pc = 0x41ceecu;
    // NOP
    ctx->pc = 0x41cef0u;
}
