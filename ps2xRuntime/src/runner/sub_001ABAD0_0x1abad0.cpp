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

// Function: sub_001ABAD0
// Address: 0x1abad0 - 0x1abb70
void sub_001ABAD0_0x1abad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABAD0_0x1abad0");
#endif

    switch (ctx->pc) {
        case 0x1abae4u: goto label_1abae4;
        default: break;
    }

    ctx->pc = 0x1abad0u;

    // 0x1abad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abad4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1abad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1abad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1abad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1abadc: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1ABADCu;
    SET_GPR_U32(ctx, 31, 0x1ABAE4u);
    ctx->pc = 0x1ABAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABADCu;
    // 0x1abae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1ABADCu, 0x1ABAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAE4u;
label_1abae4:
    // 0x1abae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abaec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1abaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abaf0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1abaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1abaf4: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x1abaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x1abaf8: 0x24639d70  addiu       $v1, $v1, -0x6290
    ctx->pc = 0x1abaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942064));
    // 0x1abafc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1abafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1abb00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1abb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1abb04: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x1abb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1abb08: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1abb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1abb0c: 0x24848510  addiu       $a0, $a0, -0x7AF0
    ctx->pc = 0x1abb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935824));
    // 0x1abb10: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1abb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1abb14: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1abb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1abb18: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1abb18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x1abb1c: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1abb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1abb20: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1abb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1abb24: 0x24a59b40  addiu       $a1, $a1, -0x64C0
    ctx->pc = 0x1abb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941504));
    // 0x1abb28: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1abb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1abb2c: 0x24c69b68  addiu       $a2, $a2, -0x6498
    ctx->pc = 0x1abb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941544));
    // 0x1abb30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1abb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1abb34: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x1abb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1abb38: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1abb38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1abb3c: 0xae05007c  sw          $a1, 0x7C($s0)
    ctx->pc = 0x1abb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 5));
    // 0x1abb40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1abb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb44: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1abb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1abb48: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1abb48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1abb4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1abb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1abb50: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1abb50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1abb54: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1abb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x1abb58: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1abb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1abb5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1abb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abb60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1abb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abb64: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB64u;
        // 0x1abb68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABB6Cu;
    // 0x1abb6c: 0x0  nop
    ctx->pc = 0x1abb6cu;
    // NOP
    ctx->pc = 0x1abb70u;
}
