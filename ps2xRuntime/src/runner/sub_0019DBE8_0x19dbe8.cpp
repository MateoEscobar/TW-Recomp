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

// Function: sub_0019DBE8
// Address: 0x19dbe8 - 0x19dc50
void sub_0019DBE8_0x19dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DBE8_0x19dbe8");
#endif

    ctx->pc = 0x19dbe8u;

    // 0x19dbe8: 0x8c873314  lw          $a3, 0x3314($a0)
    ctx->pc = 0x19dbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13076)));
    // 0x19dbec: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x19dbecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x19dbf0: 0x8c833310  lw          $v1, 0x3310($a0)
    ctx->pc = 0x19dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13072)));
    // 0x19dbf4: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x19dbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x19dbf8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19dbfc: 0x4e20001  bltzl       $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x19DBFCu;
    {
        const bool branch_taken_0x19dbfc = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x19dbfc) {
            ctx->pc = 0x19DC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DBFCu;
            // 0x19dc00: 0x73823  negu        $a3, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC04u;
            goto label_19dc04;
        }
    }
    ctx->pc = 0x19DC04u;
label_19dc04:
    // 0x19dc04: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x19DC04u;
    {
        const bool branch_taken_0x19dc04 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x19dc04) {
            ctx->pc = 0x19DC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DC04u;
            // 0x19dc08: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC0Cu;
            goto label_19dc0c;
        }
    }
    ctx->pc = 0x19DC0Cu;
label_19dc0c:
    // 0x19dc0c: 0xe73818  mult        $a3, $a3, $a3
    ctx->pc = 0x19dc0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x19dc10: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x19dc10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19dc14: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x19dc14u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dc18: 0x0  nop
    ctx->pc = 0x19dc18u;
    // NOP
    // 0x19dc1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dc1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19dc20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19dc20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dc24: 0x0  nop
    ctx->pc = 0x19dc24u;
    // NOP
    // 0x19dc28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19dc28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19dc2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19dc2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19dc30: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x19dc30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc34: 0x0  nop
    ctx->pc = 0x19dc34u;
    // NOP
    // 0x19dc38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DC38u;
    {
        const bool branch_taken_0x19dc38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC38u;
        // 0x19dc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc38) {
            ctx->pc = 0x19DC44u;
            goto label_19dc44;
        }
    }
    ctx->pc = 0x19DC40u;
    // 0x19dc40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19dc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dc44:
    // 0x19dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DC4Cu;
    // 0x19dc4c: 0x0  nop
    ctx->pc = 0x19dc4cu;
    // NOP
    ctx->pc = 0x19dc50u;
}
