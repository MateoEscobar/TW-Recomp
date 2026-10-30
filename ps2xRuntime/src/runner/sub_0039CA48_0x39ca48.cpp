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

// Function: sub_0039CA48
// Address: 0x39ca48 - 0x39caf0
void sub_0039CA48_0x39ca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CA48_0x39ca48");
#endif

    switch (ctx->pc) {
        case 0x39ca5cu: goto label_39ca5c;
        case 0x39cac4u: goto label_39cac4;
        default: break;
    }

    ctx->pc = 0x39ca48u;

    // 0x39ca48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ca48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ca4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39ca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39ca50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ca54: 0xc0e8570  jal         func_3A15C0
    ctx->pc = 0x39CA54u;
    SET_GPR_U32(ctx, 31, 0x39CA5Cu);
    ctx->pc = 0x39CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA54u;
    // 0x39ca58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15C0u, 0x39CA54u, 0x39CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CA5Cu;
label_39ca5c:
    // 0x39ca5c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x39ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x39ca60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ca64: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x39ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x39ca68: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x39ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x39ca6c: 0xa20200ef  sb          $v0, 0xEF($s0)
    ctx->pc = 0x39ca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 2));
    // 0x39ca70: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x39ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x39ca74: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x39ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x39ca78: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x39ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x39ca7c: 0xa20000e7  sb          $zero, 0xE7($s0)
    ctx->pc = 0x39ca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 231), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ca80: 0xa20000e8  sb          $zero, 0xE8($s0)
    ctx->pc = 0x39ca80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ca84: 0xa20000e9  sb          $zero, 0xE9($s0)
    ctx->pc = 0x39ca84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 233), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ca88: 0xa20000e4  sb          $zero, 0xE4($s0)
    ctx->pc = 0x39ca88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ca8c: 0xa20000e6  sb          $zero, 0xE6($s0)
    ctx->pc = 0x39ca8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ca90: 0xa20000ee  sb          $zero, 0xEE($s0)
    ctx->pc = 0x39ca90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ca94: 0xa20000f0  sb          $zero, 0xF0($s0)
    ctx->pc = 0x39ca94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ca98: 0xa20000ec  sb          $zero, 0xEC($s0)
    ctx->pc = 0x39ca98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ca9c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x39ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x39caa0: 0xa60000f2  sh          $zero, 0xF2($s0)
    ctx->pc = 0x39caa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 0));
    // 0x39caa4: 0xa60000f4  sh          $zero, 0xF4($s0)
    ctx->pc = 0x39caa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 0));
    // 0x39caa8: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x39caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x39caac: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x39caacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x39cab0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x39cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x39cab4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x39cab4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x39cab8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x39cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x39cabc: 0xc0e8568  jal         func_3A15A0
    ctx->pc = 0x39CABCu;
    SET_GPR_U32(ctx, 31, 0x39CAC4u);
    ctx->pc = 0x39CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CABCu;
    // 0x39cac0: 0x7e020080  sq          $v0, 0x80($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x39CABCu, 0x39CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CAC4u;
label_39cac4:
    // 0x39cac4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x39cac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x39cac8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x39cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x39cacc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x39caccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x39cad0: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x39cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x39cad4: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x39cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x39cad8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x39cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x39cadc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39cadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cae4: 0x3e00008  jr          $ra
    ctx->pc = 0x39CAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CAE4u;
        // 0x39cae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CAECu;
    // 0x39caec: 0x0  nop
    ctx->pc = 0x39caecu;
    // NOP
    ctx->pc = 0x39caf0u;
}
