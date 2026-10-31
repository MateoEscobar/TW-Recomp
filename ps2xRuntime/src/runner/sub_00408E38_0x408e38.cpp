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

// Function: sub_00408E38
// Address: 0x408e38 - 0x408e98
void sub_00408E38_0x408e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408E38_0x408e38");
#endif

    switch (ctx->pc) {
        case 0x408e50u: goto label_408e50;
        case 0x408e64u: goto label_408e64;
        case 0x408e78u: goto label_408e78;
        case 0x408e84u: goto label_408e84;
        default: break;
    }

    ctx->pc = 0x408e38u;

    // 0x408e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x408e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x408e3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408e40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x408e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x408e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408e48: 0xc10314e  jal         func_40C538
    ctx->pc = 0x408E48u;
    SET_GPR_U32(ctx, 31, 0x408E50u);
    ctx->pc = 0x408E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408E48u;
    // 0x408e4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x408E48u, 0x408E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408E50u;
label_408e50:
    // 0x408e50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x408E50u;
    {
        const bool branch_taken_0x408e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x408E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408E50u;
        // 0x408e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408e50) {
            ctx->pc = 0x408E6Cu;
            goto label_408e6c;
        }
    }
    ctx->pc = 0x408E58u;
    // 0x408e58: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x408e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x408e5c: 0xc10241a  jal         func_409068
    ctx->pc = 0x408E5Cu;
    SET_GPR_U32(ctx, 31, 0x408E64u);
    ctx->pc = 0x408E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408E5Cu;
    // 0x408e60: 0x24a57e80  addiu       $a1, $a1, 0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x408E5Cu, 0x408E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408E64u;
label_408e64:
    // 0x408e64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x408E64u;
    {
        const bool branch_taken_0x408e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408E64u;
        // 0x408e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408e64) {
            ctx->pc = 0x408E88u;
            goto label_408e88;
        }
    }
    ctx->pc = 0x408E6Cu;
label_408e6c:
    // 0x408e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x408e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x408e70: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408E70u;
    SET_GPR_U32(ctx, 31, 0x408E78u);
    ctx->pc = 0x408E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408E70u;
    // 0x408e74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408E70u, 0x408E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408E78u;
label_408e78:
    // 0x408e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408e7c: 0xc1026fc  jal         func_409BF0
    ctx->pc = 0x408E7Cu;
    SET_GPR_U32(ctx, 31, 0x408E84u);
    ctx->pc = 0x408E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408E7Cu;
    // 0x408e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409BF0u, 0x408E7Cu, 0x408E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408E84u;
label_408e84:
    // 0x408e84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x408e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408e88:
    // 0x408e88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x408e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408e90: 0x3e00008  jr          $ra
    ctx->pc = 0x408E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408E90u;
        // 0x408e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408E98u;
}
