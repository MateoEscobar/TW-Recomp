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

// Function: sub_00274E38
// Address: 0x274e38 - 0x274ee0
void sub_00274E38_0x274e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274E38_0x274e38");
#endif

    ctx->pc = 0x274e38u;

    // 0x274e38: 0x8c850508  lw          $a1, 0x508($a0)
    ctx->pc = 0x274e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1288)));
    // 0x274e3c: 0x8c820264  lw          $v0, 0x264($a0)
    ctx->pc = 0x274e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x274e40: 0x8c860268  lw          $a2, 0x268($a0)
    ctx->pc = 0x274e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x274e44: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x274e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x274e48: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x274e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x274e4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x274E4Cu;
    {
        const bool branch_taken_0x274e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e4c) {
            ctx->pc = 0x274E64u;
            goto label_274e64;
        }
    }
    ctx->pc = 0x274E54u;
    // 0x274e54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274e58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x274E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274E64u;
label_274e64:
    // 0x274e64: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x274E64u;
    {
        const bool branch_taken_0x274e64 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x274E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E64u;
        // 0x274e68: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e64) {
            ctx->pc = 0x274E80u;
            goto label_274e80;
        }
    }
    ctx->pc = 0x274E6Cu;
    // 0x274e6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x274e6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274e70: 0x0  nop
    ctx->pc = 0x274e70u;
    // NOP
    // 0x274e74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274e78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274E78u;
    {
        const bool branch_taken_0x274e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e78) {
            ctx->pc = 0x274E98u;
            goto label_274e98;
        }
    }
    ctx->pc = 0x274E80u;
label_274e80:
    // 0x274e80: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x274e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x274e84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x274e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x274e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274e8c: 0x0  nop
    ctx->pc = 0x274e8cu;
    // NOP
    // 0x274e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274e94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x274e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_274e98:
    // 0x274e98: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x274E98u;
    {
        const bool branch_taken_0x274e98 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x274E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E98u;
        // 0x274e9c: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e98) {
            ctx->pc = 0x274EB4u;
            goto label_274eb4;
        }
    }
    ctx->pc = 0x274EA0u;
    // 0x274ea0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x274ea0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274ea4: 0x0  nop
    ctx->pc = 0x274ea4u;
    // NOP
    // 0x274ea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x274ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274eac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274EACu;
    {
        const bool branch_taken_0x274eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274eac) {
            ctx->pc = 0x274ECCu;
            goto label_274ecc;
        }
    }
    ctx->pc = 0x274EB4u;
label_274eb4:
    // 0x274eb4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x274eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x274eb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x274eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x274ebc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274ec0: 0x0  nop
    ctx->pc = 0x274ec0u;
    // NOP
    // 0x274ec4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x274ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274ec8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x274ec8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_274ecc:
    // 0x274ecc: 0x0  nop
    ctx->pc = 0x274eccu;
    // NOP
    // 0x274ed0: 0x0  nop
    ctx->pc = 0x274ed0u;
    // NOP
    // 0x274ed4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x274ed4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x274ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x274ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274EE0u;
}
