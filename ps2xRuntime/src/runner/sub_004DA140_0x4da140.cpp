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

// Function: sub_004DA140
// Address: 0x4da140 - 0x4da198
void sub_004DA140_0x4da140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA140_0x4da140");
#endif

    switch (ctx->pc) {
        case 0x4da158u: goto label_4da158;
        default: break;
    }

    ctx->pc = 0x4da140u;

    // 0x4da140: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x4da140u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4da144: 0x538c3  sra         $a3, $a1, 3
    ctx->pc = 0x4da144u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 3));
    // 0x4da148: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x4da148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4da14c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4DA14Cu;
    {
        const bool branch_taken_0x4da14c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4DA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA14Cu;
        // 0x4da150: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da14c) {
            ctx->pc = 0x4DA18Cu;
            goto label_4da18c;
        }
    }
    ctx->pc = 0x4DA154u;
    // 0x4da154: 0xdcc60000  ld          $a2, 0x0($a2)
    ctx->pc = 0x4da154u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_4da158:
    // 0x4da158: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4da158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4da15c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4da15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4da160: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x4da160u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4da164: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4da164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4da168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DA168u;
    {
        const bool branch_taken_0x4da168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA168u;
        // 0x4da16c: 0xe51023  subu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da168) {
            ctx->pc = 0x4DA17Cu;
            goto label_4da17c;
        }
    }
    ctx->pc = 0x4DA170u;
    // 0x4da170: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x4da170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4da174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4DA174u;
    {
        const bool branch_taken_0x4da174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA174u;
        // 0x4da178: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da174) {
            ctx->pc = 0x4DA180u;
            goto label_4da180;
        }
    }
    ctx->pc = 0x4DA17Cu;
label_4da17c:
    // 0x4da17c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4da17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4da180:
    // 0x4da180: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x4da180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4da184: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4DA184u;
    {
        const bool branch_taken_0x4da184 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4DA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA184u;
        // 0x4da188: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da184) {
            ctx->pc = 0x4DA158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4da158;
        }
    }
    ctx->pc = 0x4DA18Cu;
label_4da18c:
    // 0x4da18c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA18Cu;
        // 0x4da190: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA194u;
    // 0x4da194: 0x0  nop
    ctx->pc = 0x4da194u;
    // NOP
    ctx->pc = 0x4da198u;
}
