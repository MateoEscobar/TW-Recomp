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

// Function: sub_00331BA8
// Address: 0x331ba8 - 0x331c40
void sub_00331BA8_0x331ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331BA8_0x331ba8");
#endif

    switch (ctx->pc) {
        case 0x331bccu: goto label_331bcc;
        case 0x331bf0u: goto label_331bf0;
        case 0x331c04u: goto label_331c04;
        default: break;
    }

    ctx->pc = 0x331ba8u;

    // 0x331ba8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331bac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x331bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x331bb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x331bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x331bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331bb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x331bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331bbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x331bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x331bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331bc4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x331BC4u;
    SET_GPR_U32(ctx, 31, 0x331BCCu);
    ctx->pc = 0x331BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331BC4u;
    // 0x331bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x331BC4u, 0x331BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331BCCu;
label_331bcc:
    // 0x331bcc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x331bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331bd0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x331bd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x331bd4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x331bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x331bd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x331bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331bdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x331bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x331be0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x331be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x331be4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x331be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x331be8: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x331be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x331bec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x331becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_331bf0:
    // 0x331bf0: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x331BF0u;
    {
        const bool branch_taken_0x331bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x331bf0) {
            ctx->pc = 0x331BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331BF0u;
            // 0x331bf4: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331C14u;
            goto label_331c14;
        }
    }
    ctx->pc = 0x331BF8u;
    // 0x331bf8: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x331bf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331bfc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x331BFCu;
    SET_GPR_U32(ctx, 31, 0x331C04u);
    ctx->pc = 0x331C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331BFCu;
    // 0x331c00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x331BFCu, 0x331C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C04u;
label_331c04:
    // 0x331c04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x331C04u;
    {
        const bool branch_taken_0x331c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331c04) {
            ctx->pc = 0x331C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331C04u;
            // 0x331c08: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331C14u;
            goto label_331c14;
        }
    }
    ctx->pc = 0x331C0Cu;
    // 0x331c0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x331C0Cu;
    {
        const bool branch_taken_0x331c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C0Cu;
        // 0x331c10: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331c0c) {
            ctx->pc = 0x331C24u;
            goto label_331c24;
        }
    }
    ctx->pc = 0x331C14u;
label_331c14:
    // 0x331c14: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x331C14u;
    {
        const bool branch_taken_0x331c14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x331c14) {
            ctx->pc = 0x331C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331C14u;
            // 0x331c18: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331bf0;
        }
    }
    ctx->pc = 0x331C1Cu;
    // 0x331c1c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x331c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x331c20: 0x24425af0  addiu       $v0, $v0, 0x5AF0
    ctx->pc = 0x331c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23280));
label_331c24:
    // 0x331c24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x331c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331c28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x331c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331c2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x331c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331c34: 0x3e00008  jr          $ra
    ctx->pc = 0x331C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C34u;
        // 0x331c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331C3Cu;
    // 0x331c3c: 0x0  nop
    ctx->pc = 0x331c3cu;
    // NOP
    ctx->pc = 0x331c40u;
}
