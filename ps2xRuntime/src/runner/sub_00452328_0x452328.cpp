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

// Function: sub_00452328
// Address: 0x452328 - 0x4523a0
void sub_00452328_0x452328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452328_0x452328");
#endif

    switch (ctx->pc) {
        case 0x452354u: goto label_452354;
        case 0x452368u: goto label_452368;
        default: break;
    }

    ctx->pc = 0x452328u;

    // 0x452328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x452328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45232c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452330: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x452330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x452334: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x452334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x452338: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x452338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x45233c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x45233Cu;
    {
        const bool branch_taken_0x45233c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x452340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45233Cu;
        // 0x452340: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45233c) {
            ctx->pc = 0x45235Cu;
            goto label_45235c;
        }
    }
    ctx->pc = 0x452344u;
    // 0x452344: 0xe20018  mult        $zero, $a3, $v0
    ctx->pc = 0x452344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x452348: 0x3012  mflo        $a2
    ctx->pc = 0x452348u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x45234c: 0xc1142b0  jal         func_450AC0
    ctx->pc = 0x45234Cu;
    SET_GPR_U32(ctx, 31, 0x452354u);
    ctx->pc = 0x450AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450AC0u, 0x45234Cu, 0x452354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452354u;
label_452354:
    // 0x452354: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x452354u;
    {
        const bool branch_taken_0x452354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x452358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452354u;
        // 0x452358: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452354) {
            ctx->pc = 0x452394u;
            goto label_452394;
        }
    }
    ctx->pc = 0x45235Cu;
label_45235c:
    // 0x45235c: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x45235Cu;
    {
        const bool branch_taken_0x45235c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x452360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45235Cu;
        // 0x452360: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45235c) {
            ctx->pc = 0x452394u;
            goto label_452394;
        }
    }
    ctx->pc = 0x452364u;
    // 0x452364: 0x0  nop
    ctx->pc = 0x452364u;
    // NOP
label_452368:
    // 0x452368: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x452368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45236c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45236cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x452370: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x452370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x452374: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x452374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452378: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x452378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45237c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x45237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452380: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x452380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x452384: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x452384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x452388: 0x14e0fff7  bnez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x452388u;
    {
        const bool branch_taken_0x452388 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452388u;
        // 0x45238c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452388) {
            ctx->pc = 0x452368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452368;
        }
    }
    ctx->pc = 0x452390u;
    // 0x452390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_452394:
    // 0x452394: 0x3e00008  jr          $ra
    ctx->pc = 0x452394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452394u;
        // 0x452398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45239Cu;
    // 0x45239c: 0x0  nop
    ctx->pc = 0x45239cu;
    // NOP
    ctx->pc = 0x4523a0u;
}
