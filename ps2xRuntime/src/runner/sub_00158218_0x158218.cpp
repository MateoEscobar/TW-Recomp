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

// Function: sub_00158218
// Address: 0x158218 - 0x158258
void sub_00158218_0x158218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158218_0x158218");
#endif

    switch (ctx->pc) {
        case 0x158238u: goto label_158238;
        case 0x158240u: goto label_158240;
        case 0x158248u: goto label_158248;
        default: break;
    }

    ctx->pc = 0x158218u;

    // 0x158218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15821c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x158220: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x158220u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x158224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158228: 0x26105670  addiu       $s0, $s0, 0x5670
    ctx->pc = 0x158228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22128));
    // 0x15822c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x15822cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5E5690u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5690u, _value); } while (0);
    // 0x158230: 0xc05607a  jal         func_1581E8
    ctx->pc = 0x158230u;
    SET_GPR_U32(ctx, 31, 0x158238u);
    ctx->pc = 0x158234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158230u;
    // 0x158234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1581E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1581E8u, 0x158230u, 0x158238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158238u;
label_158238:
    // 0x158238: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x158238u;
    SET_GPR_U32(ctx, 31, 0x158240u);
    ctx->pc = 0x15823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158238u;
    // 0x15823c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x158238u, 0x158240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158240u;
label_158240:
    // 0x158240: 0xc0557de  jal         func_155F78
    ctx->pc = 0x158240u;
    SET_GPR_U32(ctx, 31, 0x158248u);
    ctx->pc = 0x158244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158240u;
    // 0x158244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F78u, 0x158240u, 0x158248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158248u;
label_158248:
    // 0x158248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x158248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15824c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15824cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158250: 0x3e00008  jr          $ra
    ctx->pc = 0x158250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158250u;
        // 0x158254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158258u;
}
