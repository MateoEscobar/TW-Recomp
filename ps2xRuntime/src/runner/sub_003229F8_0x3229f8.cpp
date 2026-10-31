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

// Function: sub_003229F8
// Address: 0x3229f8 - 0x322a40
void sub_003229F8_0x3229f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003229F8_0x3229f8");
#endif

    switch (ctx->pc) {
        case 0x322a20u: goto label_322a20;
        default: break;
    }

    ctx->pc = 0x3229f8u;

    // 0x3229f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3229f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3229fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3229fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x322a00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x322a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x322a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a0c: 0x8c44caa8  lw          $a0, -0x3558($v0)
    ctx->pc = 0x322a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CAA8u));
    // 0x322a10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x322a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x322a14: 0x9206001a  lbu         $a2, 0x1A($s0)
    ctx->pc = 0x322a14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x322a18: 0xc059120  jal         func_164480
    ctx->pc = 0x322A18u;
    SET_GPR_U32(ctx, 31, 0x322A20u);
    ctx->pc = 0x322A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A18u;
    // 0x322a1c: 0x8c65002c  lw          $a1, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164480u, 0x322A18u, 0x322A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A20u;
label_322a20:
    // 0x322a20: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x322a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x322a24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x322a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x322a28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x322a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322a30: 0xac430b54  sw          $v1, 0xB54($v0)
    ctx->pc = 0x322a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x510B54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B54u, _value); } while (0);
    // 0x322a34: 0x3e00008  jr          $ra
    ctx->pc = 0x322A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A34u;
        // 0x322a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322A3Cu;
    // 0x322a3c: 0x0  nop
    ctx->pc = 0x322a3cu;
    // NOP
    ctx->pc = 0x322a40u;
}
