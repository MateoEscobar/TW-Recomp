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

// Function: sub_00435F60
// Address: 0x435f60 - 0x435fd8
void sub_00435F60_0x435f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435F60_0x435f60");
#endif

    switch (ctx->pc) {
        case 0x435f78u: goto label_435f78;
        case 0x435fa8u: goto label_435fa8;
        default: break;
    }

    ctx->pc = 0x435f60u;

    // 0x435f60: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x435f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435f64: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x435f64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x435f68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x435F68u;
    {
        const bool branch_taken_0x435f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435F68u;
        // 0x435f6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435f68) {
            ctx->pc = 0x435F90u;
            goto label_435f90;
        }
    }
    ctx->pc = 0x435F70u;
    // 0x435f70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x435f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x435f74: 0x0  nop
    ctx->pc = 0x435f74u;
    // NOP
label_435f78:
    // 0x435f78: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x435f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x435f7c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x435f7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x435f80: 0x0  nop
    ctx->pc = 0x435f80u;
    // NOP
    // 0x435f84: 0x0  nop
    ctx->pc = 0x435f84u;
    // NOP
    // 0x435f88: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x435F88u;
    {
        const bool branch_taken_0x435f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x435f88) {
            ctx->pc = 0x435F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435F88u;
            // 0x435f8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435f78;
        }
    }
    ctx->pc = 0x435F90u;
label_435f90:
    // 0x435f90: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x435f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x435f94: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x435F94u;
    {
        const bool branch_taken_0x435f94 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x435F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435F94u;
        // 0x435f98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435f94) {
            ctx->pc = 0x435FD0u;
            goto label_435fd0;
        }
    }
    ctx->pc = 0x435F9Cu;
    // 0x435f9c: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x435f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x435fa0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x435fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435fa4: 0x0  nop
    ctx->pc = 0x435fa4u;
    // NOP
label_435fa8:
    // 0x435fa8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x435fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x435fac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x435facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x435fb0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x435fb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x435fb4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x435fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x435fb8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x435fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x435fbc: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x435fbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x435fc0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x435fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x435fc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x435fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x435fc8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x435FC8u;
    {
        const bool branch_taken_0x435fc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x435FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435FC8u;
        // 0x435fcc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435fc8) {
            ctx->pc = 0x435FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435fa8;
        }
    }
    ctx->pc = 0x435FD0u;
label_435fd0:
    // 0x435fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x435FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435FD0u;
        // 0x435fd4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435FD8u;
}
