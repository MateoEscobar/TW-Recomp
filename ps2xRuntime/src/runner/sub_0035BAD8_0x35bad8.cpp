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

// Function: sub_0035BAD8
// Address: 0x35bad8 - 0x35bb50
void sub_0035BAD8_0x35bad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BAD8_0x35bad8");
#endif

    switch (ctx->pc) {
        case 0x35bb00u: goto label_35bb00;
        case 0x35bb08u: goto label_35bb08;
        case 0x35bb1cu: goto label_35bb1c;
        case 0x35bb24u: goto label_35bb24;
        case 0x35bb34u: goto label_35bb34;
        default: break;
    }

    ctx->pc = 0x35bad8u;

    // 0x35bad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35bad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35badc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bae0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35bae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35bae4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35bae8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35bae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35baec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35baecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35baf0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35baf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35baf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35baf8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BAF8u;
    SET_GPR_U32(ctx, 31, 0x35BB00u);
    ctx->pc = 0x35BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BAF8u;
    // 0x35bafc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BAF8u, 0x35BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB00u;
label_35bb00:
    // 0x35bb00: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BB00u;
    SET_GPR_U32(ctx, 31, 0x35BB08u);
    ctx->pc = 0x35BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB00u;
    // 0x35bb04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BB00u, 0x35BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB08u;
label_35bb08:
    // 0x35bb08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35bb08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35bb0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35bb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BB14u;
    SET_GPR_U32(ctx, 31, 0x35BB1Cu);
    ctx->pc = 0x35BB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB14u;
    // 0x35bb18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BB14u, 0x35BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB1Cu;
label_35bb1c:
    // 0x35bb1c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35BB1Cu;
    SET_GPR_U32(ctx, 31, 0x35BB24u);
    ctx->pc = 0x35BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB1Cu;
    // 0x35bb20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35BB1Cu, 0x35BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB24u;
label_35bb24:
    // 0x35bb24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35bb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb2c: 0xc08de12  jal         func_237848
    ctx->pc = 0x35BB2Cu;
    SET_GPR_U32(ctx, 31, 0x35BB34u);
    ctx->pc = 0x35BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB2Cu;
    // 0x35bb30: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x35BB2Cu, 0x35BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB34u;
label_35bb34:
    // 0x35bb34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35bb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35bb38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bb38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35bb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bb40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35bb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bb48: 0x3e00008  jr          $ra
    ctx->pc = 0x35BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB48u;
        // 0x35bb4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BB50u;
}
