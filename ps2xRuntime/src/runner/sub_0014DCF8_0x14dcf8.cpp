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

// Function: sub_0014DCF8
// Address: 0x14dcf8 - 0x14dd78
void sub_0014DCF8_0x14dcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DCF8_0x14dcf8");
#endif

    switch (ctx->pc) {
        case 0x14dd20u: goto label_14dd20;
        case 0x14dd2cu: goto label_14dd2c;
        default: break;
    }

    ctx->pc = 0x14dcf8u;

    // 0x14dcf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14dcfc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x14dcfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14dd04: 0x8444c238  lh          $a0, -0x3DC8($v0)
    ctx->pc = 0x14dd04u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x50C238u));
    // 0x14dd08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dd0c: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DD0Cu;
    {
        const bool branch_taken_0x14dd0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD0Cu;
        // 0x14dd10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd0c) {
            ctx->pc = 0x14DD34u;
            goto label_14dd34;
        }
    }
    ctx->pc = 0x14DD14u;
    // 0x14dd14: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14dd18: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DD18u;
    SET_GPR_U32(ctx, 31, 0x14DD20u);
    ctx->pc = 0x14DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD18u;
    // 0x14dd1c: 0x2484b9a8  addiu       $a0, $a0, -0x4658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DD18u, 0x14DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD20u;
label_14dd20:
    // 0x14dd20: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14dd24: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DD24u;
    SET_GPR_U32(ctx, 31, 0x14DD2Cu);
    ctx->pc = 0x14DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD24u;
    // 0x14dd28: 0x2484b978  addiu       $a0, $a0, -0x4688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DD24u, 0x14DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD2Cu;
label_14dd2c:
    // 0x14dd2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14DD2Cu;
    {
        const bool branch_taken_0x14dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD2Cu;
        // 0x14dd30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd2c) {
            ctx->pc = 0x14DD70u;
            goto label_14dd70;
        }
    }
    ctx->pc = 0x14DD34u;
label_14dd34:
    // 0x14dd34: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x14dd34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x14dd38: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14dd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14dd3c: 0x8ce2c4f8  lw          $v0, -0x3B08($a3)
    ctx->pc = 0x14dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C4F8u));
    // 0x14dd40: 0x24a51dc0  addiu       $a1, $a1, 0x1DC0
    ctx->pc = 0x14dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7616));
    // 0x14dd44: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x14dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x14dd48: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14dd4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14dd50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14dd54: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x14dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14dd58: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x14dd58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x14dd5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14dd60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14dd64: 0xa4880000  sh          $t0, 0x0($a0)
    ctx->pc = 0x14dd64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x14dd68: 0xace2c4f8  sw          $v0, -0x3B08($a3)
    ctx->pc = 0x14dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952184), GPR_U32(ctx, 2));
    // 0x14dd6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14dd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14dd70:
    // 0x14dd70: 0x3e00008  jr          $ra
    ctx->pc = 0x14DD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD70u;
        // 0x14dd74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DD78u;
}
