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

// Function: sub_00150B70
// Address: 0x150b70 - 0x150bc8
void sub_00150B70_0x150b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150B70_0x150b70");
#endif

    switch (ctx->pc) {
        case 0x150b84u: goto label_150b84;
        case 0x150ba0u: goto label_150ba0;
        case 0x150ba8u: goto label_150ba8;
        case 0x150bb0u: goto label_150bb0;
        case 0x150bb8u: goto label_150bb8;
        default: break;
    }

    ctx->pc = 0x150b70u;

    // 0x150b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150b74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150b7c: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150B7Cu;
    SET_GPR_U32(ctx, 31, 0x150B84u);
    ctx->pc = 0x150B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B7Cu;
    // 0x150b80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150B7Cu, 0x150B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B84u;
label_150b84:
    // 0x150b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150b88: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x150b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x150b8c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x150b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x150b90: 0xa082c241  sb          $v0, -0x3DBF($a0)
    ctx->pc = 0x150b90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C241u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C241u, _value); } while (0);
    // 0x150b94: 0xac70bd68  sw          $s0, -0x4298($v1)
    ctx->pc = 0x150b94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50BD68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD68u, _value); } while (0);
    // 0x150b98: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150B98u;
    SET_GPR_U32(ctx, 31, 0x150BA0u);
    ctx->pc = 0x150B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B98u;
    // 0x150b9c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150B98u, 0x150BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BA0u;
label_150ba0:
    // 0x150ba0: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x150BA0u;
    SET_GPR_U32(ctx, 31, 0x150BA8u);
    ctx->pc = 0x150BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BA0u;
    // 0x150ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x150BA0u, 0x150BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BA8u;
label_150ba8:
    // 0x150ba8: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150BA8u;
    SET_GPR_U32(ctx, 31, 0x150BB0u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150BA8u, 0x150BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BB0u;
label_150bb0:
    // 0x150bb0: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150BB0u;
    SET_GPR_U32(ctx, 31, 0x150BB8u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150BB0u, 0x150BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BB8u;
label_150bb8:
    // 0x150bb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x150BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BC0u;
        // 0x150bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150BC8u;
}
