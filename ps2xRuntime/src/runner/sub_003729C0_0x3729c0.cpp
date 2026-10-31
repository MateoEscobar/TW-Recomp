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

// Function: sub_003729C0
// Address: 0x3729c0 - 0x372a38
void sub_003729C0_0x3729c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003729C0_0x3729c0");
#endif

    switch (ctx->pc) {
        case 0x3729e8u: goto label_3729e8;
        case 0x3729f0u: goto label_3729f0;
        case 0x372a04u: goto label_372a04;
        case 0x372a0cu: goto label_372a0c;
        case 0x372a18u: goto label_372a18;
        default: break;
    }

    ctx->pc = 0x3729c0u;

    // 0x3729c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3729c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3729c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3729c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3729c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3729c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3729cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3729ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3729d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3729d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3729d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3729d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3729dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3729dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3729e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3729E0u;
    SET_GPR_U32(ctx, 31, 0x3729E8u);
    ctx->pc = 0x3729E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3729E0u;
    // 0x3729e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3729E0u, 0x3729E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729E8u;
label_3729e8:
    // 0x3729e8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3729E8u;
    SET_GPR_U32(ctx, 31, 0x3729F0u);
    ctx->pc = 0x3729ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3729E8u;
    // 0x3729ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3729E8u, 0x3729F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729F0u;
label_3729f0:
    // 0x3729f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3729f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3729f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3729f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3729FCu;
    SET_GPR_U32(ctx, 31, 0x372A04u);
    ctx->pc = 0x372A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3729FCu;
    // 0x372a00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3729FCu, 0x372A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A04u;
label_372a04:
    // 0x372a04: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372A04u;
    SET_GPR_U32(ctx, 31, 0x372A0Cu);
    ctx->pc = 0x372A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A04u;
    // 0x372a08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372A04u, 0x372A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A0Cu;
label_372a0c:
    // 0x372a0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x372a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a10: 0xc044f3a  jal         func_113CE8
    ctx->pc = 0x372A10u;
    SET_GPR_U32(ctx, 31, 0x372A18u);
    ctx->pc = 0x372A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A10u;
    // 0x372a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113CE8u, 0x372A10u, 0x372A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A18u;
label_372a18:
    // 0x372a18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x372a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x372a1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x372a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372a24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x372a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x372A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A2Cu;
        // 0x372a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372A34u;
    // 0x372a34: 0x0  nop
    ctx->pc = 0x372a34u;
    // NOP
    ctx->pc = 0x372a38u;
}
