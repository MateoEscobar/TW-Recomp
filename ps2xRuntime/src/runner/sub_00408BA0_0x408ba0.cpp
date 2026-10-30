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

// Function: sub_00408BA0
// Address: 0x408ba0 - 0x408c20
void sub_00408BA0_0x408ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408BA0_0x408ba0");
#endif

    switch (ctx->pc) {
        case 0x408bbcu: goto label_408bbc;
        case 0x408bd0u: goto label_408bd0;
        case 0x408be4u: goto label_408be4;
        case 0x408bf8u: goto label_408bf8;
        case 0x408c08u: goto label_408c08;
        default: break;
    }

    ctx->pc = 0x408ba0u;

    // 0x408ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x408ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x408ba4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x408ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x408ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x408ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x408bac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x408bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x408bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408bb4: 0xc10314e  jal         func_40C538
    ctx->pc = 0x408BB4u;
    SET_GPR_U32(ctx, 31, 0x408BBCu);
    ctx->pc = 0x408BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408BB4u;
    // 0x408bb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x408BB4u, 0x408BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408BBCu;
label_408bbc:
    // 0x408bbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x408BBCu;
    {
        const bool branch_taken_0x408bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x408BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408BBCu;
        // 0x408bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408bbc) {
            ctx->pc = 0x408BD8u;
            goto label_408bd8;
        }
    }
    ctx->pc = 0x408BC4u;
    // 0x408bc4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x408bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x408bc8: 0xc10241a  jal         func_409068
    ctx->pc = 0x408BC8u;
    SET_GPR_U32(ctx, 31, 0x408BD0u);
    ctx->pc = 0x408BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408BC8u;
    // 0x408bcc: 0x24a57de0  addiu       $a1, $a1, 0x7DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x408BC8u, 0x408BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408BD0u;
label_408bd0:
    // 0x408bd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x408BD0u;
    {
        const bool branch_taken_0x408bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408BD0u;
        // 0x408bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408bd0) {
            ctx->pc = 0x408C0Cu;
            goto label_408c0c;
        }
    }
    ctx->pc = 0x408BD8u;
label_408bd8:
    // 0x408bd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x408bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x408bdc: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408BDCu;
    SET_GPR_U32(ctx, 31, 0x408BE4u);
    ctx->pc = 0x408BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408BDCu;
    // 0x408be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408BDCu, 0x408BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408BE4u;
label_408be4:
    // 0x408be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x408be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408bec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408bf0: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408BF0u;
    SET_GPR_U32(ctx, 31, 0x408BF8u);
    ctx->pc = 0x408BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408BF0u;
    // 0x408bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408BF0u, 0x408BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408BF8u;
label_408bf8:
    // 0x408bf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x408bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408c00: 0xc10267a  jal         func_4099E8
    ctx->pc = 0x408C00u;
    SET_GPR_U32(ctx, 31, 0x408C08u);
    ctx->pc = 0x408C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408C00u;
    // 0x408c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4099E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4099E8u, 0x408C00u, 0x408C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408C08u;
label_408c08:
    // 0x408c08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x408c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408c0c:
    // 0x408c0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x408c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x408c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x408c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408c18: 0x3e00008  jr          $ra
    ctx->pc = 0x408C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C18u;
        // 0x408c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408C20u;
}
