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

// Function: sub_0023A658
// Address: 0x23a658 - 0x23a7a0
void sub_0023A658_0x23a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A658_0x23a658");
#endif

    ctx->pc = 0x23a658u;

    // 0x23a658: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a65c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A65Cu;
    {
        const bool branch_taken_0x23a65c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A65Cu;
        // 0x23a660: 0x244901e4  addiu       $t1, $v0, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a65c) {
            ctx->pc = 0x23A678u;
            goto label_23a678;
        }
    }
    ctx->pc = 0x23A664u;
    // 0x23a664: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23a664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a668: 0x0  nop
    ctx->pc = 0x23a668u;
    // NOP
    // 0x23a66c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a670: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A670u;
    {
        const bool branch_taken_0x23a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A670u;
        // 0x23a674: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a670) {
            ctx->pc = 0x23A698u;
            goto label_23a698;
        }
    }
    ctx->pc = 0x23A678u;
label_23a678:
    // 0x23a678: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x23a678u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x23a67c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x23a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23a680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23a680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23a684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a688: 0x0  nop
    ctx->pc = 0x23a688u;
    // NOP
    // 0x23a68c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a690: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x23a690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23a694: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23a698:
    // 0x23a698: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x23a698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x23a69c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A69Cu;
    {
        const bool branch_taken_0x23a69c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x23A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A69Cu;
        // 0x23a6a0: 0x244401e8  addiu       $a0, $v0, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a69c) {
            ctx->pc = 0x23A6B8u;
            goto label_23a6b8;
        }
    }
    ctx->pc = 0x23A6A4u;
    // 0x23a6a4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23a6a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a6a8: 0x0  nop
    ctx->pc = 0x23a6a8u;
    // NOP
    // 0x23a6ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a6b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A6B0u;
    {
        const bool branch_taken_0x23a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6B0u;
        // 0x23a6b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6b0) {
            ctx->pc = 0x23A6D8u;
            goto label_23a6d8;
        }
    }
    ctx->pc = 0x23A6B8u;
label_23a6b8:
    // 0x23a6b8: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x23a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x23a6bc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x23a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x23a6c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23a6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23a6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a6c8: 0x0  nop
    ctx->pc = 0x23a6c8u;
    // NOP
    // 0x23a6cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a6d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x23a6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23a6d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23a6d8:
    // 0x23a6d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x23a6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x23a6dc: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A6DCu;
    {
        const bool branch_taken_0x23a6dc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x23A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6DCu;
        // 0x23a6e0: 0x244401ec  addiu       $a0, $v0, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6dc) {
            ctx->pc = 0x23A6F8u;
            goto label_23a6f8;
        }
    }
    ctx->pc = 0x23A6E4u;
    // 0x23a6e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x23a6e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a6e8: 0x0  nop
    ctx->pc = 0x23a6e8u;
    // NOP
    // 0x23a6ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a6ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a6f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A6F0u;
    {
        const bool branch_taken_0x23a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6F0u;
        // 0x23a6f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6f0) {
            ctx->pc = 0x23A718u;
            goto label_23a718;
        }
    }
    ctx->pc = 0x23A6F8u;
label_23a6f8:
    // 0x23a6f8: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x23a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x23a6fc: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x23a6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x23a700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23a704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a708: 0x0  nop
    ctx->pc = 0x23a708u;
    // NOP
    // 0x23a70c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a710: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x23a710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23a714: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23a718:
    // 0x23a718: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x23a718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x23a71c: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A71Cu;
    {
        const bool branch_taken_0x23a71c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x23A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A71Cu;
        // 0x23a720: 0x244401f0  addiu       $a0, $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a71c) {
            ctx->pc = 0x23A738u;
            goto label_23a738;
        }
    }
    ctx->pc = 0x23A724u;
    // 0x23a724: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x23a724u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a728: 0x0  nop
    ctx->pc = 0x23a728u;
    // NOP
    // 0x23a72c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a730: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A730u;
    {
        const bool branch_taken_0x23a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A730u;
        // 0x23a734: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a730) {
            ctx->pc = 0x23A758u;
            goto label_23a758;
        }
    }
    ctx->pc = 0x23A738u;
label_23a738:
    // 0x23a738: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x23a738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x23a73c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x23a73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x23a740: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23a740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23a744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a748: 0x0  nop
    ctx->pc = 0x23a748u;
    // NOP
    // 0x23a74c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a750: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x23a750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23a754: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23a758:
    // 0x23a758: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x23a758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x23a75c: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A75Cu;
    {
        const bool branch_taken_0x23a75c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x23A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A75Cu;
        // 0x23a760: 0x244401f4  addiu       $a0, $v0, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a75c) {
            ctx->pc = 0x23A778u;
            goto label_23a778;
        }
    }
    ctx->pc = 0x23A764u;
    // 0x23a764: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x23a764u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a768: 0x0  nop
    ctx->pc = 0x23a768u;
    // NOP
    // 0x23a76c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a76cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a770: 0x3e00008  jr          $ra
    ctx->pc = 0x23A770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A770u;
        // 0x23a774: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A778u;
label_23a778:
    // 0x23a778: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x23a778u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x23a77c: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x23a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x23a780: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23a784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a788: 0x0  nop
    ctx->pc = 0x23a788u;
    // NOP
    // 0x23a78c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a790: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x23a790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23a794: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x23a794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x23a798: 0x3e00008  jr          $ra
    ctx->pc = 0x23A798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A7A0u;
}
