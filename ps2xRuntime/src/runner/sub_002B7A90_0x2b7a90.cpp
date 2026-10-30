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

// Function: sub_002B7A90
// Address: 0x2b7a90 - 0x2b7b08
void sub_002B7A90_0x2b7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7A90_0x2b7a90");
#endif

    switch (ctx->pc) {
        case 0x2b7a90u: goto label_2b7a90;
        case 0x2b7a94u: goto label_2b7a94;
        case 0x2b7a98u: goto label_2b7a98;
        case 0x2b7a9cu: goto label_2b7a9c;
        case 0x2b7aa0u: goto label_2b7aa0;
        case 0x2b7aa4u: goto label_2b7aa4;
        case 0x2b7aa8u: goto label_2b7aa8;
        case 0x2b7aacu: goto label_2b7aac;
        case 0x2b7ab0u: goto label_2b7ab0;
        case 0x2b7ab4u: goto label_2b7ab4;
        case 0x2b7ab8u: goto label_2b7ab8;
        case 0x2b7abcu: goto label_2b7abc;
        case 0x2b7ac0u: goto label_2b7ac0;
        case 0x2b7ac4u: goto label_2b7ac4;
        case 0x2b7ac8u: goto label_2b7ac8;
        case 0x2b7accu: goto label_2b7acc;
        case 0x2b7ad0u: goto label_2b7ad0;
        case 0x2b7ad4u: goto label_2b7ad4;
        case 0x2b7ad8u: goto label_2b7ad8;
        case 0x2b7adcu: goto label_2b7adc;
        case 0x2b7ae0u: goto label_2b7ae0;
        case 0x2b7ae4u: goto label_2b7ae4;
        case 0x2b7ae8u: goto label_2b7ae8;
        case 0x2b7aecu: goto label_2b7aec;
        case 0x2b7af0u: goto label_2b7af0;
        case 0x2b7af4u: goto label_2b7af4;
        case 0x2b7af8u: goto label_2b7af8;
        case 0x2b7afcu: goto label_2b7afc;
        case 0x2b7b00u: goto label_2b7b00;
        case 0x2b7b04u: goto label_2b7b04;
        default: break;
    }

    ctx->pc = 0x2b7a90u;

label_2b7a90:
    // 0x2b7a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b7a94:
    // 0x2b7a94: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2b7a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2b7a98:
    // 0x2b7a98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2b7a9c:
    // 0x2b7a9c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2b7aa0:
    // 0x2b7aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b7aa4:
    // 0x2b7aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7aa8:
    // 0x2b7aa8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2b7aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2b7aac:
    // 0x2b7aac: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2b7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2b7ab0:
    // 0x2b7ab0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2b7ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2b7ab4:
    // 0x2b7ab4: 0x2442fe50  addiu       $v0, $v0, -0x1B0
    ctx->pc = 0x2b7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966864));
label_2b7ab8:
    // 0x2b7ab8: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2b7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2b7abc:
    // 0x2b7abc: 0x8c662b04  lw          $a2, 0x2B04($v1)
    ctx->pc = 0x2b7abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_2b7ac0:
    // 0x2b7ac0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2b7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2b7ac4:
    // 0x2b7ac4: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x2b7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
label_2b7ac8:
    // 0x2b7ac8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2b7ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b7acc:
    // 0x2b7acc: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2b7accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2b7ad0:
    // 0x2b7ad0: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x2b7ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_2b7ad4:
    // 0x2b7ad4: 0xe60c0014  swc1        $f12, 0x14($s0)
    ctx->pc = 0x2b7ad4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2b7ad8:
    // 0x2b7ad8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b7ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2b7adc:
    // 0x2b7adc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b7ae0:
    // 0x2b7ae0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2b7ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2b7ae4:
    // 0x2b7ae4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2b7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2b7ae8:
    // 0x2b7ae8: 0x40f809  jalr        $v0
label_2b7aec:
    if (ctx->pc == 0x2B7AECu) {
        ctx->pc = 0x2B7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AE8u;
        // 0x2b7aec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AF0u;
        goto label_2b7af0;
    }
    ctx->pc = 0x2B7AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B7AF0u);
        ctx->pc = 0x2B7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AE8u;
        // 0x2b7aec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7AE8u, 0x2B7AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7AF0u;
label_2b7af0:
    // 0x2b7af0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2b7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2b7af4:
    // 0x2b7af4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b7af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7af8:
    // 0x2b7af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7afc:
    // 0x2b7afc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b7afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b7b00:
    // 0x2b7b00: 0x3e00008  jr          $ra
label_2b7b04:
    if (ctx->pc == 0x2B7B04u) {
        ctx->pc = 0x2B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B00u;
        // 0x2b7b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B08u;
        goto label_fallthrough_0x2b7b00;
    }
    ctx->pc = 0x2B7B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B00u;
        // 0x2b7b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b7b00:
    ctx->pc = 0x2B7B08u;
}
