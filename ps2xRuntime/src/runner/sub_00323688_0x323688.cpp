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

// Function: sub_00323688
// Address: 0x323688 - 0x3236e0
void sub_00323688_0x323688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323688_0x323688");
#endif

    switch (ctx->pc) {
        case 0x32369cu: goto label_32369c;
        case 0x3236bcu: goto label_3236bc;
        default: break;
    }

    ctx->pc = 0x323688u;

    // 0x323688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32368c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32368cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323694: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x323694u;
    SET_GPR_U32(ctx, 31, 0x32369Cu);
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x323694u, 0x32369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32369Cu;
label_32369c:
    // 0x32369c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32369cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236a0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3236A0u;
    {
        const bool branch_taken_0x3236a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3236A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236A0u;
        // 0x3236a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236a0) {
            ctx->pc = 0x3236CCu;
            goto label_3236cc;
        }
    }
    ctx->pc = 0x3236A8u;
    // 0x3236a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3236a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3236ac: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3236ACu;
    {
        const bool branch_taken_0x3236ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3236ac) {
            ctx->pc = 0x3236B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3236ACu;
            // 0x3236b0: 0xde020008  ld          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3236D0u;
            goto label_3236d0;
        }
    }
    ctx->pc = 0x3236B4u;
    // 0x3236b4: 0xc0ccda2  jal         func_333688
    ctx->pc = 0x3236B4u;
    SET_GPR_U32(ctx, 31, 0x3236BCu);
    ctx->pc = 0x3236B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3236B4u;
    // 0x3236b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x3236B4u, 0x3236BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236BCu;
label_3236bc:
    // 0x3236bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3236BCu;
    {
        const bool branch_taken_0x3236bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3236C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236BCu;
        // 0x3236c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236bc) {
            ctx->pc = 0x3236D0u;
            goto label_3236d0;
        }
    }
    ctx->pc = 0x3236C4u;
    // 0x3236c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3236C4u;
    {
        const bool branch_taken_0x3236c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3236C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236C4u;
        // 0x3236c8: 0xde020008  ld          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236c4) {
            ctx->pc = 0x3236D0u;
            goto label_3236d0;
        }
    }
    ctx->pc = 0x3236CCu;
label_3236cc:
    // 0x3236cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3236ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3236d0:
    // 0x3236d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3236d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3236d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3236d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3236d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3236D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3236DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236D8u;
        // 0x3236dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3236D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3236E0u;
}
