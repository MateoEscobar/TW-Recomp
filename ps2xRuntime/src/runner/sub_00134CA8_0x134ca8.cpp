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

// Function: sub_00134CA8
// Address: 0x134ca8 - 0x134d28
void sub_00134CA8_0x134ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134CA8_0x134ca8");
#endif

    switch (ctx->pc) {
        case 0x134ca8u: goto label_134ca8;
        case 0x134cacu: goto label_134cac;
        case 0x134cb0u: goto label_134cb0;
        case 0x134cb4u: goto label_134cb4;
        case 0x134cb8u: goto label_134cb8;
        case 0x134cbcu: goto label_134cbc;
        case 0x134cc0u: goto label_134cc0;
        case 0x134cc4u: goto label_134cc4;
        case 0x134cc8u: goto label_134cc8;
        case 0x134cccu: goto label_134ccc;
        case 0x134cd0u: goto label_134cd0;
        case 0x134cd4u: goto label_134cd4;
        case 0x134cd8u: goto label_134cd8;
        case 0x134cdcu: goto label_134cdc;
        case 0x134ce0u: goto label_134ce0;
        case 0x134ce4u: goto label_134ce4;
        case 0x134ce8u: goto label_134ce8;
        case 0x134cecu: goto label_134cec;
        case 0x134cf0u: goto label_134cf0;
        case 0x134cf4u: goto label_134cf4;
        case 0x134cf8u: goto label_134cf8;
        case 0x134cfcu: goto label_134cfc;
        case 0x134d00u: goto label_134d00;
        case 0x134d04u: goto label_134d04;
        case 0x134d08u: goto label_134d08;
        case 0x134d0cu: goto label_134d0c;
        case 0x134d10u: goto label_134d10;
        case 0x134d14u: goto label_134d14;
        case 0x134d18u: goto label_134d18;
        case 0x134d1cu: goto label_134d1c;
        case 0x134d20u: goto label_134d20;
        case 0x134d24u: goto label_134d24;
        default: break;
    }

    ctx->pc = 0x134ca8u;

label_134ca8:
    // 0x134ca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_134cac:
    // 0x134cac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x134cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134cb0:
    // 0x134cb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x134cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_134cb4:
    // 0x134cb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_134cb8:
    // 0x134cb8: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_134cbc:
    if (ctx->pc == 0x134CBCu) {
        ctx->pc = 0x134CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CB8u;
        // 0x134cbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134CC0u;
        goto label_134cc0;
    }
    ctx->pc = 0x134CB8u;
    {
        const bool branch_taken_0x134cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x134CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CB8u;
        // 0x134cbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134cb8) {
            ctx->pc = 0x134D14u;
            goto label_134d14;
        }
    }
    ctx->pc = 0x134CC0u;
label_134cc0:
    // 0x134cc0: 0x8ca201e0  lw          $v0, 0x1E0($a1)
    ctx->pc = 0x134cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 480)));
label_134cc4:
    // 0x134cc4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x134cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_134cc8:
    // 0x134cc8: 0xacc201e0  sw          $v0, 0x1E0($a2)
    ctx->pc = 0x134cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 480), GPR_U32(ctx, 2));
label_134ccc:
    // 0x134ccc: 0x24910190  addiu       $s1, $a0, 0x190
    ctx->pc = 0x134cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
label_134cd0:
    // 0x134cd0: 0x78a201f0  lq          $v0, 0x1F0($a1)
    ctx->pc = 0x134cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 496)));
label_134cd4:
    // 0x134cd4: 0x7cc201f0  sq          $v0, 0x1F0($a2)
    ctx->pc = 0x134cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 496), GPR_VEC(ctx, 2));
label_134cd8:
    // 0x134cd8: 0x78a30200  lq          $v1, 0x200($a1)
    ctx->pc = 0x134cd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 512)));
label_134cdc:
    // 0x134cdc: 0x7cc30200  sq          $v1, 0x200($a2)
    ctx->pc = 0x134cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 512), GPR_VEC(ctx, 3));
label_134ce0:
    // 0x134ce0: 0xc4a00214  lwc1        $f0, 0x214($a1)
    ctx->pc = 0x134ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134ce4:
    // 0x134ce4: 0xe4c00214  swc1        $f0, 0x214($a2)
    ctx->pc = 0x134ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 532), bits); }
label_134ce8:
    // 0x134ce8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_134cec:
    // 0x134cec: 0x84900190  lh          $s0, 0x190($a0)
    ctx->pc = 0x134cecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 400)));
label_134cf0:
    // 0x134cf0: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x134cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_134cf4:
    // 0x134cf4: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x134cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_134cf8:
    // 0x134cf8: 0xd08021  addu        $s0, $a2, $s0
    ctx->pc = 0x134cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_134cfc:
    // 0x134cfc: 0x60f809  jalr        $v1
label_134d00:
    if (ctx->pc == 0x134D00u) {
        ctx->pc = 0x134D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CFCu;
        // 0x134d00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134D04u;
        goto label_134d04;
    }
    ctx->pc = 0x134CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x134D04u);
        ctx->pc = 0x134D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CFCu;
        // 0x134d00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134CFCu, 0x134D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134D04u;
label_134d04:
    // 0x134d04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x134d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_134d08:
    // 0x134d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134d0c:
    // 0x134d0c: 0x40f809  jalr        $v0
label_134d10:
    if (ctx->pc == 0x134D10u) {
        ctx->pc = 0x134D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D0Cu;
        // 0x134d10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x134D14u;
        goto label_134d14;
    }
    ctx->pc = 0x134D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x134D14u);
        ctx->pc = 0x134D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D0Cu;
        // 0x134d10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134D0Cu, 0x134D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134D14u;
label_134d14:
    // 0x134d14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x134d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_134d18:
    // 0x134d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_134d1c:
    // 0x134d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134d20:
    // 0x134d20: 0x3e00008  jr          $ra
label_134d24:
    if (ctx->pc == 0x134D24u) {
        ctx->pc = 0x134D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D20u;
        // 0x134d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134D28u;
        goto label_fallthrough_0x134d20;
    }
    ctx->pc = 0x134D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D20u;
        // 0x134d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x134d20:
    ctx->pc = 0x134D28u;
}
