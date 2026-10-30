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

// Function: sub_00323940
// Address: 0x323940 - 0x3239a0
void sub_00323940_0x323940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323940_0x323940");
#endif

    switch (ctx->pc) {
        case 0x323954u: goto label_323954;
        case 0x323984u: goto label_323984;
        default: break;
    }

    ctx->pc = 0x323940u;

    // 0x323940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323944: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32394c: 0xc0cbebc  jal         func_32FAF0
    ctx->pc = 0x32394Cu;
    SET_GPR_U32(ctx, 31, 0x323954u);
    ctx->pc = 0x323950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32394Cu;
    // 0x323950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAF0u, 0x32394Cu, 0x323954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323954u;
label_323954:
    // 0x323954: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323958: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x323958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32395c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x32395cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x323960: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323964: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x323964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x323968: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32396c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x323970: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323970u;
    {
        const bool branch_taken_0x323970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x323970) {
            ctx->pc = 0x323974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323970u;
            // 0x323974: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323988u;
            goto label_323988;
        }
    }
    ctx->pc = 0x323978u;
    // 0x323978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32397c: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x32397Cu;
    SET_GPR_U32(ctx, 31, 0x323984u);
    ctx->pc = 0x323980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32397Cu;
    // 0x323980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x32397Cu, 0x323984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323984u;
label_323984:
    // 0x323984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323988:
    // 0x323988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32398c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x32398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x323990: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323994: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323998: 0x3e00008  jr          $ra
    ctx->pc = 0x323998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323998u;
        // 0x32399c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3239A0u;
}
