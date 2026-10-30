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

// Function: sub_00311AD8
// Address: 0x311ad8 - 0x311bd0
void sub_00311AD8_0x311ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311AD8_0x311ad8");
#endif

    switch (ctx->pc) {
        case 0x311b4cu: goto label_311b4c;
        default: break;
    }

    ctx->pc = 0x311ad8u;

    // 0x311ad8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x311ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x311adc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x311adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x311ae0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x311ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x311ae4: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x311ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x311ae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311aec: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x311aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311af0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x311af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x311af4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x311af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x311af8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x311af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311afc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x311afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x311b00: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x311b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b04: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x311b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x311b08: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x311b08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b0c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x311b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x311b10: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x311b10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311b18: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x311b18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b1c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x311b1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x311b20: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x311b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x311b24: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x311b24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x311b28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x311b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x311b2c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x311b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x311b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x311b34: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x311b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x311b38: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x311b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x311b3c: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x311b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x311b40: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x311b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x311b44: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x311B44u;
    SET_GPR_U32(ctx, 31, 0x311B4Cu);
    ctx->pc = 0x311B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B44u;
    // 0x311b48: 0xae0b0008  sw          $t3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x311B44u, 0x311B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B4Cu;
label_311b4c:
    // 0x311b4c: 0xa211003e  sb          $s1, 0x3E($s0)
    ctx->pc = 0x311b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 17));
    // 0x311b50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x311b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x311b54: 0xa212003f  sb          $s2, 0x3F($s0)
    ctx->pc = 0x311b54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 18));
    // 0x311b58: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x311b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x311b5c: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x311b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x311b60: 0x24423920  addiu       $v0, $v0, 0x3920
    ctx->pc = 0x311b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14624));
    // 0x311b64: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x311b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x311b68: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x311b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x311b6c: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x311b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x311b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x311b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b74: 0xae150020  sw          $s5, 0x20($s0)
    ctx->pc = 0x311b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 21));
    // 0x311b78: 0xa6140028  sh          $s4, 0x28($s0)
    ctx->pc = 0x311b78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 20));
    // 0x311b7c: 0xa613002a  sh          $s3, 0x2A($s0)
    ctx->pc = 0x311b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 19));
    // 0x311b80: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x311b80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x311b84: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x311b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x311b88: 0xa604003c  sh          $a0, 0x3C($s0)
    ctx->pc = 0x311b88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x311b8c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x311b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x311b90: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x311b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x311b94: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x311b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x311b98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x311b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311b9c: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x311b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x311ba0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x311ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311ba4: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x311ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x311ba8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311ba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311bac: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x311bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x311bb0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x311bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x311bb4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x311bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311bb8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x311bb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311bc0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x311bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x311BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BC4u;
        // 0x311bc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311BCCu;
    // 0x311bcc: 0x0  nop
    ctx->pc = 0x311bccu;
    // NOP
    ctx->pc = 0x311bd0u;
}
