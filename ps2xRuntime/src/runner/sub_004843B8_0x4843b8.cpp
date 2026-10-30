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

// Function: sub_004843B8
// Address: 0x4843b8 - 0x484448
void sub_004843B8_0x4843b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004843B8_0x4843b8");
#endif

    switch (ctx->pc) {
        case 0x4843f0u: goto label_4843f0;
        case 0x4843f8u: goto label_4843f8;
        case 0x484418u: goto label_484418;
        case 0x484420u: goto label_484420;
        default: break;
    }

    ctx->pc = 0x4843b8u;

    // 0x4843b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4843b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4843bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4843bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4843c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4843c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4843c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4843c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4843c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4843c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4843cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4843ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4843d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4843d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4843d4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4843D4u;
    {
        const bool branch_taken_0x4843d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4843D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4843D4u;
        // 0x4843d8: 0x8e300098  lw          $s0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4843d4) {
            ctx->pc = 0x48440Cu;
            goto label_48440c;
        }
    }
    ctx->pc = 0x4843DCu;
    // 0x4843dc: 0x8cb200a0  lw          $s2, 0xA0($a1)
    ctx->pc = 0x4843dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x4843e0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4843E0u;
    {
        const bool branch_taken_0x4843e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4843E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4843E0u;
        // 0x4843e4: 0xae3200a0  sw          $s2, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4843e0) {
            ctx->pc = 0x48442Cu;
            goto label_48442c;
        }
    }
    ctx->pc = 0x4843E8u;
    // 0x4843e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4843e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4843ec: 0x0  nop
    ctx->pc = 0x4843ecu;
    // NOP
label_4843f0:
    // 0x4843f0: 0xc12114e  jal         func_484538
    ctx->pc = 0x4843F0u;
    SET_GPR_U32(ctx, 31, 0x4843F8u);
    ctx->pc = 0x4843F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4843F0u;
    // 0x4843f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484538u, 0x4843F0u, 0x4843F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4843F8u;
label_4843f8:
    // 0x4843f8: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x4843f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x4843fc: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4843FCu;
    {
        const bool branch_taken_0x4843fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x484400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4843FCu;
        // 0x484400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4843fc) {
            ctx->pc = 0x4843F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4843f0;
        }
    }
    ctx->pc = 0x484404u;
    // 0x484404: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x484404u;
    {
        const bool branch_taken_0x484404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484404u;
        // 0x484408: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484404) {
            ctx->pc = 0x484430u;
            goto label_484430;
        }
    }
    ctx->pc = 0x48440Cu;
label_48440c:
    // 0x48440c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48440Cu;
    {
        const bool branch_taken_0x48440c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x484410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48440Cu;
        // 0x484410: 0xae3100a0  sw          $s1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48440c) {
            ctx->pc = 0x48442Cu;
            goto label_48442c;
        }
    }
    ctx->pc = 0x484414u;
    // 0x484414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484418:
    // 0x484418: 0xc12114e  jal         func_484538
    ctx->pc = 0x484418u;
    SET_GPR_U32(ctx, 31, 0x484420u);
    ctx->pc = 0x48441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484418u;
    // 0x48441c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484538u, 0x484418u, 0x484420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484420u;
label_484420:
    // 0x484420: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x484420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x484424: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x484424u;
    {
        const bool branch_taken_0x484424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x484428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484424u;
        // 0x484428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484424) {
            ctx->pc = 0x484418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484418;
        }
    }
    ctx->pc = 0x48442Cu;
label_48442c:
    // 0x48442c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48442cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_484430:
    // 0x484430: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x484430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x484434: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x484434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x484438: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x484438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48443c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484440: 0x3e00008  jr          $ra
    ctx->pc = 0x484440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484440u;
        // 0x484444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484448u;
}
