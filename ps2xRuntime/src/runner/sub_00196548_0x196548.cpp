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

// Function: sub_00196548
// Address: 0x196548 - 0x1965d8
void sub_00196548_0x196548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196548_0x196548");
#endif

    ctx->pc = 0x196548u;

    // 0x196548: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x196548u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x19654c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x196550: 0x8d02ce88  lw          $v0, -0x3178($t0)
    ctx->pc = 0x196550u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CE88u));
    // 0x196554: 0x8c64ce8c  lw          $a0, -0x3174($v1)
    ctx->pc = 0x196554u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CE8Cu));
    // 0x196558: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x196558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19655c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x19655cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x196560: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x196560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x196564: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x196564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x196568: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x196568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19656c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x19656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x196570: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x196570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196574: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x196574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x196578: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x196578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19657c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x19657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x196580: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x196580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196584: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x196584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x196588: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x196588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19658c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x19658cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x196590: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x196590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196594: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x196594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x196598: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x196598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19659c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1965a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1965a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1965a4: 0x0  nop
    ctx->pc = 0x1965a4u;
    // NOP
    // 0x1965a8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1965a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1965ac: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1965ACu;
    {
        const bool branch_taken_0x1965ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965ACu;
        // 0x1965b0: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965ac) {
            ctx->pc = 0x1965C8u;
            goto label_1965c8;
        }
    }
    ctx->pc = 0x1965B4u;
    // 0x1965b4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1965b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1965b8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1965b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1965bc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1965bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1965c0: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1965c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1965c4: 0x0  nop
    ctx->pc = 0x1965c4u;
    // NOP
label_1965c8:
    // 0x1965c8: 0x8d02ce88  lw          $v0, -0x3178($t0)
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954632)));
    // 0x1965cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1965d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1965D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965D0u;
        // 0x1965d4: 0xad02ce88  sw          $v0, -0x3178($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294954632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1965D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1965D8u;
}
