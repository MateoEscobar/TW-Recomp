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

// Function: sub_00353C68
// Address: 0x353c68 - 0x353d60
void sub_00353C68_0x353c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353C68_0x353c68");
#endif

    switch (ctx->pc) {
        case 0x353cd0u: goto label_353cd0;
        case 0x353ce4u: goto label_353ce4;
        case 0x353d28u: goto label_353d28;
        default: break;
    }

    ctx->pc = 0x353c68u;

    // 0x353c68: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x353c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x353c6c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x353c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x353c70: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x353c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x353c74: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x353c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353c78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x353c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x353c7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x353c7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c80: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x353c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x353c84: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x353c84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c88: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x353c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x353c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c90: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x353c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x353c94: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x353c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c98: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x353c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x353c9c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x353c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ca0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x353ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x353ca4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x353ca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ca8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x353ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x353cac: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x353cacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cb0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x353cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x353cb4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x353cb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cb8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x353cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x353cbc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x353cbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x353cc0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x353cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x353cc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cc8: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x353CC8u;
    SET_GPR_U32(ctx, 31, 0x353CD0u);
    ctx->pc = 0x353CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CC8u;
    // 0x353ccc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x353CC8u, 0x353CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CD0u;
label_353cd0:
    // 0x353cd0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x353cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cdc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x353CDCu;
    SET_GPR_U32(ctx, 31, 0x353CE4u);
    ctx->pc = 0x353CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CDCu;
    // 0x353ce0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x353CDCu, 0x353CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CE4u;
label_353ce4:
    // 0x353ce4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353cec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x353cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cf0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x353cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x353cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x353cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cf8: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x353cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353cfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x353cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d00: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x353d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x353d04: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x353d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d08: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x353d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x353d0c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x353d0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d10: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x353d10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d14: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x353d14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x353d18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x353d1c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x353d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x353d20: 0xc0d4e06  jal         func_353818
    ctx->pc = 0x353D20u;
    SET_GPR_U32(ctx, 31, 0x353D28u);
    ctx->pc = 0x353D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D20u;
    // 0x353d24: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353818u, 0x353D20u, 0x353D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D28u;
label_353d28:
    // 0x353d28: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x353d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x353d2c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x353d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x353d30: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x353d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x353d34: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x353d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x353d38: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x353d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x353d3c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x353d3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x353d40: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x353d40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x353d44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x353d44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x353d48: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x353d48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x353d4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x353d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353d50: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x353d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x353d54: 0x3e00008  jr          $ra
    ctx->pc = 0x353D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D54u;
        // 0x353d58: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353D5Cu;
    // 0x353d5c: 0x0  nop
    ctx->pc = 0x353d5cu;
    // NOP
    ctx->pc = 0x353d60u;
}
