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

// Function: sub_00143EA0
// Address: 0x143ea0 - 0x143f00
void sub_00143EA0_0x143ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143EA0_0x143ea0");
#endif

    switch (ctx->pc) {
        case 0x143eb0u: goto label_143eb0;
        case 0x143ec8u: goto label_143ec8;
        default: break;
    }

    ctx->pc = 0x143ea0u;

    // 0x143ea0: 0x3c08edb8  lui         $t0, 0xEDB8
    ctx->pc = 0x143ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60856 << 16));
    // 0x143ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ea8: 0x35088320  ori         $t0, $t0, 0x8320
    ctx->pc = 0x143ea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)33568);
    // 0x143eac: 0x0  nop
    ctx->pc = 0x143eacu;
    // NOP
label_143eb0:
    // 0x143eb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x143eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143eb4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x143eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x143eb8: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x143eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x143ebc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x143ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143ec0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x143ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x143ec4: 0x0  nop
    ctx->pc = 0x143ec4u;
    // NOP
label_143ec8:
    // 0x143ec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143EC8u;
    {
        const bool branch_taken_0x143ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC8u;
        // 0x143ecc: 0x51042  srl         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ec8) {
            ctx->pc = 0x143ED8u;
            goto label_143ed8;
        }
    }
    ctx->pc = 0x143ED0u;
    // 0x143ed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143ED0u;
    {
        const bool branch_taken_0x143ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143ED0u;
        // 0x143ed4: 0x482826  xor         $a1, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ed0) {
            ctx->pc = 0x143EDCu;
            goto label_143edc;
        }
    }
    ctx->pc = 0x143ED8u;
label_143ed8:
    // 0x143ed8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x143ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_143edc:
    // 0x143edc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x143edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x143ee0: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x143EE0u;
    {
        const bool branch_taken_0x143ee0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x143EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EE0u;
        // 0x143ee4: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ee0) {
            ctx->pc = 0x143EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143ec8;
        }
    }
    ctx->pc = 0x143EE8u;
    // 0x143ee8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x143ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x143eec: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x143eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x143ef0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x143EF0u;
    {
        const bool branch_taken_0x143ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EF0u;
        // 0x143ef4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ef0) {
            ctx->pc = 0x143EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143eb0;
        }
    }
    ctx->pc = 0x143EF8u;
    // 0x143ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x143EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EF8u;
        // 0x143efc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143F00u;
}
