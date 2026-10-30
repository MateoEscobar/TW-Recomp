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

// Function: sub_00196AC8
// Address: 0x196ac8 - 0x196b58
void sub_00196AC8_0x196ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196AC8_0x196ac8");
#endif

    switch (ctx->pc) {
        case 0x196ac8u: goto label_196ac8;
        case 0x196accu: goto label_196acc;
        case 0x196ad0u: goto label_196ad0;
        case 0x196ad4u: goto label_196ad4;
        case 0x196ad8u: goto label_196ad8;
        case 0x196adcu: goto label_196adc;
        case 0x196ae0u: goto label_196ae0;
        case 0x196ae4u: goto label_196ae4;
        case 0x196ae8u: goto label_196ae8;
        case 0x196aecu: goto label_196aec;
        case 0x196af0u: goto label_196af0;
        case 0x196af4u: goto label_196af4;
        case 0x196af8u: goto label_196af8;
        case 0x196afcu: goto label_196afc;
        case 0x196b00u: goto label_196b00;
        case 0x196b04u: goto label_196b04;
        case 0x196b08u: goto label_196b08;
        case 0x196b0cu: goto label_196b0c;
        case 0x196b10u: goto label_196b10;
        case 0x196b14u: goto label_196b14;
        case 0x196b18u: goto label_196b18;
        case 0x196b1cu: goto label_196b1c;
        case 0x196b20u: goto label_196b20;
        case 0x196b24u: goto label_196b24;
        case 0x196b28u: goto label_196b28;
        case 0x196b2cu: goto label_196b2c;
        case 0x196b30u: goto label_196b30;
        case 0x196b34u: goto label_196b34;
        case 0x196b38u: goto label_196b38;
        case 0x196b3cu: goto label_196b3c;
        case 0x196b40u: goto label_196b40;
        case 0x196b44u: goto label_196b44;
        case 0x196b48u: goto label_196b48;
        case 0x196b4cu: goto label_196b4c;
        case 0x196b50u: goto label_196b50;
        case 0x196b54u: goto label_196b54;
        default: break;
    }

    ctx->pc = 0x196ac8u;

label_196ac8:
    // 0x196ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_196acc:
    // 0x196acc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x196accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_196ad0:
    // 0x196ad0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x196ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_196ad4:
    // 0x196ad4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x196ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196ad8:
    // 0x196ad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x196ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_196adc:
    // 0x196adc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x196adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_196ae0:
    // 0x196ae0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x196ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196ae4:
    // 0x196ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196ae8:
    // 0x196ae8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x196ae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_196aec:
    // 0x196aec: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x196aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_196af0:
    // 0x196af0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x196af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_196af4:
    // 0x196af4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x196af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_196af8:
    // 0x196af8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x196af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_196afc:
    // 0x196afc: 0x40f809  jalr        $v0
label_196b00:
    if (ctx->pc == 0x196B00u) {
        ctx->pc = 0x196B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AFCu;
        // 0x196b00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B04u;
        goto label_196b04;
    }
    ctx->pc = 0x196AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196B04u);
        ctx->pc = 0x196B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AFCu;
        // 0x196b00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196AFCu, 0x196B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196B04u;
label_196b04:
    // 0x196b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196b08:
    // 0x196b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196b0c:
    // 0x196b0c: 0xc066152  jal         func_198548
label_196b10:
    if (ctx->pc == 0x196B10u) {
        ctx->pc = 0x196B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B0Cu;
        // 0x196b10: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B14u;
        goto label_196b14;
    }
    ctx->pc = 0x196B0Cu;
    SET_GPR_U32(ctx, 31, 0x196B14u);
    ctx->pc = 0x196B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B0Cu;
    // 0x196b10: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198548u, 0x196B0Cu, 0x196B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B14u;
label_196b14:
    // 0x196b14: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x196b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_196b18:
    // 0x196b18: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x196b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
label_196b1c:
    // 0x196b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x196b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_196b20:
    // 0x196b20: 0x3c013b00  lui         $at, 0x3B00
    ctx->pc = 0x196b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15104 << 16));
label_196b24:
    // 0x196b24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x196b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_196b28:
    // 0x196b28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x196b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_196b2c:
    // 0x196b2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196b30:
    // 0x196b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196b34:
    // 0x196b34: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x196b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_196b38:
    // 0x196b38: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x196b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196b3c:
    // 0x196b3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196b40:
    // 0x196b40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x196b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_196b44:
    // 0x196b44: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x196b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_196b48:
    // 0x196b48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x196b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196b4c:
    // 0x196b4c: 0x3e00008  jr          $ra
label_196b50:
    if (ctx->pc == 0x196B50u) {
        ctx->pc = 0x196B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B4Cu;
        // 0x196b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B54u;
        goto label_196b54;
    }
    ctx->pc = 0x196B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B4Cu;
        // 0x196b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196B54u;
label_196b54:
    // 0x196b54: 0x0  nop
    ctx->pc = 0x196b54u;
    // NOP
    ctx->pc = 0x196b58u;
}
