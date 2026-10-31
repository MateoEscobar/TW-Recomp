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

// Function: sub_0019EEA0
// Address: 0x19eea0 - 0x19eee0
void sub_0019EEA0_0x19eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EEA0_0x19eea0");
#endif

    switch (ctx->pc) {
        case 0x19eeb8u: goto label_19eeb8;
        default: break;
    }

    ctx->pc = 0x19eea0u;

    // 0x19eea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19eea4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19eea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19eea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eeac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19eeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19eeb0: 0xc0e1938  jal         func_3864E0
    ctx->pc = 0x19EEB0u;
    SET_GPR_U32(ctx, 31, 0x19EEB8u);
    ctx->pc = 0x19EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEB0u;
    // 0x19eeb4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864E0u, 0x19EEB0u, 0x19EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EEB8u;
label_19eeb8:
    // 0x19eeb8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19eebc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x19eebcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19eec0: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x19eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x19eec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19eec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eec8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x19eec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19eecc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19eed0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19eed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eed4: 0x3e00008  jr          $ra
    ctx->pc = 0x19EED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED4u;
        // 0x19eed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EEDCu;
    // 0x19eedc: 0x0  nop
    ctx->pc = 0x19eedcu;
    // NOP
    ctx->pc = 0x19eee0u;
}
