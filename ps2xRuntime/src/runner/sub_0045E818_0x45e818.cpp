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

// Function: sub_0045E818
// Address: 0x45e818 - 0x45e8c8
void sub_0045E818_0x45e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E818_0x45e818");
#endif

    switch (ctx->pc) {
        case 0x45e848u: goto label_45e848;
        case 0x45e860u: goto label_45e860;
        default: break;
    }

    ctx->pc = 0x45e818u;

    // 0x45e818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45e81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45e81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45e820: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45e824: 0x8cc70048  lw          $a3, 0x48($a2)
    ctx->pc = 0x45e824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x45e828: 0x8cc80044  lw          $t0, 0x44($a2)
    ctx->pc = 0x45e828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x45e82c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45e830: 0x14e20007  bne         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x45E830u;
    {
        const bool branch_taken_0x45e830 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x45E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E830u;
        // 0x45e834: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e830) {
            ctx->pc = 0x45E850u;
            goto label_45e850;
        }
    }
    ctx->pc = 0x45E838u;
    // 0x45e838: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x45e838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x45e83c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x45e83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e840: 0xc1142b0  jal         func_450AC0
    ctx->pc = 0x45E840u;
    SET_GPR_U32(ctx, 31, 0x45E848u);
    ctx->pc = 0x45E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45E840u;
    // 0x45e844: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x450AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450AC0u, 0x45E840u, 0x45E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E848u;
label_45e848:
    // 0x45e848: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x45E848u;
    {
        const bool branch_taken_0x45e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E848u;
        // 0x45e84c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e848) {
            ctx->pc = 0x45E8C0u;
            goto label_45e8c0;
        }
    }
    ctx->pc = 0x45E850u;
label_45e850:
    // 0x45e850: 0x18a0001b  blez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x45E850u;
    {
        const bool branch_taken_0x45e850 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x45E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E850u;
        // 0x45e854: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e850) {
            ctx->pc = 0x45E8C0u;
            goto label_45e8c0;
        }
    }
    ctx->pc = 0x45E858u;
    // 0x45e858: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x45e858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e85c: 0x1072823  subu        $a1, $t0, $a3
    ctx->pc = 0x45e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_45e860:
    // 0x45e860: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x45e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x45e864: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x45e864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x45e868: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x45e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e86c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45e86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45e870: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x45e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e874: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45e874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45e878: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e87c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x45e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e880: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45e880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45e884: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e888: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45e888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45e88c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e890: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x45e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e894: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45e894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45e898: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x45e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e89c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45e89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45e8a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e8a4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x45e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e8a8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45e8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45e8ac: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x45e8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e8b0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45e8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45e8b4: 0x14c0ffea  bnez        $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x45E8B4u;
    {
        const bool branch_taken_0x45e8b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x45E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E8B4u;
        // 0x45e8b8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e8b4) {
            ctx->pc = 0x45E860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e860;
        }
    }
    ctx->pc = 0x45E8BCu;
    // 0x45e8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45e8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_45e8c0:
    // 0x45e8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x45E8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E8C0u;
        // 0x45e8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E8C8u;
}
