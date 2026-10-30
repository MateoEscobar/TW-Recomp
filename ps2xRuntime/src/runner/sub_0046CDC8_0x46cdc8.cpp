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

// Function: sub_0046CDC8
// Address: 0x46cdc8 - 0x46ce38
void sub_0046CDC8_0x46cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CDC8_0x46cdc8");
#endif

    switch (ctx->pc) {
        case 0x46cdecu: goto label_46cdec;
        case 0x46ce14u: goto label_46ce14;
        default: break;
    }

    ctx->pc = 0x46cdc8u;

    // 0x46cdc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46cdcc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46cdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46cdd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46cdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x46cdd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46cdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46cdd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x46cdd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46cde0: 0x278588e0  addiu       $a1, $gp, -0x7720
    ctx->pc = 0x46cde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936800));
    // 0x46cde4: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x46CDE4u;
    SET_GPR_U32(ctx, 31, 0x46CDECu);
    ctx->pc = 0x46CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CDE4u;
    // 0x46cde8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46CDE4u, 0x46CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CDECu;
label_46cdec:
    // 0x46cdec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46CDECu;
    {
        const bool branch_taken_0x46cdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CDECu;
        // 0x46cdf0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cdec) {
            ctx->pc = 0x46CDFCu;
            goto label_46cdfc;
        }
    }
    ctx->pc = 0x46CDF4u;
    // 0x46cdf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x46CDF4u;
    {
        const bool branch_taken_0x46cdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CDF4u;
        // 0x46cdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cdf4) {
            ctx->pc = 0x46CE24u;
            goto label_46ce24;
        }
    }
    ctx->pc = 0x46CDFCu;
label_46cdfc:
    // 0x46cdfc: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x46CDFCu;
    {
        const bool branch_taken_0x46cdfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x46cdfc) {
            ctx->pc = 0x46CE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46CDFCu;
            // 0x46ce00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46CE24u;
            goto label_46ce24;
        }
    }
    ctx->pc = 0x46CE04u;
    // 0x46ce04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46ce04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ce08: 0x278588e4  addiu       $a1, $gp, -0x771C
    ctx->pc = 0x46ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936804));
    // 0x46ce0c: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x46CE0Cu;
    SET_GPR_U32(ctx, 31, 0x46CE14u);
    ctx->pc = 0x46CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CE0Cu;
    // 0x46ce10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46CE0Cu, 0x46CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CE14u;
label_46ce14:
    // 0x46ce14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x46ce14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ce18: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x46CE18u;
    {
        const bool branch_taken_0x46ce18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CE18u;
        // 0x46ce1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ce18) {
            ctx->pc = 0x46CE24u;
            goto label_46ce24;
        }
    }
    ctx->pc = 0x46CE20u;
    // 0x46ce20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46ce20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46ce24:
    // 0x46ce24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46ce24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ce28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46ce28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ce2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ce2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ce30: 0x3e00008  jr          $ra
    ctx->pc = 0x46CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CE30u;
        // 0x46ce34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CE38u;
}
