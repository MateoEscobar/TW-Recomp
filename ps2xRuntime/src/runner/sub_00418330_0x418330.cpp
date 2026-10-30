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

// Function: sub_00418330
// Address: 0x418330 - 0x418398
void sub_00418330_0x418330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418330_0x418330");
#endif

    switch (ctx->pc) {
        case 0x418358u: goto label_418358;
        default: break;
    }

    ctx->pc = 0x418330u;

    // 0x418330: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x418330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x418334: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x418334u;
    {
        const bool branch_taken_0x418334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x418338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418334u;
        // 0x418338: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418334) {
            ctx->pc = 0x418350u;
            goto label_418350;
        }
    }
    ctx->pc = 0x41833Cu;
    // 0x41833c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x41833cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x418340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x418340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x418344: 0x28430015  slti        $v1, $v0, 0x15
    ctx->pc = 0x418344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x418348: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x418348u;
    {
        const bool branch_taken_0x418348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x418348) {
            ctx->pc = 0x41834Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418348u;
            // 0x41834c: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418350u;
            goto label_418350;
        }
    }
    ctx->pc = 0x418350u;
label_418350:
    // 0x418350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418354: 0x0  nop
    ctx->pc = 0x418354u;
    // NOP
label_418358:
    // 0x418358: 0x50c50007  beql        $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x418358u;
    {
        const bool branch_taken_0x418358 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x418358) {
            ctx->pc = 0x41835Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418358u;
            // 0x41835c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418378u;
            goto label_418378;
        }
    }
    ctx->pc = 0x418360u;
    // 0x418360: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x418360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x418364: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x418364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x418368: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x418368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x41836c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x41836Cu;
    {
        const bool branch_taken_0x41836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41836c) {
            ctx->pc = 0x418370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41836Cu;
            // 0x418370: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418374u;
            goto label_418374;
        }
    }
    ctx->pc = 0x418374u;
label_418374:
    // 0x418374: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x418374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_418378:
    // 0x418378: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x418378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41837c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x41837Cu;
    {
        const bool branch_taken_0x41837c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41837Cu;
        // 0x418380: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41837c) {
            ctx->pc = 0x418358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418358;
        }
    }
    ctx->pc = 0x418384u;
    // 0x418384: 0x3e00008  jr          $ra
    ctx->pc = 0x418384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41838Cu;
    // 0x41838c: 0x0  nop
    ctx->pc = 0x41838cu;
    // NOP
    // 0x418390: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x418390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x418394: 0x0  nop
    ctx->pc = 0x418394u;
    // NOP
    ctx->pc = 0x418398u;
}
