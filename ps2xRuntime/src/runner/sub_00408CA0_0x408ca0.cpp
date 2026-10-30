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

// Function: sub_00408CA0
// Address: 0x408ca0 - 0x408d20
void sub_00408CA0_0x408ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408CA0_0x408ca0");
#endif

    switch (ctx->pc) {
        case 0x408cbcu: goto label_408cbc;
        case 0x408cd0u: goto label_408cd0;
        case 0x408ce4u: goto label_408ce4;
        case 0x408cf8u: goto label_408cf8;
        case 0x408d08u: goto label_408d08;
        default: break;
    }

    ctx->pc = 0x408ca0u;

    // 0x408ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x408ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x408ca4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x408ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x408ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x408ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x408cac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x408cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x408cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408cb4: 0xc10314e  jal         func_40C538
    ctx->pc = 0x408CB4u;
    SET_GPR_U32(ctx, 31, 0x408CBCu);
    ctx->pc = 0x408CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408CB4u;
    // 0x408cb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x408CB4u, 0x408CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408CBCu;
label_408cbc:
    // 0x408cbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x408CBCu;
    {
        const bool branch_taken_0x408cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x408CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408CBCu;
        // 0x408cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408cbc) {
            ctx->pc = 0x408CD8u;
            goto label_408cd8;
        }
    }
    ctx->pc = 0x408CC4u;
    // 0x408cc4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x408cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x408cc8: 0xc10241a  jal         func_409068
    ctx->pc = 0x408CC8u;
    SET_GPR_U32(ctx, 31, 0x408CD0u);
    ctx->pc = 0x408CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408CC8u;
    // 0x408ccc: 0x24a57e20  addiu       $a1, $a1, 0x7E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x408CC8u, 0x408CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408CD0u;
label_408cd0:
    // 0x408cd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x408CD0u;
    {
        const bool branch_taken_0x408cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408CD0u;
        // 0x408cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408cd0) {
            ctx->pc = 0x408D0Cu;
            goto label_408d0c;
        }
    }
    ctx->pc = 0x408CD8u;
label_408cd8:
    // 0x408cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x408cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x408cdc: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408CDCu;
    SET_GPR_U32(ctx, 31, 0x408CE4u);
    ctx->pc = 0x408CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408CDCu;
    // 0x408ce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408CDCu, 0x408CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408CE4u;
label_408ce4:
    // 0x408ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x408ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408cec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408cf0: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408CF0u;
    SET_GPR_U32(ctx, 31, 0x408CF8u);
    ctx->pc = 0x408CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408CF0u;
    // 0x408cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408CF0u, 0x408CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408CF8u;
label_408cf8:
    // 0x408cf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x408cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408d00: 0xc102622  jal         func_409888
    ctx->pc = 0x408D00u;
    SET_GPR_U32(ctx, 31, 0x408D08u);
    ctx->pc = 0x408D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408D00u;
    // 0x408d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409888u, 0x408D00u, 0x408D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408D08u;
label_408d08:
    // 0x408d08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x408d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408d0c:
    // 0x408d0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x408d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x408d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x408d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408d18: 0x3e00008  jr          $ra
    ctx->pc = 0x408D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408D18u;
        // 0x408d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408D20u;
}
