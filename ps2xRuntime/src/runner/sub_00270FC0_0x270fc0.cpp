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

// Function: sub_00270FC0
// Address: 0x270fc0 - 0x271028
void sub_00270FC0_0x270fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270FC0_0x270fc0");
#endif

    switch (ctx->pc) {
        case 0x270fd8u: goto label_270fd8;
        case 0x270fe8u: goto label_270fe8;
        case 0x270ffcu: goto label_270ffc;
        case 0x271008u: goto label_271008;
        case 0x271018u: goto label_271018;
        default: break;
    }

    ctx->pc = 0x270fc0u;

    // 0x270fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270fc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x270fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x270fc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270fd0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x270FD0u;
    SET_GPR_U32(ctx, 31, 0x270FD8u);
    ctx->pc = 0x270FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FD0u;
    // 0x270fd4: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x270FD0u, 0x270FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FD8u;
label_270fd8:
    // 0x270fd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270FD8u;
    {
        const bool branch_taken_0x270fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FD8u;
        // 0x270fdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fd8) {
            ctx->pc = 0x270FF0u;
            goto label_270ff0;
        }
    }
    ctx->pc = 0x270FE0u;
    // 0x270fe0: 0xc08b0e2  jal         func_22C388
    ctx->pc = 0x270FE0u;
    SET_GPR_U32(ctx, 31, 0x270FE8u);
    ctx->pc = 0x270FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FE0u;
    // 0x270fe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x270FE0u, 0x270FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FE8u;
label_270fe8:
    // 0x270fe8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270FE8u;
    {
        const bool branch_taken_0x270fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FE8u;
        // 0x270fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fe8) {
            ctx->pc = 0x27100Cu;
            goto label_27100c;
        }
    }
    ctx->pc = 0x270FF0u;
label_270ff0:
    // 0x270ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270ff4: 0xc089988  jal         func_226620
    ctx->pc = 0x270FF4u;
    SET_GPR_U32(ctx, 31, 0x270FFCu);
    ctx->pc = 0x270FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FF4u;
    // 0x270ff8: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x270FF4u, 0x270FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FFCu;
label_270ffc:
    // 0x270ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271000: 0xc089974  jal         func_2265D0
    ctx->pc = 0x271000u;
    SET_GPR_U32(ctx, 31, 0x271008u);
    ctx->pc = 0x271004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271000u;
    // 0x271004: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x271000u, 0x271008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271008u;
label_271008:
    // 0x271008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27100c:
    // 0x27100c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27100cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271010: 0xc08bd3e  jal         func_22F4F8
    ctx->pc = 0x271010u;
    SET_GPR_U32(ctx, 31, 0x271018u);
    ctx->pc = 0x271014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271010u;
    // 0x271014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4F8u, 0x271010u, 0x271018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271018u;
label_271018:
    // 0x271018: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x271018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27101c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27101cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271020: 0x3e00008  jr          $ra
    ctx->pc = 0x271020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271020u;
        // 0x271024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271028u;
}
