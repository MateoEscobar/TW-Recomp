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

// Function: sub_00166158
// Address: 0x166158 - 0x166220
void sub_00166158_0x166158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166158_0x166158");
#endif

    switch (ctx->pc) {
        case 0x1661a0u: goto label_1661a0;
        case 0x1661a8u: goto label_1661a8;
        case 0x1661b0u: goto label_1661b0;
        case 0x1661c0u: goto label_1661c0;
        case 0x1661f0u: goto label_1661f0;
        default: break;
    }

    ctx->pc = 0x166158u;

    // 0x166158: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16615c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166160: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x166160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x166164: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x166164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x166168: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x166168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16616c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x166170: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x166170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x166174: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x166174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x166178: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x166178u;
    {
        const bool branch_taken_0x166178 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166178u;
        // 0x16617c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166178) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x166180u;
    // 0x166180: 0x24930048  addiu       $s3, $a0, 0x48
    ctx->pc = 0x166180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x166184: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x166184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166188: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x166188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16618c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16618cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166190: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x166190u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x166194: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x166194u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
    // 0x166198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16619c: 0x0  nop
    ctx->pc = 0x16619cu;
    // NOP
label_1661a0:
    // 0x1661a0: 0xc137866  jal         func_4DE198
    ctx->pc = 0x1661A0u;
    SET_GPR_U32(ctx, 31, 0x1661A8u);
    ctx->pc = 0x1661A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661A0u;
    // 0x1661a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x1661A0u, 0x1661A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661A8u;
label_1661a8:
    // 0x1661a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1661A8u;
    SET_GPR_U32(ctx, 31, 0x1661B0u);
    ctx->pc = 0x1661ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661A8u;
    // 0x1661ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1661A8u, 0x1661B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661B0u;
label_1661b0:
    // 0x1661b0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1661B0u;
    {
        const bool branch_taken_0x1661b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661b0) {
            ctx->pc = 0x1661B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1661B0u;
            // 0x1661b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1661D4u;
            goto label_1661d4;
        }
    }
    ctx->pc = 0x1661B8u;
    // 0x1661b8: 0xc089f98  jal         func_227E60
    ctx->pc = 0x1661B8u;
    SET_GPR_U32(ctx, 31, 0x1661C0u);
    ctx->pc = 0x1661BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661B8u;
    // 0x1661bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x1661B8u, 0x1661C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661C0u;
label_1661c0:
    // 0x1661c0: 0x10550003  beq         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1661C0u;
    {
        const bool branch_taken_0x1661c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1661C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661C0u;
        // 0x1661c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661c0) {
            ctx->pc = 0x1661D0u;
            goto label_1661d0;
        }
    }
    ctx->pc = 0x1661C8u;
    // 0x1661c8: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x1661c8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1661cc: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1661ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1661d0:
    // 0x1661d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1661d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1661d4:
    // 0x1661d4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x1661d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1661d8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1661D8u;
    {
        const bool branch_taken_0x1661d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1661d8) {
            ctx->pc = 0x1661DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1661D8u;
            // 0x1661dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1661A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1661a0;
        }
    }
    ctx->pc = 0x1661E0u;
    // 0x1661e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1661E0u;
    {
        const bool branch_taken_0x1661e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661E0u;
        // 0x1661e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661e0) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x1661E8u;
label_1661e8:
    // 0x1661e8: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x1661E8u;
    SET_GPR_U32(ctx, 31, 0x1661F0u);
    ctx->pc = 0x1661ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661E8u;
    // 0x1661ec: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x1661E8u, 0x1661F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661F0u;
label_1661f0:
    // 0x1661f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1661f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1661f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1661f8:
    // 0x1661f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1661f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1661fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1661fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166200: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x166200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166204: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166208: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x166208u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16620c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x16620cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166214: 0x3e00008  jr          $ra
    ctx->pc = 0x166214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166214u;
        // 0x166218: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16621Cu;
    // 0x16621c: 0x0  nop
    ctx->pc = 0x16621cu;
    // NOP
    ctx->pc = 0x166220u;
}
