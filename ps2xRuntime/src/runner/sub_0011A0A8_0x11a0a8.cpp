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

// Function: sub_0011A0A8
// Address: 0x11a0a8 - 0x11a150
void sub_0011A0A8_0x11a0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A0A8_0x11a0a8");
#endif

    switch (ctx->pc) {
        case 0x11a0c4u: goto label_11a0c4;
        case 0x11a0d0u: goto label_11a0d0;
        default: break;
    }

    ctx->pc = 0x11a0a8u;

    // 0x11a0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a0ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11a0b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a0b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x11a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x11a0bc: 0xc043d2c  jal         func_10F4B0
    ctx->pc = 0x11A0BCu;
    SET_GPR_U32(ctx, 31, 0x11A0C4u);
    ctx->pc = 0x11A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0BCu;
    // 0x11a0c0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F4B0u, 0x11A0BCu, 0x11A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0C4u;
label_11a0c4:
    // 0x11a0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0c8: 0xc043d34  jal         func_10F4D0
    ctx->pc = 0x11A0C8u;
    SET_GPR_U32(ctx, 31, 0x11A0D0u);
    ctx->pc = 0x11A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0C8u;
    // 0x11a0cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F4D0u, 0x11A0C8u, 0x11A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0D0u;
label_11a0d0:
    // 0x11a0d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a0d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a0d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a0dc: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x11a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x11a0e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11a0e4: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x11a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x11a0e8: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x11a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x11a0ec: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x11a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
    // 0x11a0f0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x11a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x11a0f4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x11a0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x11a0f8: 0xa200007c  sb          $zero, 0x7C($s0)
    ctx->pc = 0x11a0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a0fc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x11a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x11a100: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x11a100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x11a104: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x11a104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x11a108: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x11a108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x11a10c: 0xa60000b0  sh          $zero, 0xB0($s0)
    ctx->pc = 0x11a10cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 176), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a110: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x11a110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x11a114: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x11a114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x11a118: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x11a118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x11a11c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x11a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x11a120: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x11a120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x11a124: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x11a124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x11a128: 0xae0400a0  sw          $a0, 0xA0($s0)
    ctx->pc = 0x11a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 4));
    // 0x11a12c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x11a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x11a130: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x11a130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x11a134: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x11a134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x11a138: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x11a138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x11a13c: 0xa20000ec  sb          $zero, 0xEC($s0)
    ctx->pc = 0x11a13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11a140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a148: 0x3e00008  jr          $ra
    ctx->pc = 0x11A148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A148u;
        // 0x11a14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A150u;
}
