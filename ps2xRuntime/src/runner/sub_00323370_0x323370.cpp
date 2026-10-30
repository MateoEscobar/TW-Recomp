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

// Function: sub_00323370
// Address: 0x323370 - 0x3233e0
void sub_00323370_0x323370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323370_0x323370");
#endif

    switch (ctx->pc) {
        case 0x323384u: goto label_323384;
        case 0x3233a0u: goto label_3233a0;
        default: break;
    }

    ctx->pc = 0x323370u;

    // 0x323370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32337c: 0xc0c8ca6  jal         func_323298
    ctx->pc = 0x32337Cu;
    SET_GPR_U32(ctx, 31, 0x323384u);
    ctx->pc = 0x323380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32337Cu;
    // 0x323380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323298u, 0x32337Cu, 0x323384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323384u;
label_323384:
    // 0x323384: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323388: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x323388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x32338c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x32338cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x323390: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x323390u;
    {
        const bool branch_taken_0x323390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x323390) {
            ctx->pc = 0x323394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323390u;
            // 0x323394: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3233C8u;
            goto label_3233c8;
        }
    }
    ctx->pc = 0x323398u;
    // 0x323398: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x323398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32339c: 0x0  nop
    ctx->pc = 0x32339cu;
    // NOP
label_3233a0:
    // 0x3233a0: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x3233a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3233a4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3233a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3233a8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3233a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3233ac: 0xfc82fff8  sd          $v0, -0x8($a0)
    ctx->pc = 0x3233acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U64(ctx, 2));
    // 0x3233b0: 0xfc83fff0  sd          $v1, -0x10($a0)
    ctx->pc = 0x3233b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U64(ctx, 3));
    // 0x3233b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3233b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3233b8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3233b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3233bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3233BCu;
    {
        const bool branch_taken_0x3233bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3233C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233BCu;
        // 0x3233c0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233bc) {
            ctx->pc = 0x3233A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3233a0;
        }
    }
    ctx->pc = 0x3233C4u;
    // 0x3233c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3233c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3233c8:
    // 0x3233c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3233c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3233cc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3233ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3233d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3233d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3233d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3233d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3233d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3233D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3233DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233D8u;
        // 0x3233dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3233D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3233E0u;
}
