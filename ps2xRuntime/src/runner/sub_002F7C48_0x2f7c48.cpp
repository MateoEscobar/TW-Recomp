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

// Function: sub_002F7C48
// Address: 0x2f7c48 - 0x2f7d08
void sub_002F7C48_0x2f7c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7C48_0x2f7c48");
#endif

    switch (ctx->pc) {
        case 0x2f7ca0u: goto label_2f7ca0;
        case 0x2f7ca8u: goto label_2f7ca8;
        case 0x2f7cccu: goto label_2f7ccc;
        default: break;
    }

    ctx->pc = 0x2f7c48u;

    // 0x2f7c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7c4c: 0x3c0a0002  lui         $t2, 0x2
    ctx->pc = 0x2f7c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2 << 16));
    // 0x2f7c50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f7c54: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x2f7c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f7c58: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2f7c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2f7c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c64: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2f7c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f7c68: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x2f7c68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f7c6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7c70: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2f7c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f7c74: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x2f7c74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x2f7c78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7c7c: 0xdc6200e0  ld          $v0, 0xE0($v1)
    ctx->pc = 0x2f7c7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x2f7c80: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2f7c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2f7c84: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2f7c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2f7c88: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2f7c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2f7c8c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2f7c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2f7c90: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2f7c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f7c94: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f7c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f7c98: 0xc0bdf74  jal         func_2F7DD0
    ctx->pc = 0x2F7C98u;
    SET_GPR_U32(ctx, 31, 0x2F7CA0u);
    ctx->pc = 0x2F7C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C98u;
    // 0x2f7c9c: 0xfc6200e0  sd          $v0, 0xE0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7DD0u, 0x2F7C98u, 0x2F7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CA0u;
label_2f7ca0:
    // 0x2f7ca0: 0xc0bdfb8  jal         func_2F7EE0
    ctx->pc = 0x2F7CA0u;
    SET_GPR_U32(ctx, 31, 0x2F7CA8u);
    ctx->pc = 0x2F7CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CA0u;
    // 0x2f7ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7EE0u, 0x2F7CA0u, 0x2F7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CA8u;
label_2f7ca8:
    // 0x2f7ca8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7cac: 0x8045000b  lb          $a1, 0xB($v0)
    ctx->pc = 0x2f7cacu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2f7cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7cb4: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2f7cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2f7cb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f7cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f7cbc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2f7cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f7cc0: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x2f7cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7cc4: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2F7CC4u;
    SET_GPR_U32(ctx, 31, 0x2F7CCCu);
    ctx->pc = 0x2F7CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CC4u;
    // 0x2f7cc8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2F7CC4u, 0x2F7CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CCCu;
label_2f7ccc:
    // 0x2f7ccc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f7cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7cd4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f7cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2f7cd8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f7cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f7cdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7ce0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2f7ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7ce8: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f7ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2f7cec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7cf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f7cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7cf4: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2f7cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7cf8: 0xac85b1dc  sw          $a1, -0x4E24($a0)
    ctx->pc = 0x2f7cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x50B1DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1DCu, _value); } while (0);
    // 0x2f7cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CFCu;
        // 0x2f7d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7D04u;
    // 0x2f7d04: 0x0  nop
    ctx->pc = 0x2f7d04u;
    // NOP
    ctx->pc = 0x2f7d08u;
}
