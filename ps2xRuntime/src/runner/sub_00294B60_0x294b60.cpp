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

// Function: sub_00294B60
// Address: 0x294b60 - 0x294bf8
void sub_00294B60_0x294b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294B60_0x294b60");
#endif

    switch (ctx->pc) {
        case 0x294b80u: goto label_294b80;
        case 0x294b90u: goto label_294b90;
        case 0x294bc8u: goto label_294bc8;
        default: break;
    }

    ctx->pc = 0x294b60u;

    // 0x294b60: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x294b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
    // 0x294b64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x294b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b68: 0xa0800271  sb          $zero, 0x271($a0)
    ctx->pc = 0x294b68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 625), (uint8_t)GPR_U32(ctx, 0));
    // 0x294b6c: 0x2487024c  addiu       $a3, $a0, 0x24C
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 588));
    // 0x294b70: 0xa0800272  sb          $zero, 0x272($a0)
    ctx->pc = 0x294b70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 626), (uint8_t)GPR_U32(ctx, 0));
    // 0x294b74: 0x248801b4  addiu       $t0, $a0, 0x1B4
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 436));
    // 0x294b78: 0xa0800273  sb          $zero, 0x273($a0)
    ctx->pc = 0x294b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 627), (uint8_t)GPR_U32(ctx, 0));
    // 0x294b7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x294b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_294b80:
    // 0x294b80: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x294b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b8c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x294b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_294b90:
    // 0x294b90: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x294b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x294b94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x294b98: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x294b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x294b9c: 0x0  nop
    ctx->pc = 0x294b9cu;
    // NOP
    // 0x294ba0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294BA0u;
    {
        const bool branch_taken_0x294ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BA0u;
        // 0x294ba4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ba0) {
            ctx->pc = 0x294B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294b90;
        }
    }
    ctx->pc = 0x294BA8u;
    // 0x294ba8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x294ba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294bac: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x294bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x294bb0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x294BB0u;
    {
        const bool branch_taken_0x294bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BB0u;
        // 0x294bb4: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bb0) {
            ctx->pc = 0x294B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294b80;
        }
    }
    ctx->pc = 0x294BB8u;
    // 0x294bb8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x294bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294bbc: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x294bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x294bc0: 0x24a7006c  addiu       $a3, $a1, 0x6C
    ctx->pc = 0x294bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
    // 0x294bc4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x294bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_294bc8:
    // 0x294bc8: 0x8cc2bd30  lw          $v0, -0x42D0($a2)
    ctx->pc = 0x294bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
    // 0x294bcc: 0xac8201b8  sw          $v0, 0x1B8($a0)
    ctx->pc = 0x294bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 2));
    // 0x294bd0: 0x8cc3bd30  lw          $v1, -0x42D0($a2)
    ctx->pc = 0x294bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
    // 0x294bd4: 0xac8301b0  sw          $v1, 0x1B0($a0)
    ctx->pc = 0x294bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 3));
    // 0x294bd8: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x294bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x294bdc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x294bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x294be0: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x294be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x294be4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x294BE4u;
    {
        const bool branch_taken_0x294be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BE4u;
        // 0x294be8: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294be4) {
            ctx->pc = 0x294BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294bc8;
        }
    }
    ctx->pc = 0x294BECu;
    // 0x294bec: 0x3e00008  jr          $ra
    ctx->pc = 0x294BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294BF4u;
    // 0x294bf4: 0x0  nop
    ctx->pc = 0x294bf4u;
    // NOP
    ctx->pc = 0x294bf8u;
}
