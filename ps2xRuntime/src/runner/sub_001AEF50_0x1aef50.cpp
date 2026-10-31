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

// Function: sub_001AEF50
// Address: 0x1aef50 - 0x1af010
void sub_001AEF50_0x1aef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEF50_0x1aef50");
#endif

    switch (ctx->pc) {
        case 0x1aef70u: goto label_1aef70;
        case 0x1aef78u: goto label_1aef78;
        default: break;
    }

    ctx->pc = 0x1aef50u;

    // 0x1aef50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1aef54: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1aef54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aef58: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1aef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x1aef5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aef5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aef60: 0x24a50228  addiu       $a1, $a1, 0x228
    ctx->pc = 0x1aef60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
    // 0x1aef64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aef68: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1AEF68u;
    SET_GPR_U32(ctx, 31, 0x1AEF70u);
    ctx->pc = 0x1AEF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF68u;
    // 0x1aef6c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1AEF68u, 0x1AEF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF70u;
label_1aef70:
    // 0x1aef70: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x1AEF70u;
    SET_GPR_U32(ctx, 31, 0x1AEF78u);
    ctx->pc = 0x1AEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF70u;
    // 0x1aef74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1AEF70u, 0x1AEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF78u;
label_1aef78:
    // 0x1aef78: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x1aef78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1aef7c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1aef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1aef80: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1aef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1aef84: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x1aef88: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1aef88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1aef8c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1aef8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1aef90: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1aef94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aef98: 0x9064001a  lbu         $a0, 0x1A($v1)
    ctx->pc = 0x1aef98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1aef9c: 0x9062001b  lbu         $v0, 0x1B($v1)
    ctx->pc = 0x1aef9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
    // 0x1aefa0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1aefa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aefa4: 0x0  nop
    ctx->pc = 0x1aefa4u;
    // NOP
    // 0x1aefa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aefa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aefac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aefacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aefb0: 0x0  nop
    ctx->pc = 0x1aefb0u;
    // NOP
    // 0x1aefb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1aefb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aefb8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1aefb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aefbc: 0x0  nop
    ctx->pc = 0x1aefbcu;
    // NOP
    // 0x1aefc0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1AEFC0u;
    {
        const bool branch_taken_0x1aefc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFC0u;
        // 0x1aefc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefc0) {
            ctx->pc = 0x1AF004u;
            goto label_1af004;
        }
    }
    ctx->pc = 0x1AEFC8u;
    // 0x1aefc8: 0x3c014330  lui         $at, 0x4330
    ctx->pc = 0x1aefc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17200 << 16));
    // 0x1aefcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aefccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aefd0: 0x0  nop
    ctx->pc = 0x1aefd0u;
    // NOP
    // 0x1aefd4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1aefd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aefd8: 0x0  nop
    ctx->pc = 0x1aefd8u;
    // NOP
    // 0x1aefdc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AEFDCu;
    {
        const bool branch_taken_0x1aefdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aefdc) {
            ctx->pc = 0x1AF004u;
            goto label_1af004;
        }
    }
    ctx->pc = 0x1AEFE4u;
    // 0x1aefe4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1aefe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aefe8: 0x0  nop
    ctx->pc = 0x1aefe8u;
    // NOP
    // 0x1aefec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEFECu;
    {
        const bool branch_taken_0x1aefec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFECu;
        // 0x1aeff0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefec) {
            ctx->pc = 0x1AF008u;
            goto label_1af008;
        }
    }
    ctx->pc = 0x1AEFF4u;
    // 0x1aeff4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1aeff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aeff8: 0x0  nop
    ctx->pc = 0x1aeff8u;
    // NOP
    // 0x1aeffc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEFFCu;
    {
        const bool branch_taken_0x1aeffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aeffc) {
            ctx->pc = 0x1AF000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEFFCu;
            // 0x1af000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF008u;
            goto label_1af008;
        }
    }
    ctx->pc = 0x1AF004u;
label_1af004:
    // 0x1af004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af008:
    // 0x1af008: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF008u;
        // 0x1af00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF010u;
}
