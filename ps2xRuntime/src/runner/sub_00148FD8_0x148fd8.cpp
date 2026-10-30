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

// Function: sub_00148FD8
// Address: 0x148fd8 - 0x149040
void sub_00148FD8_0x148fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148FD8_0x148fd8");
#endif

    switch (ctx->pc) {
        case 0x148fecu: goto label_148fec;
        default: break;
    }

    ctx->pc = 0x148fd8u;

    // 0x148fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148fdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148fe4: 0xc0523f2  jal         func_148FC8
    ctx->pc = 0x148FE4u;
    SET_GPR_U32(ctx, 31, 0x148FECu);
    ctx->pc = 0x148FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FE4u;
    // 0x148fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FC8u, 0x148FE4u, 0x148FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FECu;
label_148fec:
    // 0x148fec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x148fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x148ff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ff4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x148ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x148ff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148FF8u;
    {
        const bool branch_taken_0x148ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FF8u;
        // 0x148ffc: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ff8) {
            ctx->pc = 0x14900Cu;
            goto label_14900c;
        }
    }
    ctx->pc = 0x149000u;
    // 0x149000: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x149000u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x149004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149004u;
    {
        const bool branch_taken_0x149004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149004u;
        // 0x149008: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149004) {
            ctx->pc = 0x149014u;
            goto label_149014;
        }
    }
    ctx->pc = 0x14900Cu;
label_14900c:
    // 0x14900c: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x14900cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x149010: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x149010u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_149014:
    // 0x149014: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x149014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x149018: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x149018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x14901c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x14901cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x149020: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x149020u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x149024: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x149024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x149028: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x149028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14902c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14902cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149034: 0x3e00008  jr          $ra
    ctx->pc = 0x149034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149034u;
        // 0x149038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14903Cu;
    // 0x14903c: 0x0  nop
    ctx->pc = 0x14903cu;
    // NOP
    ctx->pc = 0x149040u;
}
