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

// Function: sub_00288AD0
// Address: 0x288ad0 - 0x288b18
void sub_00288AD0_0x288ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288AD0_0x288ad0");
#endif

    switch (ctx->pc) {
        case 0x288ae8u: goto label_288ae8;
        default: break;
    }

    ctx->pc = 0x288ad0u;

    // 0x288ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x288ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x288ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288ae0: 0xc0a22dc  jal         func_288B70
    ctx->pc = 0x288AE0u;
    SET_GPR_U32(ctx, 31, 0x288AE8u);
    ctx->pc = 0x288AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AE0u;
    // 0x288ae4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B70u, 0x288AE0u, 0x288AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AE8u;
label_288ae8:
    // 0x288ae8: 0x3c01ce6e  lui         $at, 0xCE6E
    ctx->pc = 0x288ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52846 << 16));
    // 0x288aec: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x288aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x288af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288af4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x288af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x288af8: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x288af8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x288afc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x288afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x288b00: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x288b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x288b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x288B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B0Cu;
        // 0x288b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288B14u;
    // 0x288b14: 0x0  nop
    ctx->pc = 0x288b14u;
    // NOP
    ctx->pc = 0x288b18u;
}
