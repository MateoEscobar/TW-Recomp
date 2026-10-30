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

// Function: sub_0019BD90
// Address: 0x19bd90 - 0x19be28
void sub_0019BD90_0x19bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BD90_0x19bd90");
#endif

    ctx->pc = 0x19bd90u;

    // 0x19bd90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19bd94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19bd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd98: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x19bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x19bd9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19bd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bda0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x19bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19bda4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x19bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x19bda8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19bdac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BDACu;
    {
        const bool branch_taken_0x19bdac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDACu;
        // 0x19bdb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdac) {
            ctx->pc = 0x19BDC8u;
            goto label_19bdc8;
        }
    }
    ctx->pc = 0x19BDB4u;
    // 0x19bdb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19bdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19bdb8: 0x0  nop
    ctx->pc = 0x19bdb8u;
    // NOP
    // 0x19bdbc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19bdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19bdc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19BDC0u;
    {
        const bool branch_taken_0x19bdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDC0u;
        // 0x19bdc4: 0x90a20010  lbu         $v0, 0x10($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdc0) {
            ctx->pc = 0x19BDE4u;
            goto label_19bde4;
        }
    }
    ctx->pc = 0x19BDC8u;
label_19bdc8:
    // 0x19bdc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19bdcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bdd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19bdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19bdd4: 0x0  nop
    ctx->pc = 0x19bdd4u;
    // NOP
    // 0x19bdd8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19bdd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19bddc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19bddcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x19bde0: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x19bde0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_19bde4:
    // 0x19bde4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x19bde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x19bde8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bdec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bdf0: 0x0  nop
    ctx->pc = 0x19bdf0u;
    // NOP
    // 0x19bdf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bdf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19bdf8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19bdf8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x19bdfc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x19bdfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19be00: 0x0  nop
    ctx->pc = 0x19be00u;
    // NOP
    // 0x19be04: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19BE04u;
    {
        const bool branch_taken_0x19be04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE04u;
        // 0x19be08: 0x8cc4b734  lw          $a0, -0x48CC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be04) {
            ctx->pc = 0x19BE14u;
            goto label_19be14;
        }
    }
    ctx->pc = 0x19BE0Cu;
    // 0x19be0c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE0Cu;
        // 0x19be10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BE14u;
label_19be14:
    // 0x19be14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19be18: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x19be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19be1c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE1Cu;
        // 0x19be20: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BE24u;
    // 0x19be24: 0x0  nop
    ctx->pc = 0x19be24u;
    // NOP
    ctx->pc = 0x19be28u;
}
