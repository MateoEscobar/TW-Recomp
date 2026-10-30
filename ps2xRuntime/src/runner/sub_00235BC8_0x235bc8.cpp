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

// Function: sub_00235BC8
// Address: 0x235bc8 - 0x235c28
void sub_00235BC8_0x235bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235BC8_0x235bc8");
#endif

    switch (ctx->pc) {
        case 0x235be4u: goto label_235be4;
        case 0x235becu: goto label_235bec;
        default: break;
    }

    ctx->pc = 0x235bc8u;

    // 0x235bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235bcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235bd0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235bd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235bdc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235BDCu;
    SET_GPR_U32(ctx, 31, 0x235BE4u);
    ctx->pc = 0x235BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BDCu;
    // 0x235be0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235BDCu, 0x235BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BE4u;
label_235be4:
    // 0x235be4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235BE4u;
    SET_GPR_U32(ctx, 31, 0x235BECu);
    ctx->pc = 0x235BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BE4u;
    // 0x235be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235BE4u, 0x235BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BECu;
label_235bec:
    // 0x235bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bf0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235BF0u;
    {
        const bool branch_taken_0x235bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BF0u;
        // 0x235bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bf0) {
            ctx->pc = 0x235C18u;
            goto label_235c18;
        }
    }
    ctx->pc = 0x235BF8u;
    // 0x235bf8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235BF8u;
    {
        const bool branch_taken_0x235bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BF8u;
        // 0x235bfc: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bf8) {
            ctx->pc = 0x235C0Cu;
            goto label_235c0c;
        }
    }
    ctx->pc = 0x235C00u;
    // 0x235c00: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x235c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x235c04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235C04u;
    {
        const bool branch_taken_0x235c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C04u;
        // 0x235c08: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c04) {
            ctx->pc = 0x235C14u;
            goto label_235c14;
        }
    }
    ctx->pc = 0x235C0Cu;
label_235c0c:
    // 0x235c0c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x235c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x235c10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235c14:
    // 0x235c14: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235c14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_235c18:
    // 0x235c18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c20: 0x3e00008  jr          $ra
    ctx->pc = 0x235C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C20u;
        // 0x235c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235C28u;
}
