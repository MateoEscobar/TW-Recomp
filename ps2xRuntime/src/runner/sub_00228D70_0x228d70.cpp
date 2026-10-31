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

// Function: sub_00228D70
// Address: 0x228d70 - 0x228e68
void sub_00228D70_0x228d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228D70_0x228d70");
#endif

    switch (ctx->pc) {
        case 0x228dc4u: goto label_228dc4;
        case 0x228ddcu: goto label_228ddc;
        default: break;
    }

    ctx->pc = 0x228d70u;

    // 0x228d70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x228d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x228d74: 0x24020a90  addiu       $v0, $zero, 0xA90
    ctx->pc = 0x228d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2704));
    // 0x228d78: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x228d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x228d7c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x228d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x228d80: 0x828818  mult        $s1, $a0, $v0
    ctx->pc = 0x228d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x228d84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x228d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x228d88: 0x24632b70  addiu       $v1, $v1, 0x2B70
    ctx->pc = 0x228d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11120));
    // 0x228d8c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x228d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d90: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x228d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x228d94: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x228d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x228d98: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x228d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x228d9c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x228d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228da0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x228da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x228da4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x228da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x228da8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x228da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228dac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x228dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x228db0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x228db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x228db4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x228db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228dbc: 0xc08a39a  jal         func_228E68
    ctx->pc = 0x228DBCu;
    SET_GPR_U32(ctx, 31, 0x228DC4u);
    ctx->pc = 0x228DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228DBCu;
    // 0x228dc0: 0x24a5b700  addiu       $a1, $a1, -0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E68u, 0x228DBCu, 0x228DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DC4u;
label_228dc4:
    // 0x228dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228dc8: 0xae350a80  sw          $s5, 0xA80($s1)
    ctx->pc = 0x228dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2688), GPR_U32(ctx, 21));
    // 0x228dcc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x228dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228dd4: 0xc08a3b4  jal         func_228ED0
    ctx->pc = 0x228DD4u;
    SET_GPR_U32(ctx, 31, 0x228DDCu);
    ctx->pc = 0x228DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228DD4u;
    // 0x228dd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228ED0u, 0x228DD4u, 0x228DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DDCu;
label_228ddc:
    // 0x228ddc: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x228ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x228de0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x228de0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x228de4: 0xc647000c  lwc1        $f7, 0xC($s2)
    ctx->pc = 0x228de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x228de8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x228de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x228dec: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x228decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228df0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x228df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228df4: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x228df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228df8: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x228df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228dfc: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x228dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x228e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e08: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x228e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x228e0c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x228e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x228e10: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x228e10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x228e14: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x228e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x228e18: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x228e18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x228e1c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x228e1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x228e20: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x228e20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x228e24: 0xe7a7001c  swc1        $f7, 0x1C($sp)
    ctx->pc = 0x228e24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x228e28: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x228e28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228e2c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x228e2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228e30: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x228e30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x228e34: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x228e34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x228e38: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x228e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x228e3c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x228e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228e40: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x228e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228e44: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x228e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228e48: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x228e48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228e4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x228e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228e50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x228e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228e54: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x228e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x228e58: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x228e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x228e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x228E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E5Cu;
        // 0x228e60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228E64u;
    // 0x228e64: 0x0  nop
    ctx->pc = 0x228e64u;
    // NOP
    ctx->pc = 0x228e68u;
}
