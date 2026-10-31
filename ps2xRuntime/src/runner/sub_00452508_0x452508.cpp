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

// Function: sub_00452508
// Address: 0x452508 - 0x452590
void sub_00452508_0x452508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452508_0x452508");
#endif

    switch (ctx->pc) {
        case 0x452538u: goto label_452538;
        case 0x452550u: goto label_452550;
        default: break;
    }

    ctx->pc = 0x452508u;

    // 0x452508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x452508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45250c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x45250cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452514: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x452514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x452518: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x452518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x45251c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x452520: 0x14670007  bne         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x452520u;
    {
        const bool branch_taken_0x452520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x452524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452520u;
        // 0x452524: 0x8cc5003c  lw          $a1, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452520) {
            ctx->pc = 0x452540u;
            goto label_452540;
        }
    }
    ctx->pc = 0x452528u;
    // 0x452528: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x452528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x45252c: 0x3012  mflo        $a2
    ctx->pc = 0x45252cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x452530: 0xc1142b0  jal         func_450AC0
    ctx->pc = 0x452530u;
    SET_GPR_U32(ctx, 31, 0x452538u);
    ctx->pc = 0x450AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450AC0u, 0x452530u, 0x452538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452538u;
label_452538:
    // 0x452538: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x452538u;
    {
        const bool branch_taken_0x452538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452538u;
        // 0x45253c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452538) {
            ctx->pc = 0x452584u;
            goto label_452584;
        }
    }
    ctx->pc = 0x452540u;
label_452540:
    // 0x452540: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x452540u;
    {
        const bool branch_taken_0x452540 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x452544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452540u;
        // 0x452544: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452540) {
            ctx->pc = 0x452584u;
            goto label_452584;
        }
    }
    ctx->pc = 0x452548u;
    // 0x452548: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x452548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45254c: 0x0  nop
    ctx->pc = 0x45254cu;
    // NOP
label_452550:
    // 0x452550: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x452550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452554: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x452554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x452558: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x452558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45255c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x45255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452560: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x452560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x452564: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x452564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452568: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x452568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45256c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452570: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x452570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x452574: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x452574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x452578: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x452578u;
    {
        const bool branch_taken_0x452578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x45257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452578u;
        // 0x45257c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452578) {
            ctx->pc = 0x452550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452550;
        }
    }
    ctx->pc = 0x452580u;
    // 0x452580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_452584:
    // 0x452584: 0x3e00008  jr          $ra
    ctx->pc = 0x452584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452584u;
        // 0x452588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45258Cu;
    // 0x45258c: 0x0  nop
    ctx->pc = 0x45258cu;
    // NOP
    ctx->pc = 0x452590u;
}
