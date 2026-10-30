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

// Function: sub_00435C40
// Address: 0x435c40 - 0x435cb0
void sub_00435C40_0x435c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435C40_0x435c40");
#endif

    switch (ctx->pc) {
        case 0x435c50u: goto label_435c50;
        case 0x435c70u: goto label_435c70;
        default: break;
    }

    ctx->pc = 0x435c40u;

    // 0x435c40: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435c40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435c44: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x435c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435c48: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x435C48u;
    {
        const bool branch_taken_0x435c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435C48u;
        // 0x435c4c: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c48) {
            ctx->pc = 0x435CA4u;
            goto label_435ca4;
        }
    }
    ctx->pc = 0x435C50u;
label_435c50:
    // 0x435c50: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x435c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435c54: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x435c54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x435c58: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x435C58u;
    {
        const bool branch_taken_0x435c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x435C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435C58u;
        // 0x435c5c: 0x71600  sll         $v0, $a3, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c58) {
            ctx->pc = 0x435C94u;
            goto label_435c94;
        }
    }
    ctx->pc = 0x435C60u;
    // 0x435c60: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x435c60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x435c64: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x435C64u;
    {
        const bool branch_taken_0x435c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x435c64) {
            ctx->pc = 0x435C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435C64u;
            // 0x435c68: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435C8Cu;
            goto label_435c8c;
        }
    }
    ctx->pc = 0x435C6Cu;
    // 0x435c6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x435c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_435c70:
    // 0x435c70: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x435c70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x435c74: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x435C74u;
    {
        const bool branch_taken_0x435c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x435c74) {
            ctx->pc = 0x435C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435C74u;
            // 0x435c78: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435C98u;
            goto label_435c98;
        }
    }
    ctx->pc = 0x435C7Cu;
    // 0x435c7c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435c80: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x435C80u;
    {
        const bool branch_taken_0x435c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x435c80) {
            ctx->pc = 0x435C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435C80u;
            // 0x435c84: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435c70;
        }
    }
    ctx->pc = 0x435C88u;
    // 0x435c88: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x435c88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_435c8c:
    // 0x435c8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x435C8Cu;
    {
        const bool branch_taken_0x435c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x435c8c) {
            ctx->pc = 0x435CA4u;
            goto label_435ca4;
        }
    }
    ctx->pc = 0x435C94u;
label_435c94:
    // 0x435c94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x435c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_435c98:
    // 0x435c98: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435c9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x435C9Cu;
    {
        const bool branch_taken_0x435c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435C9Cu;
        // 0x435ca0: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c9c) {
            ctx->pc = 0x435C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435c50;
        }
    }
    ctx->pc = 0x435CA4u;
label_435ca4:
    // 0x435ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x435CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435CA4u;
        // 0x435ca8: 0x881023  subu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435CACu;
    // 0x435cac: 0x0  nop
    ctx->pc = 0x435cacu;
    // NOP
    ctx->pc = 0x435cb0u;
}
