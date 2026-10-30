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

// Function: sub_0041AB60
// Address: 0x41ab60 - 0x41abc0
void sub_0041AB60_0x41ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AB60_0x41ab60");
#endif

    switch (ctx->pc) {
        case 0x41ab80u: goto label_41ab80;
        default: break;
    }

    ctx->pc = 0x41ab60u;

    // 0x41ab60: 0x24830220  addiu       $v1, $a0, 0x220
    ctx->pc = 0x41ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x41ab64: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x41ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x41ab68: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x41ab68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x41ab6c: 0x90820220  lbu         $v0, 0x220($a0)
    ctx->pc = 0x41ab6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x41ab70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x41AB70u;
    {
        const bool branch_taken_0x41ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AB70u;
        // 0x41ab74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ab70) {
            ctx->pc = 0x41AB98u;
            goto label_41ab98;
        }
    }
    ctx->pc = 0x41AB78u;
    // 0x41ab78: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x41ab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ab7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x41ab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_41ab80:
    // 0x41ab80: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x41ab80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41ab84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41AB84u;
    {
        const bool branch_taken_0x41ab84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AB84u;
        // 0x41ab88: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ab84) {
            ctx->pc = 0x41ABA4u;
            goto label_41aba4;
        }
    }
    ctx->pc = 0x41AB8Cu;
    // 0x41ab8c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41ab8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41ab90: 0x5060fffb  beql        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x41AB90u;
    {
        const bool branch_taken_0x41ab90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ab90) {
            ctx->pc = 0x41AB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41AB90u;
            // 0x41ab94: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41AB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41ab80;
        }
    }
    ctx->pc = 0x41AB98u;
label_41ab98:
    // 0x41ab98: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x41ab98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41ab9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41AB9Cu;
    {
        const bool branch_taken_0x41ab9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ab9c) {
            ctx->pc = 0x41ABB8u;
            goto label_41abb8;
        }
    }
    ctx->pc = 0x41ABA4u;
label_41aba4:
    // 0x41aba4: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x41aba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x41aba8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x41aba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x41abac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41abacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41abb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41abb4: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x41abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5102CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5102CCu, _value); } while (0); }
label_41abb8:
    // 0x41abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x41ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41ABC0u;
}
