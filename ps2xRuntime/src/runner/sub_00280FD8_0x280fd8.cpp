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

// Function: sub_00280FD8
// Address: 0x280fd8 - 0x281048
void sub_00280FD8_0x280fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FD8_0x280fd8");
#endif

    switch (ctx->pc) {
        case 0x280ffcu: goto label_280ffc;
        default: break;
    }

    ctx->pc = 0x280fd8u;

    // 0x280fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280fdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x280fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x280fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280fe4: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x280fe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x280fe8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x280fe8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x280fec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x280FECu;
    {
        const bool branch_taken_0x280fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FECu;
        // 0x280ff0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fec) {
            ctx->pc = 0x281034u;
            goto label_281034;
        }
    }
    ctx->pc = 0x280FF4u;
    // 0x280ff4: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x280FF4u;
    SET_GPR_U32(ctx, 31, 0x280FFCu);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x280FF4u, 0x280FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FFCu;
label_280ffc:
    // 0x280ffc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281004: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x281004u;
    {
        const bool branch_taken_0x281004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281004u;
        // 0x281008: 0xa0a2004d  sb          $v0, 0x4D($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281004) {
            ctx->pc = 0x281030u;
            goto label_281030;
        }
    }
    ctx->pc = 0x28100Cu;
    // 0x28100c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x281010: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x281010u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x281014: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x281014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x281018: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x281018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28101c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28101Cu;
    {
        const bool branch_taken_0x28101c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28101Cu;
        // 0x281020: 0xaca30050  sw          $v1, 0x50($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28101c) {
            ctx->pc = 0x281034u;
            goto label_281034;
        }
    }
    ctx->pc = 0x281024u;
    // 0x281024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281028: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281028u;
    {
        const bool branch_taken_0x281028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281028u;
        // 0x28102c: 0xaca20050  sw          $v0, 0x50($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281028) {
            ctx->pc = 0x281034u;
            goto label_281034;
        }
    }
    ctx->pc = 0x281030u;
label_281030:
    // 0x281030: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x281030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
label_281034:
    // 0x281034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28103c: 0x3e00008  jr          $ra
    ctx->pc = 0x28103Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28103Cu;
        // 0x281040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28103Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281044u;
    // 0x281044: 0x0  nop
    ctx->pc = 0x281044u;
    // NOP
    ctx->pc = 0x281048u;
}
