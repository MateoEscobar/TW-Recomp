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

// Function: sub_002DD180
// Address: 0x2dd180 - 0x2dd1d8
void sub_002DD180_0x2dd180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD180_0x2dd180");
#endif

    switch (ctx->pc) {
        case 0x2dd19cu: goto label_2dd19c;
        case 0x2dd1a4u: goto label_2dd1a4;
        case 0x2dd1b4u: goto label_2dd1b4;
        case 0x2dd1c8u: goto label_2dd1c8;
        default: break;
    }

    ctx->pc = 0x2dd180u;

    // 0x2dd180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd184: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dd184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dd188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd18c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dd190: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2dd190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd194: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2DD194u;
    SET_GPR_U32(ctx, 31, 0x2DD19Cu);
    ctx->pc = 0x2DD198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD194u;
    // 0x2dd198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DD194u, 0x2DD19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD19Cu;
label_2dd19c:
    // 0x2dd19c: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x2DD19Cu;
    SET_GPR_U32(ctx, 31, 0x2DD1A4u);
    ctx->pc = 0x2DD1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD19Cu;
    // 0x2dd1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x2DD19Cu, 0x2DD1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1A4u;
label_2dd1a4:
    // 0x2dd1a4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DD1A4u;
    {
        const bool branch_taken_0x2dd1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd1a4) {
            ctx->pc = 0x2DD1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD1A4u;
            // 0x2dd1a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD1CCu;
            goto label_2dd1cc;
        }
    }
    ctx->pc = 0x2DD1ACu;
    // 0x2dd1ac: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2DD1ACu;
    SET_GPR_U32(ctx, 31, 0x2DD1B4u);
    ctx->pc = 0x2DD1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD1ACu;
    // 0x2dd1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2DD1ACu, 0x2DD1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1B4u;
label_2dd1b4:
    // 0x2dd1b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd1b8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD1B8u;
    {
        const bool branch_taken_0x2dd1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dd1b8) {
            ctx->pc = 0x2DD1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD1B8u;
            // 0x2dd1bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD1CCu;
            goto label_2dd1cc;
        }
    }
    ctx->pc = 0x2DD1C0u;
    // 0x2dd1c0: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2DD1C0u;
    SET_GPR_U32(ctx, 31, 0x2DD1C8u);
    ctx->pc = 0x2DD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD1C0u;
    // 0x2dd1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2DD1C0u, 0x2DD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1C8u;
label_2dd1c8:
    // 0x2dd1c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dd1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd1cc:
    // 0x2dd1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1D0u;
        // 0x2dd1d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD1D8u;
}
