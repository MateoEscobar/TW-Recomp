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

// Function: sub_001BB1E0
// Address: 0x1bb1e0 - 0x1bb250
void sub_001BB1E0_0x1bb1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB1E0_0x1bb1e0");
#endif

    switch (ctx->pc) {
        case 0x1bb200u: goto label_1bb200;
        case 0x1bb218u: goto label_1bb218;
        case 0x1bb228u: goto label_1bb228;
        default: break;
    }

    ctx->pc = 0x1bb1e0u;

    // 0x1bb1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bb1e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bb1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bb1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bb1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bb1f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1bb1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1bb1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb1f8: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1BB1F8u;
    SET_GPR_U32(ctx, 31, 0x1BB200u);
    ctx->pc = 0x1BB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1F8u;
    // 0x1bb1fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1BB1F8u, 0x1BB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB200u;
label_1bb200:
    // 0x1bb200: 0x26120070  addiu       $s2, $s0, 0x70
    ctx->pc = 0x1bb200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1bb204: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1bb204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1bb208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb20c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1bb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1bb210: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x1BB210u;
    SET_GPR_U32(ctx, 31, 0x1BB218u);
    ctx->pc = 0x1BB214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB210u;
    // 0x1bb214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1BB210u, 0x1BB218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB218u;
label_1bb218:
    // 0x1bb218: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1bb218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb21c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb220: 0xc068a46  jal         func_1A2918
    ctx->pc = 0x1BB220u;
    SET_GPR_U32(ctx, 31, 0x1BB228u);
    ctx->pc = 0x1BB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB220u;
    // 0x1bb224: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2918u, 0x1BB220u, 0x1BB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB228u;
label_1bb228:
    // 0x1bb228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb22c: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x1bb22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x1bb230: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1bb230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1bb234: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x1bb234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x1bb238: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bb238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb23c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bb23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb240: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1bb240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb248: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB248u;
        // 0x1bb24c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB250u;
}
