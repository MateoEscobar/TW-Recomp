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

// Function: sub_001AB880
// Address: 0x1ab880 - 0x1ab8e0
void sub_001AB880_0x1ab880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB880_0x1ab880");
#endif

    switch (ctx->pc) {
        case 0x1ab880u: goto label_1ab880;
        case 0x1ab884u: goto label_1ab884;
        case 0x1ab888u: goto label_1ab888;
        case 0x1ab88cu: goto label_1ab88c;
        case 0x1ab890u: goto label_1ab890;
        case 0x1ab894u: goto label_1ab894;
        case 0x1ab898u: goto label_1ab898;
        case 0x1ab89cu: goto label_1ab89c;
        case 0x1ab8a0u: goto label_1ab8a0;
        case 0x1ab8a4u: goto label_1ab8a4;
        case 0x1ab8a8u: goto label_1ab8a8;
        case 0x1ab8acu: goto label_1ab8ac;
        case 0x1ab8b0u: goto label_1ab8b0;
        case 0x1ab8b4u: goto label_1ab8b4;
        case 0x1ab8b8u: goto label_1ab8b8;
        case 0x1ab8bcu: goto label_1ab8bc;
        case 0x1ab8c0u: goto label_1ab8c0;
        case 0x1ab8c4u: goto label_1ab8c4;
        case 0x1ab8c8u: goto label_1ab8c8;
        case 0x1ab8ccu: goto label_1ab8cc;
        case 0x1ab8d0u: goto label_1ab8d0;
        case 0x1ab8d4u: goto label_1ab8d4;
        case 0x1ab8d8u: goto label_1ab8d8;
        case 0x1ab8dcu: goto label_1ab8dc;
        default: break;
    }

    ctx->pc = 0x1ab880u;

label_1ab880:
    // 0x1ab880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab884:
    // 0x1ab884: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ab888:
    // 0x1ab888: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1ab888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ab88c:
    // 0x1ab88c: 0x0  nop
    ctx->pc = 0x1ab88cu;
    // NOP
label_1ab890:
    // 0x1ab890: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1ab894:
    if (ctx->pc == 0x1AB894u) {
        ctx->pc = 0x1AB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB890u;
        // 0x1ab894: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB898u;
        goto label_1ab898;
    }
    ctx->pc = 0x1AB890u;
    {
        const bool branch_taken_0x1ab890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB890u;
        // 0x1ab894: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab890) {
            ctx->pc = 0x1AB8A8u;
            goto label_1ab8a8;
        }
    }
    ctx->pc = 0x1AB898u;
label_1ab898:
    // 0x1ab898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ab89c:
    // 0x1ab89c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ab89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab8a0:
    // 0x1ab8a0: 0x0  nop
    ctx->pc = 0x1ab8a0u;
    // NOP
label_1ab8a4:
    // 0x1ab8a4: 0x46006029  min.s       $f0, $f12, $f0
    ctx->pc = 0x1ab8a4u;
    ctx->f[0] = std::min(ctx->f[12], ctx->f[0]);
label_1ab8a8:
    // 0x1ab8a8: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x1ab8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_1ab8ac:
    // 0x1ab8ac: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x1ab8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1ab8b0:
    // 0x1ab8b0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1ab8b4:
    if (ctx->pc == 0x1AB8B4u) {
        ctx->pc = 0x1AB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B0u;
        // 0x1ab8b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8B8u;
        goto label_1ab8b8;
    }
    ctx->pc = 0x1AB8B0u;
    {
        const bool branch_taken_0x1ab8b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B0u;
        // 0x1ab8b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8b0) {
            ctx->pc = 0x1AB8D4u;
            goto label_1ab8d4;
        }
    }
    ctx->pc = 0x1AB8B8u;
label_1ab8b8:
    // 0x1ab8b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ab8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab8bc:
    // 0x1ab8bc: 0xc48c0050  lwc1        $f12, 0x50($a0)
    ctx->pc = 0x1ab8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ab8c0:
    // 0x1ab8c0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1ab8c4:
    // 0x1ab8c4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1ab8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1ab8c8:
    // 0x1ab8c8: 0x60f809  jalr        $v1
label_1ab8cc:
    if (ctx->pc == 0x1AB8CCu) {
        ctx->pc = 0x1AB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8C8u;
        // 0x1ab8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8D0u;
        goto label_1ab8d0;
    }
    ctx->pc = 0x1AB8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB8D0u);
        ctx->pc = 0x1AB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8C8u;
        // 0x1ab8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB8C8u, 0x1AB8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB8D0u;
label_1ab8d0:
    // 0x1ab8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab8d4:
    // 0x1ab8d4: 0x3e00008  jr          $ra
label_1ab8d8:
    if (ctx->pc == 0x1AB8D8u) {
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8DCu;
        goto label_1ab8dc;
    }
    ctx->pc = 0x1AB8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB8DCu;
label_1ab8dc:
    // 0x1ab8dc: 0x0  nop
    ctx->pc = 0x1ab8dcu;
    // NOP
    ctx->pc = 0x1ab8e0u;
}
