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

// Function: sub_004656A0
// Address: 0x4656a0 - 0x4656f0
void sub_004656A0_0x4656a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004656A0_0x4656a0");
#endif

    switch (ctx->pc) {
        case 0x4656b8u: goto label_4656b8;
        default: break;
    }

    ctx->pc = 0x4656a0u;

    // 0x4656a0: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4656a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x4656a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4656a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4656a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4656a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4656ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4656acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4656b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4656b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4656b4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x4656b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4656b8:
    // 0x4656b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4656b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4656bc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4656bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4656c0: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4656C0u;
    {
        const bool branch_taken_0x4656c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x4656c0) {
            ctx->pc = 0x4656C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4656C0u;
            // 0x4656c4: 0xe44c0008  swc1        $f12, 0x8($v0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4656E4u;
            goto label_4656e4;
        }
    }
    ctx->pc = 0x4656C8u;
    // 0x4656c8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4656c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4656cc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x4656ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4656d0: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x4656d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4656d4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4656D4u;
    {
        const bool branch_taken_0x4656d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4656d4) {
            ctx->pc = 0x4656D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4656D4u;
            // 0x4656d8: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4656B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4656b8;
        }
    }
    ctx->pc = 0x4656DCu;
    // 0x4656dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4656dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4656e0: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x4656e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8u, _value); } while (0); }
label_4656e4:
    // 0x4656e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4656E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4656E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4656E4u;
        // 0x4656e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4656E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4656ECu;
    // 0x4656ec: 0x0  nop
    ctx->pc = 0x4656ecu;
    // NOP
    ctx->pc = 0x4656f0u;
}
