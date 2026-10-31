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

// Function: sub_00331AD4
// Address: 0x331ad4 - 0x331b18
void sub_00331AD4_0x331ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331AD4_0x331ad4");
#endif

    switch (ctx->pc) {
        case 0x331ae0u: goto label_331ae0;
        case 0x331ae8u: goto label_331ae8;
        default: break;
    }

    ctx->pc = 0x331ad4u;

    // 0x331ad4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x331ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x331ad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x331AD8u;
    {
        const bool branch_taken_0x331ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331AD8u;
        // 0x331adc: 0x228c2  srl         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ad8) {
            ctx->pc = 0x331AE8u;
            goto label_331ae8;
        }
    }
    ctx->pc = 0x331AE0u;
label_331ae0:
    // 0x331ae0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x331AE0u;
    {
        const bool branch_taken_0x331ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331AE0u;
        // 0x331ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ae0) {
            ctx->pc = 0x331B04u;
            goto label_331b04;
        }
    }
    ctx->pc = 0x331AE8u;
label_331ae8:
    // 0x331ae8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x331ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x331aec: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x331aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x331af0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x331af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331af4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x331af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x331af8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x331af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x331afc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x331afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x331b00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x331b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_331b04:
    // 0x331b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x331b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x331B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B0Cu;
        // 0x331b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331B14u;
    // 0x331b14: 0x0  nop
    ctx->pc = 0x331b14u;
    // NOP
    ctx->pc = 0x331b18u;
}
